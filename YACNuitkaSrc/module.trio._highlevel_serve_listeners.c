/* Generated code for Python module 'trio$_highlevel_serve_listeners'
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



/* The "module_trio$_highlevel_serve_listeners" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_trio$_highlevel_serve_listeners;
PyDictObject *moduledict_trio$_highlevel_serve_listeners;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_handler;
PyObject *const_str_plain_stream;
PyObject *const_str_plain_trio;
PyObject *const_str_plain_aclose_forcefully;
PyObject *const_str_plain__run_handler;
PyObject *const_str_plain_listener;
PyObject *const_str_plain_accept;
PyObject *const_str_plain_errno;
PyObject *const_str_plain_ACCEPT_CAPACITY_ERRNOS;
PyObject *const_str_plain_LOGGER;
PyObject *const_str_plain_error;
PyObject *const_str_digest_c45e6cabece414aee652c20c8d5b4905;
PyObject *const_str_plain_errorcode;
PyObject *const_str_plain_strerror;
PyObject *const_str_plain_SLEEP_TIME;
PyObject *const_dict_179288bcb12bd7be5a04d2f1b72dc461;
PyObject *const_str_plain_sleep;
PyObject *const_str_plain_handler_nursery;
PyObject *const_str_plain_start_soon;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain__serve_one_listener;
PyObject *const_str_digest_7e08ec7514335c2cfceae6bf1d8aea21;
PyObject *const_str_plain_open_nursery;
PyObject *const_str_plain_listeners;
PyObject *const_str_plain_nursery;
PyObject *const_str_plain_task_status;
PyObject *const_str_plain_started;
PyObject *const_str_digest_70c5a5ed5fd2c4e9c844b82e297f02c8;
PyObject *const_str_plain_serve_listeners;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_os;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Awaitable_str_plain_Callable_tuple;
PyObject *const_str_plain_Awaitable;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_NoReturn;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain_EMFILE;
PyObject *const_str_plain_ENFILE;
PyObject *const_str_plain_ENOMEM;
PyObject *const_str_plain_ENOBUFS;
PyObject *const_float_0_1;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_d0810bc72e96ba2f63a74ad15b435e2b_tuple;
PyObject *const_str_plain_abc;
PyObject *const_str_plain_AsyncResource;
PyObject *const_tuple_str_plain_StreamT_tuple;
PyObject *const_tuple_str_plain_bound_tuple;
PyObject *const_str_plain_StreamT;
PyObject *const_str_plain_Listener;
PyObject *const_tuple_str_plain_ListenerT_tuple;
PyObject *const_str_plain_ListenerT;
PyObject *const_str_plain_Handler;
PyObject *const_dict_9b603474456f356a7aff634e137bef45;
PyObject *const_dict_7605b6c974567bc4ea23778838767178;
PyObject *const_str_plain_TASK_STATUS_IGNORED;
PyObject *const_dict_6379004ee10d54ff362edf30697d8372;
PyObject *const_str_digest_00c26b1ae1612c65fca529b0a5aec904;
PyObject *const_str_digest_0f9f6157ff4370e6b30b0dd774aee069;
PyObject *const_tuple_str_plain_stream_str_plain_handler_tuple;
PyObject *const_tuple_9336694f6b79a0bdfc2275618dd694af_tuple;
PyObject *const_tuple_5295b42526561297d583776a3e4d5fdd_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[66];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("trio._highlevel_serve_listeners"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_handler);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_trio);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_aclose_forcefully);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__run_handler);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_listener);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_accept);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_errno);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_ACCEPT_CAPACITY_ERRNOS);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_LOGGER);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_c45e6cabece414aee652c20c8d5b4905);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_errorcode);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_strerror);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_SLEEP_TIME);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_dict_179288bcb12bd7be5a04d2f1b72dc461);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_sleep);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_handler_nursery);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_start_soon);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__serve_one_listener);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_7e08ec7514335c2cfceae6bf1d8aea21);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_nursery);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_listeners);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_nursery);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_task_status);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_started);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_70c5a5ed5fd2c4e9c844b82e297f02c8);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_serve_listeners);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Awaitable_str_plain_Callable_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_Awaitable);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoReturn);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_EMFILE);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENFILE);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENOMEM);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENOBUFS);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_float_0_1);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d0810bc72e96ba2f63a74ad15b435e2b_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncResource);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StreamT_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bound_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_StreamT);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_Listener);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ListenerT_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_ListenerT);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_Handler);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_dict_9b603474456f356a7aff634e137bef45);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_dict_7605b6c974567bc4ea23778838767178);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_TASK_STATUS_IGNORED);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_dict_6379004ee10d54ff362edf30697d8372);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_00c26b1ae1612c65fca529b0a5aec904);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_0f9f6157ff4370e6b30b0dd774aee069);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stream_str_plain_handler_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_9336694f6b79a0bdfc2275618dd694af_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_5295b42526561297d583776a3e4d5fdd_tuple);
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
void checkModuleConstants_trio$_highlevel_serve_listeners(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_handler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handler);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_trio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trio);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_aclose_forcefully));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aclose_forcefully);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__run_handler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__run_handler);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_listener));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_listener);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_accept));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_accept);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_errno));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_errno);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_ACCEPT_CAPACITY_ERRNOS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ACCEPT_CAPACITY_ERRNOS);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_LOGGER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LOGGER);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_c45e6cabece414aee652c20c8d5b4905));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c45e6cabece414aee652c20c8d5b4905);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_errorcode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_errorcode);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_strerror));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strerror);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_SLEEP_TIME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SLEEP_TIME);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_dict_179288bcb12bd7be5a04d2f1b72dc461));
CHECK_OBJECT_DEEP(mod_consts.const_dict_179288bcb12bd7be5a04d2f1b72dc461);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_sleep));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sleep);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_handler_nursery));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handler_nursery);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_start_soon));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start_soon);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__serve_one_listener));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__serve_one_listener);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_7e08ec7514335c2cfceae6bf1d8aea21));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7e08ec7514335c2cfceae6bf1d8aea21);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_nursery));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_nursery);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_listeners));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_listeners);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_nursery));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nursery);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_task_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_task_status);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_started));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_started);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_70c5a5ed5fd2c4e9c844b82e297f02c8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_70c5a5ed5fd2c4e9c844b82e297f02c8);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_serve_listeners));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_serve_listeners);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Awaitable_str_plain_Callable_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Awaitable_str_plain_Callable_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_Awaitable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Awaitable);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoReturn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoReturn);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_EMFILE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EMFILE);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENFILE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENFILE);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENOMEM));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENOMEM);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENOBUFS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENOBUFS);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_float_0_1));
CHECK_OBJECT_DEEP(mod_consts.const_float_0_1);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d0810bc72e96ba2f63a74ad15b435e2b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_d0810bc72e96ba2f63a74ad15b435e2b_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncResource);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StreamT_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_StreamT_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bound_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_bound_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_StreamT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StreamT);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_Listener));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Listener);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ListenerT_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ListenerT_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_ListenerT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ListenerT);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_Handler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Handler);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_dict_9b603474456f356a7aff634e137bef45));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9b603474456f356a7aff634e137bef45);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_dict_7605b6c974567bc4ea23778838767178));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7605b6c974567bc4ea23778838767178);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_TASK_STATUS_IGNORED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TASK_STATUS_IGNORED);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_dict_6379004ee10d54ff362edf30697d8372));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6379004ee10d54ff362edf30697d8372);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_00c26b1ae1612c65fca529b0a5aec904));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_00c26b1ae1612c65fca529b0a5aec904);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_0f9f6157ff4370e6b30b0dd774aee069));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0f9f6157ff4370e6b30b0dd774aee069);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stream_str_plain_handler_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_stream_str_plain_handler_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_9336694f6b79a0bdfc2275618dd694af_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9336694f6b79a0bdfc2275618dd694af_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_5295b42526561297d583776a3e4d5fdd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5295b42526561297d583776a3e4d5fdd_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 14
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
static PyObject *module_var_accessor_trio$_highlevel_serve_listeners$ACCEPT_CAPACITY_ERRNOS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_serve_listeners->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_serve_listeners->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_ACCEPT_CAPACITY_ERRNOS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_serve_listeners->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ACCEPT_CAPACITY_ERRNOS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ACCEPT_CAPACITY_ERRNOS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ACCEPT_CAPACITY_ERRNOS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ACCEPT_CAPACITY_ERRNOS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_ACCEPT_CAPACITY_ERRNOS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_ACCEPT_CAPACITY_ERRNOS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ACCEPT_CAPACITY_ERRNOS);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_serve_listeners$Any(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_serve_listeners->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_serve_listeners->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_serve_listeners->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_serve_listeners$Awaitable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_serve_listeners->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_serve_listeners->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_Awaitable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_serve_listeners->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Awaitable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Awaitable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Awaitable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Awaitable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_Awaitable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_Awaitable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Awaitable);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_serve_listeners$Callable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_serve_listeners->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_serve_listeners->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_serve_listeners->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_serve_listeners$LOGGER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_serve_listeners->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_serve_listeners->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_serve_listeners->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LOGGER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LOGGER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LOGGER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LOGGER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_serve_listeners$SLEEP_TIME(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_serve_listeners->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_serve_listeners->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_SLEEP_TIME);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_serve_listeners->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SLEEP_TIME);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SLEEP_TIME, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SLEEP_TIME);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SLEEP_TIME, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_SLEEP_TIME);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_SLEEP_TIME);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SLEEP_TIME);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_serve_listeners$StreamT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_serve_listeners->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_serve_listeners->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_serve_listeners->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StreamT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StreamT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StreamT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StreamT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamT);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_serve_listeners$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_serve_listeners->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_serve_listeners->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_serve_listeners->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_serve_listeners$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_serve_listeners->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_serve_listeners->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_serve_listeners->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_serve_listeners$_run_handler(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_serve_listeners->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_serve_listeners->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain__run_handler);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_serve_listeners->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__run_handler);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__run_handler, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__run_handler);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__run_handler, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain__run_handler);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain__run_handler);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__run_handler);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_serve_listeners$_serve_one_listener(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_serve_listeners->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_serve_listeners->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain__serve_one_listener);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_serve_listeners->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__serve_one_listener);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__serve_one_listener, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__serve_one_listener);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__serve_one_listener, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain__serve_one_listener);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain__serve_one_listener);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__serve_one_listener);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_serve_listeners$errno(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_serve_listeners->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_serve_listeners->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_serve_listeners->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_errno);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_errno, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_errno);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_errno, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_serve_listeners$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_serve_listeners->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_serve_listeners->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_serve_listeners->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_serve_listeners$trio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_serve_listeners->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_serve_listeners->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_serve_listeners->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_7bf096c8a11a0713942fc5ed2a29d459;
static PyCodeObject *code_objects_736ee41c9c28c8c7d5fb1667626c27e8;
static PyCodeObject *code_objects_2a7786e34f337f28c0890dc3c99f74df;
static PyCodeObject *code_objects_7e4d8b6c68f55fa95fc472acb4a5da3e;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_00c26b1ae1612c65fca529b0a5aec904); CHECK_OBJECT(module_filename_obj);
code_objects_7bf096c8a11a0713942fc5ed2a29d459 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_0f9f6157ff4370e6b30b0dd774aee069, mod_consts.const_str_digest_0f9f6157ff4370e6b30b0dd774aee069, NULL, NULL, 0, 0, 0);
code_objects_736ee41c9c28c8c7d5fb1667626c27e8 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__run_handler, mod_consts.const_str_plain__run_handler, mod_consts.const_tuple_str_plain_stream_str_plain_handler_tuple, NULL, 2, 0, 0);
code_objects_2a7786e34f337f28c0890dc3c99f74df = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__serve_one_listener, mod_consts.const_str_plain__serve_one_listener, mod_consts.const_tuple_9336694f6b79a0bdfc2275618dd694af_tuple, NULL, 3, 0, 0);
code_objects_7e4d8b6c68f55fa95fc472acb4a5da3e = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_serve_listeners, mod_consts.const_str_plain_serve_listeners, mod_consts.const_tuple_5295b42526561297d583776a3e4d5fdd_tuple, NULL, 2, 2, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_trio$_highlevel_serve_listeners$$$function__1__run_handler$$$coroutine__1__run_handler(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_trio$_highlevel_serve_listeners$$$function__2__serve_one_listener$$$coroutine__1__serve_one_listener(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_trio$_highlevel_serve_listeners$$$function__3_serve_listeners$$$coroutine__1_serve_listeners(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_trio$_highlevel_serve_listeners$$$function__1__run_handler(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_serve_listeners$$$function__2__serve_one_listener(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_serve_listeners$$$function__3_serve_listeners(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_trio$_highlevel_serve_listeners$$$function__1__run_handler(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_stream = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_handler = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_handler;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_stream;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_trio$_highlevel_serve_listeners$$$function__1__run_handler$$$coroutine__1__run_handler(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_stream);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
par_stream = NULL;
CHECK_OBJECT(par_handler);
CHECK_OBJECT(par_handler);
Py_DECREF(par_handler);
par_handler = NULL;
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
struct trio$_highlevel_serve_listeners$$$function__1__run_handler$$$coroutine__1__run_handler_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_highlevel_serve_listeners$$$function__1__run_handler$$$coroutine__1__run_handler_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_highlevel_serve_listeners$$$function__1__run_handler$$$coroutine__1__run_handler_locals *coroutine_heap = (struct trio$_highlevel_serve_listeners$$$function__1__run_handler$$$coroutine__1__run_handler_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 3: goto yield_return_3;
case 2: goto yield_return_2;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_736ee41c9c28c8c7d5fb1667626c27e8, module_trio$_highlevel_serve_listeners, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 34;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_handler);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 34;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 34;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 34;
tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 34;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 34;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 34;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
goto try_end_1;
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
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_await_result_2;
coroutine->m_frame->m_frame.f_lineno = 36;
tmp_expression_value_5 = module_var_accessor_trio$_highlevel_serve_listeners$trio(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 36;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_aclose_forcefully);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 36;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 36;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 36;
tmp_expression_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 36;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_2;
}
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 36;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_3;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 36;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_2;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 33;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cc";
goto try_except_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
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
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_3;
PyObject *tmp_await_result_3;
coroutine->m_frame->m_frame.f_lineno = 36;
tmp_expression_value_8 = module_var_accessor_trio$_highlevel_serve_listeners$trio(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 36;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_aclose_forcefully);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 36;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 36;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 36;
tmp_expression_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 36;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = ASYNC_AWAIT(tstate, tmp_expression_value_7, await_normal);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 36;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 3;
coroutine->m_yield_from = tmp_expression_value_6;
coroutine->m_awaiting = true;
return NULL;

yield_return_3:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 36;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_await_result_3 = yield_return_value;
CHECK_OBJECT(tmp_await_result_3);
Py_DECREF(tmp_await_result_3);
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

static PyObject *MAKE_COROUTINE_trio$_highlevel_serve_listeners$$$function__1__run_handler$$$coroutine__1__run_handler(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_highlevel_serve_listeners$$$function__1__run_handler$$$coroutine__1__run_handler_context,
        module_trio$_highlevel_serve_listeners,
        mod_consts.const_str_plain__run_handler,
        NULL,
        code_objects_736ee41c9c28c8c7d5fb1667626c27e8,
        closure,
        2,
#if 1
        sizeof(struct trio$_highlevel_serve_listeners$$$function__1__run_handler$$$coroutine__1__run_handler_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_highlevel_serve_listeners$$$function__2__serve_one_listener(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_listener = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_handler_nursery = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_handler = Nuitka_Cell_New1(python_pars[2]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_handler;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_handler_nursery;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_listener;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_trio$_highlevel_serve_listeners$$$function__2__serve_one_listener$$$coroutine__1__serve_one_listener(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_listener);
CHECK_OBJECT(par_listener);
Py_DECREF(par_listener);
par_listener = NULL;
CHECK_OBJECT(par_handler_nursery);
CHECK_OBJECT(par_handler_nursery);
Py_DECREF(par_handler_nursery);
par_handler_nursery = NULL;
CHECK_OBJECT(par_handler);
CHECK_OBJECT(par_handler);
Py_DECREF(par_handler);
par_handler = NULL;
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
struct trio$_highlevel_serve_listeners$$$function__2__serve_one_listener$$$coroutine__1__serve_one_listener_locals {
PyObject *var_stream;
PyObject *var_exc;
nuitka_bool tmp_try_except_1__unhandled_indicator;
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
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
};
#endif

static PyObject *trio$_highlevel_serve_listeners$$$function__2__serve_one_listener$$$coroutine__1__serve_one_listener_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_highlevel_serve_listeners$$$function__2__serve_one_listener$$$coroutine__1__serve_one_listener_locals *coroutine_heap = (struct trio$_highlevel_serve_listeners$$$function__2__serve_one_listener$$$coroutine__1__serve_one_listener_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 5: goto yield_return_5;
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_stream = NULL;
coroutine_heap->var_exc = NULL;
coroutine_heap->tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_2a7786e34f337f28c0890dc3c99f74df, module_trio$_highlevel_serve_listeners, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_listener);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 44;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_2;
}

tmp_assign_source_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
assert(coroutine_heap->tmp_with_1__source == NULL);
Py_INCREF(tmp_assign_source_1);
coroutine_heap->tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_1 = coroutine_heap->tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___aenter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 44;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 44;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 44;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_2 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___aexit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 44;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__exit == NULL);
coroutine_heap->tmp_with_1__exit = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
coroutine->m_frame->m_frame.f_lineno = 44;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
tmp_expression_value_4 = coroutine_heap->tmp_with_1__enter;
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_enter);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 44;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_3;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 44;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_2;
}
tmp_assign_source_4 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_with_1__enter;
    assert(old != NULL);
    coroutine_heap->tmp_with_1__enter = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_5;
}
// Tried code:
// Tried code:
loop_start_1:;
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_instance_1;
coroutine->m_frame->m_frame.f_lineno = 47;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_listener);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 47;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_5;
}

tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 47;
tmp_expression_value_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_accept);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 47;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_5;
}
tmp_expression_value_5 = ASYNC_AWAIT(tstate, tmp_expression_value_6, await_normal);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 47;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_5;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 47;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_5;
}
tmp_assign_source_7 = yield_return_value;
{
    PyObject *old = coroutine_heap->var_stream;
    coroutine_heap->var_stream = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_8;
}
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
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_OSError;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_1 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_9); 
{
    PyObject *old = coroutine_heap->var_exc;
    coroutine_heap->var_exc = tmp_assign_source_9;
    Py_INCREF(coroutine_heap->var_exc);
    Py_XDECREF(old);
}

}
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(coroutine_heap->var_exc);
tmp_expression_value_7 = coroutine_heap->var_exc;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_errno);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 49;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_7;
}
tmp_cmp_expr_right_2 = module_var_accessor_trio$_highlevel_serve_listeners$ACCEPT_CAPACITY_ERRNOS(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ACCEPT_CAPACITY_ERRNOS);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

coroutine_heap->exception_lineno = 49;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_7;
}
coroutine_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 49;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_7;
}
tmp_condition_result_2 = (coroutine_heap->tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_8 = module_var_accessor_trio$_highlevel_serve_listeners$LOGGER(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_LOGGER);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 50;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_7;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_error);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 50;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_7;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_c45e6cabece414aee652c20c8d5b4905;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_13;
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_expression_value_10 = module_var_accessor_trio$_highlevel_serve_listeners$errno(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_errno);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 52;
coroutine_heap->type_description_1 = "cccoo";
    goto tuple_build_exception_1;
}
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_errorcode);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 52;
coroutine_heap->type_description_1 = "cccoo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(coroutine_heap->var_exc);
tmp_expression_value_11 = coroutine_heap->var_exc;
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_errno);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_expression_value_9);

coroutine_heap->exception_lineno = 52;
coroutine_heap->type_description_1 = "cccoo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 52;
coroutine_heap->type_description_1 = "cccoo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_expression_value_12 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_12 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_strerror);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 53;
coroutine_heap->type_description_1 = "cccoo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(coroutine_heap->var_exc);
tmp_expression_value_13 = coroutine_heap->var_exc;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_errno);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_3);

coroutine_heap->exception_lineno = 53;
coroutine_heap->type_description_1 = "cccoo";
    goto tuple_build_exception_1;
}
coroutine->m_frame->m_frame.f_lineno = 53;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 53;
coroutine_heap->type_description_1 = "cccoo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_value_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_trio$_highlevel_serve_listeners$SLEEP_TIME(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_SLEEP_TIME);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 54;
coroutine_heap->type_description_1 = "cccoo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 3, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_value_1);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_179288bcb12bd7be5a04d2f1b72dc461);
coroutine->m_frame->m_frame.f_lineno = 50;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 50;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_2;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 57;
tmp_expression_value_16 = module_var_accessor_trio$_highlevel_serve_listeners$trio(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 57;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_7;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_sleep);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 57;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_7;
}
tmp_args_element_value_2 = module_var_accessor_trio$_highlevel_serve_listeners$SLEEP_TIME(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_SLEEP_TIME);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_4);

coroutine_heap->exception_lineno = 57;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_7;
}
coroutine->m_frame->m_frame.f_lineno = 57;
tmp_expression_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 57;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_7;
}
tmp_expression_value_14 = ASYNC_AWAIT(tstate, tmp_expression_value_15, await_normal);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 57;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_7;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_15, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_16, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 3;
coroutine->m_yield_from = tmp_expression_value_14;
coroutine->m_awaiting = true;
return NULL;

yield_return_3:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_15, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_16, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 57;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_7;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
goto branch_end_2;
branch_no_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 59;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoo";
goto try_except_handler_7;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_7:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_exc);
coroutine_heap->var_exc = NULL;

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_6;
// End of try:
try_end_2:;
Py_XDECREF(coroutine_heap->var_exc);
coroutine_heap->var_exc = NULL;

goto branch_end_1;
branch_no_1:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 46;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoo";
goto try_except_handler_6;
branch_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(coroutine_heap->tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = coroutine_heap->tmp_try_except_1__unhandled_indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_handler_nursery);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 61;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_4;
}

tmp_expression_value_17 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_start_soon);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 61;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_4;
}
tmp_args_element_value_3 = module_var_accessor_trio$_highlevel_serve_listeners$_run_handler(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__run_handler);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_5);

coroutine_heap->exception_lineno = 61;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_4;
}
if (coroutine_heap->var_stream == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 61;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_4;
}

tmp_args_element_value_4 = coroutine_heap->var_stream;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_handler);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 61;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_4;
}

tmp_args_element_value_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 61;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 61;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 45;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_4;
}
goto loop_start_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 2.
coroutine_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_4, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_4);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_4 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_10;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
coroutine->m_frame->m_frame.f_lineno = 44;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_6 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_6 = EXC_TYPE(tstate);
tmp_args_element_value_7 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_7); 
tmp_args_element_value_8 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_8 == NULL) {
    tmp_args_element_value_8 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 44;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_expression_value_19 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 44;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_8;
}
tmp_expression_value_18 = ASYNC_AWAIT(tstate, tmp_expression_value_19, await_exit);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 44;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_8;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_5, sizeof(bool), &tmp_expression_value_19, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 4;
coroutine->m_yield_from = tmp_expression_value_18;
coroutine->m_awaiting = true;
return NULL;

yield_return_4:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_5, sizeof(bool), &tmp_expression_value_19, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 44;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_8;
}
tmp_operand_value_1 = yield_return_value;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 44;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_8;
}
tmp_condition_result_5 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 44;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoo";
goto try_except_handler_8;
branch_no_5:;
goto branch_end_4;
branch_no_4:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 44;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoo";
goto try_except_handler_8;
branch_end_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_5;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

goto try_except_handler_3;
// End of try:
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = coroutine_heap->tmp_with_1__indicator;
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
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_called_value_7;
PyObject *tmp_await_result_2;
coroutine->m_frame->m_frame.f_lineno = 44;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_7 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 44;
tmp_expression_value_21 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_6);

coroutine_heap->exception_lineno = 44;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_2;
}
tmp_expression_value_20 = ASYNC_AWAIT(tstate, tmp_expression_value_21, await_exit);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_6);

coroutine_heap->exception_lineno = 44;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_21, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 5;
coroutine->m_yield_from = tmp_expression_value_20;
coroutine->m_awaiting = true;
return NULL;

yield_return_5:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_21, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_6);

coroutine_heap->exception_lineno = 44;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_2;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
branch_no_6:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

goto try_except_handler_2;
// End of try:
try_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_7 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_7;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_7:;

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
    coroutine->m_closure[2],
    coroutine->m_closure[1],
    coroutine->m_closure[0],
    coroutine_heap->var_stream,
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
goto try_except_handler_1;
frame_no_exception_1:;
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
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(coroutine_heap->var_stream);
coroutine_heap->var_stream = NULL;
Py_XDECREF(coroutine_heap->var_exc);
coroutine_heap->var_exc = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_8 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_8 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_stream);
coroutine_heap->var_stream = NULL;
Py_XDECREF(coroutine_heap->var_exc);
coroutine_heap->var_exc = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_8;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_8;

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

static PyObject *MAKE_COROUTINE_trio$_highlevel_serve_listeners$$$function__2__serve_one_listener$$$coroutine__1__serve_one_listener(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_highlevel_serve_listeners$$$function__2__serve_one_listener$$$coroutine__1__serve_one_listener_context,
        module_trio$_highlevel_serve_listeners,
        mod_consts.const_str_plain__serve_one_listener,
        NULL,
        code_objects_2a7786e34f337f28c0890dc3c99f74df,
        closure,
        3,
#if 1
        sizeof(struct trio$_highlevel_serve_listeners$$$function__2__serve_one_listener$$$coroutine__1__serve_one_listener_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_highlevel_serve_listeners$$$function__3_serve_listeners(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_handler = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_listeners = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_handler_nursery = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_task_status = Nuitka_Cell_New1(python_pars[3]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_closure_1[0] = par_handler;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_handler_nursery;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_listeners;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_task_status;
Py_INCREF(tmp_closure_1[3]);
tmp_return_value = MAKE_COROUTINE_trio$_highlevel_serve_listeners$$$function__3_serve_listeners$$$coroutine__1_serve_listeners(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_listeners);
CHECK_OBJECT(par_listeners);
Py_DECREF(par_listeners);
par_listeners = NULL;
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
struct trio$_highlevel_serve_listeners$$$function__3_serve_listeners$$$coroutine__1_serve_listeners_locals {
PyObject *var_nursery;
PyObject *var_listener;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
};
#endif

static PyObject *trio$_highlevel_serve_listeners$$$function__3_serve_listeners$$$coroutine__1_serve_listeners_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_highlevel_serve_listeners$$$function__3_serve_listeners$$$coroutine__1_serve_listeners_locals *coroutine_heap = (struct trio$_highlevel_serve_listeners$$$function__3_serve_listeners$$$coroutine__1_serve_listeners_locals *)coroutine->m_heap_storage;
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
coroutine_heap->var_nursery = NULL;
coroutine_heap->var_listener = NULL;
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
coroutine_heap->tmp_with_1__enter = NULL;
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_1__source = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_7e4d8b6c68f55fa95fc472acb4a5da3e, module_trio$_highlevel_serve_listeners, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_trio$_highlevel_serve_listeners$trio(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 136;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_open_nursery);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__source == NULL);
coroutine_heap->tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_1 = coroutine_heap->tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___aenter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 136;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_2 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___aexit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__exit == NULL);
coroutine_heap->tmp_with_1__exit = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
coroutine->m_frame->m_frame.f_lineno = 136;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
tmp_expression_value_4 = coroutine_heap->tmp_with_1__enter;
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_enter);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_3;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_2;
}
tmp_assign_source_4 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_with_1__enter;
    assert(old != NULL);
    coroutine_heap->tmp_with_1__enter = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
tmp_assign_source_6 = coroutine_heap->tmp_with_1__enter;
assert(coroutine_heap->var_nursery == NULL);
Py_INCREF(tmp_assign_source_6);
coroutine_heap->var_nursery = tmp_assign_source_6;
}
// Tried code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_handler_nursery);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 137;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_4;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(coroutine_heap->var_nursery);
tmp_assign_source_7 = coroutine_heap->var_nursery;
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[1]);
    Nuitka_Cell_SET(coroutine->m_closure[1], tmp_assign_source_7);
    Py_INCREF(tmp_assign_source_7);
    Py_XDECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_listeners);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 139;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_4;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 139;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_4;
}
assert(coroutine_heap->tmp_for_loop_1__for_iterator == NULL);
coroutine_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_8;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = coroutine_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccccoo";
coroutine_heap->exception_lineno = 139;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = coroutine_heap->tmp_for_loop_1__iter_value;
    coroutine_heap->tmp_for_loop_1__iter_value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_10 = coroutine_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = coroutine_heap->var_listener;
    coroutine_heap->var_listener = tmp_assign_source_10;
    Py_INCREF(coroutine_heap->var_listener);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
if (coroutine_heap->var_nursery == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_nursery);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_5;
}

tmp_expression_value_5 = coroutine_heap->var_nursery;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_start_soon);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_5;
}
tmp_args_element_value_1 = module_var_accessor_trio$_highlevel_serve_listeners$_serve_one_listener(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__serve_one_listener);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_2);

coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_5;
}
CHECK_OBJECT(coroutine_heap->var_listener);
tmp_args_element_value_2 = coroutine_heap->var_listener;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_handler_nursery);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_5;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_handler);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_5;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 140;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 139;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
try_end_1:;
Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_task_status);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 144;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_4;
}

tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[3]);
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_started);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 144;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_listeners);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 144;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_4;
}

tmp_args_element_value_5 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 144;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 144;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 1.
coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_2, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
nuitka_bool tmp_assign_source_11;
tmp_assign_source_11 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_11;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
coroutine->m_frame->m_frame.f_lineno = 136;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_4 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_6 = EXC_TYPE(tstate);
tmp_args_element_value_7 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_7); 
tmp_args_element_value_8 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_8 == NULL) {
    tmp_args_element_value_8 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 136;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_expression_value_8 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_6;
}
tmp_expression_value_7 = ASYNC_AWAIT(tstate, tmp_expression_value_8, await_exit);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_6;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_3, sizeof(bool), &tmp_expression_value_8, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_7;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_3, sizeof(bool), &tmp_expression_value_8, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_6;
}
tmp_operand_value_1 = yield_return_value;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_6;
}
tmp_condition_result_3 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 136;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccccoo";
goto try_except_handler_6;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 136;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccccoo";
goto try_except_handler_6;
branch_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = coroutine_heap->tmp_with_1__indicator;
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
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_called_value_5;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 136;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 136;
tmp_expression_value_10 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_4);

coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_2;
}
tmp_expression_value_9 = ASYNC_AWAIT(tstate, tmp_expression_value_10, await_exit);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_4);

coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 3;
coroutine->m_yield_from = tmp_expression_value_9;
coroutine->m_awaiting = true;
return NULL;

yield_return_3:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_4);

coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_2;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
branch_no_4:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = coroutine_heap->tmp_with_1__indicator;
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
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_called_value_6;
PyObject *tmp_await_result_2;
coroutine->m_frame->m_frame.f_lineno = 136;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_6 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 136;
tmp_expression_value_12 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_2;
}
tmp_expression_value_11 = ASYNC_AWAIT(tstate, tmp_expression_value_12, await_exit);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_12, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 4;
coroutine->m_yield_from = tmp_expression_value_11;
coroutine->m_awaiting = true;
return NULL;

yield_return_4:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_12, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "ccccoo";
    goto try_except_handler_2;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
branch_no_5:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_5;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_70c5a5ed5fd2c4e9c844b82e297f02c8;
coroutine->m_frame->m_frame.f_lineno = 146;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 146;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccccoo";
goto frame_exception_exit_1;
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
    coroutine->m_closure[0],
    coroutine->m_closure[2],
    coroutine->m_closure[1],
    coroutine->m_closure[3],
    coroutine_heap->var_nursery,
    coroutine_heap->var_listener
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
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_nursery);
coroutine_heap->var_nursery = NULL;
Py_XDECREF(coroutine_heap->var_listener);
coroutine_heap->var_listener = NULL;
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

}

static PyObject *MAKE_COROUTINE_trio$_highlevel_serve_listeners$$$function__3_serve_listeners$$$coroutine__1_serve_listeners(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_highlevel_serve_listeners$$$function__3_serve_listeners$$$coroutine__1_serve_listeners_context,
        module_trio$_highlevel_serve_listeners,
        mod_consts.const_str_plain_serve_listeners,
        NULL,
        code_objects_7e4d8b6c68f55fa95fc472acb4a5da3e,
        closure,
        4,
#if 1
        sizeof(struct trio$_highlevel_serve_listeners$$$function__3_serve_listeners$$$coroutine__1_serve_listeners_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_serve_listeners$$$function__1__run_handler(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_highlevel_serve_listeners$$$function__1__run_handler,
        mod_consts.const_str_plain__run_handler,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_736ee41c9c28c8c7d5fb1667626c27e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_highlevel_serve_listeners,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_serve_listeners$$$function__2__serve_one_listener(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_highlevel_serve_listeners$$$function__2__serve_one_listener,
        mod_consts.const_str_plain__serve_one_listener,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2a7786e34f337f28c0890dc3c99f74df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_highlevel_serve_listeners,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_serve_listeners$$$function__3_serve_listeners(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_highlevel_serve_listeners$$$function__3_serve_listeners,
        mod_consts.const_str_plain_serve_listeners,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7e4d8b6c68f55fa95fc472acb4a5da3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_trio$_highlevel_serve_listeners,
        mod_consts.const_str_digest_7e08ec7514335c2cfceae6bf1d8aea21,
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

static function_impl_code const function_table_trio$_highlevel_serve_listeners[] = {
impl_trio$_highlevel_serve_listeners$$$function__1__run_handler,
impl_trio$_highlevel_serve_listeners$$$function__2__serve_one_listener,
impl_trio$_highlevel_serve_listeners$$$function__3_serve_listeners,
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

    return Nuitka_Function_GetFunctionState(function, function_table_trio$_highlevel_serve_listeners);
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
        module_trio$_highlevel_serve_listeners,
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
        function_table_trio$_highlevel_serve_listeners,
        sizeof(function_table_trio$_highlevel_serve_listeners) / sizeof(function_impl_code)
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
static char const *module_full_name = "trio._highlevel_serve_listeners";
#endif

// Internal entry point for module code.
PyObject *module_code_trio$_highlevel_serve_listeners(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("trio$_highlevel_serve_listeners");

    // Store the module for future use.
    module_trio$_highlevel_serve_listeners = module;

    moduledict_trio$_highlevel_serve_listeners = MODULE_DICT(module_trio$_highlevel_serve_listeners);

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
        PRINT_STRING("trio$_highlevel_serve_listeners: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("trio$_highlevel_serve_listeners: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("trio$_highlevel_serve_listeners: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "trio._highlevel_serve_listeners" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittrio$_highlevel_serve_listeners\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_trio$_highlevel_serve_listeners,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_trio$_highlevel_serve_listeners,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_trio$_highlevel_serve_listeners,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_trio$_highlevel_serve_listeners,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_trio$_highlevel_serve_listeners,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_trio$_highlevel_serve_listeners);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_trio$_highlevel_serve_listeners);
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

        UPDATE_STRING_DICT1(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_highlevel_serve_listeners;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_trio$_highlevel_serve_listeners = MAKE_MODULE_FRAME(code_objects_7bf096c8a11a0713942fc5ed2a29d459, module_trio$_highlevel_serve_listeners);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_highlevel_serve_listeners);
assert(Py_REFCNT(frame_frame_trio$_highlevel_serve_listeners) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_trio$_highlevel_serve_listeners$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_trio$_highlevel_serve_listeners$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_errno;
tmp_globals_arg_value_1 = (PyObject *)moduledict_trio$_highlevel_serve_listeners;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_trio$_highlevel_serve_listeners->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_errno, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_2 = (PyObject *)moduledict_trio$_highlevel_serve_listeners;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_trio$_highlevel_serve_listeners->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_3 = (PyObject *)moduledict_trio$_highlevel_serve_listeners;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Awaitable_str_plain_Callable_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_trio$_highlevel_serve_listeners->m_frame.f_lineno = 6;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_trio$_highlevel_serve_listeners,
        mod_consts.const_str_plain_Awaitable,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Awaitable);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_Awaitable, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_trio$_highlevel_serve_listeners,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_10);
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
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_11 == NULL));
assert(tmp_import_from_2__module == NULL);
Py_INCREF(tmp_assign_source_11);
tmp_import_from_2__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_trio$_highlevel_serve_listeners,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_trio$_highlevel_serve_listeners,
        mod_consts.const_str_plain_NoReturn,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_NoReturn);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_NoReturn, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_trio$_highlevel_serve_listeners,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_14);
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
PyObject *tmp_assign_source_15;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_trio;
tmp_globals_arg_value_4 = (PyObject *)moduledict_trio$_highlevel_serve_listeners;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_trio$_highlevel_serve_listeners->m_frame.f_lineno = 9;
tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_trio, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_set_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_1 = module_var_accessor_trio$_highlevel_serve_listeners$errno(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errno);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 14;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_EMFILE);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
tmp_assign_source_16 = PySet_New(NULL);
assert(tmp_assign_source_16);
tmp_res = PySet_Add(tmp_assign_source_16, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_set_element_1);
Py_DECREF(tmp_assign_source_16);

exception_lineno = 14;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_expression_value_2 = module_var_accessor_trio$_highlevel_serve_listeners$errno(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errno);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_16);

exception_lineno = 15;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ENFILE);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_16);

exception_lineno = 15;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_16, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_16);
Py_DECREF(tmp_set_element_1);

exception_lineno = 15;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_expression_value_3 = module_var_accessor_trio$_highlevel_serve_listeners$errno(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errno);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_16);

exception_lineno = 16;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ENOMEM);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_16);

exception_lineno = 16;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_16, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_16);
Py_DECREF(tmp_set_element_1);

exception_lineno = 16;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_expression_value_4 = module_var_accessor_trio$_highlevel_serve_listeners$errno(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errno);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_16);

exception_lineno = 17;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ENOBUFS);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_16);

exception_lineno = 17;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_16, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_16);
Py_DECREF(tmp_set_element_1);

exception_lineno = 17;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_ACCEPT_CAPACITY_ERRNOS, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_float_0_1;
UPDATE_STRING_DICT0(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_SLEEP_TIME, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_trio$_highlevel_serve_listeners$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;

    goto frame_exception_exit_1;
}
frame_frame_trio$_highlevel_serve_listeners->m_frame.f_lineno = 24;
tmp_assign_source_18 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_d0810bc72e96ba2f63a74ad15b435e2b_tuple, 0)
);

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
tmp_called_value_1 = module_var_accessor_trio$_highlevel_serve_listeners$TypeVar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_trio$_highlevel_serve_listeners$trio(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_abc);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_AsyncResource);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
frame_frame_trio$_highlevel_serve_listeners->m_frame.f_lineno = 27;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
    tmp_assign_source_19 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_StreamT_tuple, kw_values, mod_consts.const_tuple_str_plain_bound_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamT, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_1;
tmp_called_value_2 = module_var_accessor_trio$_highlevel_serve_listeners$TypeVar(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_expression_value_9 = module_var_accessor_trio$_highlevel_serve_listeners$trio(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_abc);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_Listener);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = module_var_accessor_trio$_highlevel_serve_listeners$Any(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_7);

exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
frame_frame_trio$_highlevel_serve_listeners->m_frame.f_lineno = 28;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
    tmp_assign_source_20 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_ListenerT_tuple, kw_values, mod_consts.const_tuple_str_plain_bound_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_ListenerT, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_list_element_1;
tmp_expression_value_10 = module_var_accessor_trio$_highlevel_serve_listeners$Callable(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_list_element_1 = module_var_accessor_trio$_highlevel_serve_listeners$StreamT(tstate);
if (unlikely(tmp_list_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StreamT);
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_tuple_element_1, 0, tmp_list_element_1);
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_3;
PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_1);
tmp_expression_value_11 = module_var_accessor_trio$_highlevel_serve_listeners$Awaitable(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Awaitable);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto tuple_build_exception_1;
}
tmp_subscript_value_3 = (PyObject *)&PyBaseObject_Type;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_Handler, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_9b603474456f356a7aff634e137bef45);

tmp_assign_source_22 = MAKE_FUNCTION_trio$_highlevel_serve_listeners$$$function__1__run_handler(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain__run_handler, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_7605b6c974567bc4ea23778838767178);

tmp_assign_source_23 = MAKE_FUNCTION_trio$_highlevel_serve_listeners$$$function__2__serve_one_listener(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain__serve_one_listener, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_annotations_3;
tmp_dict_key_1 = mod_consts.const_str_plain_handler_nursery;
tmp_dict_value_1 = Py_None;
tmp_kw_defaults_1 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_12;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_task_status;
tmp_expression_value_12 = module_var_accessor_trio$_highlevel_serve_listeners$trio(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_TASK_STATUS_IGNORED);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_kw_defaults_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_6379004ee10d54ff362edf30697d8372);

tmp_assign_source_24 = MAKE_FUNCTION_trio$_highlevel_serve_listeners$$$function__3_serve_listeners(tstate, tmp_kw_defaults_1, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)mod_consts.const_str_plain_serve_listeners, tmp_assign_source_24);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_highlevel_serve_listeners, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_highlevel_serve_listeners->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_highlevel_serve_listeners, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_trio$_highlevel_serve_listeners);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("trio$_highlevel_serve_listeners", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "trio._highlevel_serve_listeners" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_trio$_highlevel_serve_listeners);
    return module_trio$_highlevel_serve_listeners;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_serve_listeners, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("trio$_highlevel_serve_listeners", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

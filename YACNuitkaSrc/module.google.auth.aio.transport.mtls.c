/* Generated code for Python module 'google$auth$aio$transport$mtls'
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



/* The "module_google$auth$aio$transport$mtls" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$aio$transport$mtls;
PyDictObject *moduledict_google$auth$aio$transport$mtls;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_25c478791e857c2a4353adc4dde20102;
PyObject *const_str_plain_tempfile;
PyObject *const_str_plain_mkstemp;
PyObject *const_str_plain_fdopen;
PyObject *const_str_plain_wb;
PyObject *const_str_plain_write;
PyObject *const_str_plain_content;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_remove;
PyObject *const_str_plain__create_temp_file;
PyObject *const_str_plain_ssl;
PyObject *const_str_plain_create_default_context;
PyObject *const_str_plain_Purpose;
PyObject *const_str_plain_SERVER_AUTH;
PyObject *const_str_plain_load_cert_chain;
PyObject *const_tuple_str_plain_certfile_str_plain_keyfile_str_plain_password_tuple;
PyObject *const_str_plain_SSLError;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_TransportError;
PyObject *const_tuple_str_digest_86dc4f41d7aee8bface6cdc49cbafcfe_tuple;
PyObject *const_str_digest_f1dfc8573a40e49a9456428825c18113;
PyObject *const_str_digest_7675b61a45606cd523fca13fcafbf1d1;
PyObject *const_str_plain_asyncio;
PyObject *const_str_plain_to_thread;
PyObject *const_str_plain_func;
PyObject *const_str_plain_get_running_loop;
PyObject *const_str_plain_run_in_executor;
PyObject *const_str_plain__run_in_executor;
PyObject *const_str_plain_google;
PyObject *const_str_plain_auth;
PyObject *const_str_plain_transport;
PyObject *const_str_plain_mtls;
PyObject *const_str_plain_has_default_client_cert_source;
PyObject *const_tuple_false_tuple;
PyObject *const_tuple_str_plain_include_context_aware_tuple;
PyObject *const_str_plain_MutualTLSChannelError;
PyObject *const_tuple_str_digest_effbf6ed9ca8117288940512753a4783_tuple;
PyObject *const_str_plain_callback;
PyObject *const_str_digest_43cf29b9563c831190034d1c3b1e0cbf;
PyObject *const_str_digest_39c5cb94f01f3faac3b7a75e8181bf8c;
PyObject *const_str_plain_get_client_cert_and_key;
PyObject *const_tuple_type_OSError_type_RuntimeError_type_ValueError_tuple;
PyObject *const_str_digest_82e03aeb825cc182a1b4881775a58610;
PyObject *const_str_plain__mtls_helper;
PyObject *const_str_plain__get_workload_cert_and_key;
PyObject *const_str_plain_certificate_config_path;
PyObject *const_tuple_false_none_none_none_tuple;
PyObject *const_str_plain_get_client_ssl_credentials;
PyObject *const_str_digest_2fd1ed6518564925963980b8fac93099;
PyObject *const_str_plain_client_cert_callback;
PyObject *const_str_digest_770dec758157b1a17f4b1dcd7da853c0;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_contextlib;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_os;
PyObject *const_str_plain_Optional;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_str_digest_76c4c07798963223889b12fc60a097b0;
PyObject *const_str_digest_aebe086f58ac8f31cac27cffd3648a27;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_8f42df89a6a721e15f166f2f498b0b80_tuple;
PyObject *const_str_plain__LOGGER;
PyObject *const_str_plain_contextmanager;
PyObject *const_dict_a55de2804215e0a2bf833eb944fdd64b;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_cert_bytes;
PyObject *const_str_plain_key_bytes;
PyObject *const_str_plain_passphrase;
PyObject *const_str_plain_return;
PyObject *const_str_plain_SSLContext;
PyObject *const_str_plain_make_client_cert_ssl_context;
PyObject *const_str_plain_default_client_cert_source;
PyObject *const_str_digest_25fa3d3403129678014bdc6c16e20a45;
PyObject *const_str_digest_2a69985e9833c5159f5e2a822597b96f;
PyObject *const_tuple_42f3ae7a8bbc030810d6e65fdd416db3_tuple;
PyObject *const_tuple_str_plain_func_str_plain_args_str_plain_loop_tuple;
PyObject *const_tuple_8c794585037ab2658c10841653dcab8e_tuple;
PyObject *const_tuple_str_plain_callback_tuple;
PyObject *const_tuple_0132bf9daeab279b769e69e1f8df9d08_tuple;
PyObject *const_tuple_dce6f269c8b57302e239c3525338b26c_tuple;
PyObject *const_tuple_1f8fb851c73a3f89fb47d41319474472_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[83];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth.aio.transport.mtls"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_25c478791e857c2a4353adc4dde20102);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_tempfile);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_mkstemp);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_fdopen);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_wb);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_remove);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__create_temp_file);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_default_context);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_Purpose);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_SERVER_AUTH);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_cert_chain);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_certfile_str_plain_keyfile_str_plain_password_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSLError);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_TransportError);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_86dc4f41d7aee8bface6cdc49cbafcfe_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_f1dfc8573a40e49a9456428825c18113);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_7675b61a45606cd523fca13fcafbf1d1);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_thread);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_func);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_running_loop);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_in_executor);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__run_in_executor);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_google);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_auth);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_transport);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_mtls);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_default_client_cert_source);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_include_context_aware_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_MutualTLSChannelError);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_effbf6ed9ca8117288940512753a4783_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_callback);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_43cf29b9563c831190034d1c3b1e0cbf);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_39c5cb94f01f3faac3b7a75e8181bf8c);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_client_cert_and_key);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_type_OSError_type_RuntimeError_type_ValueError_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_82e03aeb825cc182a1b4881775a58610);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain__mtls_helper);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_workload_cert_and_key);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_certificate_config_path);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_false_none_none_none_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_client_ssl_credentials);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fd1ed6518564925963980b8fac93099);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_client_cert_callback);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_770dec758157b1a17f4b1dcd7da853c0);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_76c4c07798963223889b12fc60a097b0);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_aebe086f58ac8f31cac27cffd3648a27);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8f42df89a6a721e15f166f2f498b0b80_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__LOGGER);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_dict_a55de2804215e0a2bf833eb944fdd64b);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_cert_bytes);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_bytes);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_passphrase);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSLContext);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_make_client_cert_ssl_context);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_default_client_cert_source);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_25fa3d3403129678014bdc6c16e20a45);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a69985e9833c5159f5e2a822597b96f);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_42f3ae7a8bbc030810d6e65fdd416db3_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_func_str_plain_args_str_plain_loop_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_8c794585037ab2658c10841653dcab8e_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_callback_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_0132bf9daeab279b769e69e1f8df9d08_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_dce6f269c8b57302e239c3525338b26c_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_1f8fb851c73a3f89fb47d41319474472_tuple);
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
void checkModuleConstants_google$auth$aio$transport$mtls(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_25c478791e857c2a4353adc4dde20102));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_25c478791e857c2a4353adc4dde20102);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_tempfile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tempfile);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_mkstemp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mkstemp);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_fdopen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fdopen);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_wb));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wb);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_remove));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remove);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__create_temp_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__create_temp_file);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ssl);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_default_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_default_context);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_Purpose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Purpose);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_SERVER_AUTH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SERVER_AUTH);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_cert_chain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_cert_chain);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_certfile_str_plain_keyfile_str_plain_password_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_certfile_str_plain_keyfile_str_plain_password_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSLError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SSLError);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_TransportError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TransportError);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_86dc4f41d7aee8bface6cdc49cbafcfe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_86dc4f41d7aee8bface6cdc49cbafcfe_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_f1dfc8573a40e49a9456428825c18113));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f1dfc8573a40e49a9456428825c18113);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_7675b61a45606cd523fca13fcafbf1d1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7675b61a45606cd523fca13fcafbf1d1);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asyncio);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_thread);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_func));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_func);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_running_loop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_running_loop);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_in_executor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_in_executor);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__run_in_executor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__run_in_executor);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_google));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_google);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_auth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auth);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_transport));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transport);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_mtls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mtls);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_default_client_cert_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_default_client_cert_source);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_include_context_aware_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_include_context_aware_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_MutualTLSChannelError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MutualTLSChannelError);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_effbf6ed9ca8117288940512753a4783_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_effbf6ed9ca8117288940512753a4783_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_callback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_callback);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_43cf29b9563c831190034d1c3b1e0cbf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_43cf29b9563c831190034d1c3b1e0cbf);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_39c5cb94f01f3faac3b7a75e8181bf8c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_39c5cb94f01f3faac3b7a75e8181bf8c);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_client_cert_and_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_client_cert_and_key);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_type_OSError_type_RuntimeError_type_ValueError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_OSError_type_RuntimeError_type_ValueError_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_82e03aeb825cc182a1b4881775a58610));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_82e03aeb825cc182a1b4881775a58610);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain__mtls_helper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__mtls_helper);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_workload_cert_and_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_workload_cert_and_key);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_certificate_config_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_certificate_config_path);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_false_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_none_none_none_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_client_ssl_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_client_ssl_credentials);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fd1ed6518564925963980b8fac93099));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2fd1ed6518564925963980b8fac93099);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_client_cert_callback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client_cert_callback);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_770dec758157b1a17f4b1dcd7da853c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_770dec758157b1a17f4b1dcd7da853c0);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_76c4c07798963223889b12fc60a097b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_76c4c07798963223889b12fc60a097b0);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_aebe086f58ac8f31cac27cffd3648a27));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aebe086f58ac8f31cac27cffd3648a27);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8f42df89a6a721e15f166f2f498b0b80_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_8f42df89a6a721e15f166f2f498b0b80_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__LOGGER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LOGGER);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextmanager);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_dict_a55de2804215e0a2bf833eb944fdd64b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a55de2804215e0a2bf833eb944fdd64b);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_cert_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cert_bytes);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key_bytes);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_passphrase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_passphrase);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSLContext));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SSLContext);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_make_client_cert_ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_make_client_cert_ssl_context);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_default_client_cert_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default_client_cert_source);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_25fa3d3403129678014bdc6c16e20a45));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_25fa3d3403129678014bdc6c16e20a45);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a69985e9833c5159f5e2a822597b96f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2a69985e9833c5159f5e2a822597b96f);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_42f3ae7a8bbc030810d6e65fdd416db3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_42f3ae7a8bbc030810d6e65fdd416db3_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_func_str_plain_args_str_plain_loop_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_func_str_plain_args_str_plain_loop_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_8c794585037ab2658c10841653dcab8e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8c794585037ab2658c10841653dcab8e_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_callback_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_callback_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_0132bf9daeab279b769e69e1f8df9d08_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0132bf9daeab279b769e69e1f8df9d08_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_dce6f269c8b57302e239c3525338b26c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dce6f269c8b57302e239c3525338b26c_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_1f8fb851c73a3f89fb47d41319474472_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1f8fb851c73a3f89fb47d41319474472_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 13
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
static PyObject *module_var_accessor_google$auth$aio$transport$mtls$Optional(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$mtls->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$mtls->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$mtls->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$mtls$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$mtls->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$mtls->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$mtls->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$mtls$_create_temp_file(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$mtls->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$mtls->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain__create_temp_file);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$mtls->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__create_temp_file);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__create_temp_file, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__create_temp_file);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__create_temp_file, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain__create_temp_file);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain__create_temp_file);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__create_temp_file);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$mtls$_run_in_executor(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$mtls->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$mtls->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain__run_in_executor);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$mtls->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__run_in_executor);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__run_in_executor, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__run_in_executor);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__run_in_executor, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain__run_in_executor);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain__run_in_executor);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__run_in_executor);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$mtls$asyncio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$mtls->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$mtls->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$mtls->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$mtls$contextlib(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$mtls->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$mtls->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$mtls->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextlib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextlib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextlib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextlib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$mtls$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$mtls->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$mtls->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$mtls->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$mtls$get_client_cert_and_key(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$mtls->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$mtls->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_get_client_cert_and_key);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$mtls->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_client_cert_and_key);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_client_cert_and_key, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_client_cert_and_key);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_client_cert_and_key, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_get_client_cert_and_key);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_get_client_cert_and_key);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_client_cert_and_key);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$mtls$get_client_ssl_credentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$mtls->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$mtls->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_get_client_ssl_credentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$mtls->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_client_ssl_credentials);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_client_ssl_credentials, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_client_ssl_credentials);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_client_ssl_credentials, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_get_client_ssl_credentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_get_client_ssl_credentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_client_ssl_credentials);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$mtls$google(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$mtls->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$mtls->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_google);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$mtls->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_google);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_google);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_google);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$mtls$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$mtls->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$mtls->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$mtls->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$mtls$ssl(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$mtls->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$mtls->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$mtls->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$mtls$tempfile(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$mtls->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$mtls->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_tempfile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$mtls->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tempfile);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tempfile, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tempfile);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tempfile, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_tempfile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_tempfile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_tempfile);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_066fea89fd61119f9a6f7ba746406700;
static PyCodeObject *code_objects_8ed067eada8b7c538680cef7aaae3d8c;
static PyCodeObject *code_objects_f85e260b7466f1f37c31bc5d70175955;
static PyCodeObject *code_objects_72d346ab8eed8500963161df8ae34d08;
static PyCodeObject *code_objects_f3747c0286425362acb5573067da9c29;
static PyCodeObject *code_objects_0932b38fee85ce2075d9ddcd9d959872;
static PyCodeObject *code_objects_a07007ac70619778b2e1f20ef8fd91ee;
static PyCodeObject *code_objects_a52bb9171eeeb88570ee2b693a582755;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_25fa3d3403129678014bdc6c16e20a45); CHECK_OBJECT(module_filename_obj);
code_objects_066fea89fd61119f9a6f7ba746406700 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_2a69985e9833c5159f5e2a822597b96f, mod_consts.const_str_digest_2a69985e9833c5159f5e2a822597b96f, NULL, NULL, 0, 0, 0);
code_objects_8ed067eada8b7c538680cef7aaae3d8c = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__create_temp_file, mod_consts.const_str_plain__create_temp_file, mod_consts.const_tuple_42f3ae7a8bbc030810d6e65fdd416db3_tuple, NULL, 1, 0, 0);
code_objects_f85e260b7466f1f37c31bc5d70175955 = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts.const_str_plain__run_in_executor, mod_consts.const_str_plain__run_in_executor, mod_consts.const_tuple_str_plain_func_str_plain_args_str_plain_loop_tuple, NULL, 1, 0, 0);
code_objects_72d346ab8eed8500963161df8ae34d08 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_callback, mod_consts.const_str_digest_43cf29b9563c831190034d1c3b1e0cbf, mod_consts.const_tuple_8c794585037ab2658c10841653dcab8e_tuple, NULL, 0, 0, 0);
code_objects_f3747c0286425362acb5573067da9c29 = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_default_client_cert_source, mod_consts.const_str_plain_default_client_cert_source, mod_consts.const_tuple_str_plain_callback_tuple, NULL, 0, 0, 0);
code_objects_0932b38fee85ce2075d9ddcd9d959872 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_client_cert_and_key, mod_consts.const_str_plain_get_client_cert_and_key, mod_consts.const_tuple_0132bf9daeab279b769e69e1f8df9d08_tuple, NULL, 1, 0, 0);
code_objects_a07007ac70619778b2e1f20ef8fd91ee = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_client_ssl_credentials, mod_consts.const_str_plain_get_client_ssl_credentials, mod_consts.const_tuple_dce6f269c8b57302e239c3525338b26c_tuple, NULL, 1, 0, 0);
code_objects_a52bb9171eeeb88570ee2b693a582755 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_make_client_cert_ssl_context, mod_consts.const_str_plain_make_client_cert_ssl_context, mod_consts.const_tuple_1f8fb851c73a3f89fb47d41319474472_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_google$auth$aio$transport$mtls$$$function__1__create_temp_file$$$genobj__1__create_temp_file(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$auth$aio$transport$mtls$$$function__3__run_in_executor$$$coroutine__1__run_in_executor(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source$$$function__1_callback$$$coroutine__1_callback(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_google$auth$aio$transport$mtls$$$function__5_get_client_ssl_credentials$$$coroutine__1_get_client_ssl_credentials(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$auth$aio$transport$mtls$$$function__6_get_client_cert_and_key$$$coroutine__1_get_client_cert_and_key(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__1__create_temp_file(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__3__run_in_executor(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source$$$function__1_callback(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__5_get_client_ssl_credentials(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__6_get_client_cert_and_key(PyThreadState *tstate, PyObject *defaults);


// The module function definitions.
static PyObject *impl_google$auth$aio$transport$mtls$$$function__1__create_temp_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_content = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_content;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_google$auth$aio$transport$mtls$$$function__1__create_temp_file$$$genobj__1__create_temp_file(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_content);
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
par_content = NULL;
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
struct google$auth$aio$transport$mtls$$$function__1__create_temp_file$$$genobj__1__create_temp_file_locals {
PyObject *var_fd;
PyObject *var_file_path;
PyObject *var_f;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
};
#endif

static PyObject *google$auth$aio$transport$mtls$$$function__1__create_temp_file$$$genobj__1__create_temp_file_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$mtls$$$function__1__create_temp_file$$$genobj__1__create_temp_file_locals *generator_heap = (struct google$auth$aio$transport$mtls$$$function__1__create_temp_file$$$genobj__1__create_temp_file_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_fd = NULL;
generator_heap->var_file_path = NULL;
generator_heap->var_f = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
generator_heap->tmp_with_1__enter = NULL;
generator_heap->tmp_with_1__exit = NULL;
generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
generator_heap->tmp_with_1__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_8ed067eada8b7c538680cef7aaae3d8c, module_google$auth$aio$transport$mtls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$aio$transport$mtls$tempfile(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_tempfile);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 45;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_mkstemp);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_tuple_unpack_1__source_iter == NULL);
generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_3;
}
assert(generator_heap->tmp_tuple_unpack_1__element_1 == NULL);
generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_3;
}
assert(generator_heap->tmp_tuple_unpack_1__element_2 == NULL);
generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
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

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = generator_heap->tmp_tuple_unpack_1__element_1;
assert(generator_heap->var_fd == NULL);
Py_INCREF(tmp_assign_source_4);
generator_heap->var_fd = tmp_assign_source_4;
}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_2;
assert(generator_heap->var_file_path == NULL);
Py_INCREF(tmp_assign_source_5);
generator_heap->var_file_path = tmp_assign_source_5;
}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(generator_heap->var_fd);
tmp_args_element_value_1 = generator_heap->var_fd;
tmp_args_element_value_2 = mod_consts.const_str_plain_wb;
generator->m_frame->m_frame.f_lineno = 47;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_fdopen,
        call_args
    );
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_5;
}
assert(generator_heap->tmp_with_1__source == NULL);
generator_heap->tmp_with_1__source = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_1 = generator_heap->tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_5;
}
generator->m_frame->m_frame.f_lineno = 47;
tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_5;
}
assert(generator_heap->tmp_with_1__enter == NULL);
generator_heap->tmp_with_1__enter = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_2 = generator_heap->tmp_with_1__source;
tmp_assign_source_8 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_5;
}
assert(generator_heap->tmp_with_1__exit == NULL);
generator_heap->tmp_with_1__exit = tmp_assign_source_8;
}
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_TRUE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
tmp_assign_source_10 = generator_heap->tmp_with_1__enter;
assert(generator_heap->var_f == NULL);
Py_INCREF(tmp_assign_source_10);
generator_heap->var_f = tmp_assign_source_10;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(generator_heap->var_f);
tmp_expression_value_3 = generator_heap->var_f;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_write);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 48;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_7;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_content);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 48;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_7;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 48;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 48;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_3, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_3);
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
nuitka_bool tmp_assign_source_11;
tmp_assign_source_11 = NUITKA_BOOL_FALSE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_11;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_3 = generator_heap->tmp_with_1__exit;
tmp_args_element_value_4 = EXC_TYPE(tstate);
tmp_args_element_value_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_5); 
tmp_args_element_value_6 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_6 == NULL) {
    tmp_args_element_value_6 = Py_None;
}
generator->m_frame->m_frame.f_lineno = 47;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_8;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_8;
}
tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 47;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cooo";
goto try_except_handler_8;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 47;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cooo";
goto try_except_handler_8;
branch_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto try_except_handler_6;
// End of try:
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = generator_heap->tmp_with_1__indicator;
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
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_4 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 47;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&generator_heap->exception_keeper_name_5);

generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto try_except_handler_5;
// End of try:
try_end_5:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = generator_heap->tmp_with_1__indicator;
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
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_5 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 47;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
goto try_end_6;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
Py_XDECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
Py_XDECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto try_except_handler_4;
// End of try:
try_end_6:;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
CHECK_OBJECT(generator_heap->tmp_with_1__source);
Py_DECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
Py_DECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
Py_DECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
{
PyObject *tmp_expression_value_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_file_path);
tmp_expression_value_4 = generator_heap->var_file_path;
Py_INCREF(tmp_expression_value_4);
generator->m_yield_return_index = 1;
return tmp_expression_value_4;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 49;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_4;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_7;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_7 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 2.
generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_7);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_7, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_7);
// Tried code:
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_exists_arg_1;
PyObject *tmp_capi_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(generator_heap->var_file_path);
tmp_exists_arg_1 = generator_heap->var_file_path;
tmp_capi_result_1 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 52;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_9;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_capi_result_1);

generator_heap->exception_lineno = 52;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_9;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_7;
tmp_expression_value_5 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_5 == NULL));
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_remove);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(generator_heap->var_file_path);
tmp_args_element_value_7 = generator_heap->var_file_path;
generator->m_frame->m_frame.f_lineno = 53;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_5:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 46;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cooo";
goto try_except_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_9:;
generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_8 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_8;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_7:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_exists_arg_2;
PyObject *tmp_capi_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(generator_heap->var_file_path);
tmp_exists_arg_2 = generator_heap->var_file_path;
tmp_capi_result_2 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_2);
if (tmp_capi_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 52;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_capi_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_capi_result_2);

generator_heap->exception_lineno = 52;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_2);
Py_DECREF(tmp_capi_result_2);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_8;
tmp_expression_value_6 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_6 == NULL));
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_remove);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_file_path);
tmp_args_element_value_8 = generator_heap->var_file_path;
generator->m_frame->m_frame.f_lineno = 53;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_6:;

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
    generator_heap->var_fd,
    generator_heap->var_file_path,
    generator_heap->var_f
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
goto try_end_8;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_9 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_fd);
generator_heap->var_fd = NULL;
Py_XDECREF(generator_heap->var_file_path);
generator_heap->var_file_path = NULL;
Py_XDECREF(generator_heap->var_f);
generator_heap->var_f = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_9;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:
try_end_8:;
CHECK_OBJECT(generator_heap->var_fd);
CHECK_OBJECT(generator_heap->var_fd);
Py_DECREF(generator_heap->var_fd);
generator_heap->var_fd = NULL;
CHECK_OBJECT(generator_heap->var_file_path);
CHECK_OBJECT(generator_heap->var_file_path);
Py_DECREF(generator_heap->var_file_path);
generator_heap->var_file_path = NULL;
CHECK_OBJECT(generator_heap->var_f);
CHECK_OBJECT(generator_heap->var_f);
Py_DECREF(generator_heap->var_f);
generator_heap->var_f = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_google$auth$aio$transport$mtls$$$function__1__create_temp_file$$$genobj__1__create_temp_file(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        google$auth$aio$transport$mtls$$$function__1__create_temp_file$$$genobj__1__create_temp_file_context,
        module_google$auth$aio$transport$mtls,
        mod_consts.const_str_plain__create_temp_file,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_8ed067eada8b7c538680cef7aaae3d8c,
        closure,
        1,
#if 1
        sizeof(struct google$auth$aio$transport$mtls$$$function__1__create_temp_file$$$genobj__1__create_temp_file_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cert_bytes = python_pars[0];
PyObject *par_key_bytes = python_pars[1];
PyObject *par_passphrase = python_pars[2];
PyObject *var_cert_path = NULL;
PyObject *var_key_path = NULL;
PyObject *var_context = NULL;
PyObject *var_exc = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
PyObject *tmp_with_2__enter = NULL;
PyObject *tmp_with_2__exit = NULL;
nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_2__source = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context)) {
    Py_XDECREF(cache_frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context = MAKE_FUNCTION_FRAME(tstate, code_objects_a52bb9171eeeb88570ee2b693a582755, module_google$auth$aio$transport$mtls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_type_description == NULL);
frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context = cache_frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context);
assert(Py_REFCNT(frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_google$auth$aio$transport$mtls$_create_temp_file(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__create_temp_file);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_cert_bytes);
tmp_args_element_value_1 = par_cert_bytes;
frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = 74;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_2__source == NULL);
tmp_with_2__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_1 = tmp_with_2__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = 74;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_2__enter == NULL);
tmp_with_2__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_2 = tmp_with_2__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_2__exit == NULL);
tmp_with_2__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_2__indicator = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_2__enter);
tmp_assign_source_5 = tmp_with_2__enter;
assert(var_cert_path == NULL);
Py_INCREF(tmp_assign_source_5);
var_cert_path = tmp_assign_source_5;
}
// Tried code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_google$auth$aio$transport$mtls$_create_temp_file(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__create_temp_file);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(par_key_bytes);
tmp_args_element_value_2 = par_key_bytes;
frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = 74;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_called_value_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = 74;
tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_assign_source_8 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___exit__);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_8;
}
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_10 = tmp_with_1__enter;
assert(var_key_path == NULL);
Py_INCREF(tmp_assign_source_10);
var_key_path = tmp_assign_source_10;
}
// Tried code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
tmp_expression_value_5 = module_var_accessor_google$auth$aio$transport$mtls$ssl(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_create_default_context);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
tmp_expression_value_7 = module_var_accessor_google$auth$aio$transport$mtls$ssl(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 78;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_Purpose);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 78;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_SERVER_AUTH);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 78;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = 78;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
assert(var_context == NULL);
var_context = tmp_assign_source_11;
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
CHECK_OBJECT(var_context);
tmp_expression_value_8 = var_context;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_load_cert_chain);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_cert_path);
tmp_kw_call_value_0_1 = var_cert_path;
CHECK_OBJECT(var_key_path);
tmp_kw_call_value_1_1 = var_key_path;
CHECK_OBJECT(par_passphrase);
tmp_kw_call_value_2_1 = par_passphrase;
frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = 79;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_str_plain_certfile_str_plain_keyfile_str_plain_password_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_9;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_9 = module_var_accessor_google$auth$aio$transport$mtls$ssl(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_SSLError);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
}
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 5);
PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = PyExc_OSError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = PyExc_IOError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = PyExc_ValueError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = PyExc_RuntimeError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 4, tmp_tuple_element_1);
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
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
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_12); 
assert(var_exc == NULL);
Py_INCREF(tmp_assign_source_12);
var_exc = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_raise_cause_1;
tmp_called_instance_1 = module_var_accessor_google$auth$aio$transport$mtls$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;
type_description_1 = "ooooooo";
    goto try_except_handler_10;
}
frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = 84;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_TransportError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_86dc4f41d7aee8bface6cdc49cbafcfe_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooo";
    goto try_except_handler_10;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(var_exc);
tmp_raise_cause_1 = var_exc;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 86;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooooo";
goto try_except_handler_10;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_exc);
var_exc = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_9;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 77;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame)) {
        frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_9;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_7;
// End of try:
// End of try:
try_end_1:;
CHECK_OBJECT(var_context);
tmp_return_value = var_context;
Py_INCREF(tmp_return_value);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context, exception_keeper_lineno_4);
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
nuitka_bool tmp_assign_source_13;
tmp_assign_source_13 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_13;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
tmp_args_element_value_4 = EXC_TYPE(tstate);
tmp_args_element_value_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_5); 
tmp_args_element_value_6 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_6 == NULL) {
    tmp_args_element_value_6 = Py_None;
}
frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = 74;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_11;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_11;
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
    exception_lineno = 74;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame)) {
        frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_11;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 74;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame)) {
        frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_11;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
try_end_2:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_6:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = 74;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
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
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_9 = tmp_with_1__exit;
frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = 74;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_6);

exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_5;
// End of try:
try_end_4:;
goto try_end_5;
// Return handler code:
try_return_handler_5:;
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
goto try_return_handler_3;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
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
goto try_end_6;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    } else if (exception_keeper_lineno_8 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_8);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
nuitka_bool tmp_assign_source_14;
tmp_assign_source_14 = NUITKA_BOOL_FALSE;
tmp_with_2__indicator = tmp_assign_source_14;
}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_10 = tmp_with_2__exit;
tmp_args_element_value_7 = EXC_TYPE(tstate);
tmp_args_element_value_8 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_8); 
tmp_args_element_value_9 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_9 == NULL) {
    tmp_args_element_value_9 = Py_None;
}
frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = 74;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_12;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_12;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 74;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame)) {
        frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_12;
branch_no_6:;
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 74;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame)) {
        frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_12;
branch_end_5:;
goto try_end_7;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_3;
// End of try:
try_end_7:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_6;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_6:;
goto try_end_8;
// Return handler code:
try_return_handler_3:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_11 = tmp_with_2__exit;
frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = 74;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_11, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = tmp_with_2__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_5;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_12 = tmp_with_2__exit;
frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = 74;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_12, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_10);

exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_7:;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_2;
// End of try:
try_end_8:;
{
bool tmp_condition_result_8;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = tmp_with_2__indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_8 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_13;
PyObject *tmp_call_result_6;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_13 = tmp_with_2__exit;
frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame.f_lineno = 74;
tmp_call_result_6 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_13, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_8:;
goto try_end_9;
// Return handler code:
try_return_handler_2:;
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
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_2__source);
tmp_with_2__source = NULL;
Py_XDECREF(tmp_with_2__enter);
tmp_with_2__enter = NULL;
Py_XDECREF(tmp_with_2__exit);
tmp_with_2__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_9:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context,
    type_description_1,
    par_cert_bytes,
    par_key_bytes,
    par_passphrase,
    var_cert_path,
    var_key_path,
    var_context,
    var_exc
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context == cache_frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context);
    cache_frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context = NULL;
}

assertFrameObject(frame_frame_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cert_path);
CHECK_OBJECT(var_cert_path);
Py_DECREF(var_cert_path);
var_cert_path = NULL;
Py_XDECREF(var_key_path);
var_key_path = NULL;
Py_XDECREF(var_context);
var_context = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cert_path);
var_cert_path = NULL;
Py_XDECREF(var_key_path);
var_key_path = NULL;
Py_XDECREF(var_context);
var_context = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cert_bytes);
Py_DECREF(par_cert_bytes);
CHECK_OBJECT(par_key_bytes);
Py_DECREF(par_key_bytes);
CHECK_OBJECT(par_passphrase);
Py_DECREF(par_passphrase);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cert_bytes);
Py_DECREF(par_cert_bytes);
CHECK_OBJECT(par_key_bytes);
Py_DECREF(par_key_bytes);
CHECK_OBJECT(par_passphrase);
Py_DECREF(par_passphrase);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$aio$transport$mtls$$$function__3__run_in_executor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_func = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_args;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_func;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_google$auth$aio$transport$mtls$$$function__3__run_in_executor$$$coroutine__1__run_in_executor(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_func);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
par_func = NULL;
CHECK_OBJECT(par_args);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
par_args = NULL;
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
struct google$auth$aio$transport$mtls$$$function__3__run_in_executor$$$coroutine__1__run_in_executor_locals {
PyObject *var_loop;
char const *type_description_1;
PyObject *tmp_return_value;
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
};
#endif

static PyObject *google$auth$aio$transport$mtls$$$function__3__run_in_executor$$$coroutine__1__run_in_executor_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$mtls$$$function__3__run_in_executor$$$coroutine__1__run_in_executor_locals *coroutine_heap = (struct google$auth$aio$transport$mtls$$$function__3__run_in_executor$$$coroutine__1__run_in_executor_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_loop = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f85e260b7466f1f37c31bc5d70175955, module_google$auth$aio$transport$mtls, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
coroutine->m_frame->m_frame.f_lineno = 96;
tmp_expression_value_3 = module_var_accessor_google$auth$aio$transport$mtls$asyncio(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 96;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_to_thread);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 96;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_func);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 96;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_args);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 96;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_direct_call_arg3_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_expression_value_2 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 96;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 96;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_2;
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


coroutine_heap->exception_lineno = 96;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
coroutine_heap->tmp_return_value = yield_return_value;
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$aio$transport$mtls$asyncio(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 99;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}
coroutine->m_frame->m_frame.f_lineno = 99;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_running_loop);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 99;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}
assert(coroutine_heap->var_loop == NULL);
coroutine_heap->var_loop = tmp_assign_source_1;
}
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg3_2;
coroutine->m_frame->m_frame.f_lineno = 100;
CHECK_OBJECT(coroutine_heap->var_loop);
tmp_expression_value_6 = coroutine_heap->var_loop;
tmp_direct_call_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_run_in_executor);
if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}
tmp_tuple_element_2 = Py_None;
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_func);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "cco";
    goto tuple_build_exception_1;
}

tmp_tuple_element_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_2);
Py_DECREF(tmp_direct_call_arg2_2);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_2);
Py_DECREF(tmp_direct_call_arg2_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_args);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}

tmp_direct_call_arg3_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
Py_INCREF(tmp_direct_call_arg3_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2};
    tmp_expression_value_5 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_direct_call_arg1_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_direct_call_arg2_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_direct_call_arg3_2, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_direct_call_arg1_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_direct_call_arg2_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_direct_call_arg3_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto try_return_handler_3;
}
goto branch_end_1;
branch_no_1:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 94;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cco";
goto try_except_handler_3;
branch_end_1:;
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
    coroutine_heap->var_loop
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
Py_XDECREF(coroutine_heap->var_loop);
coroutine_heap->var_loop = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_loop);
coroutine_heap->var_loop = NULL;
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

static PyObject *MAKE_COROUTINE_google$auth$aio$transport$mtls$$$function__3__run_in_executor$$$coroutine__1__run_in_executor(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$auth$aio$transport$mtls$$$function__3__run_in_executor$$$coroutine__1__run_in_executor_context,
        module_google$auth$aio$transport$mtls,
        mod_consts.const_str_plain__run_in_executor,
        NULL,
        code_objects_f85e260b7466f1f37c31bc5d70175955,
        closure,
        2,
#if 1
        sizeof(struct google$auth$aio$transport$mtls$$$function__3__run_in_executor$$$coroutine__1__run_in_executor_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_callback = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source)) {
    Py_XDECREF(cache_frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source = MAKE_FUNCTION_FRAME(tstate, code_objects_f3747c0286425362acb5573067da9c29, module_google$auth$aio$transport$mtls, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source->m_type_description == NULL);
frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source = cache_frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source);
assert(Py_REFCNT(frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = module_var_accessor_google$auth$aio$transport$mtls$google(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_google);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_auth);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_transport);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_mtls);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_has_default_client_cert_source);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source->m_frame.f_lineno = 114;
tmp_operand_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0), mod_consts.const_tuple_str_plain_include_context_aware_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "o";
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
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$aio$transport$mtls$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source->m_frame.f_lineno = 117;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_MutualTLSChannelError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_effbf6ed9ca8117288940512753a4783_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 117;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source,
    type_description_1,
    var_callback
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source == cache_frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source);
    cache_frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source = NULL;
}

assertFrameObject(frame_frame_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_1;

tmp_assign_source_1 = MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source$$$function__1_callback(tstate);

assert(var_callback == NULL);
var_callback = tmp_assign_source_1;
}
CHECK_OBJECT(var_callback);
tmp_return_value = var_callback;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_callback);
CHECK_OBJECT(var_callback);
Py_DECREF(var_callback);
var_callback = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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


static PyObject *impl_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source$$$function__1_callback(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.

tmp_return_value = MAKE_COROUTINE_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source$$$function__1_callback$$$coroutine__1_callback(tstate);

goto function_return_exit;

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
struct google$auth$aio$transport$mtls$$$function__4_default_client_cert_source$$$function__1_callback$$$coroutine__1_callback_locals {
PyObject *var__;
PyObject *var_cert_bytes;
PyObject *var_key_bytes;
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
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
};
#endif

static PyObject *google$auth$aio$transport$mtls$$$function__4_default_client_cert_source$$$function__1_callback$$$coroutine__1_callback_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$mtls$$$function__4_default_client_cert_source$$$function__1_callback$$$coroutine__1_callback_locals *coroutine_heap = (struct google$auth$aio$transport$mtls$$$function__4_default_client_cert_source$$$function__1_callback$$$coroutine__1_callback_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var__ = NULL;
coroutine_heap->var_cert_bytes = NULL;
coroutine_heap->var_key_bytes = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_72d346ab8eed8500963161df8ae34d08, module_google$auth$aio$transport$mtls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
coroutine->m_frame->m_frame.f_lineno = 123;
tmp_called_value_1 = module_var_accessor_google$auth$aio$transport$mtls$get_client_cert_and_key(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_get_client_cert_and_key);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "ooooo";
    goto try_except_handler_3;
}
coroutine->m_frame->m_frame.f_lineno = 123;
tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "ooooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_assign_source_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_assign_source_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_iter_arg_1 = yield_return_value;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(coroutine_heap->tmp_tuple_unpack_1__source_iter == NULL);
coroutine_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "ooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->tmp_tuple_unpack_1__element_1 == NULL);
coroutine_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "ooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->tmp_tuple_unpack_1__element_2 == NULL);
coroutine_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_3;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "ooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->tmp_tuple_unpack_1__element_3 == NULL);
coroutine_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_1, 3);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "ooooo";
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_OSError_type_RuntimeError_type_ValueError_tuple;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 124;
coroutine_heap->type_description_1 = "ooooo";
    goto try_except_handler_5;
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
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_5); 
assert(coroutine_heap->var_caught_exc == NULL);
Py_INCREF(tmp_assign_source_5);
coroutine_heap->var_caught_exc = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_google$auth$aio$transport$mtls$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 125;
coroutine_heap->type_description_1 = "ooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(coroutine_heap->var_caught_exc);
tmp_args_element_value_1 = coroutine_heap->var_caught_exc;
coroutine->m_frame->m_frame.f_lineno = 125;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_MutualTLSChannelError, tmp_args_element_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 125;
coroutine_heap->type_description_1 = "ooooo";
    goto try_except_handler_6;
}
assert(coroutine_heap->var_new_exc == NULL);
coroutine_heap->var_new_exc = tmp_assign_source_6;
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


coroutine_heap->exception_lineno = 126;
coroutine_heap->type_description_1 = "ooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(coroutine_heap->var_caught_exc);
tmp_raise_cause_1 = coroutine_heap->var_caught_exc;
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
coroutine_heap->exception_lineno = 126;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &coroutine_heap->exception_state, tmp_raise_cause_1);
coroutine_heap->type_description_1 = "ooooo";
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
goto branch_end_1;
branch_no_1:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 122;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ooooo";
goto try_except_handler_5;
branch_end_1:;
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
    coroutine_heap->var__,
    coroutine_heap->var_cert_bytes,
    coroutine_heap->var_key_bytes,
    coroutine_heap->var_caught_exc,
    coroutine_heap->var_new_exc
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
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = coroutine_heap->tmp_tuple_unpack_1__element_1;
assert(coroutine_heap->var__ == NULL);
Py_INCREF(tmp_assign_source_7);
coroutine_heap->var__ = tmp_assign_source_7;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = coroutine_heap->tmp_tuple_unpack_1__element_2;
assert(coroutine_heap->var_cert_bytes == NULL);
Py_INCREF(tmp_assign_source_8);
coroutine_heap->var_cert_bytes = tmp_assign_source_8;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_3);
tmp_assign_source_9 = coroutine_heap->tmp_tuple_unpack_1__element_3;
assert(coroutine_heap->var_key_bytes == NULL);
Py_INCREF(tmp_assign_source_9);
coroutine_heap->var_key_bytes = tmp_assign_source_9;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_3);
coroutine_heap->tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(coroutine_heap->var_cert_bytes);
tmp_tuple_element_1 = coroutine_heap->var_cert_bytes;
coroutine_heap->tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(coroutine_heap->tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(coroutine_heap->var_key_bytes);
tmp_tuple_element_1 = coroutine_heap->var_key_bytes;
PyTuple_SET_ITEM0(coroutine_heap->tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var__);
CHECK_OBJECT(coroutine_heap->var__);
Py_DECREF(coroutine_heap->var__);
coroutine_heap->var__ = NULL;
CHECK_OBJECT(coroutine_heap->var_cert_bytes);
CHECK_OBJECT(coroutine_heap->var_cert_bytes);
Py_DECREF(coroutine_heap->var_cert_bytes);
coroutine_heap->var_cert_bytes = NULL;
CHECK_OBJECT(coroutine_heap->var_key_bytes);
CHECK_OBJECT(coroutine_heap->var_key_bytes);
Py_DECREF(coroutine_heap->var_key_bytes);
coroutine_heap->var_key_bytes = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

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

static PyObject *MAKE_COROUTINE_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source$$$function__1_callback$$$coroutine__1_callback(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        google$auth$aio$transport$mtls$$$function__4_default_client_cert_source$$$function__1_callback$$$coroutine__1_callback_context,
        module_google$auth$aio$transport$mtls,
        mod_consts.const_str_plain_callback,
        mod_consts.const_str_digest_43cf29b9563c831190034d1c3b1e0cbf,
        code_objects_72d346ab8eed8500963161df8ae34d08,
        NULL,
        0,
#if 1
        sizeof(struct google$auth$aio$transport$mtls$$$function__4_default_client_cert_source$$$function__1_callback$$$coroutine__1_callback_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$aio$transport$mtls$$$function__5_get_client_ssl_credentials(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_certificate_config_path = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_certificate_config_path;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_google$auth$aio$transport$mtls$$$function__5_get_client_ssl_credentials$$$coroutine__1_get_client_ssl_credentials(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_certificate_config_path);
CHECK_OBJECT(par_certificate_config_path);
Py_DECREF(par_certificate_config_path);
par_certificate_config_path = NULL;
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
struct google$auth$aio$transport$mtls$$$function__5_get_client_ssl_credentials$$$coroutine__1_get_client_ssl_credentials_locals {
PyObject *var_cert;
PyObject *var_key;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
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

static PyObject *google$auth$aio$transport$mtls$$$function__5_get_client_ssl_credentials$$$coroutine__1_get_client_ssl_credentials_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$mtls$$$function__5_get_client_ssl_credentials$$$coroutine__1_get_client_ssl_credentials_locals *coroutine_heap = (struct google$auth$aio$transport$mtls$$$function__5_get_client_ssl_credentials$$$coroutine__1_get_client_ssl_credentials_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_cert = NULL;
coroutine_heap->var_key = NULL;
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_a07007ac70619778b2e1f20ef8fd91ee, module_google$auth$aio$transport$mtls, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
coroutine->m_frame->m_frame.f_lineno = 156;
tmp_called_value_1 = module_var_accessor_google$auth$aio$transport$mtls$_run_in_executor(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__run_in_executor);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 156;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
tmp_expression_value_6 = module_var_accessor_google$auth$aio$transport$mtls$google(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_google);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 157;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_auth);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 157;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_transport);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 157;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__mtls_helper);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 157;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__get_workload_cert_and_key);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 157;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_certificate_config_path);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 158;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_element_value_3 = Py_False;
coroutine->m_frame->m_frame.f_lineno = 156;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 156;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 156;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_assign_source_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_assign_source_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 156;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
tmp_iter_arg_1 = yield_return_value;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 156;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_tuple_unpack_1__source_iter == NULL);
coroutine_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 156;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_3;
}
assert(coroutine_heap->tmp_tuple_unpack_1__element_1 == NULL);
coroutine_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 156;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_3;
}
assert(coroutine_heap->tmp_tuple_unpack_1__element_2 == NULL);
coroutine_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_1, 2);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 156;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = coroutine_heap->tmp_tuple_unpack_1__element_1;
assert(coroutine_heap->var_cert == NULL);
Py_INCREF(tmp_assign_source_4);
coroutine_heap->var_cert = tmp_assign_source_4;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = coroutine_heap->tmp_tuple_unpack_1__element_2;
assert(coroutine_heap->var_key == NULL);
Py_INCREF(tmp_assign_source_5);
coroutine_heap->var_key = tmp_assign_source_5;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
int tmp_truth_name_2;
CHECK_OBJECT(coroutine_heap->var_cert);
tmp_truth_name_1 = CHECK_IF_TRUE(coroutine_heap->var_cert);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 162;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 162;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(coroutine_heap->var_key);
tmp_truth_name_2 = CHECK_IF_TRUE(coroutine_heap->var_key);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 162;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = Py_True;
coroutine_heap->tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(coroutine_heap->tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(coroutine_heap->var_cert);
tmp_tuple_element_1 = coroutine_heap->var_cert;
PyTuple_SET_ITEM0(coroutine_heap->tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(coroutine_heap->var_key);
tmp_tuple_element_1 = coroutine_heap->var_key;
PyTuple_SET_ITEM0(coroutine_heap->tmp_return_value, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_None;
PyTuple_SET_ITEM0(coroutine_heap->tmp_return_value, 3, tmp_tuple_element_1);
goto frame_return_exit_1;
}
branch_no_1:;

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
    coroutine->m_closure[0],
    coroutine_heap->var_cert,
    coroutine_heap->var_key
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
coroutine_heap->tmp_return_value = mod_consts.const_tuple_false_none_none_none_tuple;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_cert);
CHECK_OBJECT(coroutine_heap->var_cert);
Py_DECREF(coroutine_heap->var_cert);
coroutine_heap->var_cert = NULL;
CHECK_OBJECT(coroutine_heap->var_key);
CHECK_OBJECT(coroutine_heap->var_key);
Py_DECREF(coroutine_heap->var_key);
coroutine_heap->var_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_cert);
coroutine_heap->var_cert = NULL;
Py_XDECREF(coroutine_heap->var_key);
coroutine_heap->var_key = NULL;
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

static PyObject *MAKE_COROUTINE_google$auth$aio$transport$mtls$$$function__5_get_client_ssl_credentials$$$coroutine__1_get_client_ssl_credentials(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$auth$aio$transport$mtls$$$function__5_get_client_ssl_credentials$$$coroutine__1_get_client_ssl_credentials_context,
        module_google$auth$aio$transport$mtls,
        mod_consts.const_str_plain_get_client_ssl_credentials,
        NULL,
        code_objects_a07007ac70619778b2e1f20ef8fd91ee,
        closure,
        1,
#if 1
        sizeof(struct google$auth$aio$transport$mtls$$$function__5_get_client_ssl_credentials$$$coroutine__1_get_client_ssl_credentials_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$aio$transport$mtls$$$function__6_get_client_cert_and_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_client_cert_callback = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_client_cert_callback;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_google$auth$aio$transport$mtls$$$function__6_get_client_cert_and_key$$$coroutine__1_get_client_cert_and_key(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
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
struct google$auth$aio$transport$mtls$$$function__6_get_client_cert_and_key$$$coroutine__1_get_client_cert_and_key_locals {
PyObject *var_result;
PyObject *var_cert;
PyObject *var_key;
PyObject *var_has_cert;
PyObject *var__;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
PyObject *tmp_tuple_unpack_2__element_1;
PyObject *tmp_tuple_unpack_2__element_2;
PyObject *tmp_tuple_unpack_2__source_iter;
PyObject *tmp_tuple_unpack_3__element_1;
PyObject *tmp_tuple_unpack_3__element_2;
PyObject *tmp_tuple_unpack_3__element_3;
PyObject *tmp_tuple_unpack_3__element_4;
PyObject *tmp_tuple_unpack_3__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
};
#endif

static PyObject *google$auth$aio$transport$mtls$$$function__6_get_client_cert_and_key$$$coroutine__1_get_client_cert_and_key_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$mtls$$$function__6_get_client_cert_and_key$$$coroutine__1_get_client_cert_and_key_locals *coroutine_heap = (struct google$auth$aio$transport$mtls$$$function__6_get_client_cert_and_key$$$coroutine__1_get_client_cert_and_key_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_result = NULL;
coroutine_heap->var_cert = NULL;
coroutine_heap->var_key = NULL;
coroutine_heap->var_has_cert = NULL;
coroutine_heap->var__ = NULL;
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
coroutine_heap->tmp_tuple_unpack_2__element_1 = NULL;
coroutine_heap->tmp_tuple_unpack_2__element_2 = NULL;
coroutine_heap->tmp_tuple_unpack_2__source_iter = NULL;
coroutine_heap->tmp_tuple_unpack_3__element_1 = NULL;
coroutine_heap->tmp_tuple_unpack_3__element_2 = NULL;
coroutine_heap->tmp_tuple_unpack_3__element_3 = NULL;
coroutine_heap->tmp_tuple_unpack_3__element_4 = NULL;
coroutine_heap->tmp_tuple_unpack_3__source_iter = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_0932b38fee85ce2075d9ddcd9d959872, module_google$auth$aio$transport$mtls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_client_cert_callback);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 188;
coroutine_heap->type_description_1 = "cooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(coroutine->m_closure[0]));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 188;
coroutine_heap->type_description_1 = "cooooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_client_cert_callback);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 189;
coroutine_heap->type_description_1 = "cooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 189;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 189;
coroutine_heap->type_description_1 = "cooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_result == NULL);
coroutine_heap->var_result = tmp_assign_source_1;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
coroutine->m_frame->m_frame.f_lineno = 191;
CHECK_OBJECT(coroutine_heap->var_result);
tmp_expression_value_2 = coroutine_heap->var_result;
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 191;
coroutine_heap->type_description_1 = "cooooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_assign_source_2, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_assign_source_2, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 191;
coroutine_heap->type_description_1 = "cooooo";
    goto try_except_handler_3;
}
tmp_iter_arg_1 = yield_return_value;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 191;
coroutine_heap->type_description_1 = "cooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 191;
coroutine_heap->type_description_1 = "cooooo";
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 191;
coroutine_heap->type_description_1 = "cooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->tmp_tuple_unpack_1__element_2 == NULL);
coroutine_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_1, 2);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 191;
coroutine_heap->type_description_1 = "cooooo";
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
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = coroutine_heap->tmp_tuple_unpack_1__element_1;
assert(coroutine_heap->var_cert == NULL);
Py_INCREF(tmp_assign_source_5);
coroutine_heap->var_cert = tmp_assign_source_5;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = coroutine_heap->tmp_tuple_unpack_1__element_2;
assert(coroutine_heap->var_key == NULL);
Py_INCREF(tmp_assign_source_6);
coroutine_heap->var_key = tmp_assign_source_6;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;

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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_TypeError;
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
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(coroutine_heap->var_result);
tmp_iter_arg_2 = coroutine_heap->var_result;
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 193;
coroutine_heap->type_description_1 = "cooooo";
    goto try_except_handler_6;
}
assert(coroutine_heap->tmp_tuple_unpack_2__source_iter == NULL);
coroutine_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_3;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = coroutine_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 193;
coroutine_heap->type_description_1 = "cooooo";
    goto try_except_handler_7;
}
assert(coroutine_heap->tmp_tuple_unpack_2__element_1 == NULL);
coroutine_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_4;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = coroutine_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 193;
coroutine_heap->type_description_1 = "cooooo";
    goto try_except_handler_7;
}
assert(coroutine_heap->tmp_tuple_unpack_2__element_2 == NULL);
coroutine_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_9;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = coroutine_heap->tmp_tuple_unpack_2__source_iter;
coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_2, 2);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 193;
coroutine_heap->type_description_1 = "cooooo";
    goto try_except_handler_7;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(coroutine_heap->tmp_tuple_unpack_2__source_iter);
coroutine_heap->tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto try_except_handler_6;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_1);
coroutine_heap->tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_2);
coroutine_heap->tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_5;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

goto try_except_handler_5;
// End of try:
try_end_5:;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(coroutine_heap->tmp_tuple_unpack_2__source_iter);
coroutine_heap->tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__element_1);
tmp_assign_source_10 = coroutine_heap->tmp_tuple_unpack_2__element_1;
assert(coroutine_heap->var_cert == NULL);
Py_INCREF(tmp_assign_source_10);
coroutine_heap->var_cert = tmp_assign_source_10;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_1);
coroutine_heap->tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__element_2);
tmp_assign_source_11 = coroutine_heap->tmp_tuple_unpack_2__element_2;
assert(coroutine_heap->var_key == NULL);
Py_INCREF(tmp_assign_source_11);
coroutine_heap->var_key = tmp_assign_source_11;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_2);
coroutine_heap->tmp_tuple_unpack_2__element_2 = NULL;

goto branch_end_2;
branch_no_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 190;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cooooo";
goto try_except_handler_5;
branch_end_2:;
goto try_end_6;
// Exception handler code:
try_except_handler_5:;
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
try_end_6:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = Py_True;
coroutine_heap->tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(coroutine_heap->tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(coroutine_heap->var_cert);
tmp_tuple_element_1 = coroutine_heap->var_cert;
PyTuple_SET_ITEM0(coroutine_heap->tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(coroutine_heap->var_key);
tmp_tuple_element_1 = coroutine_heap->var_key;
PyTuple_SET_ITEM0(coroutine_heap->tmp_return_value, 2, tmp_tuple_element_1);
goto frame_return_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_2;
coroutine->m_frame->m_frame.f_lineno = 196;
tmp_called_value_2 = module_var_accessor_google$auth$aio$transport$mtls$get_client_ssl_credentials(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_get_client_ssl_credentials);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 196;
coroutine_heap->type_description_1 = "cooooo";
    goto try_except_handler_8;
}
coroutine->m_frame->m_frame.f_lineno = 196;
tmp_expression_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 196;
coroutine_heap->type_description_1 = "cooooo";
    goto try_except_handler_8;
}
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 196;
coroutine_heap->type_description_1 = "cooooo";
    goto try_except_handler_8;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_assign_source_12, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_3;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_assign_source_12, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 196;
coroutine_heap->type_description_1 = "cooooo";
    goto try_except_handler_8;
}
tmp_iter_arg_3 = yield_return_value;
tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 196;
coroutine_heap->type_description_1 = "cooooo";
    goto try_except_handler_8;
}
assert(coroutine_heap->tmp_tuple_unpack_3__source_iter == NULL);
coroutine_heap->tmp_tuple_unpack_3__source_iter = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_5;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = coroutine_heap->tmp_tuple_unpack_3__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_5, 0, 4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 196;
coroutine_heap->type_description_1 = "cooooo";
    goto try_except_handler_9;
}
assert(coroutine_heap->tmp_tuple_unpack_3__element_1 == NULL);
coroutine_heap->tmp_tuple_unpack_3__element_1 = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_unpack_6;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = coroutine_heap->tmp_tuple_unpack_3__source_iter;
tmp_assign_source_14 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_6, 1, 4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 196;
coroutine_heap->type_description_1 = "cooooo";
    goto try_except_handler_9;
}
assert(coroutine_heap->tmp_tuple_unpack_3__element_2 == NULL);
coroutine_heap->tmp_tuple_unpack_3__element_2 = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_unpack_7;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
tmp_unpack_7 = coroutine_heap->tmp_tuple_unpack_3__source_iter;
tmp_assign_source_15 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_7, 2, 4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 196;
coroutine_heap->type_description_1 = "cooooo";
    goto try_except_handler_9;
}
assert(coroutine_heap->tmp_tuple_unpack_3__element_3 == NULL);
coroutine_heap->tmp_tuple_unpack_3__element_3 = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_8;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
tmp_unpack_8 = coroutine_heap->tmp_tuple_unpack_3__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_8, 3, 4);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 196;
coroutine_heap->type_description_1 = "cooooo";
    goto try_except_handler_9;
}
assert(coroutine_heap->tmp_tuple_unpack_3__element_4 == NULL);
coroutine_heap->tmp_tuple_unpack_3__element_4 = tmp_assign_source_16;
}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = coroutine_heap->tmp_tuple_unpack_3__source_iter;
coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_3, 4);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 196;
coroutine_heap->type_description_1 = "cooooo";
    goto try_except_handler_9;
}
}
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_7 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
Py_DECREF(coroutine_heap->tmp_tuple_unpack_3__source_iter);
coroutine_heap->tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_7;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
try_end_7:;
goto try_end_8;
// Exception handler code:
try_except_handler_8:;
coroutine_heap->exception_keeper_lineno_8 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_8 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_1);
coroutine_heap->tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_2);
coroutine_heap->tmp_tuple_unpack_3__element_2 = NULL;
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_3);
coroutine_heap->tmp_tuple_unpack_3__element_3 = NULL;
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_4);
coroutine_heap->tmp_tuple_unpack_3__element_4 = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_8;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;

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
    coroutine->m_closure[0],
    coroutine_heap->var_result,
    coroutine_heap->var_cert,
    coroutine_heap->var_key,
    coroutine_heap->var_has_cert,
    coroutine_heap->var__
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
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
Py_DECREF(coroutine_heap->tmp_tuple_unpack_3__source_iter);
coroutine_heap->tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__element_1);
tmp_assign_source_17 = coroutine_heap->tmp_tuple_unpack_3__element_1;
assert(coroutine_heap->var_has_cert == NULL);
Py_INCREF(tmp_assign_source_17);
coroutine_heap->var_has_cert = tmp_assign_source_17;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_1);
coroutine_heap->tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__element_2);
tmp_assign_source_18 = coroutine_heap->tmp_tuple_unpack_3__element_2;
assert(coroutine_heap->var_cert == NULL);
Py_INCREF(tmp_assign_source_18);
coroutine_heap->var_cert = tmp_assign_source_18;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_2);
coroutine_heap->tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__element_3);
tmp_assign_source_19 = coroutine_heap->tmp_tuple_unpack_3__element_3;
assert(coroutine_heap->var_key == NULL);
Py_INCREF(tmp_assign_source_19);
coroutine_heap->var_key = tmp_assign_source_19;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_3);
coroutine_heap->tmp_tuple_unpack_3__element_3 = NULL;

{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__element_4);
tmp_assign_source_20 = coroutine_heap->tmp_tuple_unpack_3__element_4;
assert(coroutine_heap->var__ == NULL);
Py_INCREF(tmp_assign_source_20);
coroutine_heap->var__ = tmp_assign_source_20;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_4);
coroutine_heap->tmp_tuple_unpack_3__element_4 = NULL;

{
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(coroutine_heap->var_has_cert);
tmp_tuple_element_2 = coroutine_heap->var_has_cert;
coroutine_heap->tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(coroutine_heap->tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(coroutine_heap->var_cert);
tmp_tuple_element_2 = coroutine_heap->var_cert;
PyTuple_SET_ITEM0(coroutine_heap->tmp_return_value, 1, tmp_tuple_element_2);
CHECK_OBJECT(coroutine_heap->var_key);
tmp_tuple_element_2 = coroutine_heap->var_key;
PyTuple_SET_ITEM0(coroutine_heap->tmp_return_value, 2, tmp_tuple_element_2);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(coroutine_heap->var_result);
coroutine_heap->var_result = NULL;
CHECK_OBJECT(coroutine_heap->var_cert);
CHECK_OBJECT(coroutine_heap->var_cert);
Py_DECREF(coroutine_heap->var_cert);
coroutine_heap->var_cert = NULL;
CHECK_OBJECT(coroutine_heap->var_key);
CHECK_OBJECT(coroutine_heap->var_key);
Py_DECREF(coroutine_heap->var_key);
coroutine_heap->var_key = NULL;
Py_XDECREF(coroutine_heap->var_has_cert);
coroutine_heap->var_has_cert = NULL;
Py_XDECREF(coroutine_heap->var__);
coroutine_heap->var__ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_9 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_9 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_result);
coroutine_heap->var_result = NULL;
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

static PyObject *MAKE_COROUTINE_google$auth$aio$transport$mtls$$$function__6_get_client_cert_and_key$$$coroutine__1_get_client_cert_and_key(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$auth$aio$transport$mtls$$$function__6_get_client_cert_and_key$$$coroutine__1_get_client_cert_and_key_context,
        module_google$auth$aio$transport$mtls,
        mod_consts.const_str_plain_get_client_cert_and_key,
        NULL,
        code_objects_0932b38fee85ce2075d9ddcd9d959872,
        closure,
        1,
#if 1
        sizeof(struct google$auth$aio$transport$mtls$$$function__6_get_client_cert_and_key$$$coroutine__1_get_client_cert_and_key_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__1__create_temp_file(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$mtls$$$function__1__create_temp_file,
        mod_consts.const_str_plain__create_temp_file,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8ed067eada8b7c538680cef7aaae3d8c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$aio$transport$mtls,
        mod_consts.const_str_digest_25c478791e857c2a4353adc4dde20102,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context,
        mod_consts.const_str_plain_make_client_cert_ssl_context,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a52bb9171eeeb88570ee2b693a582755,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$aio$transport$mtls,
        mod_consts.const_str_digest_f1dfc8573a40e49a9456428825c18113,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__3__run_in_executor(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$mtls$$$function__3__run_in_executor,
        mod_consts.const_str_plain__run_in_executor,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f85e260b7466f1f37c31bc5d70175955,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aio$transport$mtls,
        mod_consts.const_str_digest_7675b61a45606cd523fca13fcafbf1d1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source,
        mod_consts.const_str_plain_default_client_cert_source,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f3747c0286425362acb5573067da9c29,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aio$transport$mtls,
        mod_consts.const_str_digest_39c5cb94f01f3faac3b7a75e8181bf8c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source$$$function__1_callback(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source$$$function__1_callback,
        mod_consts.const_str_plain_callback,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_43cf29b9563c831190034d1c3b1e0cbf,
#endif
        code_objects_72d346ab8eed8500963161df8ae34d08,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aio$transport$mtls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__5_get_client_ssl_credentials(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$mtls$$$function__5_get_client_ssl_credentials,
        mod_consts.const_str_plain_get_client_ssl_credentials,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a07007ac70619778b2e1f20ef8fd91ee,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aio$transport$mtls,
        mod_consts.const_str_digest_82e03aeb825cc182a1b4881775a58610,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__6_get_client_cert_and_key(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$mtls$$$function__6_get_client_cert_and_key,
        mod_consts.const_str_plain_get_client_cert_and_key,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0932b38fee85ce2075d9ddcd9d959872,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aio$transport$mtls,
        mod_consts.const_str_digest_2fd1ed6518564925963980b8fac93099,
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

static function_impl_code const function_table_google$auth$aio$transport$mtls[] = {
impl_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source$$$function__1_callback,
impl_google$auth$aio$transport$mtls$$$function__1__create_temp_file,
impl_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context,
impl_google$auth$aio$transport$mtls$$$function__3__run_in_executor,
impl_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source,
impl_google$auth$aio$transport$mtls$$$function__5_get_client_ssl_credentials,
impl_google$auth$aio$transport$mtls$$$function__6_get_client_cert_and_key,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$aio$transport$mtls);
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
        module_google$auth$aio$transport$mtls,
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
        function_table_google$auth$aio$transport$mtls,
        sizeof(function_table_google$auth$aio$transport$mtls) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth.aio.transport.mtls";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$aio$transport$mtls(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$aio$transport$mtls");

    // Store the module for future use.
    module_google$auth$aio$transport$mtls = module;

    moduledict_google$auth$aio$transport$mtls = MODULE_DICT(module_google$auth$aio$transport$mtls);

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
        PRINT_STRING("google$auth$aio$transport$mtls: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$aio$transport$mtls: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$aio$transport$mtls: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.aio.transport.mtls" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$aio$transport$mtls\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$aio$transport$mtls,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$aio$transport$mtls,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$aio$transport$mtls,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$aio$transport$mtls,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$aio$transport$mtls,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$aio$transport$mtls);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$aio$transport$mtls);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_google$auth$aio$transport$mtls;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_770dec758157b1a17f4b1dcd7da853c0;
UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$aio$transport$mtls = MAKE_MODULE_FRAME(code_objects_066fea89fd61119f9a6f7ba746406700, module_google$auth$aio$transport$mtls);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aio$transport$mtls);
assert(Py_REFCNT(frame_frame_google$auth$aio$transport$mtls) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$aio$transport$mtls$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$aio$transport$mtls$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_asyncio;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$aio$transport$mtls;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$aio$transport$mtls->m_frame.f_lineno = 19;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$aio$transport$mtls;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$aio$transport$mtls->m_frame.f_lineno = 20;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$aio$transport$mtls;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$aio$transport$mtls->m_frame.f_lineno = 21;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_ssl;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$auth$aio$transport$mtls;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_google$auth$aio$transport$mtls->m_frame.f_lineno = 23;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_tempfile;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$auth$aio$transport$mtls;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_google$auth$aio$transport$mtls->m_frame.f_lineno = 24;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_tempfile, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$aio$transport$mtls,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$auth$aio$transport$mtls;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_google$auth$aio$transport$mtls->m_frame.f_lineno = 27;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$auth$aio$transport$mtls,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_76c4c07798963223889b12fc60a097b0;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$auth$aio$transport$mtls;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = Py_None;
tmp_level_value_7 = const_int_0;
frame_frame_google$auth$aio$transport$mtls->m_frame.f_lineno = 28;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_google, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_aebe086f58ac8f31cac27cffd3648a27;
tmp_globals_arg_value_8 = (PyObject *)moduledict_google$auth$aio$transport$mtls;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = Py_None;
tmp_level_value_8 = const_int_0;
frame_frame_google$auth$aio$transport$mtls->m_frame.f_lineno = 29;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_google, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$aio$transport$mtls$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$aio$transport$mtls->m_frame.f_lineno = 31;
tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_8f42df89a6a721e15f166f2f498b0b80_tuple, 0)
);

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_instance_2 = module_var_accessor_google$auth$aio$transport$mtls$contextlib(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_a55de2804215e0a2bf833eb944fdd64b);

tmp_args_element_value_1 = MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__1__create_temp_file(tstate, tmp_annotations_1);

frame_frame_google$auth$aio$transport$mtls->m_frame.f_lineno = 34;
tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_contextmanager, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain__create_temp_file, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_1 = mod_consts.const_str_plain_cert_bytes;
tmp_dict_value_1 = (PyObject *)&PyBytes_Type;
tmp_annotations_2 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_2;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_key_bytes;
tmp_dict_value_1 = (PyObject *)&PyBytes_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_passphrase;
tmp_expression_value_1 = module_var_accessor_google$auth$aio$transport$mtls$Optional(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;

    goto dict_build_exception_1;
}
tmp_subscript_value_1 = (PyObject *)&PyBytes_Type;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_expression_value_2 = module_var_accessor_google$auth$aio$transport$mtls$ssl(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_SSLContext);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_16 = MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__2_make_client_cert_ssl_context(tstate, tmp_defaults_1, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_make_client_cert_ssl_context, tmp_assign_source_16);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$mtls, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aio$transport$mtls->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$mtls, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$aio$transport$mtls);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_17;

tmp_assign_source_17 = MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__3__run_in_executor(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain__run_in_executor, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;

tmp_assign_source_18 = MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__4_default_client_cert_source(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_default_client_cert_source, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_19 = MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__5_get_client_ssl_credentials(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_get_client_ssl_credentials, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_3);

tmp_assign_source_20 = MAKE_FUNCTION_google$auth$aio$transport$mtls$$$function__6_get_client_cert_and_key(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)mod_consts.const_str_plain_get_client_cert_and_key, tmp_assign_source_20);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$aio$transport$mtls", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.aio.transport.mtls" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$aio$transport$mtls);
    return module_google$auth$aio$transport$mtls;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$mtls, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$aio$transport$mtls", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

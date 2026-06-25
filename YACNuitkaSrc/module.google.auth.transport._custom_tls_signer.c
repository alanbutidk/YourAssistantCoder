/* Generated code for Python module 'google$auth$transport$_custom_tls_signer'
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



/* The "module_google$auth$transport$_custom_tls_signer" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$transport$_custom_tls_signer;
PyDictObject *moduledict_google$auth$transport$_custom_tls_signer;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_cast;
PyObject *const_str_plain_cffi;
PyObject *const_str_plain_FFI;
PyObject *const_str_plain_intptr_t;
PyObject *const_str_plain_c_void_p;
PyObject *const_str_plain_from_address;
PyObject *const_str_plain_sizeof;
PyObject *const_int_pos_2;
PyObject *const_str_plain__LOGGER;
PyObject *const_str_plain_debug;
PyObject *const_str_digest_c4a5e9917fef14955a18bc560bc5888b;
PyObject *const_str_plain_CDLL;
PyObject *const_str_plain_SIGN_CALLBACK_CTYPE;
PyObject *const_str_plain_c_char_p;
PyObject *const_str_plain_ConfigureSslContext;
PyObject *const_str_plain_argtypes;
PyObject *const_str_plain_c_int;
PyObject *const_str_plain_restype;
PyObject *const_str_digest_07278526cc543d585feefff620d84d8e;
PyObject *const_str_plain_GetCertPemForPython;
PyObject *const_str_plain_SignForPython;
PyObject *const_str_digest_5291f45c5220c918f684370ddb51aed0;
PyObject *const_str_plain_ECP_attach_to_ctx;
PyObject *const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
PyObject *const_tuple_str_plain_hashes_tuple;
PyObject *const_str_plain_hashes;
PyObject *const_str_plain_string_at;
PyObject *const_str_plain_Hash;
PyObject *const_str_plain_SHA256;
PyObject *const_str_plain_update;
PyObject *const_str_plain_finalize;
PyObject *const_str_plain_sign_callback;
PyObject *const_str_digest_d4f1a2a4bd4b6ba35219848c63e0c747;
PyObject *const_tuple_str_digest_36f68621c23e36744500a686365b4abb_tuple;
PyObject *const_str_plain__compute_sha256_digest;
PyObject *const_str_plain_c_char;
PyObject *const_str_plain_create_string_buffer;
PyObject *const_tuple_int_pos_2000_tuple;
PyObject *const_str_plain_signer_lib;
PyObject *const_str_plain_config_file_path;
PyObject *const_str_plain_encode;
PyObject *const_str_plain_from_buffer;
PyObject *const_int_pos_2000;
PyObject *const_str_plain_sig;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_MutualTLSChannelError;
PyObject *const_tuple_str_digest_3da8512f537d2e890e5fdc1ad8aeffab_tuple;
PyObject *const_str_plain__enterprise_cert_file_path;
PyObject *const_str_plain__cert;
PyObject *const_str_plain__sign_callback;
PyObject *const_str_plain__provider_lib;
PyObject *const_str_digest_ace3e12651492fab6376cec73f917067;
PyObject *const_str_plain_json;
PyObject *const_str_plain_load;
PyObject *const_str_plain_libs;
PyObject *const_tuple_str_plain_ecp_client_none_tuple;
PyObject *const_tuple_str_plain_tls_offload_none_tuple;
PyObject *const_tuple_str_plain_ecp_provider_none_tuple;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_provider_library;
PyObject *const_str_plain_load_provider_lib;
PyObject *const_str_plain_offload_library;
PyObject *const_str_plain_signer_library;
PyObject *const_str_plain_load_offload_lib;
PyObject *const_str_plain__offload_lib;
PyObject *const_str_plain_load_signer_lib;
PyObject *const_str_plain__signer_lib;
PyObject *const_str_plain_set_up_custom_key;
PyObject *const_tuple_str_digest_aeae1576b914573c83d9b8e6404c528c_tuple;
PyObject *const_str_plain_get_cert;
PyObject *const_str_plain_get_sign_callback;
PyObject *const_str_plain_should_use_provider;
PyObject *const_str_plain__cast_ssl_ctx_to_void_p_stdlib;
PyObject *const_tuple_str_plain_ascii_tuple;
PyObject *const_tuple_str_digest_c2d0924c6497b8a356c98c5617186033_tuple;
PyObject *const_str_plain__cast_ssl_ctx_to_void_p_pyopenssl;
PyObject *const_str_plain__ctx;
PyObject *const_str_plain__context;
PyObject *const_tuple_str_digest_8f10b3a945d370c01b4f6c256e9a5821_tuple;
PyObject *const_tuple_str_digest_013848f00da7ec4d8fc376f8cf9fe7f4_tuple;
PyObject *const_str_digest_27a1a173e7f5bad39e224831247cc1db;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_ctypes;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_os;
PyObject *const_str_plain_sys;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_1c97c3d2aeb9afbe25232fe62e25ee5f_tuple;
PyObject *const_str_plain_CFUNCTYPE;
PyObject *const_str_plain_POINTER;
PyObject *const_str_plain_c_ubyte;
PyObject *const_str_plain_c_size_t;
PyObject *const_tuple_type_object_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_CustomTlsSigner;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_1c97c3d2aeb9afbe25232fe62e25ee5f;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_203;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_dc724b939ab1fb481af0a097c7b8124f;
PyObject *const_str_plain_load_libraries;
PyObject *const_str_digest_7ab8a3f6069698d743b44fea91dc0f15;
PyObject *const_str_digest_ff8286726f5d79ba3fe3cc74888aaf77;
PyObject *const_str_digest_5b0bc3450e7766d2a81f8ca1b5e4c3d9;
PyObject *const_str_plain_attach_to_ssl_context;
PyObject *const_str_digest_dedcc9618f9f4fe80b0fc1188880b1dd;
PyObject *const_tuple_9b3f8505b5440c822978bf83c74b008e_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_620ec7606f048e4b12460be9721c14bc;
PyObject *const_str_digest_89ceccf00206bf5f92d0e4eabed9aa30;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_enterprise_cert_file_path_tuple;
PyObject *const_tuple_str_plain_ssl_ctx_tuple;
PyObject *const_tuple_str_plain_context_tuple;
PyObject *const_tuple_8ff1e93e26f4bb1be9f6e04c721455da_tuple;
PyObject *const_tuple_str_plain_self_str_plain_ctx_tuple;
PyObject *const_tuple_ff83ab3f6ef2ecbb46722d761295c27d_tuple;
PyObject *const_tuple_94a82a36ffc13a2482da2956a6e48420_tuple;
PyObject *const_tuple_93259cea328b8c30a9448c5d7a68af70_tuple;
PyObject *const_tuple_str_plain_offload_lib_path_str_plain_lib_tuple;
PyObject *const_tuple_str_plain_provider_lib_path_str_plain_lib_tuple;
PyObject *const_tuple_str_plain_signer_lib_path_str_plain_lib_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_ce872f00fe3191332f3ef4636594ad3c_tuple;
PyObject *const_tuple_str_plain_config_file_path_str_plain_signer_lib_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[132];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth.transport._custom_tls_signer"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_cffi);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_FFI);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_intptr_t);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_void_p);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_address);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_sizeof);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__LOGGER);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_debug);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4a5e9917fef14955a18bc560bc5888b);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_CDLL);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_SIGN_CALLBACK_CTYPE);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_char_p);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConfigureSslContext);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_argtypes);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_int);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_restype);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_07278526cc543d585feefff620d84d8e);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetCertPemForPython);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_SignForPython);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_5291f45c5220c918f684370ddb51aed0);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_ECP_attach_to_ctx);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hashes_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_hashes);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_string_at);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_Hash);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA256);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_finalize);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_sign_callback);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4f1a2a4bd4b6ba35219848c63e0c747);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_36f68621c23e36744500a686365b4abb_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__compute_sha256_digest);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_char);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_string_buffer);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2000_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_signer_lib);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_config_file_path);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_buffer);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_int_pos_2000);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_sig);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_MutualTLSChannelError);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3da8512f537d2e890e5fdc1ad8aeffab_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain__enterprise_cert_file_path);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__cert);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__sign_callback);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__provider_lib);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_ace3e12651492fab6376cec73f917067);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_load);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_libs);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ecp_client_none_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tls_offload_none_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ecp_provider_none_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_provider_library);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_provider_lib);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_offload_library);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_signer_library);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_offload_lib);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__offload_lib);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_signer_lib);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain__signer_lib);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_up_custom_key);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_aeae1576b914573c83d9b8e6404c528c_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_cert);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_sign_callback);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_should_use_provider);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_stdlib);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c2d0924c6497b8a356c98c5617186033_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_pyopenssl);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain__ctx);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain__context);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8f10b3a945d370c01b4f6c256e9a5821_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_013848f00da7ec4d8fc376f8cf9fe7f4_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_27a1a173e7f5bad39e224831247cc1db);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1c97c3d2aeb9afbe25232fe62e25ee5f_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_CFUNCTYPE);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_ubyte);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_size_t);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_CustomTlsSigner);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c97c3d2aeb9afbe25232fe62e25ee5f);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_int_pos_203);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc724b939ab1fb481af0a097c7b8124f);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_libraries);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_7ab8a3f6069698d743b44fea91dc0f15);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_ff8286726f5d79ba3fe3cc74888aaf77);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b0bc3450e7766d2a81f8ca1b5e4c3d9);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_attach_to_ssl_context);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_dedcc9618f9f4fe80b0fc1188880b1dd);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_9b3f8505b5440c822978bf83c74b008e_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_620ec7606f048e4b12460be9721c14bc);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_89ceccf00206bf5f92d0e4eabed9aa30);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_enterprise_cert_file_path_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ssl_ctx_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_context_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_8ff1e93e26f4bb1be9f6e04c721455da_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_ctx_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_ff83ab3f6ef2ecbb46722d761295c27d_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_94a82a36ffc13a2482da2956a6e48420_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_93259cea328b8c30a9448c5d7a68af70_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_offload_lib_path_str_plain_lib_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_provider_lib_path_str_plain_lib_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_signer_lib_path_str_plain_lib_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_ce872f00fe3191332f3ef4636594ad3c_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_file_path_str_plain_signer_lib_tuple);
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
void checkModuleConstants_google$auth$transport$_custom_tls_signer(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_cffi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cffi);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_FFI));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FFI);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_intptr_t));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_intptr_t);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_void_p));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_void_p);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_address));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_address);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_sizeof));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sizeof);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__LOGGER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LOGGER);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_debug));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_debug);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4a5e9917fef14955a18bc560bc5888b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4a5e9917fef14955a18bc560bc5888b);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_CDLL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CDLL);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_SIGN_CALLBACK_CTYPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SIGN_CALLBACK_CTYPE);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_char_p));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_char_p);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConfigureSslContext));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConfigureSslContext);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_argtypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_argtypes);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_int);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_restype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_restype);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_07278526cc543d585feefff620d84d8e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_07278526cc543d585feefff620d84d8e);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetCertPemForPython));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetCertPemForPython);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_SignForPython));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SignForPython);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_5291f45c5220c918f684370ddb51aed0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5291f45c5220c918f684370ddb51aed0);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_ECP_attach_to_ctx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ECP_attach_to_ctx);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hashes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_hashes_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_hashes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hashes);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_string_at));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_string_at);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_Hash));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Hash);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA256));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHA256);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_finalize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_finalize);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_sign_callback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sign_callback);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4f1a2a4bd4b6ba35219848c63e0c747));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d4f1a2a4bd4b6ba35219848c63e0c747);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_36f68621c23e36744500a686365b4abb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_36f68621c23e36744500a686365b4abb_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__compute_sha256_digest));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__compute_sha256_digest);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_char));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_char);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_string_buffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_string_buffer);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2000_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_2000_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_signer_lib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signer_lib);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_config_file_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_config_file_path);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_buffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_buffer);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_int_pos_2000));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2000);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_sig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sig);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_MutualTLSChannelError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MutualTLSChannelError);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3da8512f537d2e890e5fdc1ad8aeffab_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_3da8512f537d2e890e5fdc1ad8aeffab_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain__enterprise_cert_file_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__enterprise_cert_file_path);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__cert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cert);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__sign_callback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__sign_callback);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__provider_lib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__provider_lib);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_ace3e12651492fab6376cec73f917067));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ace3e12651492fab6376cec73f917067);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_load));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_libs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_libs);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ecp_client_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ecp_client_none_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tls_offload_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_tls_offload_none_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ecp_provider_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ecp_provider_none_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_provider_library));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_provider_library);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_provider_lib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_provider_lib);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_offload_library));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_offload_library);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_signer_library));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signer_library);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_offload_lib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_offload_lib);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__offload_lib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__offload_lib);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_signer_lib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_signer_lib);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain__signer_lib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__signer_lib);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_up_custom_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_up_custom_key);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_aeae1576b914573c83d9b8e6404c528c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_aeae1576b914573c83d9b8e6404c528c_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_cert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_cert);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_sign_callback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_sign_callback);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_should_use_provider));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_should_use_provider);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_stdlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_stdlib);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ascii_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c2d0924c6497b8a356c98c5617186033_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c2d0924c6497b8a356c98c5617186033_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_pyopenssl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_pyopenssl);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain__ctx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ctx);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain__context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__context);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8f10b3a945d370c01b4f6c256e9a5821_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_8f10b3a945d370c01b4f6c256e9a5821_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_013848f00da7ec4d8fc376f8cf9fe7f4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_013848f00da7ec4d8fc376f8cf9fe7f4_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_27a1a173e7f5bad39e224831247cc1db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_27a1a173e7f5bad39e224831247cc1db);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ctypes);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1c97c3d2aeb9afbe25232fe62e25ee5f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_1c97c3d2aeb9afbe25232fe62e25ee5f_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_CFUNCTYPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CFUNCTYPE);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_POINTER);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_ubyte));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_ubyte);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_size_t));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_size_t);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_object_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_CustomTlsSigner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CustomTlsSigner);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c97c3d2aeb9afbe25232fe62e25ee5f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c97c3d2aeb9afbe25232fe62e25ee5f);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_int_pos_203));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_203);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc724b939ab1fb481af0a097c7b8124f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc724b939ab1fb481af0a097c7b8124f);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_libraries));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_libraries);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_7ab8a3f6069698d743b44fea91dc0f15));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7ab8a3f6069698d743b44fea91dc0f15);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_ff8286726f5d79ba3fe3cc74888aaf77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ff8286726f5d79ba3fe3cc74888aaf77);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b0bc3450e7766d2a81f8ca1b5e4c3d9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b0bc3450e7766d2a81f8ca1b5e4c3d9);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_attach_to_ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attach_to_ssl_context);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_dedcc9618f9f4fe80b0fc1188880b1dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dedcc9618f9f4fe80b0fc1188880b1dd);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_9b3f8505b5440c822978bf83c74b008e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9b3f8505b5440c822978bf83c74b008e_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_620ec7606f048e4b12460be9721c14bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_620ec7606f048e4b12460be9721c14bc);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_89ceccf00206bf5f92d0e4eabed9aa30));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89ceccf00206bf5f92d0e4eabed9aa30);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_enterprise_cert_file_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_enterprise_cert_file_path_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ssl_ctx_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ssl_ctx_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_context_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_context_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_8ff1e93e26f4bb1be9f6e04c721455da_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8ff1e93e26f4bb1be9f6e04c721455da_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_ctx_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_ctx_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_ff83ab3f6ef2ecbb46722d761295c27d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ff83ab3f6ef2ecbb46722d761295c27d_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_94a82a36ffc13a2482da2956a6e48420_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_94a82a36ffc13a2482da2956a6e48420_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_93259cea328b8c30a9448c5d7a68af70_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_93259cea328b8c30a9448c5d7a68af70_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_offload_lib_path_str_plain_lib_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_offload_lib_path_str_plain_lib_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_provider_lib_path_str_plain_lib_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_provider_lib_path_str_plain_lib_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_signer_lib_path_str_plain_lib_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_signer_lib_path_str_plain_lib_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_ce872f00fe3191332f3ef4636594ad3c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ce872f00fe3191332f3ef4636594ad3c_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_file_path_str_plain_signer_lib_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_config_file_path_str_plain_signer_lib_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 15
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
static PyObject *module_var_accessor_google$auth$transport$_custom_tls_signer$SIGN_CALLBACK_CTYPE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_SIGN_CALLBACK_CTYPE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_custom_tls_signer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SIGN_CALLBACK_CTYPE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SIGN_CALLBACK_CTYPE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SIGN_CALLBACK_CTYPE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SIGN_CALLBACK_CTYPE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_SIGN_CALLBACK_CTYPE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_SIGN_CALLBACK_CTYPE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SIGN_CALLBACK_CTYPE);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_custom_tls_signer$_LOGGER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_custom_tls_signer->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_custom_tls_signer$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_custom_tls_signer->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_custom_tls_signer$_cast_ssl_ctx_to_void_p_pyopenssl(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_pyopenssl);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_custom_tls_signer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_pyopenssl);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_pyopenssl, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_pyopenssl);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_pyopenssl, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_pyopenssl);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_pyopenssl);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_pyopenssl);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_custom_tls_signer$_cast_ssl_ctx_to_void_p_stdlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_stdlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_custom_tls_signer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_stdlib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_stdlib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_stdlib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_stdlib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_stdlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_stdlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_stdlib);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_custom_tls_signer$_compute_sha256_digest(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain__compute_sha256_digest);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_custom_tls_signer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__compute_sha256_digest);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__compute_sha256_digest, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__compute_sha256_digest);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__compute_sha256_digest, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain__compute_sha256_digest);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain__compute_sha256_digest);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__compute_sha256_digest);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_custom_tls_signer$cffi(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_cffi);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_custom_tls_signer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cffi);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cffi, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cffi);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cffi, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_cffi);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_cffi);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cffi);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_custom_tls_signer$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_custom_tls_signer->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_custom_tls_signer$get_cert(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_get_cert);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_custom_tls_signer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_cert);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_cert, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_cert);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_cert, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_get_cert);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_get_cert);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_cert);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_custom_tls_signer$get_sign_callback(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_get_sign_callback);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_custom_tls_signer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_sign_callback);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_sign_callback, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_sign_callback);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_sign_callback, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_get_sign_callback);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_get_sign_callback);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_sign_callback);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_custom_tls_signer$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_custom_tls_signer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_custom_tls_signer$load_offload_lib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_load_offload_lib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_custom_tls_signer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load_offload_lib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load_offload_lib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load_offload_lib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load_offload_lib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_load_offload_lib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_load_offload_lib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_load_offload_lib);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_custom_tls_signer$load_provider_lib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_load_provider_lib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_custom_tls_signer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load_provider_lib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load_provider_lib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load_provider_lib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load_provider_lib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_load_provider_lib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_load_provider_lib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_load_provider_lib);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_custom_tls_signer$load_signer_lib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_load_signer_lib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_custom_tls_signer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load_signer_lib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load_signer_lib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load_signer_lib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load_signer_lib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_load_signer_lib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_load_signer_lib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_load_signer_lib);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_custom_tls_signer$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_custom_tls_signer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_custom_tls_signer->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f520463710c64bb155840b8095de486c;
static PyCodeObject *code_objects_04998e3638e19032f3e944b248ab12f0;
static PyCodeObject *code_objects_39d3a955baa72df1d332b7f4a5dd5ee1;
static PyCodeObject *code_objects_2fcd8852781813bfb152f555a981ca0e;
static PyCodeObject *code_objects_3b0dd872d3da74956bfab26c524dc7b7;
static PyCodeObject *code_objects_21249a137c3e8edac20fcef74853776f;
static PyCodeObject *code_objects_e899eb5cf2778b93ea9fd203514480f5;
static PyCodeObject *code_objects_aca74d6c8ea7c90c5b79568863c27978;
static PyCodeObject *code_objects_725898229a4c3dd4a45be47a62f2220d;
static PyCodeObject *code_objects_7316b895bf356e6be43c6dd58f1931d5;
static PyCodeObject *code_objects_10c40e4f23f9858c856ccc81709c9588;
static PyCodeObject *code_objects_ea4f88dd81cdbb950c0bba8a321b4bc0;
static PyCodeObject *code_objects_fefd79554a5f288b6baabd98cb017623;
static PyCodeObject *code_objects_36d585cabf64adc7478bfb7180fcdce7;
static PyCodeObject *code_objects_04d3dac0b3eab07c1507d9f4cd92ee48;
static PyCodeObject *code_objects_9bf0e6a3b0a52de0c4e72dd8251be7ef;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_620ec7606f048e4b12460be9721c14bc); CHECK_OBJECT(module_filename_obj);
code_objects_f520463710c64bb155840b8095de486c = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_89ceccf00206bf5f92d0e4eabed9aa30, mod_consts.const_str_digest_89ceccf00206bf5f92d0e4eabed9aa30, NULL, NULL, 0, 0, 0);
code_objects_04998e3638e19032f3e944b248ab12f0 = MAKE_CODE_OBJECT(module_filename_obj, 203, 0, mod_consts.const_str_plain_CustomTlsSigner, mod_consts.const_str_plain_CustomTlsSigner, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_39d3a955baa72df1d332b7f4a5dd5ee1 = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_dc724b939ab1fb481af0a097c7b8124f, mod_consts.const_tuple_str_plain_self_str_plain_enterprise_cert_file_path_tuple, NULL, 2, 0, 0);
code_objects_2fcd8852781813bfb152f555a981ca0e = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_pyopenssl, mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_pyopenssl, mod_consts.const_tuple_str_plain_ssl_ctx_tuple, NULL, 1, 0, 0);
code_objects_3b0dd872d3da74956bfab26c524dc7b7 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_stdlib, mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_stdlib, mod_consts.const_tuple_str_plain_context_tuple, NULL, 1, 0, 0);
code_objects_21249a137c3e8edac20fcef74853776f = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__compute_sha256_digest, mod_consts.const_str_plain__compute_sha256_digest, mod_consts.const_tuple_8ff1e93e26f4bb1be9f6e04c721455da_tuple, NULL, 2, 0, 0);
code_objects_e899eb5cf2778b93ea9fd203514480f5 = MAKE_CODE_OBJECT(module_filename_obj, 264, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_attach_to_ssl_context, mod_consts.const_str_digest_dedcc9618f9f4fe80b0fc1188880b1dd, mod_consts.const_tuple_str_plain_self_str_plain_ctx_tuple, NULL, 2, 0, 0);
code_objects_aca74d6c8ea7c90c5b79568863c27978 = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_cert, mod_consts.const_str_plain_get_cert, mod_consts.const_tuple_ff83ab3f6ef2ecbb46722d761295c27d_tuple, NULL, 2, 0, 0);
code_objects_725898229a4c3dd4a45be47a62f2220d = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_sign_callback, mod_consts.const_str_plain_get_sign_callback, mod_consts.const_tuple_94a82a36ffc13a2482da2956a6e48420_tuple, NULL, 2, 0, 0);
code_objects_7316b895bf356e6be43c6dd58f1931d5 = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_load_libraries, mod_consts.const_str_digest_7ab8a3f6069698d743b44fea91dc0f15, mod_consts.const_tuple_93259cea328b8c30a9448c5d7a68af70_tuple, NULL, 1, 0, 0);
code_objects_10c40e4f23f9858c856ccc81709c9588 = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_load_offload_lib, mod_consts.const_str_plain_load_offload_lib, mod_consts.const_tuple_str_plain_offload_lib_path_str_plain_lib_tuple, NULL, 1, 0, 0);
code_objects_ea4f88dd81cdbb950c0bba8a321b4bc0 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_load_provider_lib, mod_consts.const_str_plain_load_provider_lib, mod_consts.const_tuple_str_plain_provider_lib_path_str_plain_lib_tuple, NULL, 1, 0, 0);
code_objects_fefd79554a5f288b6baabd98cb017623 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_load_signer_lib, mod_consts.const_str_plain_load_signer_lib, mod_consts.const_tuple_str_plain_signer_lib_path_str_plain_lib_tuple, NULL, 1, 0, 0);
code_objects_36d585cabf64adc7478bfb7180fcdce7 = MAKE_CODE_OBJECT(module_filename_obj, 251, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_set_up_custom_key, mod_consts.const_str_digest_ff8286726f5d79ba3fe3cc74888aaf77, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_04d3dac0b3eab07c1507d9f4cd92ee48 = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_should_use_provider, mod_consts.const_str_digest_5b0bc3450e7766d2a81f8ca1b5e4c3d9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_9bf0e6a3b0a52de0c4e72dd8251be7ef = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_sign_callback, mod_consts.const_str_digest_d4f1a2a4bd4b6ba35219848c63e0c747, mod_consts.const_tuple_ce872f00fe3191332f3ef4636594ad3c_tuple, mod_consts.const_tuple_str_plain_config_file_path_str_plain_signer_lib_tuple, 4, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__8_get_cert(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__9___init__(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ssl_ctx = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl = MAKE_FUNCTION_FRAME(tstate, code_objects_2fcd8852781813bfb152f555a981ca0e, module_google$auth$transport$_custom_tls_signer, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl->m_type_description == NULL);
frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl = cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl);
assert(Py_REFCNT(frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_int_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_cast);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = module_var_accessor_google$auth$transport$_custom_tls_signer$cffi(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cffi);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 50;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl->m_frame.f_lineno = 50;
tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_FFI);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 50;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_intptr_t;
CHECK_OBJECT(par_ssl_ctx);
tmp_args_element_value_3 = par_ssl_ctx;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl->m_frame.f_lineno = 50;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_int_arg_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_cast,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 50;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 50;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_c_void_p);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 50;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl->m_frame.f_lineno = 50;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl,
    type_description_1,
    par_ssl_ctx
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl == cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl);
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_ssl_ctx);
Py_DECREF(par_ssl_ctx);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ssl_ctx);
Py_DECREF(par_ssl_ctx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_context = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib = MAKE_FUNCTION_FRAME(tstate, code_objects_3b0dd872d3da74956bfab26c524dc7b7, module_google$auth$transport$_custom_tls_signer, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib->m_type_description == NULL);
frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib = cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib);
assert(Py_REFCNT(frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_id_arg_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_c_void_p);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_from_address);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_context);
tmp_id_arg_1 = par_context;
tmp_add_expr_left_1 = PyLong_FromVoidPtr(tmp_id_arg_1);
assert(!(tmp_add_expr_left_1 == NULL));
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sizeof);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 56;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_4 == NULL));
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_c_void_p);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 56;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib->m_frame.f_lineno = 56;
tmp_mult_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 56;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = mod_consts.const_int_pos_2;
tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 56;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 56;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib->m_frame.f_lineno = 55;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib,
    type_description_1,
    par_context
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib == cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib);
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_context);
Py_DECREF(par_context);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_context);
Py_DECREF(par_context);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_offload_lib_path = python_pars[0];
PyObject *var_lib = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_ctypes_cdll_class;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib = MAKE_FUNCTION_FRAME(tstate, code_objects_10c40e4f23f9858c856ccc81709c9588, module_google$auth$transport$_custom_tls_signer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib->m_type_description == NULL);
frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib = cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib);
assert(Py_REFCNT(frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_google$auth$transport$_custom_tls_signer$_LOGGER(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_c4a5e9917fef14955a18bc560bc5888b;
CHECK_OBJECT(par_offload_lib_path);
tmp_args_element_value_2 = par_offload_lib_path;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib->m_frame.f_lineno = 62;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_winmode_value_1;
{
    PyObject *hard_module = IMPORT_HARD_CTYPES();
    tmp_ctypes_cdll_class = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_CDLL);
}
assert(!(tmp_ctypes_cdll_class == NULL));
CHECK_OBJECT(par_offload_lib_path);
tmp_name_value_1 = par_offload_lib_path;
tmp_winmode_value_1 = const_int_0;
{
    PyObject *args[] = {tmp_name_value_1,NULL,NULL,NULL,NULL,tmp_winmode_value_1};
    char const *arg_names[] = {"name","mode","handle","use_errno","use_last_error","winmode"};

    tmp_assign_source_1 = CALL_BUILTIN_KW_ARGS(
        tstate,
        tmp_ctypes_cdll_class,
        args,
        arg_names,
        sizeof(args) / sizeof(PyObject *),
        0
    );
}

CHECK_OBJECT(tmp_ctypes_cdll_class);
Py_DECREF(tmp_ctypes_cdll_class);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_lib == NULL);
var_lib = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_list_element_1;
PyObject *tmp_assattr_target_1;
PyObject *tmp_expression_value_3;
tmp_list_element_1 = module_var_accessor_google$auth$transport$_custom_tls_signer$SIGN_CALLBACK_CTYPE(tstate);
if (unlikely(tmp_list_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SIGN_CALLBACK_CTYPE);
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyList_SET_ITEM0(tmp_assattr_value_1, 0, tmp_list_element_1);
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_c_char_p);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assattr_value_1, 1, tmp_list_element_1);
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_c_void_p);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assattr_value_1, 2, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assattr_value_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
CHECK_OBJECT(var_lib);
tmp_expression_value_3 = var_lib;
tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ConfigureSslContext);
if (tmp_assattr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assattr_value_1);

exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_argtypes, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_target_1);
Py_DECREF(tmp_assattr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_2;
PyObject *tmp_expression_value_5;
tmp_expression_value_4 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_4 == NULL));
tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_c_int);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_lib);
tmp_expression_value_5 = var_lib;
tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ConfigureSslContext);
if (tmp_assattr_target_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assattr_value_2);

exception_lineno = 78;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_restype, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_target_2);
Py_DECREF(tmp_assattr_target_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib,
    type_description_1,
    par_offload_lib_path,
    var_lib
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib == cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib);
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_lib);
tmp_return_value = var_lib;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_lib);
CHECK_OBJECT(var_lib);
Py_DECREF(var_lib);
var_lib = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_lib);
var_lib = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_offload_lib_path);
Py_DECREF(par_offload_lib_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_offload_lib_path);
Py_DECREF(par_offload_lib_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_signer_lib_path = python_pars[0];
PyObject *var_lib = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_ctypes_cdll_class;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib = MAKE_FUNCTION_FRAME(tstate, code_objects_fefd79554a5f288b6baabd98cb017623, module_google$auth$transport$_custom_tls_signer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib->m_type_description == NULL);
frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib = cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib);
assert(Py_REFCNT(frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_google$auth$transport$_custom_tls_signer$_LOGGER(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_07278526cc543d585feefff620d84d8e;
CHECK_OBJECT(par_signer_lib_path);
tmp_args_element_value_2 = par_signer_lib_path;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib->m_frame.f_lineno = 86;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_winmode_value_1;
{
    PyObject *hard_module = IMPORT_HARD_CTYPES();
    tmp_ctypes_cdll_class = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_CDLL);
}
assert(!(tmp_ctypes_cdll_class == NULL));
CHECK_OBJECT(par_signer_lib_path);
tmp_name_value_1 = par_signer_lib_path;
tmp_winmode_value_1 = const_int_0;
{
    PyObject *args[] = {tmp_name_value_1,NULL,NULL,NULL,NULL,tmp_winmode_value_1};
    char const *arg_names[] = {"name","mode","handle","use_errno","use_last_error","winmode"};

    tmp_assign_source_1 = CALL_BUILTIN_KW_ARGS(
        tstate,
        tmp_ctypes_cdll_class,
        args,
        arg_names,
        sizeof(args) / sizeof(PyObject *),
        0
    );
}

CHECK_OBJECT(tmp_ctypes_cdll_class);
Py_DECREF(tmp_ctypes_cdll_class);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_lib == NULL);
var_lib = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_1;
PyObject *tmp_expression_value_4;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_c_char_p);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyList_SET_ITEM(tmp_assattr_value_1, 0, tmp_list_element_1);
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_c_char_p);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assattr_value_1, 1, tmp_list_element_1);
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_c_int);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assattr_value_1, 2, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assattr_value_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
CHECK_OBJECT(var_lib);
tmp_expression_value_4 = var_lib;
tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_GetCertPemForPython);
if (tmp_assattr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assattr_value_1);

exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_argtypes, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_target_1);
Py_DECREF(tmp_assattr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_assattr_target_2;
PyObject *tmp_expression_value_6;
tmp_expression_value_5 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_5 == NULL));
tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_c_int);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_lib);
tmp_expression_value_6 = var_lib;
tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_GetCertPemForPython);
if (tmp_assattr_target_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assattr_value_2);

exception_lineno = 99;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_restype, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_target_2);
Py_DECREF(tmp_assattr_target_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_list_element_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_assattr_target_3;
PyObject *tmp_expression_value_12;
tmp_expression_value_7 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_7 == NULL));
tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_c_char_p);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_3 = MAKE_LIST_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyList_SET_ITEM(tmp_assattr_value_3, 0, tmp_list_element_2);
tmp_expression_value_8 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_8 == NULL));
tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_c_char_p);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oo";
    goto list_build_exception_2;
}
PyList_SET_ITEM(tmp_assattr_value_3, 1, tmp_list_element_2);
tmp_expression_value_9 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_9 == NULL));
tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_c_int);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oo";
    goto list_build_exception_2;
}
PyList_SET_ITEM(tmp_assattr_value_3, 2, tmp_list_element_2);
tmp_expression_value_10 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_10 == NULL));
tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_c_char_p);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oo";
    goto list_build_exception_2;
}
PyList_SET_ITEM(tmp_assattr_value_3, 3, tmp_list_element_2);
tmp_expression_value_11 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_11 == NULL));
tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_c_int);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oo";
    goto list_build_exception_2;
}
PyList_SET_ITEM(tmp_assattr_value_3, 4, tmp_list_element_2);
}
goto list_build_no_exception_2;
// Exception handling pass through code for list_build:
list_build_exception_2:;
Py_DECREF(tmp_assattr_value_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_2:;
CHECK_OBJECT(var_lib);
tmp_expression_value_12 = var_lib;
tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_SignForPython);
if (tmp_assattr_target_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assattr_value_3);

exception_lineno = 104;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_argtypes, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_target_3);
Py_DECREF(tmp_assattr_target_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_expression_value_13;
PyObject *tmp_assattr_target_4;
PyObject *tmp_expression_value_14;
tmp_expression_value_13 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_13 == NULL));
tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_c_int);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_lib);
tmp_expression_value_14 = var_lib;
tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_SignForPython);
if (tmp_assattr_target_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assattr_value_4);

exception_lineno = 112;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_restype, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_target_4);
Py_DECREF(tmp_assattr_target_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib,
    type_description_1,
    par_signer_lib_path,
    var_lib
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib == cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib);
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_lib);
tmp_return_value = var_lib;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_lib);
CHECK_OBJECT(var_lib);
Py_DECREF(var_lib);
var_lib = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_lib);
var_lib = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_signer_lib_path);
Py_DECREF(par_signer_lib_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_signer_lib_path);
Py_DECREF(par_signer_lib_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_provider_lib_path = python_pars[0];
PyObject *var_lib = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_ctypes_cdll_class;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib = MAKE_FUNCTION_FRAME(tstate, code_objects_ea4f88dd81cdbb950c0bba8a321b4bc0, module_google$auth$transport$_custom_tls_signer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib->m_type_description == NULL);
frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib = cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib);
assert(Py_REFCNT(frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_google$auth$transport$_custom_tls_signer$_LOGGER(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_5291f45c5220c918f684370ddb51aed0;
CHECK_OBJECT(par_provider_lib_path);
tmp_args_element_value_2 = par_provider_lib_path;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib->m_frame.f_lineno = 118;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_winmode_value_1;
{
    PyObject *hard_module = IMPORT_HARD_CTYPES();
    tmp_ctypes_cdll_class = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_CDLL);
}
assert(!(tmp_ctypes_cdll_class == NULL));
CHECK_OBJECT(par_provider_lib_path);
tmp_name_value_1 = par_provider_lib_path;
tmp_winmode_value_1 = const_int_0;
{
    PyObject *args[] = {tmp_name_value_1,NULL,NULL,NULL,NULL,tmp_winmode_value_1};
    char const *arg_names[] = {"name","mode","handle","use_errno","use_last_error","winmode"};

    tmp_assign_source_1 = CALL_BUILTIN_KW_ARGS(
        tstate,
        tmp_ctypes_cdll_class,
        args,
        arg_names,
        sizeof(args) / sizeof(PyObject *),
        0
    );
}

CHECK_OBJECT(tmp_ctypes_cdll_class);
Py_DECREF(tmp_ctypes_cdll_class);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_lib == NULL);
var_lib = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_c_void_p);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyList_SET_ITEM(tmp_assattr_value_1, 0, tmp_list_element_1);
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_c_char_p);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assattr_value_1, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assattr_value_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
CHECK_OBJECT(var_lib);
tmp_expression_value_3 = var_lib;
tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ECP_attach_to_ctx);
if (tmp_assattr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assattr_value_1);

exception_lineno = 127;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_argtypes, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_target_1);
Py_DECREF(tmp_assattr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_2;
PyObject *tmp_expression_value_5;
tmp_expression_value_4 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_4 == NULL));
tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_c_int);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_lib);
tmp_expression_value_5 = var_lib;
tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ECP_attach_to_ctx);
if (tmp_assattr_target_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assattr_value_2);

exception_lineno = 128;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_restype, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_target_2);
Py_DECREF(tmp_assattr_target_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib,
    type_description_1,
    par_provider_lib_path,
    var_lib
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib == cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib);
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_lib);
tmp_return_value = var_lib;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_lib);
CHECK_OBJECT(var_lib);
Py_DECREF(var_lib);
var_lib = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_lib);
var_lib = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_provider_lib_path);
Py_DECREF(par_provider_lib_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_provider_lib_path);
Py_DECREF(par_provider_lib_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_to_be_signed = python_pars[0];
PyObject *par_to_be_signed_len = python_pars[1];
PyObject *var_hashes = NULL;
PyObject *var_data = NULL;
PyObject *var_hash = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest = MAKE_FUNCTION_FRAME(tstate, code_objects_21249a137c3e8edac20fcef74853776f, module_google$auth$transport$_custom_tls_signer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest->m_type_description == NULL);
frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest = cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest);
assert(Py_REFCNT(frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$transport$_custom_tls_signer;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_hashes_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest->m_frame.f_lineno = 135;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$transport$_custom_tls_signer,
        mod_consts.const_str_plain_hashes,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_hashes);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_hashes == NULL);
var_hashes = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(par_to_be_signed);
tmp_args_element_value_1 = par_to_be_signed;
CHECK_OBJECT(par_to_be_signed_len);
tmp_args_element_value_2 = par_to_be_signed_len;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest->m_frame.f_lineno = 137;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_string_at,
        call_args
    );
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_hashes);
tmp_expression_value_1 = var_hashes;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Hash);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_hashes);
tmp_called_instance_2 = var_hashes;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest->m_frame.f_lineno = 138;
tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_SHA256);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 138;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest->m_frame.f_lineno = 138;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_hash == NULL);
var_hash = tmp_assign_source_3;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_hash);
tmp_expression_value_2 = var_hash;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_update);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_args_element_value_4 = var_data;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest->m_frame.f_lineno = 139;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_hash);
tmp_called_instance_3 = var_hash;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest->m_frame.f_lineno = 140;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_finalize);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest,
    type_description_1,
    par_to_be_signed,
    par_to_be_signed_len,
    var_hashes,
    var_data,
    var_hash
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest == cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest);
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_hashes);
CHECK_OBJECT(var_hashes);
Py_DECREF(var_hashes);
var_hashes = NULL;
CHECK_OBJECT(var_data);
CHECK_OBJECT(var_data);
Py_DECREF(var_data);
var_data = NULL;
CHECK_OBJECT(var_hash);
CHECK_OBJECT(var_hash);
Py_DECREF(var_hash);
var_hash = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_hashes);
var_hashes = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_hash);
var_hash = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_to_be_signed);
Py_DECREF(par_to_be_signed);
CHECK_OBJECT(par_to_be_signed_len);
Py_DECREF(par_to_be_signed_len);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_to_be_signed);
Py_DECREF(par_to_be_signed);
CHECK_OBJECT(par_to_be_signed_len);
Py_DECREF(par_to_be_signed_len);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_signer_lib = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_config_file_path = Nuitka_Cell_New1(python_pars[1]);
PyObject *var_sign_callback = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_config_file_path;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_signer_lib;
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_1 = MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback(tstate, tmp_closure_1);

assert(var_sign_callback == NULL);
var_sign_callback = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback = MAKE_FUNCTION_FRAME(tstate, code_objects_725898229a4c3dd4a45be47a62f2220d, module_google$auth$transport$_custom_tls_signer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback->m_type_description == NULL);
frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback = cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback);
assert(Py_REFCNT(frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_google$auth$transport$_custom_tls_signer$SIGN_CALLBACK_CTYPE(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SIGN_CALLBACK_CTYPE);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_sign_callback);
tmp_args_element_value_1 = var_sign_callback;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback->m_frame.f_lineno = 176;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "cco";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback,
    type_description_1,
    par_signer_lib,
    par_config_file_path,
    var_sign_callback
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback == cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback);
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_signer_lib);
CHECK_OBJECT(par_signer_lib);
Py_DECREF(par_signer_lib);
par_signer_lib = NULL;
CHECK_OBJECT(par_config_file_path);
CHECK_OBJECT(par_config_file_path);
Py_DECREF(par_config_file_path);
par_config_file_path = NULL;
CHECK_OBJECT(var_sign_callback);
CHECK_OBJECT(var_sign_callback);
Py_DECREF(var_sign_callback);
var_sign_callback = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_signer_lib);
CHECK_OBJECT(par_signer_lib);
Py_DECREF(par_signer_lib);
par_signer_lib = NULL;
CHECK_OBJECT(par_config_file_path);
CHECK_OBJECT(par_config_file_path);
Py_DECREF(par_config_file_path);
par_config_file_path = NULL;
CHECK_OBJECT(var_sign_callback);
CHECK_OBJECT(var_sign_callback);
Py_DECREF(var_sign_callback);
var_sign_callback = NULL;
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


static PyObject *impl_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_sig = python_pars[0];
PyObject *par_sig_len = python_pars[1];
PyObject *par_tbs = python_pars[2];
PyObject *par_tbs_len = python_pars[3];
PyObject *var_digest = NULL;
PyObject *var_digestArray = NULL;
PyObject *var_sig_holder = NULL;
PyObject *var_signature_len = NULL;
PyObject *var_bs = NULL;
PyObject *var_i = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback = MAKE_FUNCTION_FRAME(tstate, code_objects_9bf0e6a3b0a52de0c4e72dd8251be7ef, module_google$auth$transport$_custom_tls_signer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback->m_type_description == NULL);
frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback = cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback);
assert(Py_REFCNT(frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
tmp_called_instance_1 = module_var_accessor_google$auth$transport$_custom_tls_signer$_LOGGER(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback->m_frame.f_lineno = 147;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_debug,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_36f68621c23e36744500a686365b4abb_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$auth$transport$_custom_tls_signer$_compute_sha256_digest(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__compute_sha256_digest);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tbs);
tmp_args_element_value_1 = par_tbs;
CHECK_OBJECT(par_tbs_len);
tmp_args_element_value_2 = par_tbs_len;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback->m_frame.f_lineno = 149;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
assert(var_digest == NULL);
var_digest = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_len_arg_1;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_c_char);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_digest);
tmp_len_arg_1 = var_digest;
tmp_mult_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 150;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
assert(var_digestArray == NULL);
var_digestArray = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_2 == NULL));
frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback->m_frame.f_lineno = 155;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_create_string_buffer,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2000_tuple, 0)
);

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
assert(var_sig_holder == NULL);
var_sig_holder = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_bytearray_arg_1;
PyObject *tmp_args_element_value_6;
PyObject *tmp_len_arg_2;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_signer_lib);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 157;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_SignForPython);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_config_file_path);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 158;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_encode);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 158;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback->m_frame.f_lineno = 158;
tmp_args_element_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 158;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_digestArray);
tmp_expression_value_4 = var_digestArray;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_from_buffer);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 159;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_digest);
tmp_bytearray_arg_1 = var_digest;
tmp_args_element_value_5 = BUILTIN_BYTEARRAY1(tmp_bytearray_arg_1);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_called_value_4);

exception_lineno = 159;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback->m_frame.f_lineno = 159;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 159;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_digest);
tmp_len_arg_2 = var_digest;
tmp_args_element_value_6 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 160;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_sig_holder);
tmp_args_element_value_7 = var_sig_holder;
tmp_args_element_value_8 = mod_consts.const_int_pos_2000;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback->m_frame.f_lineno = 157;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
assert(var_signature_len == NULL);
var_signature_len = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_signature_len);
tmp_cmp_expr_left_1 = var_signature_len;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = const_int_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
int tmp_ass_subscript_res_1;
CHECK_OBJECT(var_signature_len);
tmp_ass_subvalue_1 = var_signature_len;
CHECK_OBJECT(par_sig_len);
tmp_ass_subscribed_1 = par_sig_len;
tmp_ass_subscript_1 = const_int_0;
tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
if (tmp_ass_subscript_res_1 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_bytearray_arg_2;
CHECK_OBJECT(var_sig_holder);
tmp_bytearray_arg_2 = var_sig_holder;
tmp_assign_source_5 = BUILTIN_BYTEARRAY1(tmp_bytearray_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
assert(var_bs == NULL);
var_bs = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
CHECK_OBJECT(var_signature_len);
tmp_xrange_low_1 = var_signature_len;
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooooooNoooocc";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_6;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooNoooocc";
exception_lineno = 171;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_8 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_8;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_bs);
tmp_expression_value_5 = var_bs;
CHECK_OBJECT(var_i);
tmp_subscript_value_1 = var_i;
tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "ooooooNoooocc";
    goto try_except_handler_2;
}
if (par_sig == NULL) {
Py_DECREF(tmp_ass_subvalue_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sig);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 172;
type_description_1 = "ooooooNoooocc";
    goto try_except_handler_2;
}

tmp_ass_subscribed_2 = par_sig;
CHECK_OBJECT(var_i);
tmp_ass_subscript_2 = var_i;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "ooooooNoooocc";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooooooNoooocc";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback,
    type_description_1,
    par_sig,
    par_sig_len,
    par_tbs,
    par_tbs_len,
    var_digest,
    var_digestArray,
    NULL,
    var_sig_holder,
    var_signature_len,
    var_bs,
    var_i,
    self->m_closure[1],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback == cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback);
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback);

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
tmp_return_value = const_int_pos_1;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_digest);
CHECK_OBJECT(var_digest);
Py_DECREF(var_digest);
var_digest = NULL;
CHECK_OBJECT(var_digestArray);
CHECK_OBJECT(var_digestArray);
Py_DECREF(var_digestArray);
var_digestArray = NULL;
CHECK_OBJECT(var_sig_holder);
CHECK_OBJECT(var_sig_holder);
Py_DECREF(var_sig_holder);
var_sig_holder = NULL;
CHECK_OBJECT(var_signature_len);
CHECK_OBJECT(var_signature_len);
Py_DECREF(var_signature_len);
var_signature_len = NULL;
Py_XDECREF(var_bs);
var_bs = NULL;
Py_XDECREF(var_i);
var_i = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_digest);
var_digest = NULL;
Py_XDECREF(var_digestArray);
var_digestArray = NULL;
Py_XDECREF(var_sig_holder);
var_sig_holder = NULL;
Py_XDECREF(var_signature_len);
var_signature_len = NULL;
Py_XDECREF(var_bs);
var_bs = NULL;
Py_XDECREF(var_i);
var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_sig);
Py_DECREF(par_sig);
CHECK_OBJECT(par_sig_len);
Py_DECREF(par_sig_len);
CHECK_OBJECT(par_tbs);
Py_DECREF(par_tbs);
CHECK_OBJECT(par_tbs_len);
Py_DECREF(par_tbs_len);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_sig);
Py_DECREF(par_sig);
CHECK_OBJECT(par_sig_len);
Py_DECREF(par_sig_len);
CHECK_OBJECT(par_tbs);
Py_DECREF(par_tbs);
CHECK_OBJECT(par_tbs_len);
Py_DECREF(par_tbs_len);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_custom_tls_signer$$$function__8_get_cert(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_signer_lib = python_pars[0];
PyObject *par_config_file_path = python_pars[1];
PyObject *var_cert_len = NULL;
PyObject *var_cert_holder = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert = MAKE_FUNCTION_FRAME(tstate, code_objects_aca74d6c8ea7c90c5b79568863c27978, module_google$auth$transport$_custom_tls_signer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert->m_type_description == NULL);
frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert = cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert);
assert(Py_REFCNT(frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_signer_lib);
tmp_expression_value_1 = par_signer_lib;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_GetCertPemForPython);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_config_file_path);
tmp_expression_value_2 = par_config_file_path;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_encode);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 186;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert->m_frame.f_lineno = 186;
tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 186;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = Py_None;
tmp_args_element_value_3 = const_int_0;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert->m_frame.f_lineno = 185;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_cert_len == NULL);
var_cert_len = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_cert_len);
tmp_cmp_expr_left_1 = var_cert_len;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooo";
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
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$transport$_custom_tls_signer$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert->m_frame.f_lineno = 191;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_MutualTLSChannelError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_3da8512f537d2e890e5fdc1ad8aeffab_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 191;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_4;
tmp_called_instance_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(var_cert_len);
tmp_args_element_value_4 = var_cert_len;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert->m_frame.f_lineno = 194;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_create_string_buffer, tmp_args_element_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_cert_holder == NULL);
var_cert_holder = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(par_signer_lib);
tmp_expression_value_3 = par_signer_lib;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_GetCertPemForPython);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_config_file_path);
tmp_expression_value_4 = par_config_file_path;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_encode);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 196;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert->m_frame.f_lineno = 196;
tmp_args_element_value_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 196;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cert_holder);
tmp_args_element_value_6 = var_cert_holder;
CHECK_OBJECT(var_cert_len);
tmp_args_element_value_7 = var_cert_len;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert->m_frame.f_lineno = 195;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_bytes_arg_1;
CHECK_OBJECT(var_cert_holder);
tmp_bytes_arg_1 = var_cert_holder;
tmp_return_value = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert,
    type_description_1,
    par_signer_lib,
    par_config_file_path,
    var_cert_len,
    var_cert_holder
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert == cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert);
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_custom_tls_signer$$$function__8_get_cert);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cert_len);
CHECK_OBJECT(var_cert_len);
Py_DECREF(var_cert_len);
var_cert_len = NULL;
CHECK_OBJECT(var_cert_holder);
CHECK_OBJECT(var_cert_holder);
Py_DECREF(var_cert_holder);
var_cert_holder = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cert_len);
var_cert_len = NULL;
Py_XDECREF(var_cert_holder);
var_cert_holder = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_signer_lib);
Py_DECREF(par_signer_lib);
CHECK_OBJECT(par_config_file_path);
Py_DECREF(par_config_file_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_signer_lib);
Py_DECREF(par_signer_lib);
CHECK_OBJECT(par_config_file_path);
Py_DECREF(par_config_file_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_custom_tls_signer$$$function__9___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_enterprise_cert_file_path = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_39d3a955baa72df1d332b7f4a5dd5ee1, module_google$auth$transport$_custom_tls_signer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__->m_type_description == NULL);
frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__ = cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__);
assert(Py_REFCNT(frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_enterprise_cert_file_path);
tmp_assattr_value_1 = par_enterprise_cert_file_path;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__enterprise_cert_file_path, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__cert, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__sign_callback, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__provider_lib, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__,
    type_description_1,
    par_self,
    par_enterprise_cert_file_path
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__ == cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__);
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_custom_tls_signer$$$function__9___init__);

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
CHECK_OBJECT(par_enterprise_cert_file_path);
Py_DECREF(par_enterprise_cert_file_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_enterprise_cert_file_path);
Py_DECREF(par_enterprise_cert_file_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_f = NULL;
PyObject *var_enterprise_cert_json = NULL;
PyObject *var_libs = NULL;
PyObject *var_signer_library = NULL;
PyObject *var_offload_library = NULL;
PyObject *var_provider_library = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries = MAKE_FUNCTION_FRAME(tstate, code_objects_7316b895bf356e6be43c6dd58f1931d5, module_google$auth$transport$_custom_tls_signer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_type_description == NULL);
frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries = cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries);
assert(Py_REFCNT(frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_open_filename_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_open_mode_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_open_filename_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__enterprise_cert_file_path);
if (tmp_open_filename_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_open_mode_1 = const_str_plain_r;
tmp_assign_source_1 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
CHECK_OBJECT(tmp_open_filename_1);
Py_DECREF(tmp_open_filename_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame.f_lineno = 228;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
assert(var_f == NULL);
Py_INCREF(tmp_assign_source_5);
var_f = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_google$auth$transport$_custom_tls_signer$json(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_f);
tmp_args_element_value_1 = var_f;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame.f_lineno = 229;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load, tmp_args_element_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
assert(var_enterprise_cert_json == NULL);
var_enterprise_cert_json = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_arg_element_1;
PyObject *tmp_call_arg_element_2;
CHECK_OBJECT(var_enterprise_cert_json);
tmp_expression_value_4 = var_enterprise_cert_json;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_call_arg_element_1 = mod_consts.const_str_plain_libs;
tmp_call_arg_element_2 = MAKE_DICT_EMPTY(tstate);
frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame.f_lineno = 230;
{
    PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
assert(var_libs == NULL);
var_libs = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_libs);
tmp_expression_value_5 = var_libs;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame.f_lineno = 232;
tmp_assign_source_8 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_ecp_client_none_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
assert(var_signer_library == NULL);
var_signer_library = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_libs);
tmp_expression_value_6 = var_libs;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame.f_lineno = 233;
tmp_assign_source_9 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_tls_offload_none_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
assert(var_offload_library == NULL);
var_offload_library = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_libs);
tmp_expression_value_7 = var_libs;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame.f_lineno = 234;
tmp_assign_source_10 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_ecp_provider_none_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
assert(var_provider_library == NULL);
var_provider_library = tmp_assign_source_10;
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_11;
tmp_assign_source_11 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_11;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame.f_lineno = 228;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
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
    exception_lineno = 228;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame)) {
        frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 228;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame)) {
        frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_5;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
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
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame.f_lineno = 228;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 228;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
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
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame.f_lineno = 228;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_1;
if (var_provider_library == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_provider_library);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 238;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(var_provider_library);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_5;
PyObject *tmp_assattr_target_1;
tmp_called_value_9 = module_var_accessor_google$auth$transport$_custom_tls_signer$load_provider_lib(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_load_provider_lib);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (var_provider_library == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_provider_library);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 239;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = var_provider_library;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame.f_lineno = 239;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_5);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__provider_lib, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_2;
int tmp_truth_name_3;
if (var_offload_library == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offload_library);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 243;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(var_offload_library);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (var_signer_library == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_signer_library);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 243;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_3 = CHECK_IF_TRUE(var_signer_library);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_6 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_6 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_6;
PyObject *tmp_assattr_target_2;
tmp_called_value_10 = module_var_accessor_google$auth$transport$_custom_tls_signer$load_offload_lib(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_load_offload_lib);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (var_offload_library == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offload_library);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 244;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = var_offload_library;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame.f_lineno = 244;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_6);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__offload_lib, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_7;
PyObject *tmp_assattr_target_3;
tmp_called_value_11 = module_var_accessor_google$auth$transport$_custom_tls_signer$load_signer_lib(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_load_signer_lib);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (var_signer_library == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_signer_library);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 245;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_7 = var_signer_library;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame.f_lineno = 245;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_7);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__signer_lib, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame.f_lineno = 246;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_set_up_custom_key);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_6:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_google$auth$transport$_custom_tls_signer$exceptions(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 249;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame.f_lineno = 249;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_MutualTLSChannelError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_aeae1576b914573c83d9b8e6404c528c_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 249;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries,
    type_description_1,
    par_self,
    var_f,
    var_enterprise_cert_json,
    var_libs,
    var_signer_library,
    var_offload_library,
    var_provider_library
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries == cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries);
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_f);
CHECK_OBJECT(var_f);
Py_DECREF(var_f);
var_f = NULL;
Py_XDECREF(var_enterprise_cert_json);
var_enterprise_cert_json = NULL;
Py_XDECREF(var_libs);
var_libs = NULL;
Py_XDECREF(var_signer_library);
var_signer_library = NULL;
Py_XDECREF(var_offload_library);
var_offload_library = NULL;
Py_XDECREF(var_provider_library);
var_provider_library = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_enterprise_cert_json);
var_enterprise_cert_json = NULL;
Py_XDECREF(var_libs);
var_libs = NULL;
Py_XDECREF(var_signer_library);
var_signer_library = NULL;
Py_XDECREF(var_offload_library);
var_offload_library = NULL;
Py_XDECREF(var_provider_library);
var_provider_library = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

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


static PyObject *impl_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key = MAKE_FUNCTION_FRAME(tstate, code_objects_36d585cabf64adc7478bfb7180fcdce7, module_google$auth$transport$_custom_tls_signer, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key->m_type_description == NULL);
frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key = cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key);
assert(Py_REFCNT(frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_1;
tmp_called_value_1 = module_var_accessor_google$auth$transport$_custom_tls_signer$get_cert(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_cert);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__signer_lib);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__enterprise_cert_file_path);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 254;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key->m_frame.f_lineno = 254;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__cert, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_2;
tmp_called_value_2 = module_var_accessor_google$auth$transport$_custom_tls_signer$get_sign_callback(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_sign_callback);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__signer_lib);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__enterprise_cert_file_path);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 256;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key->m_frame.f_lineno = 255;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__sign_callback, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key == cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key);
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key);

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


static PyObject *impl_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider = MAKE_FUNCTION_FRAME(tstate, code_objects_04d3dac0b3eab07c1507d9f4cd92ee48, module_google$auth$transport$_custom_tls_signer, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider->m_type_description == NULL);
frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider = cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider);
assert(Py_REFCNT(frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__provider_lib);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 260;
type_description_1 = "o";
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider == cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider);
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_False;
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


static PyObject *impl_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_ctx = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context = MAKE_FUNCTION_FRAME(tstate, code_objects_e899eb5cf2778b93ea9fd203514480f5, module_google$auth$transport$_custom_tls_signer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context->m_type_description == NULL);
frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context = cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context);
assert(Py_REFCNT(frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context->m_frame.f_lineno = 265;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_should_use_provider);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 265;
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
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__provider_lib);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ECP_attach_to_ctx);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_google$auth$transport$_custom_tls_signer$_cast_ssl_ctx_to_void_p_stdlib(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_stdlib);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 267;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ctx);
tmp_args_element_value_2 = par_ctx;
frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context->m_frame.f_lineno = 267;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 267;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__enterprise_cert_file_path);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 268;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 268;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context->m_frame.f_lineno = 268;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 268;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context->m_frame.f_lineno = 266;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_google$auth$transport$_custom_tls_signer$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 270;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context->m_frame.f_lineno = 270;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_MutualTLSChannelError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_c2d0924c6497b8a356c98c5617186033_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 270;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_3;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__offload_lib);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 273;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__signer_lib);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 273;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
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
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__offload_lib);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_ConfigureSslContext);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__sign_callback);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 275;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_10 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_10 == NULL));
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_c_char_p);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 276;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__cert);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_called_value_5);

exception_lineno = 276;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context->m_frame.f_lineno = 276;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 276;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = module_var_accessor_google$auth$transport$_custom_tls_signer$_cast_ssl_ctx_to_void_p_pyopenssl(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_pyopenssl);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 277;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ctx);
tmp_expression_value_13 = par_ctx;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__ctx);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 277;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__context);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 277;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context->m_frame.f_lineno = 277;
tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 277;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context->m_frame.f_lineno = 274;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_7};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_google$auth$transport$_custom_tls_signer$exceptions(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 279;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context->m_frame.f_lineno = 279;
tmp_raise_type_input_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_MutualTLSChannelError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_8f10b3a945d370c01b4f6c256e9a5821_tuple, 0)
);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 279;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_4:;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_instance_4;
tmp_called_instance_4 = module_var_accessor_google$auth$transport$_custom_tls_signer$exceptions(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 283;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context->m_frame.f_lineno = 283;
tmp_raise_type_input_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_MutualTLSChannelError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_013848f00da7ec4d8fc376f8cf9fe7f4_tuple, 0)
);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 283;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_end_3:;
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context,
    type_description_1,
    par_self,
    par_ctx
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context == cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context);
    cache_frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context);

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
CHECK_OBJECT(par_ctx);
Py_DECREF(par_ctx);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_ctx);
Py_DECREF(par_ctx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries,
        mod_consts.const_str_plain_load_libraries,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7ab8a3f6069698d743b44fea91dc0f15,
#endif
        code_objects_7316b895bf356e6be43c6dd58f1931d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_custom_tls_signer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key,
        mod_consts.const_str_plain_set_up_custom_key,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ff8286726f5d79ba3fe3cc74888aaf77,
#endif
        code_objects_36d585cabf64adc7478bfb7180fcdce7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_custom_tls_signer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider,
        mod_consts.const_str_plain_should_use_provider,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5b0bc3450e7766d2a81f8ca1b5e4c3d9,
#endif
        code_objects_04d3dac0b3eab07c1507d9f4cd92ee48,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_custom_tls_signer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context,
        mod_consts.const_str_plain_attach_to_ssl_context,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dedcc9618f9f4fe80b0fc1188880b1dd,
#endif
        code_objects_e899eb5cf2778b93ea9fd203514480f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_custom_tls_signer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl,
        mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_pyopenssl,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2fcd8852781813bfb152f555a981ca0e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_custom_tls_signer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib,
        mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_stdlib,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3b0dd872d3da74956bfab26c524dc7b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_custom_tls_signer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib,
        mod_consts.const_str_plain_load_offload_lib,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_10c40e4f23f9858c856ccc81709c9588,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_custom_tls_signer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib,
        mod_consts.const_str_plain_load_signer_lib,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fefd79554a5f288b6baabd98cb017623,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_custom_tls_signer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib,
        mod_consts.const_str_plain_load_provider_lib,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ea4f88dd81cdbb950c0bba8a321b4bc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_custom_tls_signer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest,
        mod_consts.const_str_plain__compute_sha256_digest,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_21249a137c3e8edac20fcef74853776f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_custom_tls_signer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback,
        mod_consts.const_str_plain_get_sign_callback,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_725898229a4c3dd4a45be47a62f2220d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_custom_tls_signer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback,
        mod_consts.const_str_plain_sign_callback,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d4f1a2a4bd4b6ba35219848c63e0c747,
#endif
        code_objects_9bf0e6a3b0a52de0c4e72dd8251be7ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_custom_tls_signer,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__8_get_cert(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_custom_tls_signer$$$function__8_get_cert,
        mod_consts.const_str_plain_get_cert,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_aca74d6c8ea7c90c5b79568863c27978,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_custom_tls_signer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__9___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_custom_tls_signer$$$function__9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dc724b939ab1fb481af0a097c7b8124f,
#endif
        code_objects_39d3a955baa72df1d332b7f4a5dd5ee1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_custom_tls_signer,
        mod_consts.const_str_digest_ace3e12651492fab6376cec73f917067,
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

static function_impl_code const function_table_google$auth$transport$_custom_tls_signer[] = {
impl_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback$$$function__1_sign_callback,
impl_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl,
impl_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib,
impl_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib,
impl_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib,
impl_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib,
impl_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest,
impl_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback,
impl_google$auth$transport$_custom_tls_signer$$$function__8_get_cert,
impl_google$auth$transport$_custom_tls_signer$$$function__9___init__,
impl_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries,
impl_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key,
impl_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider,
impl_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$transport$_custom_tls_signer);
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
        module_google$auth$transport$_custom_tls_signer,
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
        function_table_google$auth$transport$_custom_tls_signer,
        sizeof(function_table_google$auth$transport$_custom_tls_signer) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth.transport._custom_tls_signer";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$transport$_custom_tls_signer(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$transport$_custom_tls_signer");

    // Store the module for future use.
    module_google$auth$transport$_custom_tls_signer = module;

    moduledict_google$auth$transport$_custom_tls_signer = MODULE_DICT(module_google$auth$transport$_custom_tls_signer);

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
        PRINT_STRING("google$auth$transport$_custom_tls_signer: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$transport$_custom_tls_signer: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$transport$_custom_tls_signer: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.transport._custom_tls_signer" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$transport$_custom_tls_signer\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$transport$_custom_tls_signer,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$transport$_custom_tls_signer,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$transport$_custom_tls_signer,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$transport$_custom_tls_signer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$transport$_custom_tls_signer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$transport$_custom_tls_signer);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$transport$_custom_tls_signer);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_custom_tls_signer;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_203 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_27a1a173e7f5bad39e224831247cc1db;
UPDATE_STRING_DICT0(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$transport$_custom_tls_signer = MAKE_MODULE_FRAME(code_objects_f520463710c64bb155840b8095de486c, module_google$auth$transport$_custom_tls_signer);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_custom_tls_signer);
assert(Py_REFCNT(frame_frame_google$auth$transport$_custom_tls_signer) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$transport$_custom_tls_signer$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$transport$_custom_tls_signer$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_ctypes, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$transport$_custom_tls_signer;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$transport$_custom_tls_signer->m_frame.f_lineno = 21;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$transport$_custom_tls_signer;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$transport$_custom_tls_signer->m_frame.f_lineno = 22;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_cffi;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$transport$_custom_tls_signer;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$transport$_custom_tls_signer->m_frame.f_lineno = 26;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_cffi, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$auth$transport$_custom_tls_signer;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_google$auth$transport$_custom_tls_signer->m_frame.f_lineno = 28;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$transport$_custom_tls_signer,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$transport$_custom_tls_signer$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer->m_frame.f_lineno = 30;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_1c97c3d2aeb9afbe25232fe62e25ee5f_tuple, 0)
);

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_9;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CFUNCTYPE);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_c_int);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 40;

    goto frame_exception_exit_1;
}
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_expression_value_4 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_4 == NULL));
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_c_ubyte);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 41;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer->m_frame.f_lineno = 41;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_expression_value_5 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_5 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 42;

    goto frame_exception_exit_1;
}
tmp_expression_value_6 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_6 == NULL));
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_c_size_t);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_called_value_3);

exception_lineno = 42;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer->m_frame.f_lineno = 42;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 42;

    goto frame_exception_exit_1;
}
tmp_expression_value_7 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_7 == NULL));
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 43;

    goto frame_exception_exit_1;
}
tmp_expression_value_8 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_8 == NULL));
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_c_ubyte);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_called_value_4);

exception_lineno = 43;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer->m_frame.f_lineno = 43;
tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 43;

    goto frame_exception_exit_1;
}
tmp_expression_value_9 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_9 == NULL));
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_c_size_t);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 44;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_custom_tls_signer->m_frame.f_lineno = 39;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_4, tmp_args_element_value_6, tmp_args_element_value_8};
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_SIGN_CALLBACK_CTYPE, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;

tmp_assign_source_13 = MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__1__cast_ssl_ctx_to_void_p_pyopenssl(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_pyopenssl, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;

tmp_assign_source_14 = MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__2__cast_ssl_ctx_to_void_p_stdlib(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain__cast_ssl_ctx_to_void_p_stdlib, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;

tmp_assign_source_15 = MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__3_load_offload_lib(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_load_offload_lib, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;

tmp_assign_source_16 = MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__4_load_signer_lib(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_load_signer_lib, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;

tmp_assign_source_17 = MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__5_load_provider_lib(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_load_provider_lib, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;

tmp_assign_source_18 = MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__6__compute_sha256_digest(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain__compute_sha256_digest, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;

tmp_assign_source_19 = MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__7_get_sign_callback(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_get_sign_callback, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;

tmp_assign_source_20 = MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__8_get_cert(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_get_cert, tmp_assign_source_20);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_object_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_21 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_10 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_23 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_23;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_1;
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
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_CustomTlsSigner;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$transport$_custom_tls_signer->m_frame.f_lineno = 203;
tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_24;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_13 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_1;
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
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_14, tmp_name_value_5, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_15;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_15 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_1;
}
frame_frame_google$auth$transport$_custom_tls_signer->m_frame.f_lineno = 203;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 203;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_25;
}
branch_end_1:;
{
PyObject *tmp_assign_source_26;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_203 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1c97c3d2aeb9afbe25232fe62e25ee5f;
tmp_res = PyObject_SetItem(locals_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_203, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_CustomTlsSigner;
tmp_res = PyObject_SetItem(locals_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_203, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_203;
tmp_res = PyObject_SetItem(locals_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_203, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_3;
}
frame_frame_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_2 = MAKE_CLASS_FRAME(tstate, code_objects_04998e3638e19032f3e944b248ab12f0, module_google$auth$transport$_custom_tls_signer, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_2);
assert(Py_REFCNT(frame_frame_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_2) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__9___init__(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_203, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__10_load_libraries(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_203, mod_consts.const_str_plain_load_libraries, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__11_set_up_custom_key(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_203, mod_consts.const_str_plain_set_up_custom_key, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__12_should_use_provider(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_203, mod_consts.const_str_plain_should_use_provider, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$_custom_tls_signer$$$function__13_attach_to_ssl_context(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_203, mod_consts.const_str_plain_attach_to_ssl_context, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto frame_exception_exit_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_9b3f8505b5440c822978bf83c74b008e_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_203, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_3;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_object_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_3;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_object_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_203, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_3 = mod_consts.const_str_plain_CustomTlsSigner;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = locals_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_203;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$transport$_custom_tls_signer->m_frame.f_lineno = 203;
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_27;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_26 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_26);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_203);
locals_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_203 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_203);
locals_google$auth$transport$_custom_tls_signer$$$class__1_CustomTlsSigner_203 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 203;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)mod_consts.const_str_plain_CustomTlsSigner, tmp_assign_source_26);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_custom_tls_signer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_custom_tls_signer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_custom_tls_signer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$transport$_custom_tls_signer);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$transport$_custom_tls_signer", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.transport._custom_tls_signer" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$transport$_custom_tls_signer);
    return module_google$auth$transport$_custom_tls_signer;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_custom_tls_signer, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$transport$_custom_tls_signer", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

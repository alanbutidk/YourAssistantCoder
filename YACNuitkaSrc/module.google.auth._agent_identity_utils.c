/* Generated code for Python module 'google$auth$_agent_identity_utils'
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



/* The "module_google$auth$_agent_identity_utils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$_agent_identity_utils;
PyDictObject *moduledict_google$auth$_agent_identity_utils;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_getsize;
PyObject *const_str_digest_a7fd8638319d81d58401820afef1fd4a;
PyObject *const_str_plain_json;
PyObject *const_str_plain_environ;
PyObject *const_str_plain_environment_vars;
PyObject *const_str_plain_GOOGLE_API_CERTIFICATE_CONFIG;
PyObject *const_str_plain__POLLING_INTERVALS;
PyObject *const_str_plain_cert_config_path;
PyObject *const_str_plain_load;
PyObject *const_str_plain_cert_configs;
PyObject *const_str_plain_workload;
PyObject *const_tuple_str_plain_cert_path_tuple;
PyObject *const_str_plain__is_certificate_file_ready;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_tuple_type_OSError_type_ValueError_type_KeyError_tuple;
PyObject *const_str_plain_has_logged_warning;
PyObject *const_str_plain__LOGGER;
PyObject *const_str_plain_warning;
PyObject *const_str_digest_051d36b4da6cd7fcf90a9413085807e3;
PyObject *const_str_plain__TOTAL_TIMEOUT;
PyObject *const_str_plain__WELL_KNOWN_CERT_PATH;
PyObject *const_str_plain_time;
PyObject *const_str_plain_sleep;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_RefreshError;
PyObject *const_str_digest_64a1b63dba8fe02276976fbc8c99ec0c;
PyObject *const_str_digest_20475c486f127d59b0974272c7a69b01;
PyObject *const_str_digest_d8b7a9ac1e83fc35f4fdb7546eb4b8ff;
PyObject *const_str_digest_822a25be0a164985a675bbb26029390d;
PyObject *const_str_plain_true;
PyObject *const_str_plain_false;
PyObject *const_str_plain_get_agent_identity_certificate_path;
PyObject *const_str_plain_parse_certificate;
PyObject *const_str_plain_cert_bytes;
PyObject *const_str_digest_4d75abe77763f7b0679c300d250aeb8d;
PyObject *const_str_plain_cryptography;
PyObject *const_tuple_str_plain_x509_tuple;
PyObject *const_str_plain_x509;
PyObject *const_str_plain_load_pem_x509_certificate;
PyObject *const_str_plain_CRYPTOGRAPHY_NOT_FOUND_ERROR;
PyObject *const_str_digest_86cbec2a1169ebc4c83306c6a3d9809f;
PyObject *const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35;
PyObject *const_tuple_str_plain_ExtensionOID_tuple;
PyObject *const_str_plain_ExtensionOID;
PyObject *const_str_plain_extensions;
PyObject *const_str_plain_get_extension_for_oid;
PyObject *const_str_plain_SUBJECT_ALTERNATIVE_NAME;
PyObject *const_str_plain_ExtensionNotFound;
PyObject *const_str_plain_value;
PyObject *const_str_plain_get_values_for_type;
PyObject *const_str_plain_UniformResourceIdentifier;
PyObject *const_str_plain_urlparse;
PyObject *const_str_plain_scheme;
PyObject *const_str_plain_spiffe;
PyObject *const_str_plain_netloc;
PyObject *const_str_digest_30a91d62148a1dc49a972a1fe47d5bd8;
PyObject *const_str_plain_re;
PyObject *const_str_plain_match;
PyObject *const_str_plain_trust_domain;
PyObject *const_str_digest_988b81d691a53bb9cd74c9eb2757764c;
PyObject *const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
PyObject *const_tuple_str_plain_serialization_tuple;
PyObject *const_str_plain_serialization;
PyObject *const_str_plain_public_bytes;
PyObject *const_str_plain_Encoding;
PyObject *const_str_plain_DER;
PyObject *const_str_plain_hashlib;
PyObject *const_str_plain_sha256;
PyObject *const_str_plain_digest;
PyObject *const_str_plain_base64;
PyObject *const_str_plain_b64encode;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_plain_rstrip;
PyObject *const_tuple_str_chr_61_tuple;
PyObject *const_str_plain_quote;
PyObject *const_str_digest_869ae2ce1002de083d13581f45a1d0ce;
PyObject *const_str_plain__is_agent_identity_certificate;
PyObject *const_str_digest_1bca9869091f8d3f8ce53abd0f41083b;
PyObject *const_str_plain_calculate_certificate_fingerprint;
PyObject *const_str_digest_91f051cdcea4ef0090ee8cc20f93e2ac;
PyObject *const_str_digest_8cb97128a5bbc91803a152ef24a661ff;
PyObject *const_str_digest_9c98b9ab3c947ea77a25c4d3969267a0;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_os;
PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
PyObject *const_tuple_str_plain_quote_str_plain_urlparse_tuple;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain_environment_vars_tuple;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_3cc25a53f119a2f0e834072f8d7adcbe_tuple;
PyObject *const_str_digest_d20caaf06595ed6f2f99e047846ee286;
PyObject *const_str_digest_e0ec2aaf28353a523cf9e1b8d51a634b;
PyObject *const_str_digest_e77ebb9810739f157788a4133ed567ab;
PyObject *const_str_digest_efaf47ccfb74e8b5b497a60b28a371b0;
PyObject *const_int_pos_50;
PyObject *const_str_plain__FAST_POLL_CYCLES;
PyObject *const_float_0_1;
PyObject *const_str_plain__FAST_POLL_INTERVAL;
PyObject *const_float_0_5;
PyObject *const_str_plain__SLOW_POLL_INTERVAL;
PyObject *const_int_pos_30;
PyObject *const_str_plain__SLOW_POLL_CYCLES;
PyObject *const_str_plain_get_and_parse_agent_identity_certificate;
PyObject *const_str_plain_should_request_bound_token;
PyObject *const_str_plain_get_cached_cert_fingerprint;
PyObject *const_str_digest_fb71b1c50073c7cfd0ee1e89f7f7a0b3;
PyObject *const_str_digest_fbb60fde2cd95be3ecffcbd3d8556b8c;
PyObject *const_tuple_7fb22e74b9c4aad57617419d0d306af4_tuple;
PyObject *const_tuple_str_plain_path_tuple;
PyObject *const_tuple_e50f7976562c00939155c1c784bb3c2c_tuple;
PyObject *const_tuple_0caa18644c3e557654c1f69e4e4a88c7_tuple;
PyObject *const_tuple_4c61ae307b078f53c1e6b4566a3d5de3_tuple;
PyObject *const_tuple_09cb773590e3e34428912b52f0a1702a_tuple;
PyObject *const_tuple_str_plain_cert_bytes_str_plain_x509_str_plain_e_tuple;
PyObject *const_tuple_str_plain_cert_str_plain_is_agent_cert_str_plain_is_opted_in_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[119];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth._agent_identity_utils"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_getsize);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_a7fd8638319d81d58401820afef1fd4a);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_environment_vars);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_API_CERTIFICATE_CONFIG);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__POLLING_INTERVALS);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_cert_config_path);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_load);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_cert_configs);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_workload);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cert_path_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_certificate_file_ready);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_type_OSError_type_ValueError_type_KeyError_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_logged_warning);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__LOGGER);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_warning);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_051d36b4da6cd7fcf90a9413085807e3);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__TOTAL_TIMEOUT);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__WELL_KNOWN_CERT_PATH);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_sleep);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_64a1b63dba8fe02276976fbc8c99ec0c);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_20475c486f127d59b0974272c7a69b01);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8b7a9ac1e83fc35f4fdb7546eb4b8ff);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_822a25be0a164985a675bbb26029390d);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_true);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_false);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_agent_identity_certificate_path);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_certificate);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_cert_bytes);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d75abe77763f7b0679c300d250aeb8d);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x509_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_x509);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_pem_x509_certificate);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRYPTOGRAPHY_NOT_FOUND_ERROR);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_86cbec2a1169ebc4c83306c6a3d9809f);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ExtensionOID_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExtensionOID);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_extensions);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_extension_for_oid);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_SUBJECT_ALTERNATIVE_NAME);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExtensionNotFound);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_values_for_type);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_UniformResourceIdentifier);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_scheme);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_spiffe);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_netloc);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_30a91d62148a1dc49a972a1fe47d5bd8);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_trust_domain);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_988b81d691a53bb9cd74c9eb2757764c);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_serialization_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_serialization);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_public_bytes);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_Encoding);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_DER);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_hashlib);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha256);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_digest);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_base64);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_b64encode);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_rstrip);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_61_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_quote);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_869ae2ce1002de083d13581f45a1d0ce);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_agent_identity_certificate);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_1bca9869091f8d3f8ce53abd0f41083b);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_calculate_certificate_fingerprint);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_91f051cdcea4ef0090ee8cc20f93e2ac);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_8cb97128a5bbc91803a152ef24a661ff);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c98b9ab3c947ea77a25c4d3969267a0);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_quote_str_plain_urlparse_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_environment_vars_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3cc25a53f119a2f0e834072f8d7adcbe_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_d20caaf06595ed6f2f99e047846ee286);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_e0ec2aaf28353a523cf9e1b8d51a634b);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_e77ebb9810739f157788a4133ed567ab);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_efaf47ccfb74e8b5b497a60b28a371b0);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_int_pos_50);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain__FAST_POLL_CYCLES);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_float_0_1);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain__FAST_POLL_INTERVAL);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_float_0_5);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain__SLOW_POLL_INTERVAL);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_int_pos_30);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain__SLOW_POLL_CYCLES);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_and_parse_agent_identity_certificate);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_should_request_bound_token);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_cached_cert_fingerprint);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb71b1c50073c7cfd0ee1e89f7f7a0b3);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_fbb60fde2cd95be3ecffcbd3d8556b8c);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_7fb22e74b9c4aad57617419d0d306af4_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_path_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_e50f7976562c00939155c1c784bb3c2c_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_0caa18644c3e557654c1f69e4e4a88c7_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_4c61ae307b078f53c1e6b4566a3d5de3_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_09cb773590e3e34428912b52f0a1702a_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cert_bytes_str_plain_x509_str_plain_e_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cert_str_plain_is_agent_cert_str_plain_is_opted_in_tuple);
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
void checkModuleConstants_google$auth$_agent_identity_utils(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_getsize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getsize);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_a7fd8638319d81d58401820afef1fd4a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a7fd8638319d81d58401820afef1fd4a);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_environment_vars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environment_vars);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_API_CERTIFICATE_CONFIG));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GOOGLE_API_CERTIFICATE_CONFIG);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__POLLING_INTERVALS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__POLLING_INTERVALS);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_cert_config_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cert_config_path);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_load));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_cert_configs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cert_configs);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_workload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_workload);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cert_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cert_path_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_certificate_file_ready));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_certificate_file_ready);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_type_OSError_type_ValueError_type_KeyError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_OSError_type_ValueError_type_KeyError_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_logged_warning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_logged_warning);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__LOGGER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LOGGER);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_warning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warning);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_051d36b4da6cd7fcf90a9413085807e3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_051d36b4da6cd7fcf90a9413085807e3);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__TOTAL_TIMEOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__TOTAL_TIMEOUT);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__WELL_KNOWN_CERT_PATH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__WELL_KNOWN_CERT_PATH);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_sleep));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sleep);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RefreshError);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_64a1b63dba8fe02276976fbc8c99ec0c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_64a1b63dba8fe02276976fbc8c99ec0c);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_20475c486f127d59b0974272c7a69b01));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_20475c486f127d59b0974272c7a69b01);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8b7a9ac1e83fc35f4fdb7546eb4b8ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d8b7a9ac1e83fc35f4fdb7546eb4b8ff);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_822a25be0a164985a675bbb26029390d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_822a25be0a164985a675bbb26029390d);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_true));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_true);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_false));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_false);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_agent_identity_certificate_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_agent_identity_certificate_path);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_certificate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_certificate);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_cert_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cert_bytes);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d75abe77763f7b0679c300d250aeb8d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4d75abe77763f7b0679c300d250aeb8d);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cryptography);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x509_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x509_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_x509));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_x509);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_pem_x509_certificate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_pem_x509_certificate);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRYPTOGRAPHY_NOT_FOUND_ERROR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CRYPTOGRAPHY_NOT_FOUND_ERROR);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_86cbec2a1169ebc4c83306c6a3d9809f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86cbec2a1169ebc4c83306c6a3d9809f);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ExtensionOID_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ExtensionOID_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExtensionOID));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ExtensionOID);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extensions);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_extension_for_oid));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_extension_for_oid);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_SUBJECT_ALTERNATIVE_NAME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SUBJECT_ALTERNATIVE_NAME);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExtensionNotFound));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ExtensionNotFound);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_values_for_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_values_for_type);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_UniformResourceIdentifier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UniformResourceIdentifier);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlparse);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_scheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scheme);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_spiffe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_spiffe);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_netloc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_netloc);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_30a91d62148a1dc49a972a1fe47d5bd8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_30a91d62148a1dc49a972a1fe47d5bd8);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_match));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_match);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_trust_domain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trust_domain);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_988b81d691a53bb9cd74c9eb2757764c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_988b81d691a53bb9cd74c9eb2757764c);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_serialization_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_serialization_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_serialization));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_serialization);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_public_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_public_bytes);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_Encoding));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Encoding);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_DER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DER);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_hashlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hashlib);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha256));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sha256);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_digest));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_digest);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_base64));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base64);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_b64encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_b64encode);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_rstrip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rstrip);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_61_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_61_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_quote));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_quote);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_869ae2ce1002de083d13581f45a1d0ce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_869ae2ce1002de083d13581f45a1d0ce);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_agent_identity_certificate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_agent_identity_certificate);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_1bca9869091f8d3f8ce53abd0f41083b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1bca9869091f8d3f8ce53abd0f41083b);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_calculate_certificate_fingerprint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_calculate_certificate_fingerprint);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_91f051cdcea4ef0090ee8cc20f93e2ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91f051cdcea4ef0090ee8cc20f93e2ac);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_8cb97128a5bbc91803a152ef24a661ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8cb97128a5bbc91803a152ef24a661ff);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c98b9ab3c947ea77a25c4d3969267a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c98b9ab3c947ea77a25c4d3969267a0);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_quote_str_plain_urlparse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_quote_str_plain_urlparse_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_environment_vars_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_environment_vars_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3cc25a53f119a2f0e834072f8d7adcbe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_3cc25a53f119a2f0e834072f8d7adcbe_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_d20caaf06595ed6f2f99e047846ee286));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d20caaf06595ed6f2f99e047846ee286);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_e0ec2aaf28353a523cf9e1b8d51a634b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e0ec2aaf28353a523cf9e1b8d51a634b);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_e77ebb9810739f157788a4133ed567ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e77ebb9810739f157788a4133ed567ab);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_efaf47ccfb74e8b5b497a60b28a371b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_efaf47ccfb74e8b5b497a60b28a371b0);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_int_pos_50));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_50);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain__FAST_POLL_CYCLES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FAST_POLL_CYCLES);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_float_0_1));
CHECK_OBJECT_DEEP(mod_consts.const_float_0_1);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain__FAST_POLL_INTERVAL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FAST_POLL_INTERVAL);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_float_0_5));
CHECK_OBJECT_DEEP(mod_consts.const_float_0_5);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain__SLOW_POLL_INTERVAL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SLOW_POLL_INTERVAL);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_int_pos_30));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_30);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain__SLOW_POLL_CYCLES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SLOW_POLL_CYCLES);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_and_parse_agent_identity_certificate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_and_parse_agent_identity_certificate);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_should_request_bound_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_should_request_bound_token);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_cached_cert_fingerprint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_cached_cert_fingerprint);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb71b1c50073c7cfd0ee1e89f7f7a0b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb71b1c50073c7cfd0ee1e89f7f7a0b3);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_fbb60fde2cd95be3ecffcbd3d8556b8c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fbb60fde2cd95be3ecffcbd3d8556b8c);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_7fb22e74b9c4aad57617419d0d306af4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7fb22e74b9c4aad57617419d0d306af4_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_path_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_e50f7976562c00939155c1c784bb3c2c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e50f7976562c00939155c1c784bb3c2c_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_0caa18644c3e557654c1f69e4e4a88c7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0caa18644c3e557654c1f69e4e4a88c7_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_4c61ae307b078f53c1e6b4566a3d5de3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4c61ae307b078f53c1e6b4566a3d5de3_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_09cb773590e3e34428912b52f0a1702a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_09cb773590e3e34428912b52f0a1702a_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cert_bytes_str_plain_x509_str_plain_e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cert_bytes_str_plain_x509_str_plain_e_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cert_str_plain_is_agent_cert_str_plain_is_opted_in_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cert_str_plain_is_agent_cert_str_plain_is_opted_in_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 25
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
static PyObject *module_var_accessor_google$auth$_agent_identity_utils$CRYPTOGRAPHY_NOT_FOUND_ERROR(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_CRYPTOGRAPHY_NOT_FOUND_ERROR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CRYPTOGRAPHY_NOT_FOUND_ERROR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CRYPTOGRAPHY_NOT_FOUND_ERROR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CRYPTOGRAPHY_NOT_FOUND_ERROR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CRYPTOGRAPHY_NOT_FOUND_ERROR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_CRYPTOGRAPHY_NOT_FOUND_ERROR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_CRYPTOGRAPHY_NOT_FOUND_ERROR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CRYPTOGRAPHY_NOT_FOUND_ERROR);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$_AGENT_IDENTITY_SPIFFE_TRUST_DOMAIN_PATTERNS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_digest_30a91d62148a1dc49a972a1fe47d5bd8);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_30a91d62148a1dc49a972a1fe47d5bd8);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_30a91d62148a1dc49a972a1fe47d5bd8, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_30a91d62148a1dc49a972a1fe47d5bd8);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_30a91d62148a1dc49a972a1fe47d5bd8, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_digest_30a91d62148a1dc49a972a1fe47d5bd8);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_digest_30a91d62148a1dc49a972a1fe47d5bd8);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_30a91d62148a1dc49a972a1fe47d5bd8);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$_FAST_POLL_CYCLES(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__FAST_POLL_CYCLES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FAST_POLL_CYCLES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FAST_POLL_CYCLES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FAST_POLL_CYCLES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FAST_POLL_CYCLES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__FAST_POLL_CYCLES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__FAST_POLL_CYCLES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__FAST_POLL_CYCLES);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$_FAST_POLL_INTERVAL(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__FAST_POLL_INTERVAL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FAST_POLL_INTERVAL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FAST_POLL_INTERVAL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FAST_POLL_INTERVAL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FAST_POLL_INTERVAL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__FAST_POLL_INTERVAL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__FAST_POLL_INTERVAL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__FAST_POLL_INTERVAL);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$_LOGGER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$_POLLING_INTERVALS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__POLLING_INTERVALS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__POLLING_INTERVALS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__POLLING_INTERVALS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__POLLING_INTERVALS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__POLLING_INTERVALS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__POLLING_INTERVALS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__POLLING_INTERVALS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__POLLING_INTERVALS);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$_SLOW_POLL_CYCLES(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__SLOW_POLL_CYCLES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SLOW_POLL_CYCLES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SLOW_POLL_CYCLES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SLOW_POLL_CYCLES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SLOW_POLL_CYCLES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__SLOW_POLL_CYCLES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__SLOW_POLL_CYCLES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__SLOW_POLL_CYCLES);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$_SLOW_POLL_INTERVAL(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__SLOW_POLL_INTERVAL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SLOW_POLL_INTERVAL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SLOW_POLL_INTERVAL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SLOW_POLL_INTERVAL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SLOW_POLL_INTERVAL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__SLOW_POLL_INTERVAL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__SLOW_POLL_INTERVAL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__SLOW_POLL_INTERVAL);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$_TOTAL_TIMEOUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__TOTAL_TIMEOUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__TOTAL_TIMEOUT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__TOTAL_TIMEOUT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__TOTAL_TIMEOUT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__TOTAL_TIMEOUT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__TOTAL_TIMEOUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__TOTAL_TIMEOUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__TOTAL_TIMEOUT);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$_WELL_KNOWN_CERT_PATH(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__WELL_KNOWN_CERT_PATH);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__WELL_KNOWN_CERT_PATH);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__WELL_KNOWN_CERT_PATH, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__WELL_KNOWN_CERT_PATH);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__WELL_KNOWN_CERT_PATH, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__WELL_KNOWN_CERT_PATH);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__WELL_KNOWN_CERT_PATH);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__WELL_KNOWN_CERT_PATH);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$_is_agent_identity_certificate(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__is_agent_identity_certificate);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_agent_identity_certificate);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_agent_identity_certificate, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_agent_identity_certificate);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_agent_identity_certificate, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__is_agent_identity_certificate);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__is_agent_identity_certificate);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__is_agent_identity_certificate);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$_is_certificate_file_ready(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__is_certificate_file_ready);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_certificate_file_ready);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_certificate_file_ready, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_certificate_file_ready);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_certificate_file_ready, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__is_certificate_file_ready);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__is_certificate_file_ready);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__is_certificate_file_ready);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$base64(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_base64);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_base64, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_base64);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_base64, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$calculate_certificate_fingerprint(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_calculate_certificate_fingerprint);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_calculate_certificate_fingerprint);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_calculate_certificate_fingerprint, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_calculate_certificate_fingerprint);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_calculate_certificate_fingerprint, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_calculate_certificate_fingerprint);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_calculate_certificate_fingerprint);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_calculate_certificate_fingerprint);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$environment_vars(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_environment_vars);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_environment_vars, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_environment_vars);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_environment_vars, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$get_agent_identity_certificate_path(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_get_agent_identity_certificate_path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_agent_identity_certificate_path);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_agent_identity_certificate_path, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_agent_identity_certificate_path);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_agent_identity_certificate_path, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_get_agent_identity_certificate_path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_get_agent_identity_certificate_path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_agent_identity_certificate_path);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$hashlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hashlib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hashlib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hashlib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hashlib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$parse_certificate(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_certificate);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_parse_certificate);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_parse_certificate, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_parse_certificate);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_parse_certificate, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_certificate);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_certificate);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_certificate);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$quote(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_quote);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_quote);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_quote, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_quote);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_quote, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_quote);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_quote);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_quote);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$time(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_agent_identity_utils$urlparse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_agent_identity_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_agent_identity_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_agent_identity_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlparse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlparse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlparse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlparse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_a964a44af635f396b86e8a012cebf1b2;
static PyCodeObject *code_objects_8090b272ecd59d728239e8af3aa77ee2;
static PyCodeObject *code_objects_eaec62ff06dd9387d9e61c4b38f55bfb;
static PyCodeObject *code_objects_5a23d8f1bc805ab143f6993d1e48ebc3;
static PyCodeObject *code_objects_2e0f00f1b40cdb090ba1f3b64282a978;
static PyCodeObject *code_objects_be98778ab396f28f717725cb4bfad43b;
static PyCodeObject *code_objects_e7b71ec08a61aece5a604c2d72f6dbfb;
static PyCodeObject *code_objects_6c0358a9bef5cae5fa4a06806a2d270d;
static PyCodeObject *code_objects_27d317a10b73c6a09d3b56e6f90ab891;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_fb71b1c50073c7cfd0ee1e89f7f7a0b3); CHECK_OBJECT(module_filename_obj);
code_objects_a964a44af635f396b86e8a012cebf1b2 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_fbb60fde2cd95be3ecffcbd3d8556b8c, mod_consts.const_str_digest_fbb60fde2cd95be3ecffcbd3d8556b8c, NULL, NULL, 0, 0, 0);
code_objects_8090b272ecd59d728239e8af3aa77ee2 = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__is_agent_identity_certificate, mod_consts.const_str_plain__is_agent_identity_certificate, mod_consts.const_tuple_7fb22e74b9c4aad57617419d0d306af4_tuple, NULL, 1, 0, 0);
code_objects_eaec62ff06dd9387d9e61c4b38f55bfb = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__is_certificate_file_ready, mod_consts.const_str_plain__is_certificate_file_ready, mod_consts.const_tuple_str_plain_path_tuple, NULL, 1, 0, 0);
code_objects_5a23d8f1bc805ab143f6993d1e48ebc3 = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_calculate_certificate_fingerprint, mod_consts.const_str_plain_calculate_certificate_fingerprint, mod_consts.const_tuple_e50f7976562c00939155c1c784bb3c2c_tuple, NULL, 1, 0, 0);
code_objects_2e0f00f1b40cdb090ba1f3b64282a978 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_agent_identity_certificate_path, mod_consts.const_str_plain_get_agent_identity_certificate_path, mod_consts.const_tuple_0caa18644c3e557654c1f69e4e4a88c7_tuple, NULL, 0, 0, 0);
code_objects_be98778ab396f28f717725cb4bfad43b = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_and_parse_agent_identity_certificate, mod_consts.const_str_plain_get_and_parse_agent_identity_certificate, mod_consts.const_tuple_4c61ae307b078f53c1e6b4566a3d5de3_tuple, NULL, 0, 0, 0);
code_objects_e7b71ec08a61aece5a604c2d72f6dbfb = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_cached_cert_fingerprint, mod_consts.const_str_plain_get_cached_cert_fingerprint, mod_consts.const_tuple_09cb773590e3e34428912b52f0a1702a_tuple, NULL, 1, 0, 0);
code_objects_6c0358a9bef5cae5fa4a06806a2d270d = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_parse_certificate, mod_consts.const_str_plain_parse_certificate, mod_consts.const_tuple_str_plain_cert_bytes_str_plain_x509_str_plain_e_tuple, NULL, 1, 0, 0);
code_objects_27d317a10b73c6a09d3b56e6f90ab891 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_should_request_bound_token, mod_consts.const_str_plain_should_request_bound_token, mod_consts.const_tuple_str_plain_cert_str_plain_is_agent_cert_str_plain_is_opted_in_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__4_parse_certificate(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_path = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready)) {
    Py_XDECREF(cache_frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready = MAKE_FUNCTION_FRAME(tstate, code_objects_eaec62ff06dd9387d9e61c4b38f55bfb, module_google$auth$_agent_identity_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready->m_type_description == NULL);
frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready = cache_frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready);
assert(Py_REFCNT(frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready) == 2);

// Framed code:
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_exists_arg_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_path);
tmp_and_left_value_1 = par_path;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_path);
tmp_exists_arg_1 = par_path;
tmp_and_left_value_2 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_1);
if (tmp_and_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_2);

exception_lineno = 62;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(tmp_and_left_value_2);
Py_DECREF(tmp_and_left_value_2);
tmp_called_instance_1 = IMPORT_HARD_NTPATH();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(par_path);
tmp_args_element_value_1 = par_path;
frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready->m_frame.f_lineno = 62;
tmp_cmp_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getsize, tmp_args_element_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_and_right_value_2 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_and_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready,
    type_description_1,
    par_path
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready == cache_frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready);
    cache_frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready = NULL;
}

assertFrameObject(frame_frame_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_json = NULL;
PyObject *var_cert_config_path = NULL;
PyObject *var_has_logged_warning = NULL;
PyObject *var_interval = NULL;
PyObject *var_f = NULL;
PyObject *var_cert_config = NULL;
PyObject *var_cert_path = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path)) {
    Py_XDECREF(cache_frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path = MAKE_FUNCTION_FRAME(tstate, code_objects_2e0f00f1b40cdb090ba1f3b64282a978, module_google$auth$_agent_identity_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_type_description == NULL);
frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path = cache_frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path);
assert(Py_REFCNT(frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$_agent_identity_utils;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = 80;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_json == NULL);
var_json = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_environ);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_google$auth$_agent_identity_utils$environment_vars(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 82;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_GOOGLE_API_CERTIFICATE_CONFIG);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 82;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = 82;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_cert_config_path == NULL);
var_cert_config_path = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_cert_config_path);
tmp_operand_value_1 = var_cert_config_path;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooo";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_False;
assert(var_has_logged_warning == NULL);
Py_INCREF(tmp_assign_source_3);
var_has_logged_warning = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = module_var_accessor_google$auth$_agent_identity_utils$_POLLING_INTERVALS(tstate);
if (unlikely(tmp_iter_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__POLLING_INTERVALS);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooo";
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
type_description_1 = "ooooooo";
exception_lineno = 88;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_6 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_interval;
    var_interval = tmp_assign_source_6;
    Py_INCREF(var_interval);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_open_filename_1;
PyObject *tmp_open_mode_1;
if (var_cert_config_path == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cert_config_path);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 90;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}

tmp_open_filename_1 = var_cert_config_path;
tmp_open_mode_1 = const_str_plain_r;
tmp_assign_source_7 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_with_1__source;
    tmp_with_1__source = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = 90;
tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_with_1__enter;
    tmp_with_1__enter = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_5 = tmp_with_1__source;
tmp_assign_source_9 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___exit__);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_with_1__exit;
    tmp_with_1__exit = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_11 = tmp_with_1__enter;
{
    PyObject *old = var_f;
    var_f = tmp_assign_source_11;
    Py_INCREF(var_f);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
if (var_json == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 91;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}

tmp_called_instance_1 = var_json;
CHECK_OBJECT(var_f);
tmp_args_element_value_2 = var_f;
frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = 91;
tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load, tmp_args_element_value_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_cert_config;
    var_cert_config = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_arg_element_1;
PyObject *tmp_call_arg_element_2;
PyObject *tmp_call_arg_element_3;
PyObject *tmp_call_arg_element_4;
CHECK_OBJECT(var_cert_config);
tmp_expression_value_8 = var_cert_config;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
tmp_call_arg_element_1 = mod_consts.const_str_plain_cert_configs;
tmp_call_arg_element_2 = MAKE_DICT_EMPTY(tstate);
frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = 93;
{
    PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
    tmp_expression_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
tmp_call_arg_element_3 = mod_consts.const_str_plain_workload;
tmp_call_arg_element_4 = MAKE_DICT_EMPTY(tstate);
frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = 93;
{
    PyObject *call_args[] = {tmp_call_arg_element_3, tmp_call_arg_element_4};
    tmp_expression_value_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_call_arg_element_4);
Py_DECREF(tmp_call_arg_element_4);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = 93;
tmp_assign_source_13 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_cert_path_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_cert_path;
    var_cert_path = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_1;
tmp_called_value_6 = module_var_accessor_google$auth$_agent_identity_utils$_is_certificate_file_ready(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_certificate_file_ready);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_cert_path);
tmp_args_element_value_3 = var_cert_path;
frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = 97;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 97;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(var_cert_path);
tmp_return_value = var_cert_path;
Py_INCREF(tmp_return_value);
goto try_return_handler_5;
branch_no_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_assign_source_14;
tmp_assign_source_14 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_14;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
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
frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = 90;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooo";
    goto try_except_handler_7;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 90;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame)) {
        frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_7;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 90;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame)) {
        frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_7;
branch_end_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_5;
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
// Return handler code:
try_return_handler_5:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = 90;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_9 = tmp_with_1__exit;
frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = 90;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 90;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_5:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_10 = tmp_with_1__exit;
frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = 90;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_6:;
goto try_end_4;
// Return handler code:
try_return_handler_4:;
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
goto try_return_handler_2;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
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
goto try_end_5;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = mod_consts.const_tuple_type_OSError_type_ValueError_type_KeyError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_3;
if (var_has_logged_warning == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_has_logged_warning);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 100;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}

tmp_operand_value_3 = var_has_logged_warning;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_10;
tmp_expression_value_9 = module_var_accessor_google$auth$_agent_identity_utils$_LOGGER(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_warning);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_7 = mod_consts.const_str_digest_051d36b4da6cd7fcf90a9413085807e3;
if (var_cert_config_path == NULL) {
Py_DECREF(tmp_called_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cert_config_path);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 104;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}

tmp_args_element_value_8 = var_cert_config_path;
tmp_expression_value_10 = module_var_accessor_google$auth$_agent_identity_utils$environment_vars(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 105;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_GOOGLE_API_CERTIFICATE_CONFIG);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 105;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_10 = module_var_accessor_google$auth$_agent_identity_utils$_TOTAL_TIMEOUT(tstate);
if (unlikely(tmp_args_element_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__TOTAL_TIMEOUT);
}

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_args_element_value_9);

exception_lineno = 106;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = 101;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = Py_True;
{
    PyObject *old = var_has_logged_warning;
    var_has_logged_warning = tmp_assign_source_15;
    Py_INCREF(var_has_logged_warning);
    Py_XDECREF(old);
}

}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 89;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame)) {
        frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_8;
branch_end_7:;
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_2;
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
nuitka_bool tmp_condition_result_9;
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_11;
int tmp_truth_name_2;
tmp_called_value_12 = module_var_accessor_google$auth$_agent_identity_utils$_is_certificate_file_ready(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_certificate_file_ready);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_11 = module_var_accessor_google$auth$_agent_identity_utils$_WELL_KNOWN_CERT_PATH(tstate);
if (unlikely(tmp_args_element_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WELL_KNOWN_CERT_PATH);
}

if (tmp_args_element_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = 112;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_11);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_6);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_6);

exception_lineno = 112;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
tmp_return_value = module_var_accessor_google$auth$_agent_identity_utils$_WELL_KNOWN_CERT_PATH(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WELL_KNOWN_CERT_PATH);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
branch_no_9:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_12;
tmp_called_instance_2 = module_var_accessor_google$auth$_agent_identity_utils$time(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_interval);
tmp_args_element_value_12 = var_interval;
frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = 120;
tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_sleep, tmp_args_element_value_12);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_7;
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
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_13;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_11 = module_var_accessor_google$auth$_agent_identity_utils$exceptions(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_64a1b63dba8fe02276976fbc8c99ec0c;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_expression_value_12 = module_var_accessor_google$auth$_agent_identity_utils$environment_vars(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_digest_20475c486f127d59b0974272c7a69b01);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_d8b7a9ac1e83fc35f4fdb7546eb4b8ff;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_13);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_13 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_13 == NULL));
frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame.f_lineno = 122;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 122;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path,
    type_description_1,
    var_json,
    var_cert_config_path,
    var_has_logged_warning,
    var_interval,
    var_f,
    var_cert_config,
    var_cert_path
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path == cache_frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path);
    cache_frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path = NULL;
}

assertFrameObject(frame_frame_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_json);
var_json = NULL;
Py_XDECREF(var_cert_config_path);
var_cert_config_path = NULL;
Py_XDECREF(var_has_logged_warning);
var_has_logged_warning = NULL;
Py_XDECREF(var_interval);
var_interval = NULL;
Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_cert_config);
var_cert_config = NULL;
Py_XDECREF(var_cert_path);
var_cert_path = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_json);
var_json = NULL;
Py_XDECREF(var_cert_config_path);
var_cert_config_path = NULL;
Py_XDECREF(var_has_logged_warning);
var_has_logged_warning = NULL;
Py_XDECREF(var_interval);
var_interval = NULL;
Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_cert_config);
var_cert_config = NULL;
Py_XDECREF(var_cert_path);
var_cert_path = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

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


static PyObject *impl_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_is_opted_out = NULL;
PyObject *var_cert_path = NULL;
PyObject *var_cert_file = NULL;
PyObject *var_cert_bytes = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate)) {
    Py_XDECREF(cache_frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate = MAKE_FUNCTION_FRAME(tstate, code_objects_be98778ab396f28f717725cb4bfad43b, module_google$auth$_agent_identity_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate->m_type_description == NULL);
frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate = cache_frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate);
assert(Py_REFCNT(frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
tmp_expression_value_3 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_environ);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_google$auth$_agent_identity_utils$environment_vars(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 143;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_digest_20475c486f127d59b0974272c7a69b01);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 143;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_true;
frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate->m_frame.f_lineno = 142;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate->m_frame.f_lineno = 142;
tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_false;
tmp_assign_source_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_is_opted_out == NULL);
var_is_opted_out = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_is_opted_out);
tmp_truth_name_1 = CHECK_IF_TRUE(var_is_opted_out);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooo";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_google$auth$_agent_identity_utils$get_agent_identity_certificate_path(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_agent_identity_certificate_path);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate->m_frame.f_lineno = 151;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_cert_path == NULL);
var_cert_path = tmp_assign_source_2;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_cert_path);
tmp_operand_value_1 = var_cert_path;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooo";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_open_filename_1;
PyObject *tmp_open_mode_1;
CHECK_OBJECT(var_cert_path);
tmp_open_filename_1 = var_cert_path;
tmp_open_mode_1 = const_str_plain_rb;
tmp_assign_source_3 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_5 = tmp_with_1__source;
tmp_called_value_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___enter__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate->m_frame.f_lineno = 155;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_6 = tmp_with_1__source;
tmp_assign_source_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_6, const_str_plain___exit__);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_5;
}
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_7 = tmp_with_1__enter;
assert(var_cert_file == NULL);
Py_INCREF(tmp_assign_source_7);
var_cert_file = tmp_assign_source_7;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_cert_file);
tmp_called_instance_1 = var_cert_file;
frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate->m_frame.f_lineno = 156;
tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_read);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
assert(var_cert_bytes == NULL);
var_cert_bytes = tmp_assign_source_8;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_9;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
tmp_args_element_value_3 = EXC_TYPE(tstate);
tmp_args_element_value_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_4); 
tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_5 == NULL) {
    tmp_args_element_value_5 = Py_None;
}
frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate->m_frame.f_lineno = 155;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 155;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate->m_frame)) {
        frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_5;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 155;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate->m_frame)) {
        frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_5;
branch_end_3:;
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
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate->m_frame.f_lineno = 155;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 155;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_5:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate->m_frame.f_lineno = 155;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_6:;
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
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_6;
tmp_called_value_8 = module_var_accessor_google$auth$_agent_identity_utils$parse_certificate(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parse_certificate);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (var_cert_bytes == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cert_bytes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 158;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = var_cert_bytes;
frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate->m_frame.f_lineno = 158;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate,
    type_description_1,
    var_is_opted_out,
    var_cert_path,
    var_cert_file,
    var_cert_bytes
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate == cache_frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate);
    cache_frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate = NULL;
}

assertFrameObject(frame_frame_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_is_opted_out);
CHECK_OBJECT(var_is_opted_out);
Py_DECREF(var_is_opted_out);
var_is_opted_out = NULL;
Py_XDECREF(var_cert_path);
var_cert_path = NULL;
Py_XDECREF(var_cert_file);
var_cert_file = NULL;
Py_XDECREF(var_cert_bytes);
var_cert_bytes = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_is_opted_out);
var_is_opted_out = NULL;
Py_XDECREF(var_cert_path);
var_cert_path = NULL;
Py_XDECREF(var_cert_file);
var_cert_file = NULL;
Py_XDECREF(var_cert_bytes);
var_cert_bytes = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

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


static PyObject *impl_google$auth$_agent_identity_utils$$$function__4_parse_certificate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cert_bytes = python_pars[0];
PyObject *var_x509 = NULL;
PyObject *var_e = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate)) {
    Py_XDECREF(cache_frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate = MAKE_FUNCTION_FRAME(tstate, code_objects_6c0358a9bef5cae5fa4a06806a2d270d, module_google$auth$_agent_identity_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate->m_type_description == NULL);
frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate = cache_frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate);
assert(Py_REFCNT(frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_cryptography;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$_agent_identity_utils;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_x509_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate->m_frame.f_lineno = 171;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$_agent_identity_utils,
        mod_consts.const_str_plain_x509,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_x509);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(var_x509 == NULL);
var_x509 = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_x509);
tmp_called_instance_1 = var_x509;
CHECK_OBJECT(par_cert_bytes);
tmp_args_element_value_1 = par_cert_bytes;
frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate->m_frame.f_lineno = 173;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load_pem_x509_certificate, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate, exception_keeper_lineno_1);
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_2); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_2);
var_e = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = module_var_accessor_google$auth$_agent_identity_utils$CRYPTOGRAPHY_NOT_FOUND_ERROR(tstate);
if (unlikely(tmp_make_exception_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CRYPTOGRAPHY_NOT_FOUND_ERROR);
}

if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 175;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate->m_frame.f_lineno = 175;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ImportError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 175;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 170;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate->m_frame)) {
        frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate,
    type_description_1,
    par_cert_bytes,
    var_x509,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate == cache_frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate);
    cache_frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate = NULL;
}

assertFrameObject(frame_frame_google$auth$_agent_identity_utils$$$function__4_parse_certificate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_x509);
CHECK_OBJECT(var_x509);
Py_DECREF(var_x509);
var_x509 = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_x509);
var_x509 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cert_bytes);
Py_DECREF(par_cert_bytes);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cert_bytes);
Py_DECREF(par_cert_bytes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cert = python_pars[0];
PyObject *var_x509 = NULL;
PyObject *var_ExtensionOID = NULL;
PyObject *var_ext = NULL;
PyObject *var_uris = NULL;
PyObject *var_uri = NULL;
PyObject *var_parsed_uri = NULL;
PyObject *var_trust_domain = NULL;
PyObject *var_pattern = NULL;
PyObject *var_e = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate)) {
    Py_XDECREF(cache_frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate = MAKE_FUNCTION_FRAME(tstate, code_objects_8090b272ecd59d728239e8af3aa77ee2, module_google$auth$_agent_identity_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate->m_type_description == NULL);
frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate = cache_frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate);
assert(Py_REFCNT(frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_cryptography;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$_agent_identity_utils;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_x509_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate->m_frame.f_lineno = 192;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$_agent_identity_utils,
        mod_consts.const_str_plain_x509,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_x509);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(var_x509 == NULL);
var_x509 = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$_agent_identity_utils;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_ExtensionOID_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate->m_frame.f_lineno = 193;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$auth$_agent_identity_utils,
        mod_consts.const_str_plain_ExtensionOID,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ExtensionOID);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(var_ExtensionOID == NULL);
var_ExtensionOID = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_cert);
tmp_expression_value_2 = par_cert;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_extensions);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_get_extension_for_oid);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_ExtensionOID);
tmp_expression_value_3 = var_ExtensionOID;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_SUBJECT_ALTERNATIVE_NAME);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 197;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate->m_frame.f_lineno = 196;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(var_ext == NULL);
var_ext = tmp_assign_source_3;
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
CHECK_OBJECT(var_x509);
tmp_expression_value_4 = var_x509;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ExtensionNotFound);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooooooo";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_4;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 195;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate->m_frame)) {
        frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_4;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_ext);
tmp_expression_value_6 = var_ext;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_value);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_get_values_for_type);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_x509);
tmp_expression_value_7 = var_x509;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_UniformResourceIdentifier);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 201;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate->m_frame.f_lineno = 201;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(var_uris == NULL);
var_uris = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_uris);
tmp_iter_arg_1 = var_uris;
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_5;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooo";
exception_lineno = 203;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_7 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_uri;
    var_uri = tmp_assign_source_7;
    Py_INCREF(var_uri);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = module_var_accessor_google$auth$_agent_identity_utils$urlparse(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlparse);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_uri);
tmp_args_element_value_3 = var_uri;
frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate->m_frame.f_lineno = 204;
tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = var_parsed_uri;
    var_parsed_uri = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_parsed_uri);
tmp_expression_value_8 = var_parsed_uri;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_scheme);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_spiffe;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_parsed_uri);
tmp_expression_value_9 = var_parsed_uri;
tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_netloc);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = var_trust_domain;
    var_trust_domain = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_2;
tmp_iter_arg_2 = module_var_accessor_google$auth$_agent_identity_utils$_AGENT_IDENTITY_SPIFFE_TRUST_DOMAIN_PATTERNS(tstate);
if (unlikely(tmp_iter_arg_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_30a91d62148a1dc49a972a1fe47d5bd8);
}

if (tmp_iter_arg_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_10 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_11 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooo";
exception_lineno = 207;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_12 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_pattern;
    var_pattern = tmp_assign_source_12;
    Py_INCREF(var_pattern);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
int tmp_truth_name_1;
tmp_expression_value_10 = module_var_accessor_google$auth$_agent_identity_utils$re(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 208;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_match);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_pattern);
tmp_args_element_value_4 = var_pattern;
if (var_trust_domain == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_trust_domain);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 208;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_5 = var_trust_domain;
frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate->m_frame.f_lineno = 208;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 208;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_6;
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
CHECK_OBJECT(tmp_for_loop_2__iter_value);
Py_DECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Return handler code:
try_return_handler_5:;
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
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_13); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_13);
var_e = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = module_var_accessor_google$auth$_agent_identity_utils$CRYPTOGRAPHY_NOT_FOUND_ERROR(tstate);
if (unlikely(tmp_make_exception_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CRYPTOGRAPHY_NOT_FOUND_ERROR);
}

if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_1 = "oooooooooo";
    goto try_except_handler_8;
}
frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate->m_frame.f_lineno = 212;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ImportError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 212;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooooo";
goto try_except_handler_8;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 191;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate->m_frame)) {
        frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_7;
branch_end_4:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_4:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate,
    type_description_1,
    par_cert,
    var_x509,
    var_ExtensionOID,
    var_ext,
    var_uris,
    var_uri,
    var_parsed_uri,
    var_trust_domain,
    var_pattern,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate == cache_frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate);
    cache_frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate = NULL;
}

assertFrameObject(frame_frame_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate);

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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_x509);
CHECK_OBJECT(var_x509);
Py_DECREF(var_x509);
var_x509 = NULL;
CHECK_OBJECT(var_ExtensionOID);
CHECK_OBJECT(var_ExtensionOID);
Py_DECREF(var_ExtensionOID);
var_ExtensionOID = NULL;
Py_XDECREF(var_ext);
var_ext = NULL;
Py_XDECREF(var_uris);
var_uris = NULL;
Py_XDECREF(var_uri);
var_uri = NULL;
Py_XDECREF(var_parsed_uri);
var_parsed_uri = NULL;
Py_XDECREF(var_trust_domain);
var_trust_domain = NULL;
Py_XDECREF(var_pattern);
var_pattern = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_x509);
var_x509 = NULL;
Py_XDECREF(var_ExtensionOID);
var_ExtensionOID = NULL;
Py_XDECREF(var_ext);
var_ext = NULL;
Py_XDECREF(var_uris);
var_uris = NULL;
Py_XDECREF(var_uri);
var_uri = NULL;
Py_XDECREF(var_parsed_uri);
var_parsed_uri = NULL;
Py_XDECREF(var_trust_domain);
var_trust_domain = NULL;
Py_XDECREF(var_pattern);
var_pattern = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cert = python_pars[0];
PyObject *var_serialization = NULL;
PyObject *var_der_cert = NULL;
PyObject *var_fingerprint = NULL;
PyObject *var_base64_fingerprint = NULL;
PyObject *var_unpadded_base64_fingerprint = NULL;
PyObject *var_e = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint)) {
    Py_XDECREF(cache_frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint = MAKE_FUNCTION_FRAME(tstate, code_objects_5a23d8f1bc805ab143f6993d1e48ebc3, module_google$auth$_agent_identity_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint->m_type_description == NULL);
frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint = cache_frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint);
assert(Py_REFCNT(frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$_agent_identity_utils;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_serialization_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint->m_frame.f_lineno = 226;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$_agent_identity_utils,
        mod_consts.const_str_plain_serialization,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_serialization);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(var_serialization == NULL);
var_serialization = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_cert);
tmp_expression_value_1 = par_cert;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_public_bytes);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_serialization);
tmp_expression_value_3 = var_serialization;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Encoding);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 228;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_DER);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 228;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint->m_frame.f_lineno = 228;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(var_der_cert == NULL);
var_der_cert = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = module_var_accessor_google$auth$_agent_identity_utils$hashlib(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_der_cert);
tmp_args_element_value_2 = var_der_cert;
frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint->m_frame.f_lineno = 229;
tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_sha256, tmp_args_element_value_2);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint->m_frame.f_lineno = 229;
tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_digest);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(var_fingerprint == NULL);
var_fingerprint = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_3;
tmp_called_instance_3 = module_var_accessor_google$auth$_agent_identity_utils$base64(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base64);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_fingerprint);
tmp_args_element_value_3 = var_fingerprint;
frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint->m_frame.f_lineno = 235;
tmp_expression_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_b64encode, tmp_args_element_value_3);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint->m_frame.f_lineno = 235;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(var_base64_fingerprint == NULL);
var_base64_fingerprint = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_base64_fingerprint);
tmp_expression_value_5 = var_base64_fingerprint;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_rstrip);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint->m_frame.f_lineno = 236;
tmp_assign_source_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_chr_61_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(var_unpadded_base64_fingerprint == NULL);
var_unpadded_base64_fingerprint = tmp_assign_source_5;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
tmp_called_value_4 = module_var_accessor_google$auth$_agent_identity_utils$quote(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_quote);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 237;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_unpadded_base64_fingerprint);
tmp_args_element_value_4 = var_unpadded_base64_fingerprint;
frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint->m_frame.f_lineno = 237;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint, exception_keeper_lineno_1);
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
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_6); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_6);
var_e = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = module_var_accessor_google$auth$_agent_identity_utils$CRYPTOGRAPHY_NOT_FOUND_ERROR(tstate);
if (unlikely(tmp_make_exception_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CRYPTOGRAPHY_NOT_FOUND_ERROR);
}

if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint->m_frame.f_lineno = 239;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ImportError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 239;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooooo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 225;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint->m_frame)) {
        frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint,
    type_description_1,
    par_cert,
    var_serialization,
    var_der_cert,
    var_fingerprint,
    var_base64_fingerprint,
    var_unpadded_base64_fingerprint,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint == cache_frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint);
    cache_frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint = NULL;
}

assertFrameObject(frame_frame_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_serialization);
CHECK_OBJECT(var_serialization);
Py_DECREF(var_serialization);
var_serialization = NULL;
CHECK_OBJECT(var_der_cert);
CHECK_OBJECT(var_der_cert);
Py_DECREF(var_der_cert);
var_der_cert = NULL;
CHECK_OBJECT(var_fingerprint);
CHECK_OBJECT(var_fingerprint);
Py_DECREF(var_fingerprint);
var_fingerprint = NULL;
CHECK_OBJECT(var_base64_fingerprint);
CHECK_OBJECT(var_base64_fingerprint);
Py_DECREF(var_base64_fingerprint);
var_base64_fingerprint = NULL;
CHECK_OBJECT(var_unpadded_base64_fingerprint);
CHECK_OBJECT(var_unpadded_base64_fingerprint);
Py_DECREF(var_unpadded_base64_fingerprint);
var_unpadded_base64_fingerprint = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_serialization);
var_serialization = NULL;
Py_XDECREF(var_der_cert);
var_der_cert = NULL;
Py_XDECREF(var_fingerprint);
var_fingerprint = NULL;
Py_XDECREF(var_base64_fingerprint);
var_base64_fingerprint = NULL;
Py_XDECREF(var_unpadded_base64_fingerprint);
var_unpadded_base64_fingerprint = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cert = python_pars[0];
PyObject *var_is_agent_cert = NULL;
PyObject *var_is_opted_in = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token)) {
    Py_XDECREF(cache_frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token = MAKE_FUNCTION_FRAME(tstate, code_objects_27d317a10b73c6a09d3b56e6f90ab891, module_google$auth$_agent_identity_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token->m_type_description == NULL);
frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token = cache_frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token);
assert(Py_REFCNT(frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_google$auth$_agent_identity_utils$_is_agent_identity_certificate(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_agent_identity_certificate);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cert);
tmp_args_element_value_1 = par_cert;
frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token->m_frame.f_lineno = 254;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_is_agent_cert == NULL);
var_is_agent_cert = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
tmp_expression_value_3 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_environ);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_google$auth$_agent_identity_utils$environment_vars(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 257;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_digest_20475c486f127d59b0974272c7a69b01);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 257;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_plain_true;
frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token->m_frame.f_lineno = 256;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token->m_frame.f_lineno = 256;
tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_true;
tmp_assign_source_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_is_opted_in == NULL);
var_is_opted_in = tmp_assign_source_2;
}
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
CHECK_OBJECT(var_is_agent_cert);
tmp_and_left_value_1 = var_is_agent_cert;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_is_opted_in);
tmp_and_right_value_1 = var_is_opted_in;
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token,
    type_description_1,
    par_cert,
    var_is_agent_cert,
    var_is_opted_in
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token == cache_frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token);
    cache_frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token = NULL;
}

assertFrameObject(frame_frame_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_is_agent_cert);
CHECK_OBJECT(var_is_agent_cert);
Py_DECREF(var_is_agent_cert);
var_is_agent_cert = NULL;
CHECK_OBJECT(var_is_opted_in);
CHECK_OBJECT(var_is_opted_in);
Py_DECREF(var_is_opted_in);
var_is_opted_in = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_is_agent_cert);
var_is_agent_cert = NULL;
Py_XDECREF(var_is_opted_in);
var_is_opted_in = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cached_cert = python_pars[0];
PyObject *var_cert_obj = NULL;
PyObject *var_cached_cert_fingerprint = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint)) {
    Py_XDECREF(cache_frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint = MAKE_FUNCTION_FRAME(tstate, code_objects_e7b71ec08a61aece5a604c2d72f6dbfb, module_google$auth$_agent_identity_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint->m_type_description == NULL);
frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint = cache_frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint);
assert(Py_REFCNT(frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_cached_cert);
tmp_truth_name_1 = CHECK_IF_TRUE(par_cached_cert);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooo";
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
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_google$auth$_agent_identity_utils$parse_certificate(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parse_certificate);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 268;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cached_cert);
tmp_args_element_value_1 = par_cached_cert;
frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint->m_frame.f_lineno = 268;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_cert_obj == NULL);
var_cert_obj = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_google$auth$_agent_identity_utils$calculate_certificate_fingerprint(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_calculate_certificate_fingerprint);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cert_obj);
tmp_args_element_value_2 = var_cert_obj;
frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint->m_frame.f_lineno = 269;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_cached_cert_fingerprint == NULL);
var_cached_cert_fingerprint = tmp_assign_source_2;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_91f051cdcea4ef0090ee8cc20f93e2ac;
frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint->m_frame.f_lineno = 271;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 271;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint,
    type_description_1,
    par_cached_cert,
    var_cert_obj,
    var_cached_cert_fingerprint
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint == cache_frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint);
    cache_frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint = NULL;
}

assertFrameObject(frame_frame_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_cached_cert_fingerprint);
tmp_return_value = var_cached_cert_fingerprint;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cert_obj);
CHECK_OBJECT(var_cert_obj);
Py_DECREF(var_cert_obj);
var_cert_obj = NULL;
CHECK_OBJECT(var_cached_cert_fingerprint);
CHECK_OBJECT(var_cached_cert_fingerprint);
Py_DECREF(var_cached_cert_fingerprint);
var_cached_cert_fingerprint = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cert_obj);
var_cert_obj = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cached_cert);
Py_DECREF(par_cached_cert);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cached_cert);
Py_DECREF(par_cached_cert);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready,
        mod_consts.const_str_plain__is_certificate_file_ready,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_eaec62ff06dd9387d9e61c4b38f55bfb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$_agent_identity_utils,
        mod_consts.const_str_digest_a7fd8638319d81d58401820afef1fd4a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path,
        mod_consts.const_str_plain_get_agent_identity_certificate_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2e0f00f1b40cdb090ba1f3b64282a978,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$_agent_identity_utils,
        mod_consts.const_str_digest_822a25be0a164985a675bbb26029390d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate,
        mod_consts.const_str_plain_get_and_parse_agent_identity_certificate,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_be98778ab396f28f717725cb4bfad43b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$_agent_identity_utils,
        mod_consts.const_str_digest_4d75abe77763f7b0679c300d250aeb8d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__4_parse_certificate(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$_agent_identity_utils$$$function__4_parse_certificate,
        mod_consts.const_str_plain_parse_certificate,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6c0358a9bef5cae5fa4a06806a2d270d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$_agent_identity_utils,
        mod_consts.const_str_digest_86cbec2a1169ebc4c83306c6a3d9809f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate,
        mod_consts.const_str_plain__is_agent_identity_certificate,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8090b272ecd59d728239e8af3aa77ee2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$_agent_identity_utils,
        mod_consts.const_str_digest_988b81d691a53bb9cd74c9eb2757764c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint,
        mod_consts.const_str_plain_calculate_certificate_fingerprint,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5a23d8f1bc805ab143f6993d1e48ebc3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$_agent_identity_utils,
        mod_consts.const_str_digest_869ae2ce1002de083d13581f45a1d0ce,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token,
        mod_consts.const_str_plain_should_request_bound_token,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_27d317a10b73c6a09d3b56e6f90ab891,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$_agent_identity_utils,
        mod_consts.const_str_digest_1bca9869091f8d3f8ce53abd0f41083b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint,
        mod_consts.const_str_plain_get_cached_cert_fingerprint,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e7b71ec08a61aece5a604c2d72f6dbfb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$_agent_identity_utils,
        mod_consts.const_str_digest_8cb97128a5bbc91803a152ef24a661ff,
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

static function_impl_code const function_table_google$auth$_agent_identity_utils[] = {
impl_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready,
impl_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path,
impl_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate,
impl_google$auth$_agent_identity_utils$$$function__4_parse_certificate,
impl_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate,
impl_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint,
impl_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token,
impl_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$_agent_identity_utils);
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
        module_google$auth$_agent_identity_utils,
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
        function_table_google$auth$_agent_identity_utils,
        sizeof(function_table_google$auth$_agent_identity_utils) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth._agent_identity_utils";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$_agent_identity_utils(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$_agent_identity_utils");

    // Store the module for future use.
    module_google$auth$_agent_identity_utils = module;

    moduledict_google$auth$_agent_identity_utils = MODULE_DICT(module_google$auth$_agent_identity_utils);

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
        PRINT_STRING("google$auth$_agent_identity_utils: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$_agent_identity_utils: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$_agent_identity_utils: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth._agent_identity_utils" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$_agent_identity_utils\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$_agent_identity_utils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$_agent_identity_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$_agent_identity_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$_agent_identity_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$_agent_identity_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$_agent_identity_utils);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$_agent_identity_utils);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$_agent_identity_utils;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_9c98b9ab3c947ea77a25c4d3969267a0;
UPDATE_STRING_DICT0(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$_agent_identity_utils = MAKE_MODULE_FRAME(code_objects_a964a44af635f396b86e8a012cebf1b2, module_google$auth$_agent_identity_utils);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$_agent_identity_utils);
assert(Py_REFCNT(frame_frame_google$auth$_agent_identity_utils) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$_agent_identity_utils$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$_agent_identity_utils$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_base64;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$_agent_identity_utils;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$_agent_identity_utils->m_frame.f_lineno = 17;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_base64, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_hashlib;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$_agent_identity_utils;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$_agent_identity_utils->m_frame.f_lineno = 18;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$_agent_identity_utils;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$_agent_identity_utils->m_frame.f_lineno = 19;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$auth$_agent_identity_utils;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_google$auth$_agent_identity_utils->m_frame.f_lineno = 21;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_time;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$auth$_agent_identity_utils;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_google$auth$_agent_identity_utils->m_frame.f_lineno = 22;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_time, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$auth$_agent_identity_utils;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_quote_str_plain_urlparse_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_google$auth$_agent_identity_utils->m_frame.f_lineno = 23;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$_agent_identity_utils,
        mod_consts.const_str_plain_quote,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_quote);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_quote, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$auth$_agent_identity_utils,
        mod_consts.const_str_plain_urlparse,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_urlparse);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse, tmp_assign_source_12);
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
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$auth$_agent_identity_utils;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_environment_vars_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_google$auth$_agent_identity_utils->m_frame.f_lineno = 25;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$auth$_agent_identity_utils,
        mod_consts.const_str_plain_environment_vars,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_environment_vars);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_8 = (PyObject *)moduledict_google$auth$_agent_identity_utils;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_google$auth$_agent_identity_utils->m_frame.f_lineno = 26;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$auth$_agent_identity_utils,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$_agent_identity_utils$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$_agent_identity_utils->m_frame.f_lineno = 29;
tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_3cc25a53f119a2f0e834072f8d7adcbe_tuple, 0)
);

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_str_digest_d20caaf06595ed6f2f99e047846ee286;
UPDATE_STRING_DICT0(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_CRYPTOGRAPHY_NOT_FOUND_ERROR, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_LIST2(tstate, mod_consts.const_str_digest_e0ec2aaf28353a523cf9e1b8d51a634b,mod_consts.const_str_digest_e77ebb9810739f157788a4133ed567ab);
UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_digest_30a91d62148a1dc49a972a1fe47d5bd8, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = mod_consts.const_str_digest_efaf47ccfb74e8b5b497a60b28a371b0;
UPDATE_STRING_DICT0(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__WELL_KNOWN_CERT_PATH, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_int_pos_50;
UPDATE_STRING_DICT0(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__FAST_POLL_CYCLES, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = mod_consts.const_float_0_1;
UPDATE_STRING_DICT0(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__FAST_POLL_INTERVAL, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = mod_consts.const_float_0_5;
UPDATE_STRING_DICT0(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__SLOW_POLL_INTERVAL, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = mod_consts.const_int_pos_30;
UPDATE_STRING_DICT0(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__TOTAL_TIMEOUT, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_int_arg_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
tmp_sub_expr_left_1 = module_var_accessor_google$auth$_agent_identity_utils$_TOTAL_TIMEOUT(tstate);
assert(!(tmp_sub_expr_left_1 == NULL));
tmp_mult_expr_left_1 = module_var_accessor_google$auth$_agent_identity_utils$_FAST_POLL_CYCLES(tstate);
assert(!(tmp_mult_expr_left_1 == NULL));
tmp_mult_expr_right_1 = module_var_accessor_google$auth$_agent_identity_utils$_FAST_POLL_INTERVAL(tstate);
assert(!(tmp_mult_expr_right_1 == NULL));
tmp_sub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_LONG(tmp_mult_expr_right_1, tmp_mult_expr_left_1);
assert(!(tmp_sub_expr_right_1 == NULL));
tmp_truediv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_LONG_FLOAT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
assert(!(tmp_truediv_expr_left_1 == NULL));
tmp_truediv_expr_right_1 = module_var_accessor_google$auth$_agent_identity_utils$_SLOW_POLL_INTERVAL(tstate);
assert(!(tmp_truediv_expr_right_1 == NULL));
tmp_int_arg_1 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_FLOAT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
tmp_assign_source_23 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__SLOW_POLL_CYCLES, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_list_element_1;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_list_element_2;
tmp_list_element_1 = module_var_accessor_google$auth$_agent_identity_utils$_FAST_POLL_INTERVAL(tstate);
if (unlikely(tmp_list_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__FAST_POLL_INTERVAL);
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;

    goto frame_exception_exit_1;
}
tmp_mult_expr_left_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_mult_expr_left_2, 0, tmp_list_element_1);
tmp_mult_expr_right_2 = module_var_accessor_google$auth$_agent_identity_utils$_FAST_POLL_CYCLES(tstate);
if (unlikely(tmp_mult_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__FAST_POLL_CYCLES);
}

if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 55;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
tmp_list_element_2 = module_var_accessor_google$auth$_agent_identity_utils$_SLOW_POLL_INTERVAL(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SLOW_POLL_INTERVAL);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 56;

    goto frame_exception_exit_1;
}
tmp_mult_expr_left_3 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_mult_expr_left_3, 0, tmp_list_element_2);
tmp_mult_expr_right_3 = module_var_accessor_google$auth$_agent_identity_utils$_SLOW_POLL_CYCLES(tstate);
if (unlikely(tmp_mult_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SLOW_POLL_CYCLES);
}

if (tmp_mult_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_mult_expr_left_3);

exception_lineno = 56;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_left_3);
Py_DECREF(tmp_mult_expr_left_3);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 56;

    goto frame_exception_exit_1;
}
tmp_assign_source_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__POLLING_INTERVALS, tmp_assign_source_24);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_agent_identity_utils, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$_agent_identity_utils->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_agent_identity_utils, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$_agent_identity_utils);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_25;

tmp_assign_source_25 = MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__1__is_certificate_file_ready(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__is_certificate_file_ready, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;

tmp_assign_source_26 = MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__2_get_agent_identity_certificate_path(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_get_agent_identity_certificate_path, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;

tmp_assign_source_27 = MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__3_get_and_parse_agent_identity_certificate(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_get_and_parse_agent_identity_certificate, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;

tmp_assign_source_28 = MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__4_parse_certificate(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_certificate, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;

tmp_assign_source_29 = MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__5__is_agent_identity_certificate(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__is_agent_identity_certificate, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;

tmp_assign_source_30 = MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__6_calculate_certificate_fingerprint(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_calculate_certificate_fingerprint, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;

tmp_assign_source_31 = MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__7_should_request_bound_token(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_should_request_bound_token, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;

tmp_assign_source_32 = MAKE_FUNCTION_google$auth$_agent_identity_utils$$$function__8_get_cached_cert_fingerprint(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_get_cached_cert_fingerprint, tmp_assign_source_32);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$_agent_identity_utils", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth._agent_identity_utils" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$_agent_identity_utils);
    return module_google$auth$_agent_identity_utils;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$_agent_identity_utils, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$_agent_identity_utils", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

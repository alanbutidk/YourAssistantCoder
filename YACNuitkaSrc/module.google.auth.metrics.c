/* Generated code for Python module 'google$auth$metrics'
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



/* The "module_google$auth$metrics" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$metrics;
PyDictObject *moduledict_google$auth$metrics;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_d8467dbfb7db2e3de1fd1fcb8a0ce792;
PyObject *const_str_plain_platform;
PyObject *const_str_plain_python_version;
PyObject *const_str_plain_version;
PyObject *const_str_plain___version__;
PyObject *const_str_digest_c7389cd76e44f9b5ad9c30efca22e61a;
PyObject *const_str_plain_python_and_auth_lib_version;
PyObject *const_str_plain_REQUEST_TYPE_ACCESS_TOKEN;
PyObject *const_str_plain_CRED_TYPE_SA_MDS;
PyObject *const_str_plain_REQUEST_TYPE_ID_TOKEN;
PyObject *const_str_plain_CRED_TYPE_SA_IMPERSONATE;
PyObject *const_str_plain_CRED_TYPE_SA_ASSERTION;
PyObject *const_str_digest_3b65818e376708084f0fbc5146e3aa38;
PyObject *const_str_plain_CRED_TYPE_USER;
PyObject *const_str_plain_REQUEST_TYPE_MDS_PING;
PyObject *const_str_plain_REQUEST_TYPE_REAUTH_START;
PyObject *const_str_plain_REQUEST_TYPE_REAUTH_CONTINUE;
PyObject *const_str_plain_BYOID_HEADER_SECTION;
PyObject *const_str_plain_items;
PyObject *const_str_digest_157109ec2b3a449da55c216fb58af004;
PyObject *const_str_plain_header;
PyObject *const_str_plain_API_CLIENT_HEADER;
PyObject *const_str_space;
PyObject *const_str_digest_d0de8814917ad222f324d27f2fd12427;
PyObject *const_str_digest_c8837df02addf68323ae8739ec0d7e1e;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain_version_tuple;
PyObject *const_str_digest_a323eea3d037c14008d3cc1854afbacf;
PyObject *const_str_digest_e30e8eea528495592a539bf2c800052a;
PyObject *const_str_digest_6962670ab626d48ae6d503aabf997437;
PyObject *const_str_digest_1d856521282c713e87e4a9ca635a2b7b;
PyObject *const_str_digest_0502577edc83358fee518acf1a27b11a;
PyObject *const_str_digest_e7f4172023d094070f78a0ec5202af62;
PyObject *const_str_digest_9d411eb465cc882a889480e1275a2845;
PyObject *const_str_digest_9cffe61da741205f3eb307391a124aaa;
PyObject *const_str_digest_33dac2ece83abfc6058177f3c9db8045;
PyObject *const_str_digest_f9850a40fff3a5da2530ea8bef53b693;
PyObject *const_str_plain_CRED_TYPE_SA_JWT;
PyObject *const_str_digest_f136e0c105c47b291b177526498b00c0;
PyObject *const_str_digest_733310cc46891e63e434bc69bcd77c7e;
PyObject *const_str_plain_token_request_access_token_mds;
PyObject *const_str_plain_token_request_id_token_mds;
PyObject *const_str_plain_token_request_access_token_impersonate;
PyObject *const_str_plain_token_request_id_token_impersonate;
PyObject *const_str_plain_token_request_access_token_sa_assertion;
PyObject *const_str_plain_token_request_id_token_sa_assertion;
PyObject *const_str_plain_token_request_user;
PyObject *const_str_plain_mds_ping;
PyObject *const_str_plain_reauth_start;
PyObject *const_str_plain_reauth_continue;
PyObject *const_str_plain_byoid_metrics_header;
PyObject *const_str_plain_add_metric_header;
PyObject *const_str_digest_9eeedae0072413b092112ab98e4f7637;
PyObject *const_str_digest_c81f1aff8e31ad5fc47a9d421f4ff493;
PyObject *const_tuple_str_plain_headers_str_plain_metric_header_value_tuple;
PyObject *const_tuple_0eddbdf0782f9fcd2b5459a2442868bb_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[58];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth.metrics"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8467dbfb7db2e3de1fd1fcb8a0ce792);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_platform);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_python_version);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_version);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7389cd76e44f9b5ad9c30efca22e61a);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_python_and_auth_lib_version);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_TYPE_ACCESS_TOKEN);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRED_TYPE_SA_MDS);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_TYPE_ID_TOKEN);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRED_TYPE_SA_IMPERSONATE);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRED_TYPE_SA_ASSERTION);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b65818e376708084f0fbc5146e3aa38);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRED_TYPE_USER);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_TYPE_MDS_PING);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_START);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_CONTINUE);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_BYOID_HEADER_SECTION);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_157109ec2b3a449da55c216fb58af004);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_header);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_API_CLIENT_HEADER);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_d0de8814917ad222f324d27f2fd12427);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_c8837df02addf68323ae8739ec0d7e1e);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_version_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_a323eea3d037c14008d3cc1854afbacf);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_e30e8eea528495592a539bf2c800052a);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_6962670ab626d48ae6d503aabf997437);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d856521282c713e87e4a9ca635a2b7b);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_0502577edc83358fee518acf1a27b11a);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_e7f4172023d094070f78a0ec5202af62);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d411eb465cc882a889480e1275a2845);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_9cffe61da741205f3eb307391a124aaa);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_33dac2ece83abfc6058177f3c9db8045);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9850a40fff3a5da2530ea8bef53b693);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRED_TYPE_SA_JWT);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_f136e0c105c47b291b177526498b00c0);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_733310cc46891e63e434bc69bcd77c7e);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_access_token_mds);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_id_token_mds);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_access_token_impersonate);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_id_token_impersonate);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_access_token_sa_assertion);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_id_token_sa_assertion);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_user);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_mds_ping);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_reauth_start);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_reauth_continue);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_byoid_metrics_header);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_metric_header);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_9eeedae0072413b092112ab98e4f7637);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_c81f1aff8e31ad5fc47a9d421f4ff493);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_str_plain_metric_header_value_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_0eddbdf0782f9fcd2b5459a2442868bb_tuple);
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
void checkModuleConstants_google$auth$metrics(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8467dbfb7db2e3de1fd1fcb8a0ce792));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d8467dbfb7db2e3de1fd1fcb8a0ce792);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_platform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_platform);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_python_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_python_version);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_version);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version__);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7389cd76e44f9b5ad9c30efca22e61a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c7389cd76e44f9b5ad9c30efca22e61a);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_python_and_auth_lib_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_python_and_auth_lib_version);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_TYPE_ACCESS_TOKEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REQUEST_TYPE_ACCESS_TOKEN);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRED_TYPE_SA_MDS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CRED_TYPE_SA_MDS);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_TYPE_ID_TOKEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REQUEST_TYPE_ID_TOKEN);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRED_TYPE_SA_IMPERSONATE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CRED_TYPE_SA_IMPERSONATE);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRED_TYPE_SA_ASSERTION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CRED_TYPE_SA_ASSERTION);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b65818e376708084f0fbc5146e3aa38));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b65818e376708084f0fbc5146e3aa38);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRED_TYPE_USER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CRED_TYPE_USER);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_TYPE_MDS_PING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REQUEST_TYPE_MDS_PING);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_START));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_START);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_CONTINUE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_CONTINUE);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_BYOID_HEADER_SECTION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BYOID_HEADER_SECTION);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_157109ec2b3a449da55c216fb58af004));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_157109ec2b3a449da55c216fb58af004);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_header);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_API_CLIENT_HEADER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_API_CLIENT_HEADER);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_d0de8814917ad222f324d27f2fd12427));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d0de8814917ad222f324d27f2fd12427);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_c8837df02addf68323ae8739ec0d7e1e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c8837df02addf68323ae8739ec0d7e1e);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_version_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_version_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_a323eea3d037c14008d3cc1854afbacf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a323eea3d037c14008d3cc1854afbacf);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_e30e8eea528495592a539bf2c800052a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e30e8eea528495592a539bf2c800052a);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_6962670ab626d48ae6d503aabf997437));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6962670ab626d48ae6d503aabf997437);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d856521282c713e87e4a9ca635a2b7b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d856521282c713e87e4a9ca635a2b7b);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_0502577edc83358fee518acf1a27b11a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0502577edc83358fee518acf1a27b11a);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_e7f4172023d094070f78a0ec5202af62));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e7f4172023d094070f78a0ec5202af62);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d411eb465cc882a889480e1275a2845));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d411eb465cc882a889480e1275a2845);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_9cffe61da741205f3eb307391a124aaa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9cffe61da741205f3eb307391a124aaa);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_33dac2ece83abfc6058177f3c9db8045));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_33dac2ece83abfc6058177f3c9db8045);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9850a40fff3a5da2530ea8bef53b693));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f9850a40fff3a5da2530ea8bef53b693);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRED_TYPE_SA_JWT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CRED_TYPE_SA_JWT);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_f136e0c105c47b291b177526498b00c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f136e0c105c47b291b177526498b00c0);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_733310cc46891e63e434bc69bcd77c7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_733310cc46891e63e434bc69bcd77c7e);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_access_token_mds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_request_access_token_mds);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_id_token_mds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_request_id_token_mds);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_access_token_impersonate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_request_access_token_impersonate);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_id_token_impersonate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_request_id_token_impersonate);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_access_token_sa_assertion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_request_access_token_sa_assertion);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_id_token_sa_assertion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_request_id_token_sa_assertion);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_user));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_request_user);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_mds_ping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mds_ping);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_reauth_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reauth_start);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_reauth_continue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reauth_continue);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_byoid_metrics_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_byoid_metrics_header);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_metric_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_metric_header);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_9eeedae0072413b092112ab98e4f7637));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9eeedae0072413b092112ab98e4f7637);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_c81f1aff8e31ad5fc47a9d421f4ff493));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c81f1aff8e31ad5fc47a9d421f4ff493);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_str_plain_metric_header_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_headers_str_plain_metric_header_value_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_0eddbdf0782f9fcd2b5459a2442868bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0eddbdf0782f9fcd2b5459a2442868bb_tuple);
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
static PyObject *module_var_accessor_google$auth$metrics$API_CLIENT_HEADER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$metrics->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$metrics->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_API_CLIENT_HEADER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$metrics->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_API_CLIENT_HEADER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_API_CLIENT_HEADER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_API_CLIENT_HEADER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_API_CLIENT_HEADER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_API_CLIENT_HEADER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_API_CLIENT_HEADER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_API_CLIENT_HEADER);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$metrics$BYOID_HEADER_SECTION(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$metrics->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$metrics->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_BYOID_HEADER_SECTION);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$metrics->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BYOID_HEADER_SECTION);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BYOID_HEADER_SECTION, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BYOID_HEADER_SECTION);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BYOID_HEADER_SECTION, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_BYOID_HEADER_SECTION);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_BYOID_HEADER_SECTION);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BYOID_HEADER_SECTION);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$metrics$CRED_TYPE_SA_ASSERTION(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$metrics->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$metrics->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_SA_ASSERTION);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$metrics->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CRED_TYPE_SA_ASSERTION);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CRED_TYPE_SA_ASSERTION, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CRED_TYPE_SA_ASSERTION);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CRED_TYPE_SA_ASSERTION, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_SA_ASSERTION);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_SA_ASSERTION);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_SA_ASSERTION);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$metrics$CRED_TYPE_SA_IMPERSONATE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$metrics->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$metrics->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_SA_IMPERSONATE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$metrics->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CRED_TYPE_SA_IMPERSONATE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CRED_TYPE_SA_IMPERSONATE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CRED_TYPE_SA_IMPERSONATE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CRED_TYPE_SA_IMPERSONATE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_SA_IMPERSONATE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_SA_IMPERSONATE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_SA_IMPERSONATE);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$metrics$CRED_TYPE_SA_MDS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$metrics->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$metrics->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_SA_MDS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$metrics->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CRED_TYPE_SA_MDS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CRED_TYPE_SA_MDS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CRED_TYPE_SA_MDS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CRED_TYPE_SA_MDS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_SA_MDS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_SA_MDS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_SA_MDS);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$metrics$CRED_TYPE_USER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$metrics->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$metrics->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_USER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$metrics->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CRED_TYPE_USER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CRED_TYPE_USER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CRED_TYPE_USER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CRED_TYPE_USER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_USER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_USER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_USER);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$metrics$REQUEST_TYPE_ACCESS_TOKEN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$metrics->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$metrics->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_ACCESS_TOKEN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$metrics->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REQUEST_TYPE_ACCESS_TOKEN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REQUEST_TYPE_ACCESS_TOKEN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REQUEST_TYPE_ACCESS_TOKEN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REQUEST_TYPE_ACCESS_TOKEN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_ACCESS_TOKEN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_ACCESS_TOKEN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_ACCESS_TOKEN);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$metrics$REQUEST_TYPE_ID_TOKEN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$metrics->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$metrics->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_ID_TOKEN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$metrics->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REQUEST_TYPE_ID_TOKEN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REQUEST_TYPE_ID_TOKEN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REQUEST_TYPE_ID_TOKEN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REQUEST_TYPE_ID_TOKEN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_ID_TOKEN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_ID_TOKEN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_ID_TOKEN);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$metrics$REQUEST_TYPE_MDS_PING(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$metrics->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$metrics->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_MDS_PING);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$metrics->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REQUEST_TYPE_MDS_PING);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REQUEST_TYPE_MDS_PING, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REQUEST_TYPE_MDS_PING);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REQUEST_TYPE_MDS_PING, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_MDS_PING);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_MDS_PING);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_MDS_PING);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$metrics$REQUEST_TYPE_REAUTH_CONTINUE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$metrics->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$metrics->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_CONTINUE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$metrics->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_CONTINUE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_CONTINUE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_CONTINUE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_CONTINUE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_CONTINUE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_CONTINUE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_CONTINUE);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$metrics$REQUEST_TYPE_REAUTH_START(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$metrics->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$metrics->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_START);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$metrics->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_START);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_START, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_START);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_START, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_START);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_START);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_START);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$metrics$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$metrics->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$metrics->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$metrics->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$metrics$platform(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$metrics->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$metrics->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$metrics->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_platform);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_platform, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_platform);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_platform, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$metrics$python_and_auth_lib_version(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$metrics->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$metrics->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_python_and_auth_lib_version);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$metrics->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_python_and_auth_lib_version);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_python_and_auth_lib_version, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_python_and_auth_lib_version);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_python_and_auth_lib_version, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_python_and_auth_lib_version);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_python_and_auth_lib_version);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_python_and_auth_lib_version);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$metrics$version(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$metrics->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$metrics->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_version);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$metrics->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_version);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_version, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_version);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_version, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_version);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_version);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_version);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_d8674f64fadd2424a378d65ad0db3d0d;
static PyCodeObject *code_objects_b7c0f81615d42f9e5c39c7d92faa7b60;
static PyCodeObject *code_objects_ee19738b50f008fb81e0c47f5b47f1f8;
static PyCodeObject *code_objects_7a551db2e869f0dd30bd726399b7afde;
static PyCodeObject *code_objects_be3ae26dbd595ba87e6099e897d0a24f;
static PyCodeObject *code_objects_b986c800b6d4ea051e5d4ff1b285a414;
static PyCodeObject *code_objects_3cde4a5a0e8910a8ca07e82ad45ef7df;
static PyCodeObject *code_objects_0019ef31f0144635d3f54f479fbb213c;
static PyCodeObject *code_objects_d241157a27f5657f0662db333aeae18b;
static PyCodeObject *code_objects_83b7a0de490e8ec82a6cb27bef900cb0;
static PyCodeObject *code_objects_3a740944dcc560982fbe72132358fdaa;
static PyCodeObject *code_objects_dd384dedf9c6974bc6ec8627c958be33;
static PyCodeObject *code_objects_3302898e8191f35a869e0583eefb4d9d;
static PyCodeObject *code_objects_205b8cac4bbc881e06d47c5f74fd747c;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_9eeedae0072413b092112ab98e4f7637); CHECK_OBJECT(module_filename_obj);
code_objects_d8674f64fadd2424a378d65ad0db3d0d = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_c81f1aff8e31ad5fc47a9d421f4ff493, mod_consts.const_str_digest_c81f1aff8e31ad5fc47a9d421f4ff493, NULL, NULL, 0, 0, 0);
code_objects_b7c0f81615d42f9e5c39c7d92faa7b60 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_add_metric_header, mod_consts.const_str_plain_add_metric_header, mod_consts.const_tuple_str_plain_headers_str_plain_metric_header_value_tuple, NULL, 2, 0, 0);
code_objects_ee19738b50f008fb81e0c47f5b47f1f8 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_byoid_metrics_header, mod_consts.const_str_plain_byoid_metrics_header, mod_consts.const_tuple_0eddbdf0782f9fcd2b5459a2442868bb_tuple, NULL, 1, 0, 0);
code_objects_7a551db2e869f0dd30bd726399b7afde = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_mds_ping, mod_consts.const_str_plain_mds_ping, NULL, NULL, 0, 0, 0);
code_objects_be3ae26dbd595ba87e6099e897d0a24f = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_python_and_auth_lib_version, mod_consts.const_str_plain_python_and_auth_lib_version, NULL, NULL, 0, 0, 0);
code_objects_b986c800b6d4ea051e5d4ff1b285a414 = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_reauth_continue, mod_consts.const_str_plain_reauth_continue, NULL, NULL, 0, 0, 0);
code_objects_3cde4a5a0e8910a8ca07e82ad45ef7df = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_reauth_start, mod_consts.const_str_plain_reauth_start, NULL, NULL, 0, 0, 0);
code_objects_0019ef31f0144635d3f54f479fbb213c = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_token_request_access_token_impersonate, mod_consts.const_str_plain_token_request_access_token_impersonate, NULL, NULL, 0, 0, 0);
code_objects_d241157a27f5657f0662db333aeae18b = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_token_request_access_token_mds, mod_consts.const_str_plain_token_request_access_token_mds, NULL, NULL, 0, 0, 0);
code_objects_83b7a0de490e8ec82a6cb27bef900cb0 = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_token_request_access_token_sa_assertion, mod_consts.const_str_plain_token_request_access_token_sa_assertion, NULL, NULL, 0, 0, 0);
code_objects_3a740944dcc560982fbe72132358fdaa = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_token_request_id_token_impersonate, mod_consts.const_str_plain_token_request_id_token_impersonate, NULL, NULL, 0, 0, 0);
code_objects_dd384dedf9c6974bc6ec8627c958be33 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_token_request_id_token_mds, mod_consts.const_str_plain_token_request_id_token_mds, NULL, NULL, 0, 0, 0);
code_objects_3302898e8191f35a869e0583eefb4d9d = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_token_request_id_token_sa_assertion, mod_consts.const_str_plain_token_request_id_token_sa_assertion, NULL, NULL, 0, 0, 0);
code_objects_205b8cac4bbc881e06d47c5f74fd747c = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_token_request_user, mod_consts.const_str_plain_token_request_user, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__10_reauth_start(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__11_reauth_continue(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__12_byoid_metrics_header(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__13_add_metric_header(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__1_python_and_auth_lib_version(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__2_token_request_access_token_mds(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__3_token_request_id_token_mds(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__4_token_request_access_token_impersonate(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__5_token_request_id_token_impersonate(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__8_token_request_user(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__9_mds_ping(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_google$auth$metrics$$$function__1_python_and_auth_lib_version(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version)) {
    Py_XDECREF(cache_frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version = MAKE_FUNCTION_FRAME(tstate, code_objects_be3ae26dbd595ba87e6099e897d0a24f, module_google$auth$metrics, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version->m_type_description == NULL);
frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version = cache_frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version);
assert(Py_REFCNT(frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version) == 2);

// Framed code:
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_expression_value_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_d8467dbfb7db2e3de1fd1fcb8a0ce792;
tmp_called_instance_1 = module_var_accessor_google$auth$metrics$platform(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_platform);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version->m_frame.f_lineno = 46;
tmp_kw_call_arg_value_1_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_python_version);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
tmp_expression_value_1 = module_var_accessor_google$auth$metrics$version(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_version);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 46;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___version__);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 46;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version->m_frame.f_lineno = 46;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version == cache_frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version);
    cache_frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version = NULL;
}

assertFrameObject(frame_frame_google$auth$metrics$$$function__1_python_and_auth_lib_version);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_google$auth$metrics$$$function__2_token_request_access_token_mds(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds)) {
    Py_XDECREF(cache_frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds = MAKE_FUNCTION_FRAME(tstate, code_objects_d241157a27f5657f0662db333aeae18b, module_google$auth$metrics, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds->m_type_description == NULL);
frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds = cache_frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds);
assert(Py_REFCNT(frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds) == 2);

// Framed code:
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_c7389cd76e44f9b5ad9c30efca22e61a;
tmp_called_value_1 = module_var_accessor_google$auth$metrics$python_and_auth_lib_version(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_python_and_auth_lib_version);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds->m_frame.f_lineno = 56;
tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_2_1 = module_var_accessor_google$auth$metrics$REQUEST_TYPE_ACCESS_TOKEN(tstate);
if (unlikely(tmp_kw_call_arg_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_REQUEST_TYPE_ACCESS_TOKEN);
}

if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 56;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_3_1 = module_var_accessor_google$auth$metrics$CRED_TYPE_SA_MDS(tstate);
if (unlikely(tmp_kw_call_arg_value_3_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CRED_TYPE_SA_MDS);
}

if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 56;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds->m_frame.f_lineno = 55;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds == cache_frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds);
    cache_frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds = NULL;
}

assertFrameObject(frame_frame_google$auth$metrics$$$function__2_token_request_access_token_mds);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_google$auth$metrics$$$function__3_token_request_id_token_mds(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds)) {
    Py_XDECREF(cache_frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds = MAKE_FUNCTION_FRAME(tstate, code_objects_dd384dedf9c6974bc6ec8627c958be33, module_google$auth$metrics, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds->m_type_description == NULL);
frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds = cache_frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds);
assert(Py_REFCNT(frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds) == 2);

// Framed code:
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_c7389cd76e44f9b5ad9c30efca22e61a;
tmp_called_value_1 = module_var_accessor_google$auth$metrics$python_and_auth_lib_version(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_python_and_auth_lib_version);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds->m_frame.f_lineno = 64;
tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_2_1 = module_var_accessor_google$auth$metrics$REQUEST_TYPE_ID_TOKEN(tstate);
if (unlikely(tmp_kw_call_arg_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_REQUEST_TYPE_ID_TOKEN);
}

if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 64;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_3_1 = module_var_accessor_google$auth$metrics$CRED_TYPE_SA_MDS(tstate);
if (unlikely(tmp_kw_call_arg_value_3_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CRED_TYPE_SA_MDS);
}

if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 64;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds->m_frame.f_lineno = 63;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds == cache_frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds);
    cache_frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds = NULL;
}

assertFrameObject(frame_frame_google$auth$metrics$$$function__3_token_request_id_token_mds);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_google$auth$metrics$$$function__4_token_request_access_token_impersonate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate)) {
    Py_XDECREF(cache_frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate = MAKE_FUNCTION_FRAME(tstate, code_objects_0019ef31f0144635d3f54f479fbb213c, module_google$auth$metrics, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate->m_type_description == NULL);
frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate = cache_frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate);
assert(Py_REFCNT(frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate) == 2);

// Framed code:
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_c7389cd76e44f9b5ad9c30efca22e61a;
tmp_called_value_1 = module_var_accessor_google$auth$metrics$python_and_auth_lib_version(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_python_and_auth_lib_version);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate->m_frame.f_lineno = 72;
tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_2_1 = module_var_accessor_google$auth$metrics$REQUEST_TYPE_ACCESS_TOKEN(tstate);
if (unlikely(tmp_kw_call_arg_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_REQUEST_TYPE_ACCESS_TOKEN);
}

if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 73;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_3_1 = module_var_accessor_google$auth$metrics$CRED_TYPE_SA_IMPERSONATE(tstate);
if (unlikely(tmp_kw_call_arg_value_3_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CRED_TYPE_SA_IMPERSONATE);
}

if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 74;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate->m_frame.f_lineno = 71;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate == cache_frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate);
    cache_frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate = NULL;
}

assertFrameObject(frame_frame_google$auth$metrics$$$function__4_token_request_access_token_impersonate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_google$auth$metrics$$$function__5_token_request_id_token_impersonate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate)) {
    Py_XDECREF(cache_frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate = MAKE_FUNCTION_FRAME(tstate, code_objects_3a740944dcc560982fbe72132358fdaa, module_google$auth$metrics, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate->m_type_description == NULL);
frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate = cache_frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate);
assert(Py_REFCNT(frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate) == 2);

// Framed code:
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_c7389cd76e44f9b5ad9c30efca22e61a;
tmp_called_value_1 = module_var_accessor_google$auth$metrics$python_and_auth_lib_version(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_python_and_auth_lib_version);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate->m_frame.f_lineno = 82;
tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_2_1 = module_var_accessor_google$auth$metrics$REQUEST_TYPE_ID_TOKEN(tstate);
if (unlikely(tmp_kw_call_arg_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_REQUEST_TYPE_ID_TOKEN);
}

if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_3_1 = module_var_accessor_google$auth$metrics$CRED_TYPE_SA_IMPERSONATE(tstate);
if (unlikely(tmp_kw_call_arg_value_3_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CRED_TYPE_SA_IMPERSONATE);
}

if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 82;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate->m_frame.f_lineno = 81;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate == cache_frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate);
    cache_frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate = NULL;
}

assertFrameObject(frame_frame_google$auth$metrics$$$function__5_token_request_id_token_impersonate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion)) {
    Py_XDECREF(cache_frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion = MAKE_FUNCTION_FRAME(tstate, code_objects_83b7a0de490e8ec82a6cb27bef900cb0, module_google$auth$metrics, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion->m_type_description == NULL);
frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion = cache_frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion);
assert(Py_REFCNT(frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion) == 2);

// Framed code:
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_c7389cd76e44f9b5ad9c30efca22e61a;
tmp_called_value_1 = module_var_accessor_google$auth$metrics$python_and_auth_lib_version(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_python_and_auth_lib_version);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion->m_frame.f_lineno = 91;
tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_2_1 = module_var_accessor_google$auth$metrics$REQUEST_TYPE_ACCESS_TOKEN(tstate);
if (unlikely(tmp_kw_call_arg_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_REQUEST_TYPE_ACCESS_TOKEN);
}

if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 91;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_3_1 = module_var_accessor_google$auth$metrics$CRED_TYPE_SA_ASSERTION(tstate);
if (unlikely(tmp_kw_call_arg_value_3_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CRED_TYPE_SA_ASSERTION);
}

if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 91;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion->m_frame.f_lineno = 90;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion == cache_frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion);
    cache_frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion = NULL;
}

assertFrameObject(frame_frame_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion)) {
    Py_XDECREF(cache_frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion = MAKE_FUNCTION_FRAME(tstate, code_objects_3302898e8191f35a869e0583eefb4d9d, module_google$auth$metrics, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion->m_type_description == NULL);
frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion = cache_frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion);
assert(Py_REFCNT(frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion) == 2);

// Framed code:
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_c7389cd76e44f9b5ad9c30efca22e61a;
tmp_called_value_1 = module_var_accessor_google$auth$metrics$python_and_auth_lib_version(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_python_and_auth_lib_version);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion->m_frame.f_lineno = 100;
tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_2_1 = module_var_accessor_google$auth$metrics$REQUEST_TYPE_ID_TOKEN(tstate);
if (unlikely(tmp_kw_call_arg_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_REQUEST_TYPE_ID_TOKEN);
}

if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 100;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_3_1 = module_var_accessor_google$auth$metrics$CRED_TYPE_SA_ASSERTION(tstate);
if (unlikely(tmp_kw_call_arg_value_3_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CRED_TYPE_SA_ASSERTION);
}

if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 100;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion->m_frame.f_lineno = 99;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion == cache_frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion);
    cache_frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion = NULL;
}

assertFrameObject(frame_frame_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_google$auth$metrics$$$function__8_token_request_user(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_google$auth$metrics$$$function__8_token_request_user;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$metrics$$$function__8_token_request_user = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$metrics$$$function__8_token_request_user)) {
    Py_XDECREF(cache_frame_frame_google$auth$metrics$$$function__8_token_request_user);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$metrics$$$function__8_token_request_user == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$metrics$$$function__8_token_request_user = MAKE_FUNCTION_FRAME(tstate, code_objects_205b8cac4bbc881e06d47c5f74fd747c, module_google$auth$metrics, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$metrics$$$function__8_token_request_user->m_type_description == NULL);
frame_frame_google$auth$metrics$$$function__8_token_request_user = cache_frame_frame_google$auth$metrics$$$function__8_token_request_user;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$metrics$$$function__8_token_request_user);
assert(Py_REFCNT(frame_frame_google$auth$metrics$$$function__8_token_request_user) == 2);

// Framed code:
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_2_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_3b65818e376708084f0fbc5146e3aa38;
tmp_called_value_1 = module_var_accessor_google$auth$metrics$python_and_auth_lib_version(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_python_and_auth_lib_version);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__8_token_request_user->m_frame.f_lineno = 107;
tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_2_1 = module_var_accessor_google$auth$metrics$CRED_TYPE_USER(tstate);
if (unlikely(tmp_kw_call_arg_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CRED_TYPE_USER);
}

if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 107;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__8_token_request_user->m_frame.f_lineno = 107;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$metrics$$$function__8_token_request_user, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$metrics$$$function__8_token_request_user->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$metrics$$$function__8_token_request_user, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$metrics$$$function__8_token_request_user,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$metrics$$$function__8_token_request_user == cache_frame_frame_google$auth$metrics$$$function__8_token_request_user) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$metrics$$$function__8_token_request_user);
    cache_frame_frame_google$auth$metrics$$$function__8_token_request_user = NULL;
}

assertFrameObject(frame_frame_google$auth$metrics$$$function__8_token_request_user);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_google$auth$metrics$$$function__9_mds_ping(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_google$auth$metrics$$$function__9_mds_ping;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$metrics$$$function__9_mds_ping = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$metrics$$$function__9_mds_ping)) {
    Py_XDECREF(cache_frame_frame_google$auth$metrics$$$function__9_mds_ping);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$metrics$$$function__9_mds_ping == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$metrics$$$function__9_mds_ping = MAKE_FUNCTION_FRAME(tstate, code_objects_7a551db2e869f0dd30bd726399b7afde, module_google$auth$metrics, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$metrics$$$function__9_mds_ping->m_type_description == NULL);
frame_frame_google$auth$metrics$$$function__9_mds_ping = cache_frame_frame_google$auth$metrics$$$function__9_mds_ping;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$metrics$$$function__9_mds_ping);
assert(Py_REFCNT(frame_frame_google$auth$metrics$$$function__9_mds_ping) == 2);

// Framed code:
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_2_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_3b65818e376708084f0fbc5146e3aa38;
tmp_called_value_1 = module_var_accessor_google$auth$metrics$python_and_auth_lib_version(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_python_and_auth_lib_version);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__9_mds_ping->m_frame.f_lineno = 116;
tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_2_1 = module_var_accessor_google$auth$metrics$REQUEST_TYPE_MDS_PING(tstate);
if (unlikely(tmp_kw_call_arg_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_REQUEST_TYPE_MDS_PING);
}

if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 116;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__9_mds_ping->m_frame.f_lineno = 116;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$metrics$$$function__9_mds_ping, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$metrics$$$function__9_mds_ping->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$metrics$$$function__9_mds_ping, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$metrics$$$function__9_mds_ping,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$metrics$$$function__9_mds_ping == cache_frame_frame_google$auth$metrics$$$function__9_mds_ping) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$metrics$$$function__9_mds_ping);
    cache_frame_frame_google$auth$metrics$$$function__9_mds_ping = NULL;
}

assertFrameObject(frame_frame_google$auth$metrics$$$function__9_mds_ping);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_google$auth$metrics$$$function__10_reauth_start(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_google$auth$metrics$$$function__10_reauth_start;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$metrics$$$function__10_reauth_start = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$metrics$$$function__10_reauth_start)) {
    Py_XDECREF(cache_frame_frame_google$auth$metrics$$$function__10_reauth_start);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$metrics$$$function__10_reauth_start == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$metrics$$$function__10_reauth_start = MAKE_FUNCTION_FRAME(tstate, code_objects_3cde4a5a0e8910a8ca07e82ad45ef7df, module_google$auth$metrics, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$metrics$$$function__10_reauth_start->m_type_description == NULL);
frame_frame_google$auth$metrics$$$function__10_reauth_start = cache_frame_frame_google$auth$metrics$$$function__10_reauth_start;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$metrics$$$function__10_reauth_start);
assert(Py_REFCNT(frame_frame_google$auth$metrics$$$function__10_reauth_start) == 2);

// Framed code:
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_2_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_3b65818e376708084f0fbc5146e3aa38;
tmp_called_value_1 = module_var_accessor_google$auth$metrics$python_and_auth_lib_version(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_python_and_auth_lib_version);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__10_reauth_start->m_frame.f_lineno = 122;
tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_2_1 = module_var_accessor_google$auth$metrics$REQUEST_TYPE_REAUTH_START(tstate);
if (unlikely(tmp_kw_call_arg_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_START);
}

if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 122;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__10_reauth_start->m_frame.f_lineno = 122;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$metrics$$$function__10_reauth_start, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$metrics$$$function__10_reauth_start->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$metrics$$$function__10_reauth_start, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$metrics$$$function__10_reauth_start,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$metrics$$$function__10_reauth_start == cache_frame_frame_google$auth$metrics$$$function__10_reauth_start) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$metrics$$$function__10_reauth_start);
    cache_frame_frame_google$auth$metrics$$$function__10_reauth_start = NULL;
}

assertFrameObject(frame_frame_google$auth$metrics$$$function__10_reauth_start);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_google$auth$metrics$$$function__11_reauth_continue(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_google$auth$metrics$$$function__11_reauth_continue;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$metrics$$$function__11_reauth_continue = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$metrics$$$function__11_reauth_continue)) {
    Py_XDECREF(cache_frame_frame_google$auth$metrics$$$function__11_reauth_continue);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$metrics$$$function__11_reauth_continue == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$metrics$$$function__11_reauth_continue = MAKE_FUNCTION_FRAME(tstate, code_objects_b986c800b6d4ea051e5d4ff1b285a414, module_google$auth$metrics, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$metrics$$$function__11_reauth_continue->m_type_description == NULL);
frame_frame_google$auth$metrics$$$function__11_reauth_continue = cache_frame_frame_google$auth$metrics$$$function__11_reauth_continue;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$metrics$$$function__11_reauth_continue);
assert(Py_REFCNT(frame_frame_google$auth$metrics$$$function__11_reauth_continue) == 2);

// Framed code:
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_2_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_3b65818e376708084f0fbc5146e3aa38;
tmp_called_value_1 = module_var_accessor_google$auth$metrics$python_and_auth_lib_version(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_python_and_auth_lib_version);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__11_reauth_continue->m_frame.f_lineno = 128;
tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_2_1 = module_var_accessor_google$auth$metrics$REQUEST_TYPE_REAUTH_CONTINUE(tstate);
if (unlikely(tmp_kw_call_arg_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_CONTINUE);
}

if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 128;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__11_reauth_continue->m_frame.f_lineno = 128;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$metrics$$$function__11_reauth_continue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$metrics$$$function__11_reauth_continue->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$metrics$$$function__11_reauth_continue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$metrics$$$function__11_reauth_continue,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$metrics$$$function__11_reauth_continue == cache_frame_frame_google$auth$metrics$$$function__11_reauth_continue) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$metrics$$$function__11_reauth_continue);
    cache_frame_frame_google$auth$metrics$$$function__11_reauth_continue = NULL;
}

assertFrameObject(frame_frame_google$auth$metrics$$$function__11_reauth_continue);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_google$auth$metrics$$$function__12_byoid_metrics_header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_metrics_options = python_pars[0];
PyObject *var_header = NULL;
PyObject *var_key = NULL;
PyObject *var_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header)) {
    Py_XDECREF(cache_frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header = MAKE_FUNCTION_FRAME(tstate, code_objects_ee19738b50f008fb81e0c47f5b47f1f8, module_google$auth$metrics, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header->m_type_description == NULL);
frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header = cache_frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header);
assert(Py_REFCNT(frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_2_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_3b65818e376708084f0fbc5146e3aa38;
tmp_called_value_1 = module_var_accessor_google$auth$metrics$python_and_auth_lib_version(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_python_and_auth_lib_version);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header->m_frame.f_lineno = 134;
tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_2_1 = module_var_accessor_google$auth$metrics$BYOID_HEADER_SECTION(tstate);
if (unlikely(tmp_kw_call_arg_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BYOID_HEADER_SECTION);
}

if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 134;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header->m_frame.f_lineno = 134;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_header == NULL);
var_header = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_metrics_options);
tmp_expression_value_1 = par_metrics_options;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header->m_frame.f_lineno = 135;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooo";
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
type_description_1 = "oooo";
exception_lineno = 135;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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



exception_lineno = 135;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_7;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_value;
    var_value = tmp_assign_source_8;
    Py_INCREF(var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_9;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_arg_value_2_2;
PyObject *tmp_kw_call_arg_value_3_1;
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_157109ec2b3a449da55c216fb58af004;
if (var_header == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_header);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 136;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_kw_call_arg_value_1_2 = var_header;
CHECK_OBJECT(var_key);
tmp_kw_call_arg_value_2_2 = var_key;
CHECK_OBJECT(var_value);
tmp_kw_call_arg_value_3_1 = var_value;
frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header->m_frame.f_lineno = 136;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_1};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_header;
    var_header = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooo";
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
if (var_header == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_header);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 137;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_header;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header,
    type_description_1,
    par_metrics_options,
    var_header,
    var_key,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header == cache_frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header);
    cache_frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header = NULL;
}

assertFrameObject(frame_frame_google$auth$metrics$$$function__12_byoid_metrics_header);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_header);
var_header = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_header);
var_header = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_value);
var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_metrics_options);
Py_DECREF(par_metrics_options);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_metrics_options);
Py_DECREF(par_metrics_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$metrics$$$function__13_add_metric_header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_headers = python_pars[0];
PyObject *par_metric_header_value = python_pars[1];
PyObject *tmp_inplace_assign_subscript_1__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$metrics$$$function__13_add_metric_header;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$metrics$$$function__13_add_metric_header = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$metrics$$$function__13_add_metric_header)) {
    Py_XDECREF(cache_frame_frame_google$auth$metrics$$$function__13_add_metric_header);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$metrics$$$function__13_add_metric_header == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$metrics$$$function__13_add_metric_header = MAKE_FUNCTION_FRAME(tstate, code_objects_b7c0f81615d42f9e5c39c7d92faa7b60, module_google$auth$metrics, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$metrics$$$function__13_add_metric_header->m_type_description == NULL);
frame_frame_google$auth$metrics$$$function__13_add_metric_header = cache_frame_frame_google$auth$metrics$$$function__13_add_metric_header;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$metrics$$$function__13_add_metric_header);
assert(Py_REFCNT(frame_frame_google$auth$metrics$$$function__13_add_metric_header) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_metric_header_value);
tmp_operand_value_1 = par_metric_header_value;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oo";
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_google$auth$metrics$API_CLIENT_HEADER(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_API_CLIENT_HEADER);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_headers);
tmp_cmp_expr_right_1 = par_headers;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
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
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_metric_header_value);
tmp_ass_subvalue_1 = par_metric_header_value;
CHECK_OBJECT(par_headers);
tmp_ass_subscribed_1 = par_headers;
tmp_ass_subscript_1 = module_var_accessor_google$auth$metrics$API_CLIENT_HEADER(tstate);
if (unlikely(tmp_ass_subscript_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_API_CLIENT_HEADER);
}

if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_headers);
tmp_assign_source_1 = par_headers;
assert(tmp_inplace_assign_subscript_1__target == NULL);
Py_INCREF(tmp_assign_source_1);
tmp_inplace_assign_subscript_1__target = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_var_accessor_google$auth$metrics$API_CLIENT_HEADER(tstate);
if (unlikely(tmp_assign_source_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_API_CLIENT_HEADER);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_inplace_assign_subscript_1__subscript == NULL);
Py_INCREF(tmp_assign_source_2);
tmp_inplace_assign_subscript_1__subscript = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_1 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_subscript_value_1 = tmp_inplace_assign_subscript_1__subscript;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_inplace_assign_subscript_1__value == NULL);
tmp_inplace_assign_subscript_1__value = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_subscript_1__value;
tmp_add_expr_left_1 = mod_consts.const_str_space;
CHECK_OBJECT(par_metric_header_value);
tmp_add_expr_right_1 = par_metric_header_value;
tmp_iadd_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_assign_source_4 = tmp_iadd_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_4;

}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ass_subvalue_2 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_ass_subscribed_2 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_ass_subscript_2 = tmp_inplace_assign_subscript_1__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oo";
    goto try_except_handler_1;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__subscript);
tmp_inplace_assign_subscript_1__subscript = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
Py_DECREF(tmp_inplace_assign_subscript_1__subscript);
tmp_inplace_assign_subscript_1__subscript = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
Py_DECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
branch_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$metrics$$$function__13_add_metric_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$metrics$$$function__13_add_metric_header->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$metrics$$$function__13_add_metric_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$metrics$$$function__13_add_metric_header,
    type_description_1,
    par_headers,
    par_metric_header_value
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$metrics$$$function__13_add_metric_header == cache_frame_frame_google$auth$metrics$$$function__13_add_metric_header) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$metrics$$$function__13_add_metric_header);
    cache_frame_frame_google$auth$metrics$$$function__13_add_metric_header = NULL;
}

assertFrameObject(frame_frame_google$auth$metrics$$$function__13_add_metric_header);

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
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_metric_header_value);
Py_DECREF(par_metric_header_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_metric_header_value);
Py_DECREF(par_metric_header_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__10_reauth_start(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$metrics$$$function__10_reauth_start,
        mod_consts.const_str_plain_reauth_start,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3cde4a5a0e8910a8ca07e82ad45ef7df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$metrics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__11_reauth_continue(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$metrics$$$function__11_reauth_continue,
        mod_consts.const_str_plain_reauth_continue,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b986c800b6d4ea051e5d4ff1b285a414,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$metrics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__12_byoid_metrics_header(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$metrics$$$function__12_byoid_metrics_header,
        mod_consts.const_str_plain_byoid_metrics_header,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ee19738b50f008fb81e0c47f5b47f1f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$metrics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__13_add_metric_header(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$metrics$$$function__13_add_metric_header,
        mod_consts.const_str_plain_add_metric_header,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b7c0f81615d42f9e5c39c7d92faa7b60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$metrics,
        mod_consts.const_str_digest_d0de8814917ad222f324d27f2fd12427,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__1_python_and_auth_lib_version(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$metrics$$$function__1_python_and_auth_lib_version,
        mod_consts.const_str_plain_python_and_auth_lib_version,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_be3ae26dbd595ba87e6099e897d0a24f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$metrics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__2_token_request_access_token_mds(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$metrics$$$function__2_token_request_access_token_mds,
        mod_consts.const_str_plain_token_request_access_token_mds,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d241157a27f5657f0662db333aeae18b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$metrics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__3_token_request_id_token_mds(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$metrics$$$function__3_token_request_id_token_mds,
        mod_consts.const_str_plain_token_request_id_token_mds,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dd384dedf9c6974bc6ec8627c958be33,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$metrics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__4_token_request_access_token_impersonate(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$metrics$$$function__4_token_request_access_token_impersonate,
        mod_consts.const_str_plain_token_request_access_token_impersonate,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0019ef31f0144635d3f54f479fbb213c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$metrics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__5_token_request_id_token_impersonate(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$metrics$$$function__5_token_request_id_token_impersonate,
        mod_consts.const_str_plain_token_request_id_token_impersonate,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3a740944dcc560982fbe72132358fdaa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$metrics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion,
        mod_consts.const_str_plain_token_request_access_token_sa_assertion,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_83b7a0de490e8ec82a6cb27bef900cb0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$metrics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion,
        mod_consts.const_str_plain_token_request_id_token_sa_assertion,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3302898e8191f35a869e0583eefb4d9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$metrics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__8_token_request_user(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$metrics$$$function__8_token_request_user,
        mod_consts.const_str_plain_token_request_user,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_205b8cac4bbc881e06d47c5f74fd747c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$metrics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$metrics$$$function__9_mds_ping(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$metrics$$$function__9_mds_ping,
        mod_consts.const_str_plain_mds_ping,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7a551db2e869f0dd30bd726399b7afde,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$metrics,
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

static function_impl_code const function_table_google$auth$metrics[] = {
impl_google$auth$metrics$$$function__1_python_and_auth_lib_version,
impl_google$auth$metrics$$$function__2_token_request_access_token_mds,
impl_google$auth$metrics$$$function__3_token_request_id_token_mds,
impl_google$auth$metrics$$$function__4_token_request_access_token_impersonate,
impl_google$auth$metrics$$$function__5_token_request_id_token_impersonate,
impl_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion,
impl_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion,
impl_google$auth$metrics$$$function__8_token_request_user,
impl_google$auth$metrics$$$function__9_mds_ping,
impl_google$auth$metrics$$$function__10_reauth_start,
impl_google$auth$metrics$$$function__11_reauth_continue,
impl_google$auth$metrics$$$function__12_byoid_metrics_header,
impl_google$auth$metrics$$$function__13_add_metric_header,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$metrics);
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
        module_google$auth$metrics,
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
        function_table_google$auth$metrics,
        sizeof(function_table_google$auth$metrics) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth.metrics";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$metrics(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$metrics");

    // Store the module for future use.
    module_google$auth$metrics = module;

    moduledict_google$auth$metrics = MODULE_DICT(module_google$auth$metrics);

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
        PRINT_STRING("google$auth$metrics: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$metrics: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$metrics: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.metrics" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$metrics\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$metrics,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$metrics,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$metrics,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$metrics,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$metrics,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$metrics);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$metrics, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$metrics, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$metrics, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$metrics);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$metrics, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_google$auth$metrics;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_c8837df02addf68323ae8739ec0d7e1e;
UPDATE_STRING_DICT0(moduledict_google$auth$metrics, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$metrics, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$metrics = MAKE_MODULE_FRAME(code_objects_d8674f64fadd2424a378d65ad0db3d0d, module_google$auth$metrics);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$metrics);
assert(Py_REFCNT(frame_frame_google$auth$metrics) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$metrics$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$metrics$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$auth$metrics, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_platform;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$metrics;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$metrics->m_frame.f_lineno = 19;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_platform, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$metrics;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_version_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$metrics->m_frame.f_lineno = 21;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$metrics,
        mod_consts.const_str_plain_version,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_version);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_version, tmp_assign_source_5);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$metrics, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$metrics->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$metrics, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$metrics);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = mod_consts.const_str_digest_a323eea3d037c14008d3cc1854afbacf;
UPDATE_STRING_DICT0(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_API_CLIENT_HEADER, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = mod_consts.const_str_digest_e30e8eea528495592a539bf2c800052a;
UPDATE_STRING_DICT0(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_BYOID_HEADER_SECTION, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = mod_consts.const_str_digest_6962670ab626d48ae6d503aabf997437;
UPDATE_STRING_DICT0(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_ACCESS_TOKEN, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = mod_consts.const_str_digest_1d856521282c713e87e4a9ca635a2b7b;
UPDATE_STRING_DICT0(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_ID_TOKEN, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = mod_consts.const_str_digest_0502577edc83358fee518acf1a27b11a;
UPDATE_STRING_DICT0(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_MDS_PING, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = mod_consts.const_str_digest_e7f4172023d094070f78a0ec5202af62;
UPDATE_STRING_DICT0(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_START, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_str_digest_9d411eb465cc882a889480e1275a2845;
UPDATE_STRING_DICT0(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_TYPE_REAUTH_CONTINUE, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = mod_consts.const_str_digest_9cffe61da741205f3eb307391a124aaa;
UPDATE_STRING_DICT0(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_USER, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = mod_consts.const_str_digest_33dac2ece83abfc6058177f3c9db8045;
UPDATE_STRING_DICT0(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_SA_ASSERTION, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_str_digest_f9850a40fff3a5da2530ea8bef53b693;
UPDATE_STRING_DICT0(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_SA_JWT, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_str_digest_f136e0c105c47b291b177526498b00c0;
UPDATE_STRING_DICT0(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_SA_MDS, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_str_digest_733310cc46891e63e434bc69bcd77c7e;
UPDATE_STRING_DICT0(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_CRED_TYPE_SA_IMPERSONATE, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;

tmp_assign_source_18 = MAKE_FUNCTION_google$auth$metrics$$$function__1_python_and_auth_lib_version(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_python_and_auth_lib_version, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;

tmp_assign_source_19 = MAKE_FUNCTION_google$auth$metrics$$$function__2_token_request_access_token_mds(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_token_request_access_token_mds, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;

tmp_assign_source_20 = MAKE_FUNCTION_google$auth$metrics$$$function__3_token_request_id_token_mds(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_token_request_id_token_mds, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;

tmp_assign_source_21 = MAKE_FUNCTION_google$auth$metrics$$$function__4_token_request_access_token_impersonate(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_token_request_access_token_impersonate, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;

tmp_assign_source_22 = MAKE_FUNCTION_google$auth$metrics$$$function__5_token_request_id_token_impersonate(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_token_request_id_token_impersonate, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;

tmp_assign_source_23 = MAKE_FUNCTION_google$auth$metrics$$$function__6_token_request_access_token_sa_assertion(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_token_request_access_token_sa_assertion, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;

tmp_assign_source_24 = MAKE_FUNCTION_google$auth$metrics$$$function__7_token_request_id_token_sa_assertion(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_token_request_id_token_sa_assertion, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;

tmp_assign_source_25 = MAKE_FUNCTION_google$auth$metrics$$$function__8_token_request_user(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_token_request_user, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;

tmp_assign_source_26 = MAKE_FUNCTION_google$auth$metrics$$$function__9_mds_ping(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_mds_ping, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;

tmp_assign_source_27 = MAKE_FUNCTION_google$auth$metrics$$$function__10_reauth_start(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_reauth_start, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;

tmp_assign_source_28 = MAKE_FUNCTION_google$auth$metrics$$$function__11_reauth_continue(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_reauth_continue, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;

tmp_assign_source_29 = MAKE_FUNCTION_google$auth$metrics$$$function__12_byoid_metrics_header(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_byoid_metrics_header, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;

tmp_assign_source_30 = MAKE_FUNCTION_google$auth$metrics$$$function__13_add_metric_header(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$metrics, (Nuitka_StringObject *)mod_consts.const_str_plain_add_metric_header, tmp_assign_source_30);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$metrics", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.metrics" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$metrics);
    return module_google$auth$metrics;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$metrics, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$metrics", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

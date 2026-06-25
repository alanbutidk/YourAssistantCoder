/* Generated code for Python module 'anthropic$lib$environments$_poller'
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



/* The "module_anthropic$lib$environments$_poller" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$lib$environments$_poller;
PyDictObject *moduledict_anthropic$lib$environments$_poller;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_backoff;
PyObject *const_str_plain__POLL_BACKOFF_CAP;
PyObject *const_tuple_str_plain_cap_tuple;
PyObject *const_str_plain_jitter;
PyObject *const_str_plain_is_fatal_status_error;
PyObject *const_str_plain_APIStatusError;
PyObject *const_str_plain_status_code;
PyObject *const_str_plain_socket;
PyObject *const_str_plain_gethostname;
PyObject *const_str_chr_45;
PyObject *const_str_plain_uuid4;
PyObject *const_str_plain_hex;
PyObject *const_slice_none_int_pos_12_none;
PyObject *const_str_digest_91a38e5f35b6409777e31e31d60940ef;
PyObject *const_str_plain_worker_id;
PyObject *const_str_plain__default_worker_id;
PyObject *const_str_plain_log;
PyObject *const_str_plain_info;
PyObject *const_str_digest_27f10d9b7878618b95bbd2e0003a4739;
PyObject *const_str_plain_environment_id;
PyObject *const_str_plain_drain;
PyObject *const_str_plain_auto_stop;
PyObject *const_str_plain_work;
PyObject *const_str_plain_poll;
PyObject *const_str_plain_block_ms;
PyObject *const_str_plain_omit;
PyObject *const_str_plain_reclaim_older_than_ms;
PyObject *const_str_plain_extra_headers;
PyObject *const_tuple_247616df0e9580ec165ab1a7ac1036a8_tuple;
PyObject *const_str_plain_TRANSIENT_ERRORS;
PyObject *const_str_plain__is_fatal_4xx;
PyObject *const_str_plain_error;
PyObject *const_str_digest_8bcb390102d12f2b550a67d7100ed06e;
PyObject *const_str_plain_poll_attempt;
PyObject *const_str_plain__backoff;
PyObject *const_str_plain__jitter;
PyObject *const_tuple_float_0_0_float_1_0_tuple;
PyObject *const_str_plain_warning;
PyObject *const_str_digest_fa7d9f2d8927b4d572ab5dbd136f05a0;
PyObject *const_str_plain_time;
PyObject *const_str_plain_sleep;
PyObject *const_str_digest_635f4a97c50a8619ba072bd1563e8f60;
PyObject *const_tuple_float_1_0_float_3_0_tuple;
PyObject *const_str_digest_af9d2672f7efaa89f03239f84f1eea8c;
PyObject *const_str_plain_id;
PyObject *const_str_plain_data;
PyObject *const_str_plain_ack;
PyObject *const_tuple_str_plain_environment_id_str_plain_extra_headers_tuple;
PyObject *const_str_digest_bdadcdf37e5bd6a78ec4b577b22c849f;
PyObject *const_str_plain__force_stop_quietly;
PyObject *const_str_plain_ack_attempt;
PyObject *const_str_digest_da4e8beca35a1ef30e74dfeebb98db1f;
PyObject *const_str_plain_stop;
PyObject *const_str_plain__is_status;
PyObject *const_int_pos_409;
PyObject *const_str_digest_348647dac54e46ba9ef312d4c8bfeecf;
PyObject *const_str_plain_iter_work;
PyObject *const_tuple_800af3ec308551da1cd346072514538c_tuple;
PyObject *const_str_digest_37cb3f56eedd443f41ace84b0d038f14;
PyObject *const_str_digest_02ab0601cfdde1dfb5053a62b973cca5;
PyObject *const_str_digest_84e4b01cf738072e5d67516f9a2a829f;
PyObject *const_str_plain_anyio;
PyObject *const_str_plain__aforce_stop_quietly;
PyObject *const_str_plain_aiter_work;
PyObject *const_str_digest_85fe616fcd0a59820ac33de2cf8f1757;
PyObject *const_str_plain_work_id;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_uuid;
PyObject *const_tuple_str_plain_uuid4_tuple;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Iterator_str_plain_AsyncIterator_tuple;
PyObject *const_str_plain_Iterator;
PyObject *const_str_plain_AsyncIterator;
PyObject *const_str_plain__retry;
PyObject *const_tuple_9354c4f60dba4156ebdb476f262811df_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain__types;
PyObject *const_tuple_str_plain_Headers_str_plain_omit_tuple;
PyObject *const_int_pos_3;
PyObject *const_str_plain_Headers;
PyObject *const_str_plain__exceptions;
PyObject *const_tuple_str_plain_APIStatusError_tuple;
PyObject *const_str_digest_a2dee852a2f51ede75ba9d6c1334039a;
PyObject *const_tuple_str_plain_BetaSelfHostedWork_tuple;
PyObject *const_str_plain_BetaSelfHostedWork;
PyObject *const_str_digest_ce27a5962fad4c154fc9af52cba5bc7f;
PyObject *const_tuple_str_plain_Work_str_plain_AsyncWork_tuple;
PyObject *const_str_plain_Work;
PyObject *const_str_plain_AsyncWork;
PyObject *const_str_plain_POLL_BLOCK_MS;
PyObject *const_int_pos_999;
PyObject *const_float_60_0;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_e43a9cd66777804b3ba32dfc6719ef1c_tuple;
PyObject *const_dict_8afce5a4507f85915de83cb40c440833;
PyObject *const_dict_5035bb294b98ee030d52ded7e01da760;
PyObject *const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e;
PyObject *const_dict_f77b968e105fa4c33f4b915591f8b02d;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_dict_440135648353bd5f61e0bd463da19e1b;
PyObject *const_dict_8a4f87827e19ac07d540ff86fcec5e60;
PyObject *const_dict_6f04cb4c5c16da44ffd9af5602228143;
PyObject *const_dict_e85ae174f6835a9994bb11e6a489022c;
PyObject *const_dict_33b55b4daedbbc5eaf939dfb891142f0;
PyObject *const_str_digest_b9f1932d93c9dc0fcae6a77d6032b2e6;
PyObject *const_str_digest_ff07305f6cfe3b64674cba904c5a2bc9;
PyObject *const_tuple_5a32051942e29b13bb0d4ebba8af51c8_tuple;
PyObject *const_tuple_str_plain_attempt_tuple;
PyObject *const_tuple_str_plain_err_tuple;
PyObject *const_tuple_str_plain_err_str_plain_code_tuple;
PyObject *const_tuple_str_plain_low_str_plain_high_tuple;
PyObject *const_tuple_afbdbb6fe4cc7cb162af7a7dfc3056c6_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[115];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.lib.environments._poller"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_backoff);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__POLL_BACKOFF_CAP);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cap_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_jitter);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_fatal_status_error);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_APIStatusError);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_code);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_socket);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_gethostname);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_chr_45);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_uuid4);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_hex);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_12_none);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_91a38e5f35b6409777e31e31d60940ef);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_worker_id);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__default_worker_id);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_27f10d9b7878618b95bbd2e0003a4739);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_environment_id);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_drain);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_auto_stop);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_work);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_poll);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_block_ms);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_omit);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_reclaim_older_than_ms);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_headers);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_247616df0e9580ec165ab1a7ac1036a8_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_TRANSIENT_ERRORS);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_fatal_4xx);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_8bcb390102d12f2b550a67d7100ed06e);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_poll_attempt);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__backoff);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__jitter);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_float_0_0_float_1_0_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_warning);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_fa7d9f2d8927b4d572ab5dbd136f05a0);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_sleep);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_635f4a97c50a8619ba072bd1563e8f60);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_float_1_0_float_3_0_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_af9d2672f7efaa89f03239f84f1eea8c);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_id);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_ack);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_environment_id_str_plain_extra_headers_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_bdadcdf37e5bd6a78ec4b577b22c849f);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__force_stop_quietly);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_ack_attempt);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_da4e8beca35a1ef30e74dfeebb98db1f);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_status);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_int_pos_409);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_348647dac54e46ba9ef312d4c8bfeecf);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_iter_work);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_800af3ec308551da1cd346072514538c_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_37cb3f56eedd443f41ace84b0d038f14);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_02ab0601cfdde1dfb5053a62b973cca5);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_84e4b01cf738072e5d67516f9a2a829f);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_anyio);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain__aforce_stop_quietly);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_aiter_work);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_85fe616fcd0a59820ac33de2cf8f1757);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_work_id);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_uuid);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_uuid4_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Iterator_str_plain_AsyncIterator_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterator);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain__retry);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_9354c4f60dba4156ebdb476f262811df_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Headers_str_plain_omit_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_Headers);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_APIStatusError_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2dee852a2f51ede75ba9d6c1334039a);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaSelfHostedWork_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaSelfHostedWork);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_ce27a5962fad4c154fc9af52cba5bc7f);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Work_str_plain_AsyncWork_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_Work);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncWork);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_POLL_BLOCK_MS);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_int_pos_999);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_float_60_0);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e43a9cd66777804b3ba32dfc6719ef1c_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_dict_8afce5a4507f85915de83cb40c440833);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_dict_5035bb294b98ee030d52ded7e01da760);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_dict_f77b968e105fa4c33f4b915591f8b02d);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_dict_440135648353bd5f61e0bd463da19e1b);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_dict_8a4f87827e19ac07d540ff86fcec5e60);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_dict_6f04cb4c5c16da44ffd9af5602228143);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_dict_e85ae174f6835a9994bb11e6a489022c);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_dict_33b55b4daedbbc5eaf939dfb891142f0);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_b9f1932d93c9dc0fcae6a77d6032b2e6);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_ff07305f6cfe3b64674cba904c5a2bc9);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_5a32051942e29b13bb0d4ebba8af51c8_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_attempt_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_err_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_err_str_plain_code_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_low_str_plain_high_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_afbdbb6fe4cc7cb162af7a7dfc3056c6_tuple);
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
void checkModuleConstants_anthropic$lib$environments$_poller(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_backoff));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_backoff);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__POLL_BACKOFF_CAP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__POLL_BACKOFF_CAP);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cap_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cap_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_jitter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_jitter);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_fatal_status_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_fatal_status_error);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_APIStatusError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_APIStatusError);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_code);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_socket);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_gethostname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gethostname);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_chr_45));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_45);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_uuid4));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uuid4);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_hex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hex);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_12_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_12_none);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_91a38e5f35b6409777e31e31d60940ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91a38e5f35b6409777e31e31d60940ef);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_worker_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_worker_id);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__default_worker_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__default_worker_id);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_info);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_27f10d9b7878618b95bbd2e0003a4739));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_27f10d9b7878618b95bbd2e0003a4739);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_environment_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environment_id);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_drain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_drain);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_auto_stop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auto_stop);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_work));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_work);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_poll));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_poll);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_block_ms));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_block_ms);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_omit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_omit);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_reclaim_older_than_ms));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reclaim_older_than_ms);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_headers);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_247616df0e9580ec165ab1a7ac1036a8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_247616df0e9580ec165ab1a7ac1036a8_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_TRANSIENT_ERRORS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TRANSIENT_ERRORS);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_fatal_4xx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_fatal_4xx);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_8bcb390102d12f2b550a67d7100ed06e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8bcb390102d12f2b550a67d7100ed06e);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_poll_attempt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_poll_attempt);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__backoff));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__backoff);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__jitter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__jitter);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_float_0_0_float_1_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_float_0_0_float_1_0_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_warning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warning);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_fa7d9f2d8927b4d572ab5dbd136f05a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fa7d9f2d8927b4d572ab5dbd136f05a0);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_sleep));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sleep);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_635f4a97c50a8619ba072bd1563e8f60));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_635f4a97c50a8619ba072bd1563e8f60);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_float_1_0_float_3_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_float_1_0_float_3_0_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_af9d2672f7efaa89f03239f84f1eea8c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af9d2672f7efaa89f03239f84f1eea8c);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_ack));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ack);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_environment_id_str_plain_extra_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_environment_id_str_plain_extra_headers_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_bdadcdf37e5bd6a78ec4b577b22c849f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bdadcdf37e5bd6a78ec4b577b22c849f);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__force_stop_quietly));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__force_stop_quietly);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_ack_attempt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ack_attempt);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_da4e8beca35a1ef30e74dfeebb98db1f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da4e8beca35a1ef30e74dfeebb98db1f);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_status);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_int_pos_409));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_409);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_348647dac54e46ba9ef312d4c8bfeecf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_348647dac54e46ba9ef312d4c8bfeecf);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_iter_work));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iter_work);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_800af3ec308551da1cd346072514538c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_800af3ec308551da1cd346072514538c_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_37cb3f56eedd443f41ace84b0d038f14));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37cb3f56eedd443f41ace84b0d038f14);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_02ab0601cfdde1dfb5053a62b973cca5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_02ab0601cfdde1dfb5053a62b973cca5);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_84e4b01cf738072e5d67516f9a2a829f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_84e4b01cf738072e5d67516f9a2a829f);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_anyio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_anyio);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain__aforce_stop_quietly));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__aforce_stop_quietly);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_aiter_work));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aiter_work);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_85fe616fcd0a59820ac33de2cf8f1757));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_85fe616fcd0a59820ac33de2cf8f1757);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_work_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_work_id);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_uuid));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uuid);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_uuid4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_uuid4_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Iterator_str_plain_AsyncIterator_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Iterator_str_plain_AsyncIterator_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterator);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncIterator);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain__retry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__retry);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_9354c4f60dba4156ebdb476f262811df_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9354c4f60dba4156ebdb476f262811df_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Headers_str_plain_omit_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Headers_str_plain_omit_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_Headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Headers);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exceptions);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_APIStatusError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_APIStatusError_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2dee852a2f51ede75ba9d6c1334039a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2dee852a2f51ede75ba9d6c1334039a);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaSelfHostedWork_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaSelfHostedWork_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaSelfHostedWork));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaSelfHostedWork);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_ce27a5962fad4c154fc9af52cba5bc7f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ce27a5962fad4c154fc9af52cba5bc7f);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Work_str_plain_AsyncWork_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Work_str_plain_AsyncWork_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_Work));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Work);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncWork));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncWork);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_POLL_BLOCK_MS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_POLL_BLOCK_MS);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_int_pos_999));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_999);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_float_60_0));
CHECK_OBJECT_DEEP(mod_consts.const_float_60_0);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e43a9cd66777804b3ba32dfc6719ef1c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e43a9cd66777804b3ba32dfc6719ef1c_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_dict_8afce5a4507f85915de83cb40c440833));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8afce5a4507f85915de83cb40c440833);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_dict_5035bb294b98ee030d52ded7e01da760));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5035bb294b98ee030d52ded7e01da760);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_dict_f77b968e105fa4c33f4b915591f8b02d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f77b968e105fa4c33f4b915591f8b02d);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_dict_440135648353bd5f61e0bd463da19e1b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_440135648353bd5f61e0bd463da19e1b);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_dict_8a4f87827e19ac07d540ff86fcec5e60));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8a4f87827e19ac07d540ff86fcec5e60);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_dict_6f04cb4c5c16da44ffd9af5602228143));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6f04cb4c5c16da44ffd9af5602228143);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_dict_e85ae174f6835a9994bb11e6a489022c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e85ae174f6835a9994bb11e6a489022c);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_dict_33b55b4daedbbc5eaf939dfb891142f0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_33b55b4daedbbc5eaf939dfb891142f0);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_b9f1932d93c9dc0fcae6a77d6032b2e6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b9f1932d93c9dc0fcae6a77d6032b2e6);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_ff07305f6cfe3b64674cba904c5a2bc9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ff07305f6cfe3b64674cba904c5a2bc9);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_5a32051942e29b13bb0d4ebba8af51c8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5a32051942e29b13bb0d4ebba8af51c8_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_attempt_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_attempt_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_err_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_err_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_err_str_plain_code_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_err_str_plain_code_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_low_str_plain_high_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_low_str_plain_high_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_afbdbb6fe4cc7cb162af7a7dfc3056c6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_afbdbb6fe4cc7cb162af7a7dfc3056c6_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 22
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
static PyObject *module_var_accessor_anthropic$lib$environments$_poller$APIStatusError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_APIStatusError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APIStatusError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APIStatusError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APIStatusError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APIStatusError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_APIStatusError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_APIStatusError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_APIStatusError);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$POLL_BLOCK_MS(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_POLL_BLOCK_MS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_POLL_BLOCK_MS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_POLL_BLOCK_MS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_POLL_BLOCK_MS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_POLL_BLOCK_MS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_POLL_BLOCK_MS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_POLL_BLOCK_MS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_POLL_BLOCK_MS);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$TRANSIENT_ERRORS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSIENT_ERRORS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TRANSIENT_ERRORS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TRANSIENT_ERRORS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TRANSIENT_ERRORS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TRANSIENT_ERRORS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSIENT_ERRORS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSIENT_ERRORS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSIENT_ERRORS);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$_POLL_BACKOFF_CAP(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__POLL_BACKOFF_CAP);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__POLL_BACKOFF_CAP);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__POLL_BACKOFF_CAP, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__POLL_BACKOFF_CAP);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__POLL_BACKOFF_CAP, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__POLL_BACKOFF_CAP);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__POLL_BACKOFF_CAP);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__POLL_BACKOFF_CAP);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$_aforce_stop_quietly(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__aforce_stop_quietly);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__aforce_stop_quietly);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__aforce_stop_quietly, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__aforce_stop_quietly);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__aforce_stop_quietly, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__aforce_stop_quietly);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__aforce_stop_quietly);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__aforce_stop_quietly);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$_backoff(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__backoff);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__backoff);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__backoff, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__backoff);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__backoff, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__backoff);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__backoff);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__backoff);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$_default_worker_id(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__default_worker_id);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__default_worker_id);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__default_worker_id, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__default_worker_id);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__default_worker_id, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__default_worker_id);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__default_worker_id);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__default_worker_id);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$_force_stop_quietly(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__force_stop_quietly);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__force_stop_quietly);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__force_stop_quietly, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__force_stop_quietly);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__force_stop_quietly, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__force_stop_quietly);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__force_stop_quietly);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__force_stop_quietly);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$_is_fatal_4xx(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__is_fatal_4xx);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_fatal_4xx);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_fatal_4xx, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_fatal_4xx);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_fatal_4xx, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__is_fatal_4xx);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__is_fatal_4xx);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__is_fatal_4xx);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$_is_status(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__is_status);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_status);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_status, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_status);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_status, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__is_status);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__is_status);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__is_status);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$_jitter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__jitter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__jitter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__jitter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__jitter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__jitter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__jitter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__jitter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__jitter);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$anyio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_anyio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_anyio);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_anyio, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_anyio);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_anyio, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_anyio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_anyio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_anyio);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$backoff(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_backoff);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_backoff);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_backoff, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_backoff);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_backoff, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_backoff);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_backoff);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_backoff);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$is_fatal_status_error(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_is_fatal_status_error);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_fatal_status_error);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_fatal_status_error, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_fatal_status_error);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_fatal_status_error, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_is_fatal_status_error);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_is_fatal_status_error);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_fatal_status_error);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$jitter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_jitter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_jitter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_jitter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_jitter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_jitter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_jitter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_jitter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_jitter);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$log(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_log);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_log, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_log);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_log, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$omit(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_omit);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_omit);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_omit, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_omit);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_omit, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_omit);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_omit);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_omit);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$socket(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_socket);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_socket, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_socket);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_socket, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$time(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_poller$uuid4(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_poller->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_poller->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_uuid4);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_poller->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_uuid4);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_uuid4, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_uuid4);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_uuid4, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_uuid4);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_uuid4);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_uuid4);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_8a4766f85cd22c6c9d0e93c11af507e2;
static PyCodeObject *code_objects_ff1aaf4c29c5c6712b76946308c08e96;
static PyCodeObject *code_objects_8ff1fa81db7d14b180190e9e6b4890ee;
static PyCodeObject *code_objects_025af18136ef2f5ea70d0bb5da2be14e;
static PyCodeObject *code_objects_bccba812566de29b4dcb8e9629dd34ef;
static PyCodeObject *code_objects_942dc93fd41e366809e5cb67dde02289;
static PyCodeObject *code_objects_d8e4485a237d60458360627dd1c75729;
static PyCodeObject *code_objects_361f2b3858ec886374c57443e1c7eab8;
static PyCodeObject *code_objects_267d1a935424d5aac9e7d49aa8f80ca0;
static PyCodeObject *code_objects_be45d03d37594ea3ca61add07b04e661;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_b9f1932d93c9dc0fcae6a77d6032b2e6); CHECK_OBJECT(module_filename_obj);
code_objects_8a4766f85cd22c6c9d0e93c11af507e2 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_ff07305f6cfe3b64674cba904c5a2bc9, mod_consts.const_str_digest_ff07305f6cfe3b64674cba904c5a2bc9, NULL, NULL, 0, 0, 0);
code_objects_ff1aaf4c29c5c6712b76946308c08e96 = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__aforce_stop_quietly, mod_consts.const_str_plain__aforce_stop_quietly, mod_consts.const_tuple_5a32051942e29b13bb0d4ebba8af51c8_tuple, NULL, 2, 2, 0);
code_objects_8ff1fa81db7d14b180190e9e6b4890ee = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__backoff, mod_consts.const_str_plain__backoff, mod_consts.const_tuple_str_plain_attempt_tuple, NULL, 1, 0, 0);
code_objects_025af18136ef2f5ea70d0bb5da2be14e = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__default_worker_id, mod_consts.const_str_plain__default_worker_id, NULL, NULL, 0, 0, 0);
code_objects_bccba812566de29b4dcb8e9629dd34ef = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__force_stop_quietly, mod_consts.const_str_plain__force_stop_quietly, mod_consts.const_tuple_5a32051942e29b13bb0d4ebba8af51c8_tuple, NULL, 2, 2, 0);
code_objects_942dc93fd41e366809e5cb67dde02289 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__is_fatal_4xx, mod_consts.const_str_plain__is_fatal_4xx, mod_consts.const_tuple_str_plain_err_tuple, NULL, 1, 0, 0);
code_objects_d8e4485a237d60458360627dd1c75729 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__is_status, mod_consts.const_str_plain__is_status, mod_consts.const_tuple_str_plain_err_str_plain_code_tuple, NULL, 2, 0, 0);
code_objects_361f2b3858ec886374c57443e1c7eab8 = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__jitter, mod_consts.const_str_plain__jitter, mod_consts.const_tuple_str_plain_low_str_plain_high_tuple, NULL, 2, 0, 0);
code_objects_267d1a935424d5aac9e7d49aa8f80ca0 = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aiter_work, mod_consts.const_str_plain_aiter_work, mod_consts.const_tuple_afbdbb6fe4cc7cb162af7a7dfc3056c6_tuple, NULL, 1, 7, 0);
code_objects_be45d03d37594ea3ca61add07b04e661 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iter_work, mod_consts.const_str_plain_iter_work, mod_consts.const_tuple_afbdbb6fe4cc7cb162af7a7dfc3056c6_tuple, NULL, 1, 7, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_anthropic$lib$environments$_poller$$$function__6_iter_work$$$genobj__1_iter_work(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_anthropic$lib$environments$_poller$$$function__8_aiter_work$$$asyncgen__1_aiter_work(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anthropic$lib$environments$_poller$$$function__9__aforce_stop_quietly$$$coroutine__1__aforce_stop_quietly(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__1__backoff(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__2__jitter(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__4__is_status(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__5__default_worker_id(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__6_iter_work(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__8_aiter_work(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__9__aforce_stop_quietly(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anthropic$lib$environments$_poller$$$function__1__backoff(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_attempt = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff = MAKE_FUNCTION_FRAME(tstate, code_objects_8ff1fa81db7d14b180190e9e6b4890ee, module_anthropic$lib$environments$_poller, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff->m_type_description == NULL);
frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff = cache_frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff);
assert(Py_REFCNT(frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_anthropic$lib$environments$_poller$backoff(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_backoff);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_attempt);
tmp_kw_call_arg_value_0_1 = par_attempt;
tmp_kw_call_dict_value_0_1 = module_var_accessor_anthropic$lib$environments$_poller$_POLL_BACKOFF_CAP(tstate);
if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__POLL_BACKOFF_CAP);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff->m_frame.f_lineno = 31;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_cap_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff,
    type_description_1,
    par_attempt
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff == cache_frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff);
    cache_frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$environments$_poller$$$function__1__backoff);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_attempt);
Py_DECREF(par_attempt);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_attempt);
Py_DECREF(par_attempt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$environments$_poller$$$function__2__jitter(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_low = python_pars[0];
PyObject *par_high = python_pars[1];
struct Nuitka_FrameObject *frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter = MAKE_FUNCTION_FRAME(tstate, code_objects_361f2b3858ec886374c57443e1c7eab8, module_anthropic$lib$environments$_poller, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter->m_type_description == NULL);
frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter = cache_frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter);
assert(Py_REFCNT(frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_anthropic$lib$environments$_poller$jitter(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_jitter);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_low);
tmp_args_element_value_1 = par_low;
CHECK_OBJECT(par_high);
tmp_args_element_value_2 = par_high;
frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter->m_frame.f_lineno = 35;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter,
    type_description_1,
    par_low,
    par_high
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter == cache_frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter);
    cache_frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$environments$_poller$$$function__2__jitter);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_low);
Py_DECREF(par_low);
CHECK_OBJECT(par_high);
Py_DECREF(par_high);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_low);
Py_DECREF(par_low);
CHECK_OBJECT(par_high);
Py_DECREF(par_high);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_err = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx = MAKE_FUNCTION_FRAME(tstate, code_objects_942dc93fd41e366809e5cb67dde02289, module_anthropic$lib$environments$_poller, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx->m_type_description == NULL);
frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx = cache_frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx);
assert(Py_REFCNT(frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_anthropic$lib$environments$_poller$is_fatal_status_error(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_fatal_status_error);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err);
tmp_args_element_value_1 = par_err;
frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx->m_frame.f_lineno = 39;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx,
    type_description_1,
    par_err
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx == cache_frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx);
    cache_frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_err);
Py_DECREF(par_err);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_err);
Py_DECREF(par_err);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$environments$_poller$$$function__4__is_status(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_err = python_pars[0];
PyObject *par_code = python_pars[1];
struct Nuitka_FrameObject *frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status = MAKE_FUNCTION_FRAME(tstate, code_objects_d8e4485a237d60458360627dd1c75729, module_anthropic$lib$environments$_poller, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status->m_type_description == NULL);
frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status = cache_frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status);
assert(Py_REFCNT(frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status) == 2);

// Framed code:
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_err);
tmp_isinstance_inst_1 = par_err;
tmp_isinstance_cls_1 = module_var_accessor_anthropic$lib$environments$_poller$APIStatusError(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_APIStatusError);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_err);
tmp_expression_value_1 = par_err;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_code);
tmp_cmp_expr_right_1 = par_code;
tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status,
    type_description_1,
    par_err,
    par_code
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status == cache_frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status);
    cache_frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$environments$_poller$$$function__4__is_status);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_err);
Py_DECREF(par_err);
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_err);
Py_DECREF(par_err);
CHECK_OBJECT(par_code);
Py_DECREF(par_code);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$environments$_poller$$$function__5__default_worker_id(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id = MAKE_FUNCTION_FRAME(tstate, code_objects_025af18136ef2f5ea70d0bb5da2be14e, module_anthropic$lib$environments$_poller, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id->m_type_description == NULL);
frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id = cache_frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id);
assert(Py_REFCNT(frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_format_spec_1;
tmp_called_instance_1 = module_var_accessor_anthropic$lib$environments$_poller$socket(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;

    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id->m_frame.f_lineno = 50;
tmp_format_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_gethostname);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_45;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_called_value_1 = module_var_accessor_anthropic$lib$environments$_poller$uuid4(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_uuid4);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;

    goto tuple_build_exception_1;
}
frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id->m_frame.f_lineno = 50;
tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto tuple_build_exception_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_hex);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto tuple_build_exception_1;
}
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_12_none;
tmp_format_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id == cache_frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id);
    cache_frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$environments$_poller$$$function__5__default_worker_id);

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


static PyObject *impl_anthropic$lib$environments$_poller$$$function__6_iter_work(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_work = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_environment_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_worker_id = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_block_ms = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_reclaim_older_than_ms = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_drain = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_auto_stop = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_extra_headers = Nuitka_Cell_New1(python_pars[7]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[8];
tmp_closure_1[0] = par_auto_stop;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_block_ms;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_drain;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_environment_id;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_extra_headers;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_reclaim_older_than_ms;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_work;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_worker_id;
Py_INCREF(tmp_closure_1[7]);
tmp_return_value = MAKE_GENERATOR_anthropic$lib$environments$_poller$$$function__6_iter_work$$$genobj__1_iter_work(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_work);
CHECK_OBJECT(par_work);
Py_DECREF(par_work);
par_work = NULL;
CHECK_OBJECT(par_environment_id);
CHECK_OBJECT(par_environment_id);
Py_DECREF(par_environment_id);
par_environment_id = NULL;
CHECK_OBJECT(par_worker_id);
CHECK_OBJECT(par_worker_id);
Py_DECREF(par_worker_id);
par_worker_id = NULL;
CHECK_OBJECT(par_block_ms);
CHECK_OBJECT(par_block_ms);
Py_DECREF(par_block_ms);
par_block_ms = NULL;
CHECK_OBJECT(par_reclaim_older_than_ms);
CHECK_OBJECT(par_reclaim_older_than_ms);
Py_DECREF(par_reclaim_older_than_ms);
par_reclaim_older_than_ms = NULL;
CHECK_OBJECT(par_drain);
CHECK_OBJECT(par_drain);
Py_DECREF(par_drain);
par_drain = NULL;
CHECK_OBJECT(par_auto_stop);
CHECK_OBJECT(par_auto_stop);
Py_DECREF(par_auto_stop);
par_auto_stop = NULL;
CHECK_OBJECT(par_extra_headers);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
par_extra_headers = NULL;
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
struct anthropic$lib$environments$_poller$$$function__6_iter_work$$$genobj__1_iter_work_locals {
PyObject *var_poll_attempt;
PyObject *var_ack_attempt;
PyObject *var_item;
PyObject *var_e;
PyObject *var_wait;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
struct Nuitka_ExceptionStackItem exception_preserved_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
int exception_keeper_lineno_15;
};
#endif

static PyObject *anthropic$lib$environments$_poller$$$function__6_iter_work$$$genobj__1_iter_work_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$lib$environments$_poller$$$function__6_iter_work$$$genobj__1_iter_work_locals *generator_heap = (struct anthropic$lib$environments$_poller$$$function__6_iter_work$$$genobj__1_iter_work_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_poll_attempt = NULL;
generator_heap->var_ack_attempt = NULL;
generator_heap->var_item = NULL;
generator_heap->var_e = NULL;
generator_heap->var_wait = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;
generator_heap->tmp_return_value = NULL;

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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_be45d03d37594ea3ca61add07b04e661, module_anthropic$lib$environments$_poller, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_1;
if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_worker_id);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 107;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_or_left_value_1 = Nuitka_Cell_GET(generator->m_closure[7]);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 107;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_called_value_1 = module_var_accessor_anthropic$lib$environments$_poller$_default_worker_id(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__default_worker_id);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 107;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 107;
tmp_or_right_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 107;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assign_source_1 = tmp_or_left_value_1;
or_end_1:;
{
    PyObject *old = Nuitka_Cell_GET(generator->m_closure[7]);
    Nuitka_Cell_SET(generator->m_closure[7], tmp_assign_source_1);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 108;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_info);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 108;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_27f10d9b7878618b95bbd2e0003a4739;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_environment_id);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 108;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[3]);
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_drain);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 108;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(generator->m_closure[2]);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_auto_stop);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 108;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 108;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 108;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = const_int_0;
assert(generator_heap->var_poll_attempt == NULL);
Py_INCREF(tmp_assign_source_2);
generator_heap->var_poll_attempt = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_int_0;
assert(generator_heap->var_ack_attempt == NULL);
Py_INCREF(tmp_assign_source_3);
generator_heap->var_ack_attempt = tmp_assign_source_3;
}
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_kw_call_dict_value_1_1;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_work);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 116;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_poll);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 116;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_environment_id);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 117;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(generator->m_closure[3]);
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_block_ms);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 118;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_block_ms);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 118;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(generator->m_closure[1]);
goto condexpr_end_1;
condexpr_false_1:;
tmp_kw_call_dict_value_0_1 = module_var_accessor_anthropic$lib$environments$_poller$omit(tstate);
if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_omit);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_3);

generator_heap->exception_lineno = 118;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}
condexpr_end_1:;
if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_reclaim_older_than_ms);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 119;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_2 = Nuitka_Cell_GET(generator->m_closure[5]);
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_reclaim_older_than_ms);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 119;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(generator->m_closure[5]);
goto condexpr_end_2;
condexpr_false_2:;
tmp_kw_call_dict_value_1_1 = module_var_accessor_anthropic$lib$environments$_poller$omit(tstate);
if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_omit);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_3);

generator_heap->exception_lineno = 119;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}
condexpr_end_2:;
if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_worker_id);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 120;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_2_1 = Nuitka_Cell_GET(generator->m_closure[7]);
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 121;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_3_1 = Nuitka_Cell_GET(generator->m_closure[4]);
generator->m_frame->m_frame.f_lineno = 116;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_247616df0e9580ec165ab1a7ac1036a8_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 116;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_item;
    generator_heap->var_item = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = module_var_accessor_anthropic$lib$environments$_poller$TRANSIENT_ERRORS(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_TRANSIENT_ERRORS);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 123;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_3;
}
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 123;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_3;
}
tmp_condition_result_3 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
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
{
    PyObject *old = generator_heap->var_e;
    generator_heap->var_e = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
int tmp_truth_name_1;
tmp_called_value_4 = module_var_accessor_anthropic$lib$environments$_poller$_is_fatal_4xx(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__is_fatal_4xx);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 124;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(generator_heap->var_e);
tmp_args_element_value_5 = generator_heap->var_e;
generator->m_frame->m_frame.f_lineno = 124;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 124;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_2);

generator_heap->exception_lineno = 124;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_instance_1 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 125;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
tmp_args_element_value_6 = mod_consts.const_str_digest_8bcb390102d12f2b550a67d7100ed06e;
CHECK_OBJECT(generator_heap->var_e);
tmp_args_element_value_7 = generator_heap->var_e;
generator->m_frame->m_frame.f_lineno = 125;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_error,
        call_args
    );
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 125;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 126;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccccccccooooo";
goto try_except_handler_4;
branch_no_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iadd_expr_left_1;
nuitka_digit tmp_iadd_expr_right_1;
if (generator_heap->var_poll_attempt == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_poll_attempt);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 127;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}

tmp_iadd_expr_left_1 = generator_heap->var_poll_attempt;
tmp_iadd_expr_right_1 = 1;
generator_heap->tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
assert(!(generator_heap->tmp_result == false));
tmp_assign_source_6 = tmp_iadd_expr_left_1;
generator_heap->var_poll_attempt = tmp_assign_source_6;

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_value_6;
tmp_called_value_5 = module_var_accessor_anthropic$lib$environments$_poller$_backoff(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__backoff);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 128;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(generator_heap->var_poll_attempt);
tmp_args_element_value_8 = generator_heap->var_poll_attempt;
generator->m_frame->m_frame.f_lineno = 128;
tmp_add_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_8);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 128;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
tmp_called_value_6 = module_var_accessor_anthropic$lib$environments$_poller$_jitter(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__jitter);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_add_expr_left_1);

generator_heap->exception_lineno = 128;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
generator->m_frame->m_frame.f_lineno = 128;
tmp_add_expr_right_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_6, mod_consts.const_tuple_float_0_0_float_1_0_tuple);

if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_add_expr_left_1);

generator_heap->exception_lineno = 128;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 128;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->var_wait;
    generator_heap->var_wait = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_called_instance_2 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 129;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
tmp_args_element_value_9 = mod_consts.const_str_digest_fa7d9f2d8927b4d572ab5dbd136f05a0;
CHECK_OBJECT(generator_heap->var_poll_attempt);
tmp_args_element_value_10 = generator_heap->var_poll_attempt;
CHECK_OBJECT(generator_heap->var_wait);
tmp_args_element_value_11 = generator_heap->var_wait;
CHECK_OBJECT(generator_heap->var_e);
tmp_args_element_value_12 = generator_heap->var_e;
generator->m_frame->m_frame.f_lineno = 129;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_4 = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_warning,
        call_args
    );
}

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 129;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_13;
tmp_called_instance_3 = module_var_accessor_anthropic$lib$environments$_poller$time(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 130;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(generator_heap->var_wait);
tmp_args_element_value_13 = generator_heap->var_wait;
generator->m_frame->m_frame.f_lineno = 130;
tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_sleep, tmp_args_element_value_13);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 130;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
goto try_continue_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_3;
// try continue handler code:
try_continue_handler_4:;
Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;

goto try_continue_handler_3;
// End of try:
goto branch_end_1;
branch_no_1:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 115;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccccccccooooo";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// try continue handler code:
try_continue_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto loop_start_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = const_int_0;
{
    PyObject *old = generator_heap->var_poll_attempt;
    generator_heap->var_poll_attempt = tmp_assign_source_8;
    Py_INCREF(generator_heap->var_poll_attempt);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(generator_heap->var_item);
tmp_cmp_expr_left_4 = generator_heap->var_item;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_2;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_drain);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 134;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[2]));
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 134;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
tmp_expression_value_3 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 135;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_info);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 135;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_14 = mod_consts.const_str_digest_635f4a97c50a8619ba072bd1563e8f60;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_environment_id);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 135;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_15 = Nuitka_Cell_GET(generator->m_closure[3]);
generator->m_frame->m_frame.f_lineno = 135;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 135;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
generator_heap->tmp_return_value = Py_None;
Py_INCREF(generator_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_4:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_16;
PyObject *tmp_called_value_9;
tmp_expression_value_4 = module_var_accessor_anthropic$lib$environments$_poller$time(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_time);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 137;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_sleep);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 137;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = module_var_accessor_anthropic$lib$environments$_poller$_jitter(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__jitter);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_8);

generator_heap->exception_lineno = 137;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 137;
tmp_args_element_value_16 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_9, mod_consts.const_tuple_float_1_0_float_3_0_tuple);

if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_8);

generator_heap->exception_lineno = 137;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 137;
tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 137;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
goto loop_start_1;
branch_no_3:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_19;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
tmp_expression_value_5 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 139;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_info);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 139;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_17 = mod_consts.const_str_digest_af9d2672f7efaa89f03239f84f1eea8c;
CHECK_OBJECT(generator_heap->var_item);
tmp_expression_value_6 = generator_heap->var_item;
tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_id);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_10);

generator_heap->exception_lineno = 139;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_item);
tmp_expression_value_8 = generator_heap->var_item;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_data);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_args_element_value_18);

generator_heap->exception_lineno = 139;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_name_value_1 = const_str_plain_type;
tmp_default_value_1 = Py_None;
tmp_args_element_value_19 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_args_element_value_18);

generator_heap->exception_lineno = 139;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 139;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 139;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
// Tried code:
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_9;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_work);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 141;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_5;
}

tmp_expression_value_9 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_ack);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 141;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(generator_heap->var_item);
tmp_expression_value_10 = generator_heap->var_item;
tmp_kw_call_arg_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_id);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_11);

generator_heap->exception_lineno = 142;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_kw_call_arg_value_0_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_environment_id);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 143;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_5;
}

tmp_kw_call_dict_value_0_2 = Nuitka_Cell_GET(generator->m_closure[3]);
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_kw_call_arg_value_0_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 144;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_5;
}

tmp_kw_call_dict_value_1_2 = Nuitka_Cell_GET(generator->m_closure[4]);
generator->m_frame->m_frame.f_lineno = 141;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
    tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_11, args, kw_values, mod_consts.const_tuple_str_plain_environment_id_str_plain_extra_headers_tuple);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 141;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 2.
generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_4, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_4);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = module_var_accessor_anthropic$lib$environments$_poller$TRANSIENT_ERRORS(tstate);
if (unlikely(tmp_cmp_expr_right_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_TRANSIENT_ERRORS);
}

if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 146;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_6;
}
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 146;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_6;
}
tmp_condition_result_7 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_9); 
{
    PyObject *old = generator_heap->var_e;
    generator_heap->var_e = tmp_assign_source_9;
    Py_INCREF(generator_heap->var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_10;
PyObject *tmp_args_element_value_20;
int tmp_truth_name_3;
tmp_called_value_12 = module_var_accessor_anthropic$lib$environments$_poller$_is_fatal_4xx(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__is_fatal_4xx);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 147;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(generator_heap->var_e);
tmp_args_element_value_20 = generator_heap->var_e;
generator->m_frame->m_frame.f_lineno = 147;
tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_20);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 147;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_10);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_10);

generator_heap->exception_lineno = 147;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_11;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_23;
tmp_expression_value_11 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 148;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_error);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 148;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_args_element_value_21 = mod_consts.const_str_digest_bdadcdf37e5bd6a78ec4b577b22c849f;
CHECK_OBJECT(generator_heap->var_item);
tmp_expression_value_12 = generator_heap->var_item;
tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_id);
if (tmp_args_element_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_13);

generator_heap->exception_lineno = 148;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(generator_heap->var_e);
tmp_args_element_value_23 = generator_heap->var_e;
generator->m_frame->m_frame.f_lineno = 148;
{
    PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 148;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_call_result_12;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_3;
tmp_called_value_14 = module_var_accessor_anthropic$lib$environments$_poller$_force_stop_quietly(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__force_stop_quietly);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_work);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}

tmp_kw_call_arg_value_0_3 = Nuitka_Cell_GET(generator->m_closure[6]);
CHECK_OBJECT(generator_heap->var_item);
tmp_expression_value_13 = generator_heap->var_item;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_id);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_1_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_environment_id);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}

tmp_kw_call_dict_value_0_3 = Nuitka_Cell_GET(generator->m_closure[3]);
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_1_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}

tmp_kw_call_dict_value_1_3 = Nuitka_Cell_GET(generator->m_closure[4]);
generator->m_frame->m_frame.f_lineno = 149;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
    tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_14, args, kw_values, mod_consts.const_tuple_str_plain_environment_id_str_plain_extra_headers_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_call_result_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_12);
Py_DECREF(tmp_call_result_12);
}
goto try_continue_handler_7;
branch_no_6:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
if (generator_heap->var_ack_attempt == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ack_attempt);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 151;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}

tmp_iadd_expr_left_2 = generator_heap->var_ack_attempt;
tmp_iadd_expr_right_2 = const_int_pos_1;
generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 151;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_assign_source_10 = tmp_iadd_expr_left_2;
generator_heap->var_ack_attempt = tmp_assign_source_10;

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_24;
PyObject *tmp_called_value_16;
tmp_called_value_15 = module_var_accessor_anthropic$lib$environments$_poller$_backoff(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__backoff);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 152;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(generator_heap->var_ack_attempt);
tmp_args_element_value_24 = generator_heap->var_ack_attempt;
generator->m_frame->m_frame.f_lineno = 152;
tmp_add_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_24);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 152;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_called_value_16 = module_var_accessor_anthropic$lib$environments$_poller$_jitter(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__jitter);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_add_expr_left_2);

generator_heap->exception_lineno = 152;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
generator->m_frame->m_frame.f_lineno = 152;
tmp_add_expr_right_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_16, mod_consts.const_tuple_float_0_0_float_1_0_tuple);

if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_add_expr_left_2);

generator_heap->exception_lineno = 152;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 152;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = generator_heap->var_wait;
    generator_heap->var_wait = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_14;
PyObject *tmp_call_result_13;
PyObject *tmp_args_element_value_25;
PyObject *tmp_args_element_value_26;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_27;
PyObject *tmp_args_element_value_28;
PyObject *tmp_args_element_value_29;
tmp_expression_value_14 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 153;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_warning);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 153;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_args_element_value_25 = mod_consts.const_str_digest_da4e8beca35a1ef30e74dfeebb98db1f;
CHECK_OBJECT(generator_heap->var_item);
tmp_expression_value_15 = generator_heap->var_item;
tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_id);
if (tmp_args_element_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_17);

generator_heap->exception_lineno = 154;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(generator_heap->var_ack_attempt);
tmp_args_element_value_27 = generator_heap->var_ack_attempt;
CHECK_OBJECT(generator_heap->var_wait);
tmp_args_element_value_28 = generator_heap->var_wait;
CHECK_OBJECT(generator_heap->var_e);
tmp_args_element_value_29 = generator_heap->var_e;
generator->m_frame->m_frame.f_lineno = 153;
{
    PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29};
    tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_17, call_args);
}

CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_call_result_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 153;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_13);
Py_DECREF(tmp_call_result_13);
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_14;
PyObject *tmp_args_element_value_30;
tmp_called_instance_4 = module_var_accessor_anthropic$lib$environments$_poller$time(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 156;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(generator_heap->var_wait);
tmp_args_element_value_30 = generator_heap->var_wait;
generator->m_frame->m_frame.f_lineno = 156;
tmp_call_result_14 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_sleep, tmp_args_element_value_30);
if (tmp_call_result_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 156;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_14);
Py_DECREF(tmp_call_result_14);
}
goto try_continue_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_7:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto try_except_handler_6;
// try continue handler code:
try_continue_handler_7:;
Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;

goto try_continue_handler_6;
// End of try:
goto branch_end_5;
branch_no_5:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 140;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccccccccooooo";
goto try_except_handler_6;
branch_end_5:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto frame_exception_exit_1;
// try continue handler code:
try_continue_handler_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

goto loop_start_1;
// End of try:
// End of try:
try_end_2:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = const_int_0;
{
    PyObject *old = generator_heap->var_ack_attempt;
    generator_heap->var_ack_attempt = tmp_assign_source_12;
    Py_INCREF(generator_heap->var_ack_attempt);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_auto_stop);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 159;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 159;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_expression_value_16;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_item);
tmp_expression_value_16 = generator_heap->var_item;
Py_INCREF(tmp_expression_value_16);
generator->m_yield_return_index = 1;
return tmp_expression_value_16;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 160;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto loop_start_1;
branch_no_7:;
// Tried code:
{
PyObject *tmp_expression_value_17;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
CHECK_OBJECT(generator_heap->var_item);
tmp_expression_value_17 = generator_heap->var_item;
Py_INCREF(tmp_expression_value_17);
generator->m_yield_return_index = 2;
return tmp_expression_value_17;
yield_return_2:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 163;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_8;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
goto try_end_3;
// Exception handler code:
try_except_handler_8:;
generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_7 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 4.
generator_heap->exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

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
// Tried code:
{
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_18;
PyObject *tmp_call_result_15;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_expression_value_19;
PyObject *tmp_kw_call_dict_value_0_4;
PyObject *tmp_kw_call_dict_value_1_4;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_work);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 166;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_10;
}

tmp_expression_value_18 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_stop);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 166;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(generator_heap->var_item);
tmp_expression_value_19 = generator_heap->var_item;
tmp_kw_call_arg_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_id);
if (tmp_kw_call_arg_value_0_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_18);

generator_heap->exception_lineno = 167;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_10;
}
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_kw_call_arg_value_0_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_environment_id);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 168;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_10;
}

tmp_kw_call_dict_value_0_4 = Nuitka_Cell_GET(generator->m_closure[3]);
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_kw_call_arg_value_0_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 169;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_10;
}

tmp_kw_call_dict_value_1_4 = Nuitka_Cell_GET(generator->m_closure[4]);
generator->m_frame->m_frame.f_lineno = 166;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_4};
    tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_18, args, kw_values, mod_consts.const_tuple_str_plain_environment_id_str_plain_extra_headers_tuple);
}

CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_kw_call_arg_value_0_4);
Py_DECREF(tmp_kw_call_arg_value_0_4);
if (tmp_call_result_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 166;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(tmp_call_result_15);
Py_DECREF(tmp_call_result_15);
}
goto try_end_4;
// Exception handler code:
try_except_handler_10:;
generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_8 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 3.
generator_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_8);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_8, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_8 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_8, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_8);
// Tried code:
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_Exception;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_10 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_13); 
{
    PyObject *old = generator_heap->var_e;
    generator_heap->var_e = tmp_assign_source_13;
    Py_INCREF(generator_heap->var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_31;
PyObject *tmp_args_element_value_32;
tmp_called_value_19 = module_var_accessor_anthropic$lib$environments$_poller$_is_status(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__is_status);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 172;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(generator_heap->var_e);
tmp_args_element_value_31 = generator_heap->var_e;
tmp_args_element_value_32 = mod_consts.const_int_pos_409;
generator->m_frame->m_frame.f_lineno = 172;
{
    PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 172;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_12;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 172;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_12;
}
tmp_condition_result_11 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_20;
PyObject *tmp_call_result_16;
PyObject *tmp_args_element_value_33;
PyObject *tmp_args_element_value_34;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_element_value_35;
tmp_expression_value_20 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 173;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_12;
}
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_warning);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 173;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_12;
}
tmp_args_element_value_33 = mod_consts.const_str_digest_348647dac54e46ba9ef312d4c8bfeecf;
CHECK_OBJECT(generator_heap->var_item);
tmp_expression_value_21 = generator_heap->var_item;
tmp_args_element_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_id);
if (tmp_args_element_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_20);

generator_heap->exception_lineno = 173;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(generator_heap->var_e);
tmp_args_element_value_35 = generator_heap->var_e;
generator->m_frame->m_frame.f_lineno = 173;
{
    PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35};
    tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_20, call_args);
}

CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_34);
Py_DECREF(tmp_args_element_value_34);
if (tmp_call_result_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 173;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(tmp_call_result_16);
Py_DECREF(tmp_call_result_16);
}
branch_no_9:;
goto try_end_5;
// Exception handler code:
try_except_handler_12:;
generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_9 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_9;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

goto try_except_handler_11;
// End of try:
try_end_5:;
Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;

goto branch_end_8;
branch_no_8:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 165;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccccccccooooo";
goto try_except_handler_11;
branch_end_8:;
goto try_end_6;
// Exception handler code:
try_except_handler_11:;
generator_heap->exception_keeper_lineno_10 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_10 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_3);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_10;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_10;

goto try_except_handler_9;
// End of try:
try_end_6:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_3);

goto try_end_4;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_4:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 162;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccccccccooooo";
goto try_except_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_9:;
generator_heap->exception_keeper_lineno_11 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_11 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_4);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_11;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_3:;
// Tried code:
{
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_result_17;
PyObject *tmp_kw_call_arg_value_0_5;
PyObject *tmp_expression_value_23;
PyObject *tmp_kw_call_dict_value_0_5;
PyObject *tmp_kw_call_dict_value_1_5;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_work);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 166;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_13;
}

tmp_expression_value_22 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_stop);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 166;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(generator_heap->var_item);
tmp_expression_value_23 = generator_heap->var_item;
tmp_kw_call_arg_value_0_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_id);
if (tmp_kw_call_arg_value_0_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_21);

generator_heap->exception_lineno = 167;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_13;
}
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_21);
Py_DECREF(tmp_kw_call_arg_value_0_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_environment_id);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 168;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_13;
}

tmp_kw_call_dict_value_0_5 = Nuitka_Cell_GET(generator->m_closure[3]);
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_21);
Py_DECREF(tmp_kw_call_arg_value_0_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 169;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_13;
}

tmp_kw_call_dict_value_1_5 = Nuitka_Cell_GET(generator->m_closure[4]);
generator->m_frame->m_frame.f_lineno = 166;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_5};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_5};
    tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_21, args, kw_values, mod_consts.const_tuple_str_plain_environment_id_str_plain_extra_headers_tuple);
}

CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_kw_call_arg_value_0_5);
Py_DECREF(tmp_kw_call_arg_value_0_5);
if (tmp_call_result_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 166;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(tmp_call_result_17);
Py_DECREF(tmp_call_result_17);
}
goto try_end_7;
// Exception handler code:
try_except_handler_13:;
generator_heap->exception_keeper_lineno_12 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_12 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 3.
generator_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_12);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_12);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_12, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_12 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_12);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_12, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_12);
// Tried code:
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
tmp_cmp_expr_left_7 = EXC_TYPE(tstate);
tmp_cmp_expr_right_7 = PyExc_Exception;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_12 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_14); 
{
    PyObject *old = generator_heap->var_e;
    generator_heap->var_e = tmp_assign_source_14;
    Py_INCREF(generator_heap->var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
bool tmp_condition_result_13;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_36;
PyObject *tmp_args_element_value_37;
tmp_called_value_22 = module_var_accessor_anthropic$lib$environments$_poller$_is_status(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__is_status);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 172;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(generator_heap->var_e);
tmp_args_element_value_36 = generator_heap->var_e;
tmp_args_element_value_37 = mod_consts.const_int_pos_409;
generator->m_frame->m_frame.f_lineno = 172;
{
    PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_22, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 172;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_15;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 172;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_15;
}
tmp_condition_result_13 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_call_result_18;
PyObject *tmp_args_element_value_38;
PyObject *tmp_args_element_value_39;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_element_value_40;
tmp_expression_value_24 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 173;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_15;
}
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_warning);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 173;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_15;
}
tmp_args_element_value_38 = mod_consts.const_str_digest_348647dac54e46ba9ef312d4c8bfeecf;
CHECK_OBJECT(generator_heap->var_item);
tmp_expression_value_25 = generator_heap->var_item;
tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_id);
if (tmp_args_element_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_23);

generator_heap->exception_lineno = 173;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(generator_heap->var_e);
tmp_args_element_value_40 = generator_heap->var_e;
generator->m_frame->m_frame.f_lineno = 173;
{
    PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40};
    tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_23, call_args);
}

CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_39);
Py_DECREF(tmp_args_element_value_39);
if (tmp_call_result_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 173;
generator_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(tmp_call_result_18);
Py_DECREF(tmp_call_result_18);
}
branch_no_11:;
goto try_end_8;
// Exception handler code:
try_except_handler_15:;
generator_heap->exception_keeper_lineno_13 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_13 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_13;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
try_end_8:;
Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;

goto branch_end_10;
branch_no_10:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 165;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccccccccooooo";
goto try_except_handler_14;
branch_end_10:;
goto try_end_9;
// Exception handler code:
try_except_handler_14:;
generator_heap->exception_keeper_lineno_14 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_14 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_3);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_14;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_3);

goto try_end_7;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_7:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 114;
generator_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(generator));
#endif
Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

goto try_return_handler_1;

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
    generator->m_closure[6],
    generator->m_closure[3],
    generator->m_closure[7],
    generator->m_closure[1],
    generator->m_closure[5],
    generator->m_closure[2],
    generator->m_closure[0],
    generator->m_closure[4],
    generator_heap->var_poll_attempt,
    generator_heap->var_ack_attempt,
    generator_heap->var_item,
    generator_heap->var_e,
    generator_heap->var_wait
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
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(generator_heap->var_poll_attempt);
CHECK_OBJECT(generator_heap->var_poll_attempt);
Py_DECREF(generator_heap->var_poll_attempt);
generator_heap->var_poll_attempt = NULL;
Py_XDECREF(generator_heap->var_ack_attempt);
generator_heap->var_ack_attempt = NULL;
CHECK_OBJECT(generator_heap->var_item);
CHECK_OBJECT(generator_heap->var_item);
Py_DECREF(generator_heap->var_item);
generator_heap->var_item = NULL;
Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;
Py_XDECREF(generator_heap->var_wait);
generator_heap->var_wait = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_15 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_15 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_poll_attempt);
generator_heap->var_poll_attempt = NULL;
Py_XDECREF(generator_heap->var_ack_attempt);
generator_heap->var_ack_attempt = NULL;
Py_XDECREF(generator_heap->var_item);
generator_heap->var_item = NULL;
Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;
Py_XDECREF(generator_heap->var_wait);
generator_heap->var_wait = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_15;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_15;

goto function_exception_exit;
// End of try:


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif


    return NULL;

}

static PyObject *MAKE_GENERATOR_anthropic$lib$environments$_poller$$$function__6_iter_work$$$genobj__1_iter_work(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        anthropic$lib$environments$_poller$$$function__6_iter_work$$$genobj__1_iter_work_context,
        module_anthropic$lib$environments$_poller,
        mod_consts.const_str_plain_iter_work,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_be45d03d37594ea3ca61add07b04e661,
        closure,
        8,
#if 1
        sizeof(struct anthropic$lib$environments$_poller$$$function__6_iter_work$$$genobj__1_iter_work_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_work = python_pars[0];
PyObject *par_work_id = python_pars[1];
PyObject *par_environment_id = python_pars[2];
PyObject *par_extra_headers = python_pars[3];
PyObject *var_e = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly = MAKE_FUNCTION_FRAME(tstate, code_objects_bccba812566de29b4dcb8e9629dd34ef, module_anthropic$lib$environments$_poller, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly->m_type_description == NULL);
frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly = cache_frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly);
assert(Py_REFCNT(frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
CHECK_OBJECT(par_work);
tmp_expression_value_1 = par_work;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stop);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_work_id);
tmp_kw_call_arg_value_0_1 = par_work_id;
CHECK_OBJECT(par_environment_id);
tmp_kw_call_dict_value_0_1 = par_environment_id;
tmp_kw_call_dict_value_1_1 = Py_True;
CHECK_OBJECT(par_extra_headers);
tmp_kw_call_dict_value_2_1 = par_extra_headers;
frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly->m_frame.f_lineno = 183;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_800af3ec308551da1cd346072514538c_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_Exception;
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_1); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_1);
var_e = tmp_assign_source_1;
}
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_anthropic$lib$environments$_poller$_is_status(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_status);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_e);
tmp_args_element_value_1 = var_e;
tmp_args_element_value_2 = mod_consts.const_int_pos_409;
frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly->m_frame.f_lineno = 185;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooo";
    goto try_except_handler_3;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_instance_1 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_37cb3f56eedd443f41ace84b0d038f14;
CHECK_OBJECT(par_work_id);
tmp_args_element_value_4 = par_work_id;
CHECK_OBJECT(var_e);
tmp_args_element_value_5 = var_e;
frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly->m_frame.f_lineno = 186;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_error,
        call_args
    );
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
Py_XDECREF(var_e);
var_e = NULL;

goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 182;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly->m_frame)) {
        frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_2;
branch_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
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
try_end_3:;
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
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly,
    type_description_1,
    par_work,
    par_work_id,
    par_environment_id,
    par_extra_headers,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly == cache_frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly);
    cache_frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly);

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
CHECK_OBJECT(par_work);
Py_DECREF(par_work);
CHECK_OBJECT(par_work_id);
Py_DECREF(par_work_id);
CHECK_OBJECT(par_environment_id);
Py_DECREF(par_environment_id);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_work);
Py_DECREF(par_work);
CHECK_OBJECT(par_work_id);
Py_DECREF(par_work_id);
CHECK_OBJECT(par_environment_id);
Py_DECREF(par_environment_id);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$environments$_poller$$$function__8_aiter_work(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_work = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_environment_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_worker_id = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_block_ms = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_reclaim_older_than_ms = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_drain = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_auto_stop = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_extra_headers = Nuitka_Cell_New1(python_pars[7]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[8];
tmp_closure_1[0] = par_auto_stop;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_block_ms;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_drain;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_environment_id;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_extra_headers;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_reclaim_older_than_ms;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_work;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_worker_id;
Py_INCREF(tmp_closure_1[7]);
tmp_return_value = MAKE_ASYNCGEN_anthropic$lib$environments$_poller$$$function__8_aiter_work$$$asyncgen__1_aiter_work(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_work);
CHECK_OBJECT(par_work);
Py_DECREF(par_work);
par_work = NULL;
CHECK_OBJECT(par_environment_id);
CHECK_OBJECT(par_environment_id);
Py_DECREF(par_environment_id);
par_environment_id = NULL;
CHECK_OBJECT(par_worker_id);
CHECK_OBJECT(par_worker_id);
Py_DECREF(par_worker_id);
par_worker_id = NULL;
CHECK_OBJECT(par_block_ms);
CHECK_OBJECT(par_block_ms);
Py_DECREF(par_block_ms);
par_block_ms = NULL;
CHECK_OBJECT(par_reclaim_older_than_ms);
CHECK_OBJECT(par_reclaim_older_than_ms);
Py_DECREF(par_reclaim_older_than_ms);
par_reclaim_older_than_ms = NULL;
CHECK_OBJECT(par_drain);
CHECK_OBJECT(par_drain);
Py_DECREF(par_drain);
par_drain = NULL;
CHECK_OBJECT(par_auto_stop);
CHECK_OBJECT(par_auto_stop);
Py_DECREF(par_auto_stop);
par_auto_stop = NULL;
CHECK_OBJECT(par_extra_headers);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
par_extra_headers = NULL;
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
struct anthropic$lib$environments$_poller$$$function__8_aiter_work$$$asyncgen__1_aiter_work_locals {
PyObject *var_poll_attempt;
PyObject *var_ack_attempt;
PyObject *var_item;
PyObject *var_e;
PyObject *var_wait;
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
struct Nuitka_ExceptionStackItem exception_preserved_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
int exception_keeper_lineno_15;
};
#endif

static PyObject *anthropic$lib$environments$_poller$$$function__8_aiter_work$$$asyncgen__1_aiter_work_context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$lib$environments$_poller$$$function__8_aiter_work$$$asyncgen__1_aiter_work_locals *asyncgen_heap = (struct anthropic$lib$environments$_poller$$$function__8_aiter_work$$$asyncgen__1_aiter_work_locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(asyncgen->m_yield_return_index) {
case 10: goto yield_return_10;
case 9: goto yield_return_9;
case 8: goto yield_return_8;
case 7: goto yield_return_7;
case 6: goto yield_return_6;
case 5: goto yield_return_5;
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
asyncgen_heap->var_poll_attempt = NULL;
asyncgen_heap->var_ack_attempt = NULL;
asyncgen_heap->var_item = NULL;
asyncgen_heap->var_e = NULL;
asyncgen_heap->var_wait = NULL;
asyncgen_heap->type_description_1 = NULL;
asyncgen_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
asyncgen_heap->exception_lineno = 0;

    // Actual asyncgen body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_267d1a935424d5aac9e7d49aa8f80ca0, module_anthropic$lib$environments$_poller, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_1;
if (Nuitka_Cell_GET(asyncgen->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_worker_id);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 203;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_or_left_value_1 = Nuitka_Cell_GET(asyncgen->m_closure[7]);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 203;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_called_value_1 = module_var_accessor_anthropic$lib$environments$_poller$_default_worker_id(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain__default_worker_id);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 203;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 203;
tmp_or_right_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 203;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assign_source_1 = tmp_or_left_value_1;
or_end_1:;
{
    PyObject *old = Nuitka_Cell_GET(asyncgen->m_closure[7]);
    Nuitka_Cell_SET(asyncgen->m_closure[7], tmp_assign_source_1);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_info);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_27f10d9b7878618b95bbd2e0003a4739;
if (Nuitka_Cell_GET(asyncgen->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_environment_id);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(asyncgen->m_closure[3]);
if (Nuitka_Cell_GET(asyncgen->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_drain);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(asyncgen->m_closure[2]);
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_auto_stop);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
asyncgen->m_frame->m_frame.f_lineno = 204;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = const_int_0;
assert(asyncgen_heap->var_poll_attempt == NULL);
Py_INCREF(tmp_assign_source_2);
asyncgen_heap->var_poll_attempt = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_int_0;
assert(asyncgen_heap->var_ack_attempt == NULL);
Py_INCREF(tmp_assign_source_3);
asyncgen_heap->var_ack_attempt = tmp_assign_source_3;
}
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_kw_call_dict_value_1_1;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
asyncgen->m_frame->m_frame.f_lineno = 209;
if (Nuitka_Cell_GET(asyncgen->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_work);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}

tmp_expression_value_4 = Nuitka_Cell_GET(asyncgen->m_closure[6]);
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_poll);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_environment_id);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 210;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(asyncgen->m_closure[3]);
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_block_ms);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 211;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_block_ms);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 211;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
goto condexpr_end_1;
condexpr_false_1:;
tmp_kw_call_dict_value_0_1 = module_var_accessor_anthropic$lib$environments$_poller$omit(tstate);
if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_omit);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));

Py_DECREF(tmp_called_value_3);

asyncgen_heap->exception_lineno = 211;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}
condexpr_end_1:;
if (Nuitka_Cell_GET(asyncgen->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_reclaim_older_than_ms);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 212;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_2 = Nuitka_Cell_GET(asyncgen->m_closure[5]);
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
if (Nuitka_Cell_GET(asyncgen->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_reclaim_older_than_ms);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 212;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(asyncgen->m_closure[5]);
goto condexpr_end_2;
condexpr_false_2:;
tmp_kw_call_dict_value_1_1 = module_var_accessor_anthropic$lib$environments$_poller$omit(tstate);
if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_omit);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));

Py_DECREF(tmp_called_value_3);

asyncgen_heap->exception_lineno = 212;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}
condexpr_end_2:;
if (Nuitka_Cell_GET(asyncgen->m_closure[7]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_worker_id);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 213;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_2_1 = Nuitka_Cell_GET(asyncgen->m_closure[7]);
if (Nuitka_Cell_GET(asyncgen->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 214;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_3_1 = Nuitka_Cell_GET(asyncgen->m_closure[4]);
asyncgen->m_frame->m_frame.f_lineno = 209;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
    tmp_expression_value_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_247616df0e9580ec165ab1a7ac1036a8_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_condition_result_1, sizeof(bool), &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_condition_result_2, sizeof(bool), &tmp_cmp_expr_left_2, sizeof(PyObject *), &tmp_cmp_expr_right_2, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_3_1, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 1;
asyncgen->m_yield_from = tmp_expression_value_2;
asyncgen->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_condition_result_1, sizeof(bool), &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_condition_result_2, sizeof(bool), &tmp_cmp_expr_left_2, sizeof(PyObject *), &tmp_cmp_expr_right_2, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_3_1, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_2;
}
tmp_assign_source_4 = yield_return_value;
{
    PyObject *old = asyncgen_heap->var_item;
    asyncgen_heap->var_item = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
asyncgen_heap->exception_keeper_lineno_1 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_1 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Preserve existing published exception id 1.
asyncgen_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_1, exception_tb);
    } else if (asyncgen_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = module_var_accessor_anthropic$lib$environments$_poller$TRANSIENT_ERRORS(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_TRANSIENT_ERRORS);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 216;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_3;
}
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 216;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_3;
}
tmp_condition_result_3 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
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
{
    PyObject *old = asyncgen_heap->var_e;
    asyncgen_heap->var_e = tmp_assign_source_5;
    Py_INCREF(asyncgen_heap->var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
int tmp_truth_name_1;
tmp_called_value_4 = module_var_accessor_anthropic$lib$environments$_poller$_is_fatal_4xx(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain__is_fatal_4xx);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 217;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(asyncgen_heap->var_e);
tmp_args_element_value_5 = asyncgen_heap->var_e;
asyncgen->m_frame->m_frame.f_lineno = 217;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 217;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_call_result_2);

asyncgen_heap->exception_lineno = 217;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_instance_1 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 218;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
tmp_args_element_value_6 = mod_consts.const_str_digest_8bcb390102d12f2b550a67d7100ed06e;
CHECK_OBJECT(asyncgen_heap->var_e);
tmp_args_element_value_7 = asyncgen_heap->var_e;
asyncgen->m_frame->m_frame.f_lineno = 218;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_error,
        call_args
    );
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 218;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 219;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccccccccooooo";
goto try_except_handler_4;
branch_no_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iadd_expr_left_1;
nuitka_digit tmp_iadd_expr_right_1;
if (asyncgen_heap->var_poll_attempt == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_poll_attempt);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 220;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}

tmp_iadd_expr_left_1 = asyncgen_heap->var_poll_attempt;
tmp_iadd_expr_right_1 = 1;
asyncgen_heap->tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
assert(!(asyncgen_heap->tmp_result == false));
tmp_assign_source_6 = tmp_iadd_expr_left_1;
asyncgen_heap->var_poll_attempt = tmp_assign_source_6;

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_value_6;
tmp_called_value_5 = module_var_accessor_anthropic$lib$environments$_poller$_backoff(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain__backoff);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 221;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(asyncgen_heap->var_poll_attempt);
tmp_args_element_value_8 = asyncgen_heap->var_poll_attempt;
asyncgen->m_frame->m_frame.f_lineno = 221;
tmp_add_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_8);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 221;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
tmp_called_value_6 = module_var_accessor_anthropic$lib$environments$_poller$_jitter(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain__jitter);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));

Py_DECREF(tmp_add_expr_left_1);

asyncgen_heap->exception_lineno = 221;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
asyncgen->m_frame->m_frame.f_lineno = 221;
tmp_add_expr_right_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_6, mod_consts.const_tuple_float_0_0_float_1_0_tuple);

if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_add_expr_left_1);

asyncgen_heap->exception_lineno = 221;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 221;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = asyncgen_heap->var_wait;
    asyncgen_heap->var_wait = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_called_instance_2 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 222;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
tmp_args_element_value_9 = mod_consts.const_str_digest_fa7d9f2d8927b4d572ab5dbd136f05a0;
CHECK_OBJECT(asyncgen_heap->var_poll_attempt);
tmp_args_element_value_10 = asyncgen_heap->var_poll_attempt;
CHECK_OBJECT(asyncgen_heap->var_wait);
tmp_args_element_value_11 = asyncgen_heap->var_wait;
CHECK_OBJECT(asyncgen_heap->var_e);
tmp_args_element_value_12 = asyncgen_heap->var_e;
asyncgen->m_frame->m_frame.f_lineno = 222;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_4 = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_warning,
        call_args
    );
}

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 222;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_13;
PyObject *tmp_await_result_1;
asyncgen->m_frame->m_frame.f_lineno = 223;
tmp_called_instance_3 = module_var_accessor_anthropic$lib$environments$_poller$anyio(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_anyio);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 223;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(asyncgen_heap->var_wait);
tmp_args_element_value_13 = asyncgen_heap->var_wait;
asyncgen->m_frame->m_frame.f_lineno = 223;
tmp_expression_value_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_sleep, tmp_args_element_value_13);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 223;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
tmp_expression_value_5 = ASYNC_AWAIT(tstate, tmp_expression_value_6, await_normal);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 223;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_3, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 2;
asyncgen->m_yield_from = tmp_expression_value_5;
asyncgen->m_awaiting = true;
return NULL;

yield_return_2:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_3, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 223;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_4;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
goto try_continue_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
asyncgen_heap->exception_keeper_lineno_2 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_2 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_e);
asyncgen_heap->var_e = NULL;

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_2;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_2;

goto try_except_handler_3;
// try continue handler code:
try_continue_handler_4:;
Py_XDECREF(asyncgen_heap->var_e);
asyncgen_heap->var_e = NULL;

goto try_continue_handler_3;
// End of try:
goto branch_end_1;
branch_no_1:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 208;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccccccccooooo";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
asyncgen_heap->exception_keeper_lineno_3 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_3 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_1);

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_3;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// try continue handler code:
try_continue_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_1);

goto loop_start_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = const_int_0;
{
    PyObject *old = asyncgen_heap->var_poll_attempt;
    asyncgen_heap->var_poll_attempt = tmp_assign_source_8;
    Py_INCREF(asyncgen_heap->var_poll_attempt);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(asyncgen_heap->var_item);
tmp_cmp_expr_left_4 = asyncgen_heap->var_item;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_2;
if (Nuitka_Cell_GET(asyncgen->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_drain);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 227;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(Nuitka_Cell_GET(asyncgen->m_closure[2]));
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 227;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
tmp_expression_value_7 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 228;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_info);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 228;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_14 = mod_consts.const_str_digest_635f4a97c50a8619ba072bd1563e8f60;
if (Nuitka_Cell_GET(asyncgen->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_environment_id);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 228;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_15 = Nuitka_Cell_GET(asyncgen->m_closure[3]);
asyncgen->m_frame->m_frame.f_lineno = 228;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 228;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
goto frame_return_exit_1;
branch_no_4:;
{
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_16;
PyObject *tmp_called_value_9;
PyObject *tmp_await_result_2;
asyncgen->m_frame->m_frame.f_lineno = 230;
tmp_expression_value_10 = module_var_accessor_anthropic$lib$environments$_poller$anyio(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_anyio);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 230;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_sleep);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 230;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = module_var_accessor_anthropic$lib$environments$_poller$_jitter(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain__jitter);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));

Py_DECREF(tmp_called_value_8);

asyncgen_heap->exception_lineno = 230;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 230;
tmp_args_element_value_16 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_9, mod_consts.const_tuple_float_1_0_float_3_0_tuple);

if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_8);

asyncgen_heap->exception_lineno = 230;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 230;
tmp_expression_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 230;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = ASYNC_AWAIT(tstate, tmp_expression_value_9, await_normal);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 230;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_value_8, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_args_element_value_16, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 3;
asyncgen->m_yield_from = tmp_expression_value_8;
asyncgen->m_awaiting = true;
return NULL;

yield_return_3:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_value_8, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_args_element_value_16, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 230;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
goto loop_start_1;
branch_no_3:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_19;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
tmp_expression_value_11 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 232;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_info);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 232;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_17 = mod_consts.const_str_digest_af9d2672f7efaa89f03239f84f1eea8c;
CHECK_OBJECT(asyncgen_heap->var_item);
tmp_expression_value_12 = asyncgen_heap->var_item;
tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_id);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_10);

asyncgen_heap->exception_lineno = 232;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(asyncgen_heap->var_item);
tmp_expression_value_14 = asyncgen_heap->var_item;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_data);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_args_element_value_18);

asyncgen_heap->exception_lineno = 232;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_name_value_1 = const_str_plain_type;
tmp_default_value_1 = Py_None;
tmp_args_element_value_19 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_args_element_value_18);

asyncgen_heap->exception_lineno = 232;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 232;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 232;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
// Tried code:
{
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_17;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_expression_value_18;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_await_result_3;
asyncgen->m_frame->m_frame.f_lineno = 234;
if (Nuitka_Cell_GET(asyncgen->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_work);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 234;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_5;
}

tmp_expression_value_17 = Nuitka_Cell_GET(asyncgen->m_closure[6]);
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_ack);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 234;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(asyncgen_heap->var_item);
tmp_expression_value_18 = asyncgen_heap->var_item;
tmp_kw_call_arg_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_id);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_11);

asyncgen_heap->exception_lineno = 235;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_kw_call_arg_value_0_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_environment_id);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 236;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_5;
}

tmp_kw_call_dict_value_0_2 = Nuitka_Cell_GET(asyncgen->m_closure[3]);
if (Nuitka_Cell_GET(asyncgen->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_kw_call_arg_value_0_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 237;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_5;
}

tmp_kw_call_dict_value_1_2 = Nuitka_Cell_GET(asyncgen->m_closure[4]);
asyncgen->m_frame->m_frame.f_lineno = 234;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
    tmp_expression_value_16 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_11, args, kw_values, mod_consts.const_tuple_str_plain_environment_id_str_plain_extra_headers_tuple);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 234;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_5;
}
tmp_expression_value_15 = ASYNC_AWAIT(tstate, tmp_expression_value_16, await_normal);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 234;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_16, sizeof(PyObject *), &tmp_called_value_11, sizeof(PyObject *), &tmp_expression_value_17, sizeof(PyObject *), &tmp_kw_call_arg_value_0_2, sizeof(PyObject *), &tmp_expression_value_18, sizeof(PyObject *), &tmp_kw_call_dict_value_0_2, sizeof(PyObject *), &tmp_kw_call_dict_value_1_2, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 4;
asyncgen->m_yield_from = tmp_expression_value_15;
asyncgen->m_awaiting = true;
return NULL;

yield_return_4:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_16, sizeof(PyObject *), &tmp_called_value_11, sizeof(PyObject *), &tmp_expression_value_17, sizeof(PyObject *), &tmp_kw_call_arg_value_0_2, sizeof(PyObject *), &tmp_expression_value_18, sizeof(PyObject *), &tmp_kw_call_dict_value_0_2, sizeof(PyObject *), &tmp_kw_call_dict_value_1_2, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 234;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_5;
}
tmp_await_result_3 = yield_return_value;
CHECK_OBJECT(tmp_await_result_3);
Py_DECREF(tmp_await_result_3);
}
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
asyncgen_heap->exception_keeper_lineno_4 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_4 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Preserve existing published exception id 2.
asyncgen_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_4, exception_tb);
    } else if (asyncgen_heap->exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_keeper_name_4);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = module_var_accessor_anthropic$lib$environments$_poller$TRANSIENT_ERRORS(tstate);
if (unlikely(tmp_cmp_expr_right_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_TRANSIENT_ERRORS);
}

if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 239;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_6;
}
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 239;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_6;
}
tmp_condition_result_7 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_9); 
{
    PyObject *old = asyncgen_heap->var_e;
    asyncgen_heap->var_e = tmp_assign_source_9;
    Py_INCREF(asyncgen_heap->var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_20;
int tmp_truth_name_3;
tmp_called_value_12 = module_var_accessor_anthropic$lib$environments$_poller$_is_fatal_4xx(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain__is_fatal_4xx);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 240;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(asyncgen_heap->var_e);
tmp_args_element_value_20 = asyncgen_heap->var_e;
asyncgen->m_frame->m_frame.f_lineno = 240;
tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_20);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 240;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_7);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_call_result_7);

asyncgen_heap->exception_lineno = 240;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_19;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_23;
tmp_expression_value_19 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 241;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_error);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 241;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_args_element_value_21 = mod_consts.const_str_digest_bdadcdf37e5bd6a78ec4b577b22c849f;
CHECK_OBJECT(asyncgen_heap->var_item);
tmp_expression_value_20 = asyncgen_heap->var_item;
tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_id);
if (tmp_args_element_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_13);

asyncgen_heap->exception_lineno = 241;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(asyncgen_heap->var_e);
tmp_args_element_value_23 = asyncgen_heap->var_e;
asyncgen->m_frame->m_frame.f_lineno = 241;
{
    PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 241;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
{
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_called_value_14;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_23;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_3;
PyObject *tmp_await_result_4;
asyncgen->m_frame->m_frame.f_lineno = 242;
tmp_called_value_14 = module_var_accessor_anthropic$lib$environments$_poller$_aforce_stop_quietly(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain__aforce_stop_quietly);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 242;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_work);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 242;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}

tmp_kw_call_arg_value_0_3 = Nuitka_Cell_GET(asyncgen->m_closure[6]);
CHECK_OBJECT(asyncgen_heap->var_item);
tmp_expression_value_23 = asyncgen_heap->var_item;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_id);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 242;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[3]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_1_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_environment_id);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 242;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}

tmp_kw_call_dict_value_0_3 = Nuitka_Cell_GET(asyncgen->m_closure[3]);
if (Nuitka_Cell_GET(asyncgen->m_closure[4]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_1_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 242;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}

tmp_kw_call_dict_value_1_3 = Nuitka_Cell_GET(asyncgen->m_closure[4]);
asyncgen->m_frame->m_frame.f_lineno = 242;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
    tmp_expression_value_22 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_14, args, kw_values, mod_consts.const_tuple_str_plain_environment_id_str_plain_extra_headers_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 242;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_expression_value_21 = ASYNC_AWAIT(tstate, tmp_expression_value_22, await_normal);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 242;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_22, sizeof(PyObject *), &tmp_called_value_14, sizeof(PyObject *), &tmp_kw_call_arg_value_0_3, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_expression_value_23, sizeof(PyObject *), &tmp_kw_call_dict_value_0_3, sizeof(PyObject *), &tmp_kw_call_dict_value_1_3, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 5;
asyncgen->m_yield_from = tmp_expression_value_21;
asyncgen->m_awaiting = true;
return NULL;

yield_return_5:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_22, sizeof(PyObject *), &tmp_called_value_14, sizeof(PyObject *), &tmp_kw_call_arg_value_0_3, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_expression_value_23, sizeof(PyObject *), &tmp_kw_call_dict_value_0_3, sizeof(PyObject *), &tmp_kw_call_dict_value_1_3, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 242;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_await_result_4 = yield_return_value;
CHECK_OBJECT(tmp_await_result_4);
Py_DECREF(tmp_await_result_4);
}
goto try_continue_handler_7;
branch_no_6:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
if (asyncgen_heap->var_ack_attempt == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_ack_attempt);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 244;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}

tmp_iadd_expr_left_2 = asyncgen_heap->var_ack_attempt;
tmp_iadd_expr_right_2 = const_int_pos_1;
asyncgen_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (asyncgen_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 244;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_assign_source_10 = tmp_iadd_expr_left_2;
asyncgen_heap->var_ack_attempt = tmp_assign_source_10;

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_24;
PyObject *tmp_called_value_16;
tmp_called_value_15 = module_var_accessor_anthropic$lib$environments$_poller$_backoff(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain__backoff);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 245;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(asyncgen_heap->var_ack_attempt);
tmp_args_element_value_24 = asyncgen_heap->var_ack_attempt;
asyncgen->m_frame->m_frame.f_lineno = 245;
tmp_add_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_24);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 245;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_called_value_16 = module_var_accessor_anthropic$lib$environments$_poller$_jitter(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain__jitter);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));

Py_DECREF(tmp_add_expr_left_2);

asyncgen_heap->exception_lineno = 245;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
asyncgen->m_frame->m_frame.f_lineno = 245;
tmp_add_expr_right_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_16, mod_consts.const_tuple_float_0_0_float_1_0_tuple);

if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_add_expr_left_2);

asyncgen_heap->exception_lineno = 245;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 245;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = asyncgen_heap->var_wait;
    asyncgen_heap->var_wait = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_24;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_25;
PyObject *tmp_args_element_value_26;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_element_value_27;
PyObject *tmp_args_element_value_28;
PyObject *tmp_args_element_value_29;
tmp_expression_value_24 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 246;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_warning);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 246;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_args_element_value_25 = mod_consts.const_str_digest_da4e8beca35a1ef30e74dfeebb98db1f;
CHECK_OBJECT(asyncgen_heap->var_item);
tmp_expression_value_25 = asyncgen_heap->var_item;
tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_id);
if (tmp_args_element_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_17);

asyncgen_heap->exception_lineno = 247;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(asyncgen_heap->var_ack_attempt);
tmp_args_element_value_27 = asyncgen_heap->var_ack_attempt;
CHECK_OBJECT(asyncgen_heap->var_wait);
tmp_args_element_value_28 = asyncgen_heap->var_wait;
CHECK_OBJECT(asyncgen_heap->var_e);
tmp_args_element_value_29 = asyncgen_heap->var_e;
asyncgen->m_frame->m_frame.f_lineno = 246;
{
    PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29};
    tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_17, call_args);
}

CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 246;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
{
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_30;
PyObject *tmp_await_result_5;
asyncgen->m_frame->m_frame.f_lineno = 249;
tmp_called_instance_4 = module_var_accessor_anthropic$lib$environments$_poller$anyio(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_anyio);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 249;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(asyncgen_heap->var_wait);
tmp_args_element_value_30 = asyncgen_heap->var_wait;
asyncgen->m_frame->m_frame.f_lineno = 249;
tmp_expression_value_27 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_sleep, tmp_args_element_value_30);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 249;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_expression_value_26 = ASYNC_AWAIT(tstate, tmp_expression_value_27, await_normal);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 249;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_27, sizeof(PyObject *), &tmp_called_instance_4, sizeof(PyObject *), &tmp_args_element_value_30, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 6;
asyncgen->m_yield_from = tmp_expression_value_26;
asyncgen->m_awaiting = true;
return NULL;

yield_return_6:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_27, sizeof(PyObject *), &tmp_called_instance_4, sizeof(PyObject *), &tmp_args_element_value_30, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 249;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_7;
}
tmp_await_result_5 = yield_return_value;
CHECK_OBJECT(tmp_await_result_5);
Py_DECREF(tmp_await_result_5);
}
goto try_continue_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_7:;
asyncgen_heap->exception_keeper_lineno_5 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_5 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_e);
asyncgen_heap->var_e = NULL;

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_5;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_5;

goto try_except_handler_6;
// try continue handler code:
try_continue_handler_7:;
Py_XDECREF(asyncgen_heap->var_e);
asyncgen_heap->var_e = NULL;

goto try_continue_handler_6;
// End of try:
goto branch_end_5;
branch_no_5:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 233;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccccccccooooo";
goto try_except_handler_6;
branch_end_5:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
asyncgen_heap->exception_keeper_lineno_6 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_6 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_2);

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_6;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_6;

goto frame_exception_exit_1;
// try continue handler code:
try_continue_handler_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_2);

goto loop_start_1;
// End of try:
// End of try:
try_end_2:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = const_int_0;
{
    PyObject *old = asyncgen_heap->var_ack_attempt;
    asyncgen_heap->var_ack_attempt = tmp_assign_source_12;
    Py_INCREF(asyncgen_heap->var_ack_attempt);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_1;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_auto_stop);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 252;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
asyncgen_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 252;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (asyncgen_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_expression_value_28;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(asyncgen_heap->var_item);
tmp_expression_value_28 = asyncgen_heap->var_item;
Py_INCREF(tmp_expression_value_28);
asyncgen->m_yield_return_index = 7;
return tmp_expression_value_28;
yield_return_7:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 253;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto loop_start_1;
branch_no_7:;
// Tried code:
{
PyObject *tmp_expression_value_29;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
CHECK_OBJECT(asyncgen_heap->var_item);
tmp_expression_value_29 = asyncgen_heap->var_item;
Py_INCREF(tmp_expression_value_29);
asyncgen->m_yield_return_index = 8;
return tmp_expression_value_29;
yield_return_8:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 256;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_8;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
goto try_end_3;
// Exception handler code:
try_except_handler_8:;
asyncgen_heap->exception_keeper_lineno_7 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_7 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Preserve existing published exception id 4.
asyncgen_heap->exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_7);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_7, exception_tb);
    } else if (asyncgen_heap->exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_keeper_name_7);
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_32;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_expression_value_33;
PyObject *tmp_kw_call_dict_value_0_4;
PyObject *tmp_kw_call_dict_value_1_4;
PyObject *tmp_await_result_6;
asyncgen->m_frame->m_frame.f_lineno = 259;
if (Nuitka_Cell_GET(asyncgen->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_work);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 259;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_10;
}

tmp_expression_value_32 = Nuitka_Cell_GET(asyncgen->m_closure[6]);
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_stop);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 259;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(asyncgen_heap->var_item);
tmp_expression_value_33 = asyncgen_heap->var_item;
tmp_kw_call_arg_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_id);
if (tmp_kw_call_arg_value_0_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_18);

asyncgen_heap->exception_lineno = 260;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_10;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_kw_call_arg_value_0_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_environment_id);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 261;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_10;
}

tmp_kw_call_dict_value_0_4 = Nuitka_Cell_GET(asyncgen->m_closure[3]);
if (Nuitka_Cell_GET(asyncgen->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_kw_call_arg_value_0_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 262;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_10;
}

tmp_kw_call_dict_value_1_4 = Nuitka_Cell_GET(asyncgen->m_closure[4]);
asyncgen->m_frame->m_frame.f_lineno = 259;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_4};
    tmp_expression_value_31 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_18, args, kw_values, mod_consts.const_tuple_str_plain_environment_id_str_plain_extra_headers_tuple);
}

CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_kw_call_arg_value_0_4);
Py_DECREF(tmp_kw_call_arg_value_0_4);
if (tmp_expression_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 259;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_10;
}
tmp_expression_value_30 = ASYNC_AWAIT(tstate, tmp_expression_value_31, await_normal);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 259;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_10;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_31, sizeof(PyObject *), &tmp_called_value_18, sizeof(PyObject *), &tmp_expression_value_32, sizeof(PyObject *), &tmp_kw_call_arg_value_0_4, sizeof(PyObject *), &tmp_expression_value_33, sizeof(PyObject *), &tmp_kw_call_dict_value_0_4, sizeof(PyObject *), &tmp_kw_call_dict_value_1_4, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 9;
asyncgen->m_yield_from = tmp_expression_value_30;
asyncgen->m_awaiting = true;
return NULL;

yield_return_9:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_31, sizeof(PyObject *), &tmp_called_value_18, sizeof(PyObject *), &tmp_expression_value_32, sizeof(PyObject *), &tmp_kw_call_arg_value_0_4, sizeof(PyObject *), &tmp_expression_value_33, sizeof(PyObject *), &tmp_kw_call_dict_value_0_4, sizeof(PyObject *), &tmp_kw_call_dict_value_1_4, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 259;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_10;
}
tmp_await_result_6 = yield_return_value;
CHECK_OBJECT(tmp_await_result_6);
Py_DECREF(tmp_await_result_6);
}
goto try_end_4;
// Exception handler code:
try_except_handler_10:;
asyncgen_heap->exception_keeper_lineno_8 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_8 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Preserve existing published exception id 3.
asyncgen_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_8);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_8, exception_tb);
    } else if (asyncgen_heap->exception_keeper_lineno_8 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_8, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_keeper_name_8);
// Tried code:
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_Exception;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_10 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_13); 
{
    PyObject *old = asyncgen_heap->var_e;
    asyncgen_heap->var_e = tmp_assign_source_13;
    Py_INCREF(asyncgen_heap->var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_31;
PyObject *tmp_args_element_value_32;
tmp_called_value_19 = module_var_accessor_anthropic$lib$environments$_poller$_is_status(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain__is_status);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 265;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(asyncgen_heap->var_e);
tmp_args_element_value_31 = asyncgen_heap->var_e;
tmp_args_element_value_32 = mod_consts.const_int_pos_409;
asyncgen->m_frame->m_frame.f_lineno = 265;
{
    PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 265;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_12;
}
asyncgen_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 265;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_12;
}
tmp_condition_result_11 = (asyncgen_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_34;
PyObject *tmp_call_result_10;
PyObject *tmp_args_element_value_33;
PyObject *tmp_args_element_value_34;
PyObject *tmp_expression_value_35;
PyObject *tmp_args_element_value_35;
tmp_expression_value_34 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 266;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_12;
}
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_warning);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 266;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_12;
}
tmp_args_element_value_33 = mod_consts.const_str_digest_348647dac54e46ba9ef312d4c8bfeecf;
CHECK_OBJECT(asyncgen_heap->var_item);
tmp_expression_value_35 = asyncgen_heap->var_item;
tmp_args_element_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_id);
if (tmp_args_element_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_20);

asyncgen_heap->exception_lineno = 266;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(asyncgen_heap->var_e);
tmp_args_element_value_35 = asyncgen_heap->var_e;
asyncgen->m_frame->m_frame.f_lineno = 266;
{
    PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35};
    tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_20, call_args);
}

CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_34);
Py_DECREF(tmp_args_element_value_34);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 266;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
branch_no_9:;
goto try_end_5;
// Exception handler code:
try_except_handler_12:;
asyncgen_heap->exception_keeper_lineno_9 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_9 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_e);
asyncgen_heap->var_e = NULL;

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_9;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_9;

goto try_except_handler_11;
// End of try:
try_end_5:;
Py_XDECREF(asyncgen_heap->var_e);
asyncgen_heap->var_e = NULL;

goto branch_end_8;
branch_no_8:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 258;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccccccccooooo";
goto try_except_handler_11;
branch_end_8:;
goto try_end_6;
// Exception handler code:
try_except_handler_11:;
asyncgen_heap->exception_keeper_lineno_10 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_10 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_3);

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_10;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_10;

goto try_except_handler_9;
// End of try:
try_end_6:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_3);

goto try_end_4;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_4:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 255;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccccccccooooo";
goto try_except_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_9:;
asyncgen_heap->exception_keeper_lineno_11 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_11 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_4);

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_11;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_3:;
// Tried code:
{
PyObject *tmp_expression_value_36;
PyObject *tmp_expression_value_37;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_38;
PyObject *tmp_kw_call_arg_value_0_5;
PyObject *tmp_expression_value_39;
PyObject *tmp_kw_call_dict_value_0_5;
PyObject *tmp_kw_call_dict_value_1_5;
PyObject *tmp_await_result_7;
asyncgen->m_frame->m_frame.f_lineno = 259;
if (Nuitka_Cell_GET(asyncgen->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_work);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 259;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_13;
}

tmp_expression_value_38 = Nuitka_Cell_GET(asyncgen->m_closure[6]);
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_stop);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 259;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(asyncgen_heap->var_item);
tmp_expression_value_39 = asyncgen_heap->var_item;
tmp_kw_call_arg_value_0_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_id);
if (tmp_kw_call_arg_value_0_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_21);

asyncgen_heap->exception_lineno = 260;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_13;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_21);
Py_DECREF(tmp_kw_call_arg_value_0_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_environment_id);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 261;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_13;
}

tmp_kw_call_dict_value_0_5 = Nuitka_Cell_GET(asyncgen->m_closure[3]);
if (Nuitka_Cell_GET(asyncgen->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_21);
Py_DECREF(tmp_kw_call_arg_value_0_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 262;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_13;
}

tmp_kw_call_dict_value_1_5 = Nuitka_Cell_GET(asyncgen->m_closure[4]);
asyncgen->m_frame->m_frame.f_lineno = 259;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_5};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_5};
    tmp_expression_value_37 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_21, args, kw_values, mod_consts.const_tuple_str_plain_environment_id_str_plain_extra_headers_tuple);
}

CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_kw_call_arg_value_0_5);
Py_DECREF(tmp_kw_call_arg_value_0_5);
if (tmp_expression_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 259;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_13;
}
tmp_expression_value_36 = ASYNC_AWAIT(tstate, tmp_expression_value_37, await_normal);
CHECK_OBJECT(tmp_expression_value_37);
Py_DECREF(tmp_expression_value_37);
if (tmp_expression_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 259;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_13;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_37, sizeof(PyObject *), &tmp_called_value_21, sizeof(PyObject *), &tmp_expression_value_38, sizeof(PyObject *), &tmp_kw_call_arg_value_0_5, sizeof(PyObject *), &tmp_expression_value_39, sizeof(PyObject *), &tmp_kw_call_dict_value_0_5, sizeof(PyObject *), &tmp_kw_call_dict_value_1_5, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 10;
asyncgen->m_yield_from = tmp_expression_value_36;
asyncgen->m_awaiting = true;
return NULL;

yield_return_10:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_37, sizeof(PyObject *), &tmp_called_value_21, sizeof(PyObject *), &tmp_expression_value_38, sizeof(PyObject *), &tmp_kw_call_arg_value_0_5, sizeof(PyObject *), &tmp_expression_value_39, sizeof(PyObject *), &tmp_kw_call_dict_value_0_5, sizeof(PyObject *), &tmp_kw_call_dict_value_1_5, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 259;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_13;
}
tmp_await_result_7 = yield_return_value;
CHECK_OBJECT(tmp_await_result_7);
Py_DECREF(tmp_await_result_7);
}
goto try_end_7;
// Exception handler code:
try_except_handler_13:;
asyncgen_heap->exception_keeper_lineno_12 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_12 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Preserve existing published exception id 3.
asyncgen_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_12);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_12);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_12, exception_tb);
    } else if (asyncgen_heap->exception_keeper_lineno_12 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_12);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_12, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_keeper_name_12);
// Tried code:
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
tmp_cmp_expr_left_7 = EXC_TYPE(tstate);
tmp_cmp_expr_right_7 = PyExc_Exception;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_12 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_14); 
{
    PyObject *old = asyncgen_heap->var_e;
    asyncgen_heap->var_e = tmp_assign_source_14;
    Py_INCREF(asyncgen_heap->var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
bool tmp_condition_result_13;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_36;
PyObject *tmp_args_element_value_37;
tmp_called_value_22 = module_var_accessor_anthropic$lib$environments$_poller$_is_status(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain__is_status);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 265;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(asyncgen_heap->var_e);
tmp_args_element_value_36 = asyncgen_heap->var_e;
tmp_args_element_value_37 = mod_consts.const_int_pos_409;
asyncgen->m_frame->m_frame.f_lineno = 265;
{
    PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_22, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 265;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_15;
}
asyncgen_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 265;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_15;
}
tmp_condition_result_13 = (asyncgen_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_40;
PyObject *tmp_call_result_11;
PyObject *tmp_args_element_value_38;
PyObject *tmp_args_element_value_39;
PyObject *tmp_expression_value_41;
PyObject *tmp_args_element_value_40;
tmp_expression_value_40 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_expression_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 266;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_15;
}
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_warning);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 266;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_15;
}
tmp_args_element_value_38 = mod_consts.const_str_digest_348647dac54e46ba9ef312d4c8bfeecf;
CHECK_OBJECT(asyncgen_heap->var_item);
tmp_expression_value_41 = asyncgen_heap->var_item;
tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_id);
if (tmp_args_element_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_23);

asyncgen_heap->exception_lineno = 266;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(asyncgen_heap->var_e);
tmp_args_element_value_40 = asyncgen_heap->var_e;
asyncgen->m_frame->m_frame.f_lineno = 266;
{
    PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40};
    tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_23, call_args);
}

CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_39);
Py_DECREF(tmp_args_element_value_39);
if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 266;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
branch_no_11:;
goto try_end_8;
// Exception handler code:
try_except_handler_15:;
asyncgen_heap->exception_keeper_lineno_13 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_13 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_e);
asyncgen_heap->var_e = NULL;

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_13;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
try_end_8:;
Py_XDECREF(asyncgen_heap->var_e);
asyncgen_heap->var_e = NULL;

goto branch_end_10;
branch_no_10:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 258;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccccccccooooo";
goto try_except_handler_14;
branch_end_10:;
goto try_end_9;
// Exception handler code:
try_except_handler_14:;
asyncgen_heap->exception_keeper_lineno_14 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_14 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_3);

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_14;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_3);

goto try_end_7;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_7:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 207;
asyncgen_heap->type_description_1 = "ccccccccooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;

// Release exception attached to the frame
DROP_ASYNCGEN_EXCEPTION(asyncgen);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(asyncgen));
#endif
Py_CLEAR(EXC_VALUE_F(asyncgen));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(asyncgen));
#endif
#endif

goto try_return_handler_1;

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
    asyncgen->m_closure[6],
    asyncgen->m_closure[3],
    asyncgen->m_closure[7],
    asyncgen->m_closure[1],
    asyncgen->m_closure[5],
    asyncgen->m_closure[2],
    asyncgen->m_closure[0],
    asyncgen->m_closure[4],
    asyncgen_heap->var_poll_attempt,
    asyncgen_heap->var_ack_attempt,
    asyncgen_heap->var_item,
    asyncgen_heap->var_e,
    asyncgen_heap->var_wait
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
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(asyncgen_heap->var_poll_attempt);
CHECK_OBJECT(asyncgen_heap->var_poll_attempt);
Py_DECREF(asyncgen_heap->var_poll_attempt);
asyncgen_heap->var_poll_attempt = NULL;
Py_XDECREF(asyncgen_heap->var_ack_attempt);
asyncgen_heap->var_ack_attempt = NULL;
CHECK_OBJECT(asyncgen_heap->var_item);
CHECK_OBJECT(asyncgen_heap->var_item);
Py_DECREF(asyncgen_heap->var_item);
asyncgen_heap->var_item = NULL;
Py_XDECREF(asyncgen_heap->var_e);
asyncgen_heap->var_e = NULL;
Py_XDECREF(asyncgen_heap->var_wait);
asyncgen_heap->var_wait = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
asyncgen_heap->exception_keeper_lineno_15 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_15 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_poll_attempt);
asyncgen_heap->var_poll_attempt = NULL;
Py_XDECREF(asyncgen_heap->var_ack_attempt);
asyncgen_heap->var_ack_attempt = NULL;
Py_XDECREF(asyncgen_heap->var_item);
asyncgen_heap->var_item = NULL;
Py_XDECREF(asyncgen_heap->var_e);
asyncgen_heap->var_e = NULL;
Py_XDECREF(asyncgen_heap->var_wait);
asyncgen_heap->var_wait = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_15;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_15;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("return must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&asyncgen_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
    return NULL;
    function_return_exit:;

    return NULL;

}

static PyObject *MAKE_ASYNCGEN_anthropic$lib$environments$_poller$$$function__8_aiter_work$$$asyncgen__1_aiter_work(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        anthropic$lib$environments$_poller$$$function__8_aiter_work$$$asyncgen__1_aiter_work_context,
        module_anthropic$lib$environments$_poller,
        mod_consts.const_str_plain_aiter_work,
        NULL,
        code_objects_267d1a935424d5aac9e7d49aa8f80ca0,
        closure,
        8,
#if 1
        sizeof(struct anthropic$lib$environments$_poller$$$function__8_aiter_work$$$asyncgen__1_aiter_work_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anthropic$lib$environments$_poller$$$function__9__aforce_stop_quietly(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_work = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_work_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_environment_id = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_extra_headers = Nuitka_Cell_New1(python_pars[3]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_closure_1[0] = par_environment_id;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_extra_headers;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_work;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_work_id;
Py_INCREF(tmp_closure_1[3]);
tmp_return_value = MAKE_COROUTINE_anthropic$lib$environments$_poller$$$function__9__aforce_stop_quietly$$$coroutine__1__aforce_stop_quietly(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_work);
CHECK_OBJECT(par_work);
Py_DECREF(par_work);
par_work = NULL;
CHECK_OBJECT(par_work_id);
CHECK_OBJECT(par_work_id);
Py_DECREF(par_work_id);
par_work_id = NULL;
CHECK_OBJECT(par_environment_id);
CHECK_OBJECT(par_environment_id);
Py_DECREF(par_environment_id);
par_environment_id = NULL;
CHECK_OBJECT(par_extra_headers);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
par_extra_headers = NULL;
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
struct anthropic$lib$environments$_poller$$$function__9__aforce_stop_quietly$$$coroutine__1__aforce_stop_quietly_locals {
PyObject *var_e;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
PyObject *tmp_return_value;
};
#endif

static PyObject *anthropic$lib$environments$_poller$$$function__9__aforce_stop_quietly$$$coroutine__1__aforce_stop_quietly_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$lib$environments$_poller$$$function__9__aforce_stop_quietly$$$coroutine__1__aforce_stop_quietly_locals *coroutine_heap = (struct anthropic$lib$environments$_poller$$$function__9__aforce_stop_quietly$$$coroutine__1__aforce_stop_quietly_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_e = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_ff1aaf4c29c5c6712b76946308c08e96, module_anthropic$lib$environments$_poller, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 274;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_work);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 274;
coroutine_heap->type_description_1 = "cccco";
    goto try_except_handler_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_stop);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 274;
coroutine_heap->type_description_1 = "cccco";
    goto try_except_handler_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_work_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 274;
coroutine_heap->type_description_1 = "cccco";
    goto try_except_handler_1;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_environment_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 274;
coroutine_heap->type_description_1 = "cccco";
    goto try_except_handler_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_kw_call_dict_value_1_1 = Py_True;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 274;
coroutine_heap->type_description_1 = "cccco";
    goto try_except_handler_1;
}

tmp_kw_call_dict_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 274;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_800af3ec308551da1cd346072514538c_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 274;
coroutine_heap->type_description_1 = "cccco";
    goto try_except_handler_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 274;
coroutine_heap->type_description_1 = "cccco";
    goto try_except_handler_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 274;
coroutine_heap->type_description_1 = "cccco";
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_Exception;
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
tmp_assign_source_1 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_1); 
assert(coroutine_heap->var_e == NULL);
Py_INCREF(tmp_assign_source_1);
coroutine_heap->var_e = tmp_assign_source_1;
}
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_anthropic$lib$environments$_poller$_is_status(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__is_status);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 276;
coroutine_heap->type_description_1 = "cccco";
    goto try_except_handler_3;
}
CHECK_OBJECT(coroutine_heap->var_e);
tmp_args_element_value_1 = coroutine_heap->var_e;
tmp_args_element_value_2 = mod_consts.const_int_pos_409;
coroutine->m_frame->m_frame.f_lineno = 276;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 276;
coroutine_heap->type_description_1 = "cccco";
    goto try_except_handler_3;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 276;
coroutine_heap->type_description_1 = "cccco";
    goto try_except_handler_3;
}
tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_4 = module_var_accessor_anthropic$lib$environments$_poller$log(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 277;
coroutine_heap->type_description_1 = "cccco";
    goto try_except_handler_3;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_error);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 277;
coroutine_heap->type_description_1 = "cccco";
    goto try_except_handler_3;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_37cb3f56eedd443f41ace84b0d038f14;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_work_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 277;
coroutine_heap->type_description_1 = "cccco";
    goto try_except_handler_3;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine->m_closure[3]);
CHECK_OBJECT(coroutine_heap->var_e);
tmp_args_element_value_5 = coroutine_heap->var_e;
coroutine->m_frame->m_frame.f_lineno = 277;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 277;
coroutine_heap->type_description_1 = "cccco";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_e);
coroutine_heap->var_e = NULL;

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
Py_XDECREF(coroutine_heap->var_e);
coroutine_heap->var_e = NULL;

goto branch_end_1;
branch_no_1:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 273;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccco";
goto try_except_handler_2;
branch_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;

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
    coroutine->m_closure[3],
    coroutine->m_closure[0],
    coroutine->m_closure[1],
    coroutine_heap->var_e
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

static PyObject *MAKE_COROUTINE_anthropic$lib$environments$_poller$$$function__9__aforce_stop_quietly$$$coroutine__1__aforce_stop_quietly(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anthropic$lib$environments$_poller$$$function__9__aforce_stop_quietly$$$coroutine__1__aforce_stop_quietly_context,
        module_anthropic$lib$environments$_poller,
        mod_consts.const_str_plain__aforce_stop_quietly,
        NULL,
        code_objects_ff1aaf4c29c5c6712b76946308c08e96,
        closure,
        4,
#if 1
        sizeof(struct anthropic$lib$environments$_poller$$$function__9__aforce_stop_quietly$$$coroutine__1__aforce_stop_quietly_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__1__backoff(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$environments$_poller$$$function__1__backoff,
        mod_consts.const_str_plain__backoff,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8ff1fa81db7d14b180190e9e6b4890ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$environments$_poller,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__2__jitter(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$environments$_poller$$$function__2__jitter,
        mod_consts.const_str_plain__jitter,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_361f2b3858ec886374c57443e1c7eab8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$environments$_poller,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx,
        mod_consts.const_str_plain__is_fatal_4xx,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_942dc93fd41e366809e5cb67dde02289,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$environments$_poller,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__4__is_status(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$environments$_poller$$$function__4__is_status,
        mod_consts.const_str_plain__is_status,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d8e4485a237d60458360627dd1c75729,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$environments$_poller,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__5__default_worker_id(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$environments$_poller$$$function__5__default_worker_id,
        mod_consts.const_str_plain__default_worker_id,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_025af18136ef2f5ea70d0bb5da2be14e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$environments$_poller,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__6_iter_work(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$environments$_poller$$$function__6_iter_work,
        mod_consts.const_str_plain_iter_work,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_be45d03d37594ea3ca61add07b04e661,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$lib$environments$_poller,
        mod_consts.const_str_digest_91a38e5f35b6409777e31e31d60940ef,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly,
        mod_consts.const_str_plain__force_stop_quietly,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bccba812566de29b4dcb8e9629dd34ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$lib$environments$_poller,
        mod_consts.const_str_digest_02ab0601cfdde1dfb5053a62b973cca5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__8_aiter_work(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$environments$_poller$$$function__8_aiter_work,
        mod_consts.const_str_plain_aiter_work,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_267d1a935424d5aac9e7d49aa8f80ca0,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$lib$environments$_poller,
        mod_consts.const_str_digest_84e4b01cf738072e5d67516f9a2a829f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__9__aforce_stop_quietly(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$environments$_poller$$$function__9__aforce_stop_quietly,
        mod_consts.const_str_plain__aforce_stop_quietly,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ff1aaf4c29c5c6712b76946308c08e96,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$lib$environments$_poller,
        mod_consts.const_str_digest_85fe616fcd0a59820ac33de2cf8f1757,
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

static function_impl_code const function_table_anthropic$lib$environments$_poller[] = {
impl_anthropic$lib$environments$_poller$$$function__1__backoff,
impl_anthropic$lib$environments$_poller$$$function__2__jitter,
impl_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx,
impl_anthropic$lib$environments$_poller$$$function__4__is_status,
impl_anthropic$lib$environments$_poller$$$function__5__default_worker_id,
impl_anthropic$lib$environments$_poller$$$function__6_iter_work,
impl_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly,
impl_anthropic$lib$environments$_poller$$$function__8_aiter_work,
impl_anthropic$lib$environments$_poller$$$function__9__aforce_stop_quietly,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$lib$environments$_poller);
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
        module_anthropic$lib$environments$_poller,
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
        function_table_anthropic$lib$environments$_poller,
        sizeof(function_table_anthropic$lib$environments$_poller) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.lib.environments._poller";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$lib$environments$_poller(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$lib$environments$_poller");

    // Store the module for future use.
    module_anthropic$lib$environments$_poller = module;

    moduledict_anthropic$lib$environments$_poller = MODULE_DICT(module_anthropic$lib$environments$_poller);

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
        PRINT_STRING("anthropic$lib$environments$_poller: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$lib$environments$_poller: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$lib$environments$_poller: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.lib.environments._poller" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$lib$environments$_poller\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$lib$environments$_poller,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$lib$environments$_poller,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$lib$environments$_poller,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$lib$environments$_poller,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$lib$environments$_poller,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$lib$environments$_poller);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$lib$environments$_poller);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$environments$_poller;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$lib$environments$_poller = MAKE_MODULE_FRAME(code_objects_8a4766f85cd22c6c9d0e93c11af507e2, module_anthropic$lib$environments$_poller);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$environments$_poller);
assert(Py_REFCNT(frame_frame_anthropic$lib$environments$_poller) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$lib$environments$_poller$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$lib$environments$_poller$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_time;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$lib$environments$_poller;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$lib$environments$_poller->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_time, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_socket;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$lib$environments$_poller;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_anthropic$lib$environments$_poller->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_socket, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anthropic$lib$environments$_poller;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_anthropic$lib$environments$_poller->m_frame.f_lineno = 5;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_uuid;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anthropic$lib$environments$_poller;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_uuid4_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_anthropic$lib$environments$_poller->m_frame.f_lineno = 6;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$lib$environments$_poller,
        mod_consts.const_str_plain_uuid4,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_uuid4);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_uuid4, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anthropic$lib$environments$_poller;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Iterator_str_plain_AsyncIterator_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_anthropic$lib$environments$_poller->m_frame.f_lineno = 7;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anthropic$lib$environments$_poller,
        mod_consts.const_str_plain_Iterator,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Iterator);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anthropic$lib$environments$_poller,
        mod_consts.const_str_plain_AsyncIterator,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_AsyncIterator);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterator, tmp_assign_source_11);
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
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_anyio;
tmp_globals_arg_value_6 = (PyObject *)moduledict_anthropic$lib$environments$_poller;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = Py_None;
tmp_level_value_6 = const_int_0;
frame_frame_anthropic$lib$environments$_poller->m_frame.f_lineno = 9;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_anyio, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__retry;
tmp_globals_arg_value_7 = (PyObject *)moduledict_anthropic$lib$environments$_poller;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_9354c4f60dba4156ebdb476f262811df_tuple;
tmp_level_value_7 = mod_consts.const_int_pos_2;
frame_frame_anthropic$lib$environments$_poller->m_frame.f_lineno = 11;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_anthropic$lib$environments$_poller,
        mod_consts.const_str_plain_TRANSIENT_ERRORS,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_TRANSIENT_ERRORS);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSIENT_ERRORS, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anthropic$lib$environments$_poller,
        mod_consts.const_str_plain_jitter,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_jitter);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_jitter, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_anthropic$lib$environments$_poller,
        mod_consts.const_str_plain_backoff,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_backoff);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_backoff, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_anthropic$lib$environments$_poller,
        mod_consts.const_str_plain_is_fatal_status_error,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_is_fatal_status_error);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_is_fatal_status_error, tmp_assign_source_17);
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
PyObject *tmp_assign_source_18;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_8 = (PyObject *)moduledict_anthropic$lib$environments$_poller;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_Headers_str_plain_omit_tuple;
tmp_level_value_8 = mod_consts.const_int_pos_3;
frame_frame_anthropic$lib$environments$_poller->m_frame.f_lineno = 12;
tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_8 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_anthropic$lib$environments$_poller,
        mod_consts.const_str_plain_Headers,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Headers);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_Headers, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_anthropic$lib$environments$_poller,
        mod_consts.const_str_plain_omit,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_omit);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_omit, tmp_assign_source_20);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__exceptions;
tmp_globals_arg_value_9 = (PyObject *)moduledict_anthropic$lib$environments$_poller;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_APIStatusError_tuple;
tmp_level_value_9 = mod_consts.const_int_pos_3;
frame_frame_anthropic$lib$environments$_poller->m_frame.f_lineno = 13;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_anthropic$lib$environments$_poller,
        mod_consts.const_str_plain_APIStatusError,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_APIStatusError);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_APIStatusError, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_a2dee852a2f51ede75ba9d6c1334039a;
tmp_globals_arg_value_10 = (PyObject *)moduledict_anthropic$lib$environments$_poller;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_BetaSelfHostedWork_tuple;
tmp_level_value_10 = mod_consts.const_int_pos_3;
frame_frame_anthropic$lib$environments$_poller->m_frame.f_lineno = 14;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_anthropic$lib$environments$_poller,
        mod_consts.const_str_plain_BetaSelfHostedWork,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_BetaSelfHostedWork);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaSelfHostedWork, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_ce27a5962fad4c154fc9af52cba5bc7f;
tmp_globals_arg_value_11 = (PyObject *)moduledict_anthropic$lib$environments$_poller;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_Work_str_plain_AsyncWork_tuple;
tmp_level_value_11 = mod_consts.const_int_pos_3;
frame_frame_anthropic$lib$environments$_poller->m_frame.f_lineno = 15;
tmp_assign_source_23 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_23;
}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_12 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_anthropic$lib$environments$_poller,
        mod_consts.const_str_plain_Work,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_Work);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_Work, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_13 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_anthropic$lib$environments$_poller,
        mod_consts.const_str_plain_AsyncWork,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_AsyncWork);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncWork, tmp_assign_source_25);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_LIST3(tstate, mod_consts.const_str_plain_iter_work,mod_consts.const_str_plain_aiter_work,mod_consts.const_str_plain_POLL_BLOCK_MS);
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = mod_consts.const_int_pos_999;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_POLL_BLOCK_MS, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = mod_consts.const_float_60_0;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__POLL_BACKOFF_CAP, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_anthropic$lib$environments$_poller$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$environments$_poller->m_frame.f_lineno = 27;
tmp_assign_source_29 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_e43a9cd66777804b3ba32dfc6719ef1c_tuple, 0)
);

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_log, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_8afce5a4507f85915de83cb40c440833);

tmp_assign_source_30 = MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__1__backoff(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__backoff, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_5035bb294b98ee030d52ded7e01da760);

tmp_assign_source_31 = MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__2__jitter(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__jitter, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e);

tmp_assign_source_32 = MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__3__is_fatal_4xx(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__is_fatal_4xx, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_f77b968e105fa4c33f4b915591f8b02d);

tmp_assign_source_33 = MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__4__is_status(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__is_status, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_assign_source_34 = MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__5__default_worker_id(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__default_worker_id, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_annotations_6;
tmp_dict_key_1 = mod_consts.const_str_plain_worker_id;
tmp_dict_value_1 = Py_None;
tmp_kw_defaults_1 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_block_ms;
tmp_dict_value_1 = module_var_accessor_anthropic$lib$environments$_poller$POLL_BLOCK_MS(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_POLL_BLOCK_MS);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_reclaim_older_than_ms;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_drain;
tmp_dict_value_1 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_auto_stop;
tmp_dict_value_1 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_kw_defaults_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_440135648353bd5f61e0bd463da19e1b);

tmp_assign_source_35 = MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__6_iter_work(tstate, tmp_kw_defaults_1, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_iter_work, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_7;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_8a4f87827e19ac07d540ff86fcec5e60);
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_6f04cb4c5c16da44ffd9af5602228143);

tmp_assign_source_36 = MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__7__force_stop_quietly(tstate, tmp_kw_defaults_2, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__force_stop_quietly, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_kw_defaults_3;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_annotations_8;
tmp_dict_key_2 = mod_consts.const_str_plain_worker_id;
tmp_dict_value_2 = Py_None;
tmp_kw_defaults_3 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_block_ms;
tmp_dict_value_2 = module_var_accessor_anthropic$lib$environments$_poller$POLL_BLOCK_MS(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_POLL_BLOCK_MS);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_reclaim_older_than_ms;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_drain;
tmp_dict_value_2 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_auto_stop;
tmp_dict_value_2 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_kw_defaults_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_e85ae174f6835a9994bb11e6a489022c);

tmp_assign_source_37 = MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__8_aiter_work(tstate, tmp_kw_defaults_3, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain_aiter_work, tmp_assign_source_37);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$environments$_poller, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$environments$_poller->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$environments$_poller, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$lib$environments$_poller);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_kw_defaults_4;
PyObject *tmp_annotations_9;
tmp_kw_defaults_4 = DICT_COPY(tstate, mod_consts.const_dict_8a4f87827e19ac07d540ff86fcec5e60);
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_33b55b4daedbbc5eaf939dfb891142f0);

tmp_assign_source_38 = MAKE_FUNCTION_anthropic$lib$environments$_poller$$$function__9__aforce_stop_quietly(tstate, tmp_kw_defaults_4, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)mod_consts.const_str_plain__aforce_stop_quietly, tmp_assign_source_38);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$lib$environments$_poller", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.lib.environments._poller" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$lib$environments$_poller);
    return module_anthropic$lib$environments$_poller;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_poller, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$lib$environments$_poller", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

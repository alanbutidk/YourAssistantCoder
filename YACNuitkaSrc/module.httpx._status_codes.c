/* Generated code for Python module 'httpx$_status_codes'
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



/* The "module_httpx$_status_codes" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpx$_status_codes;
PyDictObject *moduledict_httpx$_status_codes;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain___new__;
PyObject *const_str_plain__value_;
PyObject *const_str_plain_phrase;
PyObject *const_str_plain_value;
PyObject *const_str_plain_codes;
PyObject *const_int_pos_100;
PyObject *const_int_pos_199;
PyObject *const_str_digest_a1f384549781bbee7a505f6c392b7842;
PyObject *const_int_pos_200;
PyObject *const_int_pos_299;
PyObject *const_str_digest_66c9fffd0c6f9aa2e4bde09ed09471be;
PyObject *const_int_pos_300;
PyObject *const_int_pos_399;
PyObject *const_str_digest_ac78374751ed6e995628682e9f06ef28;
PyObject *const_int_pos_400;
PyObject *const_int_pos_499;
PyObject *const_str_digest_4e74171d9d1f4ed8e31d6a9a067b5720;
PyObject *const_int_pos_500;
PyObject *const_int_pos_599;
PyObject *const_str_digest_ce4ae8ea6de1fdba6a96c7c905fa5587;
PyObject *const_str_digest_34a0b4be859d83924229da7c86f2ee79;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_enum;
PyObject *const_tuple_str_plain_IntEnum_tuple;
PyObject *const_str_plain_IntEnum;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_a578fdd7d8d21d5019c58e40447c8925;
PyObject *const_str_digest_438825f567d17a792be3250f13e446c4;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_8;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_str_empty_tuple;
PyObject *const_dict_e5d99d927889862ead4371af45c03280;
PyObject *const_str_digest_3f2d1f97eb76d4cdc5762e9f6b1e6d77;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain___str__;
PyObject *const_str_digest_df19ea293828c49f2bc9747ca20a0309;
PyObject *const_dict_0749acbf241160937c1f21eef0cad2b7;
PyObject *const_str_plain_get_reason_phrase;
PyObject *const_str_digest_296b9249f6d59afae3f4b4e6a45e811e;
PyObject *const_dict_337391d960a753f94d657433a6e98b93;
PyObject *const_str_plain_is_informational;
PyObject *const_str_digest_654fa4aa457f72f488e156f15af98ec7;
PyObject *const_str_plain_is_success;
PyObject *const_str_digest_11fa3bc38f95ececae1495f05a0ede58;
PyObject *const_str_plain_is_redirect;
PyObject *const_str_digest_20f550327f89639f8966f8f1b5210e98;
PyObject *const_str_plain_is_client_error;
PyObject *const_str_digest_23b2181c8d864205a462c6b7a3ed4cf7;
PyObject *const_str_plain_is_server_error;
PyObject *const_str_digest_6a3a08cbfdaeeeb0a176b4ec3d1bb1ab;
PyObject *const_str_plain_is_error;
PyObject *const_str_digest_24c7ff1de28c70d5a4fde895fe63b268;
PyObject *const_tuple_int_pos_100_str_plain_Continue_tuple;
PyObject *const_str_plain_CONTINUE;
PyObject *const_tuple_int_pos_101_str_digest_bc5282b34aa0c68d35abe61079030079_tuple;
PyObject *const_str_plain_SWITCHING_PROTOCOLS;
PyObject *const_tuple_int_pos_102_str_plain_Processing_tuple;
PyObject *const_str_plain_PROCESSING;
PyObject *const_tuple_int_pos_103_str_digest_956912a40a5bb8ad88162678090519ae_tuple;
PyObject *const_str_plain_EARLY_HINTS;
PyObject *const_tuple_int_pos_200_str_plain_OK_tuple;
PyObject *const_str_plain_OK;
PyObject *const_tuple_int_pos_201_str_plain_Created_tuple;
PyObject *const_str_plain_CREATED;
PyObject *const_tuple_int_pos_202_str_plain_Accepted_tuple;
PyObject *const_str_plain_ACCEPTED;
PyObject *const_tuple_int_pos_203_str_digest_3b851337cb298604f1ce5e0356ac4e3a_tuple;
PyObject *const_str_plain_NON_AUTHORITATIVE_INFORMATION;
PyObject *const_tuple_int_pos_204_str_digest_9021cc6e96b1bfc1e57d999a0c8735a2_tuple;
PyObject *const_str_plain_NO_CONTENT;
PyObject *const_tuple_int_pos_205_str_digest_6841cc68cab7f4f19e8b5eb695c40b13_tuple;
PyObject *const_str_plain_RESET_CONTENT;
PyObject *const_tuple_int_pos_206_str_digest_8d00317b41dfa6aa4f082c7acb9278f4_tuple;
PyObject *const_str_plain_PARTIAL_CONTENT;
PyObject *const_tuple_int_pos_207_str_digest_7e0b9a1cddfafbd6640fb9fb8a7ac274_tuple;
PyObject *const_str_plain_MULTI_STATUS;
PyObject *const_tuple_int_pos_208_str_digest_cda4695fdc9f1c2b14c7afb12426d696_tuple;
PyObject *const_str_plain_ALREADY_REPORTED;
PyObject *const_tuple_int_pos_226_str_digest_4150b64831efff8f8dc893024d689b37_tuple;
PyObject *const_str_plain_IM_USED;
PyObject *const_tuple_int_pos_300_str_digest_8f0fe58367842a41731d31759f12b7bf_tuple;
PyObject *const_str_plain_MULTIPLE_CHOICES;
PyObject *const_tuple_int_pos_301_str_digest_d0a19d862b698ddef8aeb36b1f85cbca_tuple;
PyObject *const_str_plain_MOVED_PERMANENTLY;
PyObject *const_tuple_int_pos_302_str_plain_Found_tuple;
PyObject *const_str_plain_FOUND;
PyObject *const_tuple_int_pos_303_str_digest_c6fccba2ea7d96bb1565ebc128397480_tuple;
PyObject *const_str_plain_SEE_OTHER;
PyObject *const_tuple_int_pos_304_str_digest_b2a9adbcfd46d0c6d63d3db3b04f4345_tuple;
PyObject *const_str_plain_NOT_MODIFIED;
PyObject *const_tuple_int_pos_305_str_digest_c05366924bf6e0fa6c478e4f98175e5a_tuple;
PyObject *const_str_plain_USE_PROXY;
PyObject *const_tuple_int_pos_307_str_digest_7ef0c7fd71bd209fe4f4dd33eef26643_tuple;
PyObject *const_str_plain_TEMPORARY_REDIRECT;
PyObject *const_tuple_int_pos_308_str_digest_d72895cd077c729a3d12aca363ebcfba_tuple;
PyObject *const_str_plain_PERMANENT_REDIRECT;
PyObject *const_tuple_int_pos_400_str_digest_3d9c13d407f4b3356696e4c3e29649f5_tuple;
PyObject *const_str_plain_BAD_REQUEST;
PyObject *const_tuple_int_pos_401_str_plain_Unauthorized_tuple;
PyObject *const_str_plain_UNAUTHORIZED;
PyObject *const_tuple_int_pos_402_str_digest_bb4669fbec2f542672d630081e487a8f_tuple;
PyObject *const_str_plain_PAYMENT_REQUIRED;
PyObject *const_tuple_int_pos_403_str_plain_Forbidden_tuple;
PyObject *const_str_plain_FORBIDDEN;
PyObject *const_tuple_int_pos_404_str_digest_590d34d18e144bbb4e7aa891fd90a508_tuple;
PyObject *const_str_plain_NOT_FOUND;
PyObject *const_tuple_int_pos_405_str_digest_d16aba6f8d2d642cf40d389a9b21320e_tuple;
PyObject *const_str_plain_METHOD_NOT_ALLOWED;
PyObject *const_tuple_int_pos_406_str_digest_b8570c2a73f1e181d70096359d81a3b5_tuple;
PyObject *const_str_plain_NOT_ACCEPTABLE;
PyObject *const_tuple_int_pos_407_str_digest_f061f3538382ca61fcb4aec9cf5e555d_tuple;
PyObject *const_str_plain_PROXY_AUTHENTICATION_REQUIRED;
PyObject *const_tuple_int_pos_408_str_digest_2504fb4252ae0b69b4d65268f0852bd8_tuple;
PyObject *const_str_plain_REQUEST_TIMEOUT;
PyObject *const_tuple_int_pos_409_str_plain_Conflict_tuple;
PyObject *const_str_plain_CONFLICT;
PyObject *const_tuple_int_pos_410_str_plain_Gone_tuple;
PyObject *const_str_plain_GONE;
PyObject *const_tuple_int_pos_411_str_digest_8caaab99331cbc2df5103433eeb66150_tuple;
PyObject *const_str_plain_LENGTH_REQUIRED;
PyObject *const_tuple_int_pos_412_str_digest_cb94de1de8ef42c6e270b278803d0750_tuple;
PyObject *const_str_plain_PRECONDITION_FAILED;
PyObject *const_tuple_int_pos_413_str_digest_867381116c1292a4dd4999ab84d8a70d_tuple;
PyObject *const_str_plain_REQUEST_ENTITY_TOO_LARGE;
PyObject *const_tuple_int_pos_414_str_digest_9b79cc5ceb4298bbfa5c306c871a9989_tuple;
PyObject *const_str_plain_REQUEST_URI_TOO_LONG;
PyObject *const_tuple_int_pos_415_str_digest_9d53e6301ee796c89374952916a17cba_tuple;
PyObject *const_str_plain_UNSUPPORTED_MEDIA_TYPE;
PyObject *const_tuple_int_pos_416_str_digest_b785f69d89f9a2d6d79a9ba9ab980bce_tuple;
PyObject *const_str_plain_REQUESTED_RANGE_NOT_SATISFIABLE;
PyObject *const_tuple_int_pos_417_str_digest_9f76b5a0e9a8baf232733a5972de077d_tuple;
PyObject *const_str_plain_EXPECTATION_FAILED;
PyObject *const_tuple_int_pos_418_str_digest_5c7a90cea2c0366716c06fcfb012ed7c_tuple;
PyObject *const_str_plain_IM_A_TEAPOT;
PyObject *const_tuple_int_pos_421_str_digest_ef227cb2e6d7617e956a0ca0598edadd_tuple;
PyObject *const_str_plain_MISDIRECTED_REQUEST;
PyObject *const_tuple_int_pos_422_str_digest_5e0433a34f823521f3918df7f046597d_tuple;
PyObject *const_str_plain_UNPROCESSABLE_ENTITY;
PyObject *const_tuple_int_pos_423_str_plain_Locked_tuple;
PyObject *const_str_plain_LOCKED;
PyObject *const_tuple_int_pos_424_str_digest_4e8888d2a1d6a08b6bdb1db03391071d_tuple;
PyObject *const_str_plain_FAILED_DEPENDENCY;
PyObject *const_tuple_int_pos_425_str_digest_cfeed05275ed46507c3e758123f44e0b_tuple;
PyObject *const_str_plain_TOO_EARLY;
PyObject *const_tuple_int_pos_426_str_digest_491c2ea555686c6848e65962e71854e1_tuple;
PyObject *const_str_plain_UPGRADE_REQUIRED;
PyObject *const_tuple_int_pos_428_str_digest_87f8909be9459a2056a89bdf1f8ec18d_tuple;
PyObject *const_str_plain_PRECONDITION_REQUIRED;
PyObject *const_tuple_int_pos_429_str_digest_04aff0c65035cbf6a6c3e97d182844d0_tuple;
PyObject *const_str_plain_TOO_MANY_REQUESTS;
PyObject *const_tuple_int_pos_431_str_digest_9990b9ba75e94f3e7610aa2b5a303f76_tuple;
PyObject *const_str_plain_REQUEST_HEADER_FIELDS_TOO_LARGE;
PyObject *const_tuple_int_pos_451_str_digest_61dacfcb3e2dcd1f7ab4d8e7b2f28473_tuple;
PyObject *const_str_plain_UNAVAILABLE_FOR_LEGAL_REASONS;
PyObject *const_tuple_int_pos_500_str_digest_b5df9f114fcfff3ee8b230863c8fd671_tuple;
PyObject *const_str_plain_INTERNAL_SERVER_ERROR;
PyObject *const_tuple_int_pos_501_str_digest_a35029a521a7937ed903cca29d49cf3b_tuple;
PyObject *const_str_plain_NOT_IMPLEMENTED;
PyObject *const_tuple_int_pos_502_str_digest_acc5c6f001f872359f46bdda79e652ef_tuple;
PyObject *const_str_plain_BAD_GATEWAY;
PyObject *const_tuple_int_pos_503_str_digest_e8d2761b9824573fc8de08774a31d458_tuple;
PyObject *const_str_plain_SERVICE_UNAVAILABLE;
PyObject *const_tuple_int_pos_504_str_digest_648233a7e42e47b7be4bf9f5448245ba_tuple;
PyObject *const_str_plain_GATEWAY_TIMEOUT;
PyObject *const_tuple_int_pos_505_str_digest_94f9cad07d6f7a2390120d132442de4d_tuple;
PyObject *const_str_plain_HTTP_VERSION_NOT_SUPPORTED;
PyObject *const_tuple_int_pos_506_str_digest_307704fea95df06aa884126d1e2735aa_tuple;
PyObject *const_str_plain_VARIANT_ALSO_NEGOTIATES;
PyObject *const_tuple_int_pos_507_str_digest_1644407947d6ee3f8ef292b3b3940894_tuple;
PyObject *const_str_plain_INSUFFICIENT_STORAGE;
PyObject *const_tuple_int_pos_508_str_digest_0d6fa1cf57d3ac762d61712f81998a55_tuple;
PyObject *const_str_plain_LOOP_DETECTED;
PyObject *const_tuple_int_pos_510_str_digest_235dbe47fde89fab56885c5dace5192c_tuple;
PyObject *const_str_plain_NOT_EXTENDED;
PyObject *const_tuple_int_pos_511_str_digest_3dd10c19c48090a76cef334954d3bb64_tuple;
PyObject *const_str_plain_NETWORK_AUTHENTICATION_REQUIRED;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_code;
PyObject *const_str_plain__name_;
PyObject *const_str_digest_bcfb2960bc9f4d45c4f93a92c7e64993;
PyObject *const_str_digest_2462c1e33060d0c721fc9c488238a017;
PyObject *const_tuple_str_plain_cls_str_plain_value_str_plain_phrase_str_plain_obj_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_cls_str_plain_value_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[192];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("httpx._status_codes"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain___new__);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__value_);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_phrase);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_codes);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_int_pos_100);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_int_pos_199);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_a1f384549781bbee7a505f6c392b7842);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_int_pos_200);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_int_pos_299);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_66c9fffd0c6f9aa2e4bde09ed09471be);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_int_pos_300);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_int_pos_399);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac78374751ed6e995628682e9f06ef28);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_int_pos_400);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_int_pos_499);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e74171d9d1f4ed8e31d6a9a067b5720);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_int_pos_500);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_int_pos_599);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_ce4ae8ea6de1fdba6a96c7c905fa5587);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_34a0b4be859d83924229da7c86f2ee79);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IntEnum_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_IntEnum);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_a578fdd7d8d21d5019c58e40447c8925);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_438825f567d17a792be3250f13e446c4);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_dict_e5d99d927889862ead4371af45c03280);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f2d1f97eb76d4cdc5762e9f6b1e6d77);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain___str__);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_df19ea293828c49f2bc9747ca20a0309);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_dict_0749acbf241160937c1f21eef0cad2b7);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_reason_phrase);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_296b9249f6d59afae3f4b4e6a45e811e);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_dict_337391d960a753f94d657433a6e98b93);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_informational);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_654fa4aa457f72f488e156f15af98ec7);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_success);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_11fa3bc38f95ececae1495f05a0ede58);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_redirect);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_20f550327f89639f8966f8f1b5210e98);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_client_error);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_23b2181c8d864205a462c6b7a3ed4cf7);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_server_error);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a3a08cbfdaeeeb0a176b4ec3d1bb1ab);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_error);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_24c7ff1de28c70d5a4fde895fe63b268);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_100_str_plain_Continue_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_CONTINUE);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_101_str_digest_bc5282b34aa0c68d35abe61079030079_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_SWITCHING_PROTOCOLS);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_102_str_plain_Processing_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_PROCESSING);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_103_str_digest_956912a40a5bb8ad88162678090519ae_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_EARLY_HINTS);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_200_str_plain_OK_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_OK);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_201_str_plain_Created_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_CREATED);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_202_str_plain_Accepted_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_ACCEPTED);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_203_str_digest_3b851337cb298604f1ce5e0356ac4e3a_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_NON_AUTHORITATIVE_INFORMATION);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_204_str_digest_9021cc6e96b1bfc1e57d999a0c8735a2_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_NO_CONTENT);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_205_str_digest_6841cc68cab7f4f19e8b5eb695c40b13_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_RESET_CONTENT);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_206_str_digest_8d00317b41dfa6aa4f082c7acb9278f4_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_PARTIAL_CONTENT);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_207_str_digest_7e0b9a1cddfafbd6640fb9fb8a7ac274_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_MULTI_STATUS);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_208_str_digest_cda4695fdc9f1c2b14c7afb12426d696_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_ALREADY_REPORTED);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_226_str_digest_4150b64831efff8f8dc893024d689b37_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_IM_USED);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_300_str_digest_8f0fe58367842a41731d31759f12b7bf_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_MULTIPLE_CHOICES);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_301_str_digest_d0a19d862b698ddef8aeb36b1f85cbca_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOVED_PERMANENTLY);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_302_str_plain_Found_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_FOUND);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_303_str_digest_c6fccba2ea7d96bb1565ebc128397480_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_SEE_OTHER);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_304_str_digest_b2a9adbcfd46d0c6d63d3db3b04f4345_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_MODIFIED);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_305_str_digest_c05366924bf6e0fa6c478e4f98175e5a_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_USE_PROXY);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_307_str_digest_7ef0c7fd71bd209fe4f4dd33eef26643_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_TEMPORARY_REDIRECT);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_308_str_digest_d72895cd077c729a3d12aca363ebcfba_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_PERMANENT_REDIRECT);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_400_str_digest_3d9c13d407f4b3356696e4c3e29649f5_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_BAD_REQUEST);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_401_str_plain_Unauthorized_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNAUTHORIZED);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_402_str_digest_bb4669fbec2f542672d630081e487a8f_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_PAYMENT_REQUIRED);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_403_str_plain_Forbidden_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_FORBIDDEN);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_404_str_digest_590d34d18e144bbb4e7aa891fd90a508_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_FOUND);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_405_str_digest_d16aba6f8d2d642cf40d389a9b21320e_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_METHOD_NOT_ALLOWED);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_406_str_digest_b8570c2a73f1e181d70096359d81a3b5_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_ACCEPTABLE);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_407_str_digest_f061f3538382ca61fcb4aec9cf5e555d_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_PROXY_AUTHENTICATION_REQUIRED);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_408_str_digest_2504fb4252ae0b69b4d65268f0852bd8_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_TIMEOUT);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_409_str_plain_Conflict_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_CONFLICT);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_410_str_plain_Gone_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_GONE);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_411_str_digest_8caaab99331cbc2df5103433eeb66150_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_LENGTH_REQUIRED);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_412_str_digest_cb94de1de8ef42c6e270b278803d0750_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_PRECONDITION_FAILED);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_413_str_digest_867381116c1292a4dd4999ab84d8a70d_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_ENTITY_TOO_LARGE);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_414_str_digest_9b79cc5ceb4298bbfa5c306c871a9989_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_URI_TOO_LONG);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_415_str_digest_9d53e6301ee796c89374952916a17cba_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNSUPPORTED_MEDIA_TYPE);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_416_str_digest_b785f69d89f9a2d6d79a9ba9ab980bce_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_REQUESTED_RANGE_NOT_SATISFIABLE);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_417_str_digest_9f76b5a0e9a8baf232733a5972de077d_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_EXPECTATION_FAILED);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_418_str_digest_5c7a90cea2c0366716c06fcfb012ed7c_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_IM_A_TEAPOT);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_421_str_digest_ef227cb2e6d7617e956a0ca0598edadd_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_MISDIRECTED_REQUEST);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_422_str_digest_5e0433a34f823521f3918df7f046597d_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNPROCESSABLE_ENTITY);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_423_str_plain_Locked_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_LOCKED);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_424_str_digest_4e8888d2a1d6a08b6bdb1db03391071d_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_FAILED_DEPENDENCY);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_425_str_digest_cfeed05275ed46507c3e758123f44e0b_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_TOO_EARLY);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_426_str_digest_491c2ea555686c6848e65962e71854e1_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_UPGRADE_REQUIRED);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_428_str_digest_87f8909be9459a2056a89bdf1f8ec18d_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_PRECONDITION_REQUIRED);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_429_str_digest_04aff0c65035cbf6a6c3e97d182844d0_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_TOO_MANY_REQUESTS);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_431_str_digest_9990b9ba75e94f3e7610aa2b5a303f76_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_HEADER_FIELDS_TOO_LARGE);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_451_str_digest_61dacfcb3e2dcd1f7ab4d8e7b2f28473_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNAVAILABLE_FOR_LEGAL_REASONS);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_500_str_digest_b5df9f114fcfff3ee8b230863c8fd671_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_INTERNAL_SERVER_ERROR);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_501_str_digest_a35029a521a7937ed903cca29d49cf3b_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_IMPLEMENTED);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_502_str_digest_acc5c6f001f872359f46bdda79e652ef_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_BAD_GATEWAY);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_503_str_digest_e8d2761b9824573fc8de08774a31d458_tuple);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_SERVICE_UNAVAILABLE);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_504_str_digest_648233a7e42e47b7be4bf9f5448245ba_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_GATEWAY_TIMEOUT);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_505_str_digest_94f9cad07d6f7a2390120d132442de4d_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTP_VERSION_NOT_SUPPORTED);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_506_str_digest_307704fea95df06aa884126d1e2735aa_tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_VARIANT_ALSO_NEGOTIATES);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_507_str_digest_1644407947d6ee3f8ef292b3b3940894_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_INSUFFICIENT_STORAGE);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_508_str_digest_0d6fa1cf57d3ac762d61712f81998a55_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_LOOP_DETECTED);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_510_str_digest_235dbe47fde89fab56885c5dace5192c_tuple);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_EXTENDED);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_511_str_digest_3dd10c19c48090a76cef334954d3bb64_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_NETWORK_AUTHENTICATION_REQUIRED);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_code);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain__name_);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_bcfb2960bc9f4d45c4f93a92c7e64993);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_2462c1e33060d0c721fc9c488238a017);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_value_str_plain_phrase_str_plain_obj_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_value_tuple);
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
void checkModuleConstants_httpx$_status_codes(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain___new__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___new__);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__value_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__value_);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_phrase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_phrase);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_codes);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_int_pos_100));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_100);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_int_pos_199));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_199);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_a1f384549781bbee7a505f6c392b7842));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a1f384549781bbee7a505f6c392b7842);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_int_pos_200));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_200);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_int_pos_299));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_299);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_66c9fffd0c6f9aa2e4bde09ed09471be));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_66c9fffd0c6f9aa2e4bde09ed09471be);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_int_pos_300));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_300);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_int_pos_399));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_399);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac78374751ed6e995628682e9f06ef28));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac78374751ed6e995628682e9f06ef28);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_int_pos_400));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_400);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_int_pos_499));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_499);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e74171d9d1f4ed8e31d6a9a067b5720));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4e74171d9d1f4ed8e31d6a9a067b5720);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_int_pos_500));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_500);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_int_pos_599));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_599);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_ce4ae8ea6de1fdba6a96c7c905fa5587));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ce4ae8ea6de1fdba6a96c7c905fa5587);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_34a0b4be859d83924229da7c86f2ee79));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_34a0b4be859d83924229da7c86f2ee79);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enum);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IntEnum_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_IntEnum_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_IntEnum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IntEnum);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_a578fdd7d8d21d5019c58e40447c8925));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a578fdd7d8d21d5019c58e40447c8925);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_438825f567d17a792be3250f13e446c4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_438825f567d17a792be3250f13e446c4);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_int_pos_8));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_8);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_empty_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_dict_e5d99d927889862ead4371af45c03280));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e5d99d927889862ead4371af45c03280);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f2d1f97eb76d4cdc5762e9f6b1e6d77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f2d1f97eb76d4cdc5762e9f6b1e6d77);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain___str__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___str__);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_df19ea293828c49f2bc9747ca20a0309));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_df19ea293828c49f2bc9747ca20a0309);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_dict_0749acbf241160937c1f21eef0cad2b7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0749acbf241160937c1f21eef0cad2b7);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_reason_phrase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_reason_phrase);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_296b9249f6d59afae3f4b4e6a45e811e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_296b9249f6d59afae3f4b4e6a45e811e);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_dict_337391d960a753f94d657433a6e98b93));
CHECK_OBJECT_DEEP(mod_consts.const_dict_337391d960a753f94d657433a6e98b93);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_informational));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_informational);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_654fa4aa457f72f488e156f15af98ec7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_654fa4aa457f72f488e156f15af98ec7);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_success));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_success);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_11fa3bc38f95ececae1495f05a0ede58));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_11fa3bc38f95ececae1495f05a0ede58);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_redirect));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_redirect);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_20f550327f89639f8966f8f1b5210e98));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_20f550327f89639f8966f8f1b5210e98);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_client_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_client_error);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_23b2181c8d864205a462c6b7a3ed4cf7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_23b2181c8d864205a462c6b7a3ed4cf7);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_server_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_server_error);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a3a08cbfdaeeeb0a176b4ec3d1bb1ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a3a08cbfdaeeeb0a176b4ec3d1bb1ab);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_error);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_24c7ff1de28c70d5a4fde895fe63b268));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_24c7ff1de28c70d5a4fde895fe63b268);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_100_str_plain_Continue_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_100_str_plain_Continue_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_CONTINUE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CONTINUE);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_101_str_digest_bc5282b34aa0c68d35abe61079030079_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_101_str_digest_bc5282b34aa0c68d35abe61079030079_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_SWITCHING_PROTOCOLS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SWITCHING_PROTOCOLS);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_102_str_plain_Processing_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_102_str_plain_Processing_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_PROCESSING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PROCESSING);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_103_str_digest_956912a40a5bb8ad88162678090519ae_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_103_str_digest_956912a40a5bb8ad88162678090519ae_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_EARLY_HINTS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EARLY_HINTS);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_200_str_plain_OK_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_200_str_plain_OK_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_OK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OK);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_201_str_plain_Created_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_201_str_plain_Created_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_CREATED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CREATED);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_202_str_plain_Accepted_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_202_str_plain_Accepted_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_ACCEPTED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ACCEPTED);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_203_str_digest_3b851337cb298604f1ce5e0356ac4e3a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_203_str_digest_3b851337cb298604f1ce5e0356ac4e3a_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_NON_AUTHORITATIVE_INFORMATION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NON_AUTHORITATIVE_INFORMATION);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_204_str_digest_9021cc6e96b1bfc1e57d999a0c8735a2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_204_str_digest_9021cc6e96b1bfc1e57d999a0c8735a2_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_NO_CONTENT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NO_CONTENT);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_205_str_digest_6841cc68cab7f4f19e8b5eb695c40b13_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_205_str_digest_6841cc68cab7f4f19e8b5eb695c40b13_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_RESET_CONTENT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RESET_CONTENT);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_206_str_digest_8d00317b41dfa6aa4f082c7acb9278f4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_206_str_digest_8d00317b41dfa6aa4f082c7acb9278f4_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_PARTIAL_CONTENT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PARTIAL_CONTENT);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_207_str_digest_7e0b9a1cddfafbd6640fb9fb8a7ac274_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_207_str_digest_7e0b9a1cddfafbd6640fb9fb8a7ac274_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_MULTI_STATUS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MULTI_STATUS);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_208_str_digest_cda4695fdc9f1c2b14c7afb12426d696_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_208_str_digest_cda4695fdc9f1c2b14c7afb12426d696_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_ALREADY_REPORTED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ALREADY_REPORTED);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_226_str_digest_4150b64831efff8f8dc893024d689b37_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_226_str_digest_4150b64831efff8f8dc893024d689b37_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_IM_USED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IM_USED);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_300_str_digest_8f0fe58367842a41731d31759f12b7bf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_300_str_digest_8f0fe58367842a41731d31759f12b7bf_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_MULTIPLE_CHOICES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MULTIPLE_CHOICES);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_301_str_digest_d0a19d862b698ddef8aeb36b1f85cbca_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_301_str_digest_d0a19d862b698ddef8aeb36b1f85cbca_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOVED_PERMANENTLY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MOVED_PERMANENTLY);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_302_str_plain_Found_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_302_str_plain_Found_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_FOUND));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FOUND);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_303_str_digest_c6fccba2ea7d96bb1565ebc128397480_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_303_str_digest_c6fccba2ea7d96bb1565ebc128397480_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_SEE_OTHER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SEE_OTHER);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_304_str_digest_b2a9adbcfd46d0c6d63d3db3b04f4345_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_304_str_digest_b2a9adbcfd46d0c6d63d3db3b04f4345_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_MODIFIED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NOT_MODIFIED);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_305_str_digest_c05366924bf6e0fa6c478e4f98175e5a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_305_str_digest_c05366924bf6e0fa6c478e4f98175e5a_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_USE_PROXY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_USE_PROXY);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_307_str_digest_7ef0c7fd71bd209fe4f4dd33eef26643_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_307_str_digest_7ef0c7fd71bd209fe4f4dd33eef26643_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_TEMPORARY_REDIRECT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TEMPORARY_REDIRECT);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_308_str_digest_d72895cd077c729a3d12aca363ebcfba_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_308_str_digest_d72895cd077c729a3d12aca363ebcfba_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_PERMANENT_REDIRECT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PERMANENT_REDIRECT);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_400_str_digest_3d9c13d407f4b3356696e4c3e29649f5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_400_str_digest_3d9c13d407f4b3356696e4c3e29649f5_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_BAD_REQUEST));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BAD_REQUEST);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_401_str_plain_Unauthorized_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_401_str_plain_Unauthorized_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNAUTHORIZED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNAUTHORIZED);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_402_str_digest_bb4669fbec2f542672d630081e487a8f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_402_str_digest_bb4669fbec2f542672d630081e487a8f_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_PAYMENT_REQUIRED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PAYMENT_REQUIRED);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_403_str_plain_Forbidden_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_403_str_plain_Forbidden_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_FORBIDDEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FORBIDDEN);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_404_str_digest_590d34d18e144bbb4e7aa891fd90a508_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_404_str_digest_590d34d18e144bbb4e7aa891fd90a508_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_FOUND));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NOT_FOUND);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_405_str_digest_d16aba6f8d2d642cf40d389a9b21320e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_405_str_digest_d16aba6f8d2d642cf40d389a9b21320e_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_METHOD_NOT_ALLOWED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_METHOD_NOT_ALLOWED);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_406_str_digest_b8570c2a73f1e181d70096359d81a3b5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_406_str_digest_b8570c2a73f1e181d70096359d81a3b5_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_ACCEPTABLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NOT_ACCEPTABLE);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_407_str_digest_f061f3538382ca61fcb4aec9cf5e555d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_407_str_digest_f061f3538382ca61fcb4aec9cf5e555d_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_PROXY_AUTHENTICATION_REQUIRED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PROXY_AUTHENTICATION_REQUIRED);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_408_str_digest_2504fb4252ae0b69b4d65268f0852bd8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_408_str_digest_2504fb4252ae0b69b4d65268f0852bd8_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_TIMEOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REQUEST_TIMEOUT);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_409_str_plain_Conflict_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_409_str_plain_Conflict_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_CONFLICT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CONFLICT);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_410_str_plain_Gone_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_410_str_plain_Gone_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_GONE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GONE);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_411_str_digest_8caaab99331cbc2df5103433eeb66150_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_411_str_digest_8caaab99331cbc2df5103433eeb66150_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_LENGTH_REQUIRED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LENGTH_REQUIRED);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_412_str_digest_cb94de1de8ef42c6e270b278803d0750_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_412_str_digest_cb94de1de8ef42c6e270b278803d0750_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_PRECONDITION_FAILED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PRECONDITION_FAILED);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_413_str_digest_867381116c1292a4dd4999ab84d8a70d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_413_str_digest_867381116c1292a4dd4999ab84d8a70d_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_ENTITY_TOO_LARGE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REQUEST_ENTITY_TOO_LARGE);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_414_str_digest_9b79cc5ceb4298bbfa5c306c871a9989_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_414_str_digest_9b79cc5ceb4298bbfa5c306c871a9989_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_URI_TOO_LONG));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REQUEST_URI_TOO_LONG);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_415_str_digest_9d53e6301ee796c89374952916a17cba_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_415_str_digest_9d53e6301ee796c89374952916a17cba_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNSUPPORTED_MEDIA_TYPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNSUPPORTED_MEDIA_TYPE);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_416_str_digest_b785f69d89f9a2d6d79a9ba9ab980bce_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_416_str_digest_b785f69d89f9a2d6d79a9ba9ab980bce_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_REQUESTED_RANGE_NOT_SATISFIABLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REQUESTED_RANGE_NOT_SATISFIABLE);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_417_str_digest_9f76b5a0e9a8baf232733a5972de077d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_417_str_digest_9f76b5a0e9a8baf232733a5972de077d_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_EXPECTATION_FAILED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EXPECTATION_FAILED);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_418_str_digest_5c7a90cea2c0366716c06fcfb012ed7c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_418_str_digest_5c7a90cea2c0366716c06fcfb012ed7c_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_IM_A_TEAPOT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IM_A_TEAPOT);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_421_str_digest_ef227cb2e6d7617e956a0ca0598edadd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_421_str_digest_ef227cb2e6d7617e956a0ca0598edadd_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_MISDIRECTED_REQUEST));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MISDIRECTED_REQUEST);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_422_str_digest_5e0433a34f823521f3918df7f046597d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_422_str_digest_5e0433a34f823521f3918df7f046597d_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNPROCESSABLE_ENTITY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNPROCESSABLE_ENTITY);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_423_str_plain_Locked_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_423_str_plain_Locked_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_LOCKED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LOCKED);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_424_str_digest_4e8888d2a1d6a08b6bdb1db03391071d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_424_str_digest_4e8888d2a1d6a08b6bdb1db03391071d_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_FAILED_DEPENDENCY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FAILED_DEPENDENCY);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_425_str_digest_cfeed05275ed46507c3e758123f44e0b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_425_str_digest_cfeed05275ed46507c3e758123f44e0b_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_TOO_EARLY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TOO_EARLY);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_426_str_digest_491c2ea555686c6848e65962e71854e1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_426_str_digest_491c2ea555686c6848e65962e71854e1_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_UPGRADE_REQUIRED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UPGRADE_REQUIRED);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_428_str_digest_87f8909be9459a2056a89bdf1f8ec18d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_428_str_digest_87f8909be9459a2056a89bdf1f8ec18d_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_PRECONDITION_REQUIRED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PRECONDITION_REQUIRED);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_429_str_digest_04aff0c65035cbf6a6c3e97d182844d0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_429_str_digest_04aff0c65035cbf6a6c3e97d182844d0_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_TOO_MANY_REQUESTS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TOO_MANY_REQUESTS);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_431_str_digest_9990b9ba75e94f3e7610aa2b5a303f76_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_431_str_digest_9990b9ba75e94f3e7610aa2b5a303f76_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_HEADER_FIELDS_TOO_LARGE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REQUEST_HEADER_FIELDS_TOO_LARGE);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_451_str_digest_61dacfcb3e2dcd1f7ab4d8e7b2f28473_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_451_str_digest_61dacfcb3e2dcd1f7ab4d8e7b2f28473_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNAVAILABLE_FOR_LEGAL_REASONS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNAVAILABLE_FOR_LEGAL_REASONS);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_500_str_digest_b5df9f114fcfff3ee8b230863c8fd671_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_500_str_digest_b5df9f114fcfff3ee8b230863c8fd671_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_INTERNAL_SERVER_ERROR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INTERNAL_SERVER_ERROR);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_501_str_digest_a35029a521a7937ed903cca29d49cf3b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_501_str_digest_a35029a521a7937ed903cca29d49cf3b_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_IMPLEMENTED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NOT_IMPLEMENTED);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_502_str_digest_acc5c6f001f872359f46bdda79e652ef_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_502_str_digest_acc5c6f001f872359f46bdda79e652ef_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_BAD_GATEWAY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BAD_GATEWAY);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_503_str_digest_e8d2761b9824573fc8de08774a31d458_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_503_str_digest_e8d2761b9824573fc8de08774a31d458_tuple);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_SERVICE_UNAVAILABLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SERVICE_UNAVAILABLE);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_504_str_digest_648233a7e42e47b7be4bf9f5448245ba_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_504_str_digest_648233a7e42e47b7be4bf9f5448245ba_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_GATEWAY_TIMEOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GATEWAY_TIMEOUT);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_505_str_digest_94f9cad07d6f7a2390120d132442de4d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_505_str_digest_94f9cad07d6f7a2390120d132442de4d_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTP_VERSION_NOT_SUPPORTED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTTP_VERSION_NOT_SUPPORTED);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_506_str_digest_307704fea95df06aa884126d1e2735aa_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_506_str_digest_307704fea95df06aa884126d1e2735aa_tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_VARIANT_ALSO_NEGOTIATES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VARIANT_ALSO_NEGOTIATES);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_507_str_digest_1644407947d6ee3f8ef292b3b3940894_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_507_str_digest_1644407947d6ee3f8ef292b3b3940894_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_INSUFFICIENT_STORAGE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INSUFFICIENT_STORAGE);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_508_str_digest_0d6fa1cf57d3ac762d61712f81998a55_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_508_str_digest_0d6fa1cf57d3ac762d61712f81998a55_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_LOOP_DETECTED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LOOP_DETECTED);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_510_str_digest_235dbe47fde89fab56885c5dace5192c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_510_str_digest_235dbe47fde89fab56885c5dace5192c_tuple);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_EXTENDED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NOT_EXTENDED);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_511_str_digest_3dd10c19c48090a76cef334954d3bb64_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_511_str_digest_3dd10c19c48090a76cef334954d3bb64_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_NETWORK_AUTHENTICATION_REQUIRED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NETWORK_AUTHENTICATION_REQUIRED);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain__name_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__name_);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_bcfb2960bc9f4d45c4f93a92c7e64993));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bcfb2960bc9f4d45c4f93a92c7e64993);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_2462c1e33060d0c721fc9c488238a017));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2462c1e33060d0c721fc9c488238a017);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_value_str_plain_phrase_str_plain_obj_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_value_str_plain_phrase_str_plain_obj_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_value_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 4
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
static PyObject *module_var_accessor_httpx$_status_codes$IntEnum(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_status_codes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_status_codes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_status_codes, (Nuitka_StringObject *)mod_consts.const_str_plain_IntEnum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_status_codes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IntEnum);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IntEnum, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IntEnum);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IntEnum, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_status_codes, (Nuitka_StringObject *)mod_consts.const_str_plain_IntEnum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_status_codes, (Nuitka_StringObject *)mod_consts.const_str_plain_IntEnum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IntEnum);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_status_codes$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_status_codes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_status_codes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_status_codes, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_status_codes->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_status_codes, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_status_codes, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_status_codes$code(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_status_codes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_status_codes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_status_codes, (Nuitka_StringObject *)mod_consts.const_str_plain_code);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_status_codes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_code);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_code, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_code);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_code, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_status_codes, (Nuitka_StringObject *)mod_consts.const_str_plain_code);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_status_codes, (Nuitka_StringObject *)mod_consts.const_str_plain_code);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_code);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_status_codes$codes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_status_codes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_status_codes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_status_codes, (Nuitka_StringObject *)mod_consts.const_str_plain_codes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_status_codes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_codes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_codes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_codes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_codes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_status_codes, (Nuitka_StringObject *)mod_consts.const_str_plain_codes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_status_codes, (Nuitka_StringObject *)mod_consts.const_str_plain_codes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_codes);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_1875941462d27ec7feddc7b71ab2fff2;
static PyCodeObject *code_objects_a861c4f1f2db68a35366fdb6bf32a94f;
static PyCodeObject *code_objects_86bf0e9f0b15edd866ec0f2487e90704;
static PyCodeObject *code_objects_c96d82c0cc8fd8d1f51abf831b1f01c6;
static PyCodeObject *code_objects_eecf9473326bfc91f10ce18d26e0adf1;
static PyCodeObject *code_objects_c36220765c8d2962e70d064a2daf06ed;
static PyCodeObject *code_objects_e824234a053f91e145d7a49711540e51;
static PyCodeObject *code_objects_f749b6bf90bb6ed93e8555bbfead26d7;
static PyCodeObject *code_objects_2a8854df2627a0d8708d0ccfda269324;
static PyCodeObject *code_objects_606e35f6255251fb4126b9bf0eba71a9;
static PyCodeObject *code_objects_af2be708401e586329e3872f7062c3a6;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_bcfb2960bc9f4d45c4f93a92c7e64993); CHECK_OBJECT(module_filename_obj);
code_objects_1875941462d27ec7feddc7b71ab2fff2 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_2462c1e33060d0c721fc9c488238a017, mod_consts.const_str_digest_2462c1e33060d0c721fc9c488238a017, NULL, NULL, 0, 0, 0);
code_objects_a861c4f1f2db68a35366fdb6bf32a94f = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___new__, mod_consts.const_str_digest_3f2d1f97eb76d4cdc5762e9f6b1e6d77, mod_consts.const_tuple_str_plain_cls_str_plain_value_str_plain_phrase_str_plain_obj_tuple, NULL, 3, 0, 0);
code_objects_86bf0e9f0b15edd866ec0f2487e90704 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_df19ea293828c49f2bc9747ca20a0309, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c96d82c0cc8fd8d1f51abf831b1f01c6 = MAKE_CODE_OBJECT(module_filename_obj, 8, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_codes, mod_consts.const_str_plain_codes, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_eecf9473326bfc91f10ce18d26e0adf1 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_reason_phrase, mod_consts.const_str_digest_296b9249f6d59afae3f4b4e6a45e811e, mod_consts.const_tuple_str_plain_cls_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_c36220765c8d2962e70d064a2daf06ed = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_client_error, mod_consts.const_str_digest_23b2181c8d864205a462c6b7a3ed4cf7, mod_consts.const_tuple_str_plain_cls_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_e824234a053f91e145d7a49711540e51 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_error, mod_consts.const_str_digest_24c7ff1de28c70d5a4fde895fe63b268, mod_consts.const_tuple_str_plain_cls_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_f749b6bf90bb6ed93e8555bbfead26d7 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_informational, mod_consts.const_str_digest_654fa4aa457f72f488e156f15af98ec7, mod_consts.const_tuple_str_plain_cls_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_2a8854df2627a0d8708d0ccfda269324 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_redirect, mod_consts.const_str_digest_20f550327f89639f8966f8f1b5210e98, mod_consts.const_tuple_str_plain_cls_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_606e35f6255251fb4126b9bf0eba71a9 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_server_error, mod_consts.const_str_digest_6a3a08cbfdaeeeb0a176b4ec3d1bb1ab, mod_consts.const_tuple_str_plain_cls_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_af2be708401e586329e3872f7062c3a6 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_success, mod_consts.const_str_digest_11fa3bc38f95ececae1495f05a0ede58, mod_consts.const_tuple_str_plain_cls_str_plain_value_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_httpx$_status_codes$$$function__1___new__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_status_codes$$$function__2___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_status_codes$$$function__3_get_reason_phrase(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_status_codes$$$function__4_is_informational(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_status_codes$$$function__5_is_success(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_status_codes$$$function__6_is_redirect(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_status_codes$$$function__7_is_client_error(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_status_codes$$$function__8_is_server_error(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_status_codes$$$function__9_is_error(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpx$_status_codes$$$function__1___new__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *par_phrase = python_pars[2];
PyObject *var_obj = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_status_codes$$$function__1___new__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_status_codes$$$function__1___new__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_status_codes$$$function__1___new__)) {
    Py_XDECREF(cache_frame_frame_httpx$_status_codes$$$function__1___new__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_status_codes$$$function__1___new__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_status_codes$$$function__1___new__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a861c4f1f2db68a35366fdb6bf32a94f, module_httpx$_status_codes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_status_codes$$$function__1___new__->m_type_description == NULL);
frame_frame_httpx$_status_codes$$$function__1___new__ = cache_frame_frame_httpx$_status_codes$$$function__1___new__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_status_codes$$$function__1___new__);
assert(Py_REFCNT(frame_frame_httpx$_status_codes$$$function__1___new__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = (PyObject *)&PyLong_Type;
CHECK_OBJECT(par_cls);
tmp_args_element_value_1 = par_cls;
CHECK_OBJECT(par_value);
tmp_args_element_value_2 = par_value;
frame_frame_httpx$_status_codes$$$function__1___new__->m_frame.f_lineno = 29;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain___new__,
        call_args
    );
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_obj == NULL);
var_obj = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_value);
tmp_assattr_value_1 = par_value;
CHECK_OBJECT(var_obj);
tmp_assattr_target_1 = var_obj;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__value_, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_phrase);
tmp_assattr_value_2 = par_phrase;
CHECK_OBJECT(var_obj);
tmp_assattr_target_2 = var_obj;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_phrase, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_status_codes$$$function__1___new__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_status_codes$$$function__1___new__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_status_codes$$$function__1___new__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_status_codes$$$function__1___new__,
    type_description_1,
    par_cls,
    par_value,
    par_phrase,
    var_obj
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_status_codes$$$function__1___new__ == cache_frame_frame_httpx$_status_codes$$$function__1___new__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_status_codes$$$function__1___new__);
    cache_frame_frame_httpx$_status_codes$$$function__1___new__ = NULL;
}

assertFrameObject(frame_frame_httpx$_status_codes$$$function__1___new__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_obj);
tmp_return_value = var_obj;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_obj);
CHECK_OBJECT(var_obj);
Py_DECREF(var_obj);
var_obj = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_obj);
var_obj = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_phrase);
Py_DECREF(par_phrase);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_phrase);
Py_DECREF(par_phrase);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_status_codes$$$function__2___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpx$_status_codes$$$function__2___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_status_codes$$$function__2___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_status_codes$$$function__2___str__)) {
    Py_XDECREF(cache_frame_frame_httpx$_status_codes$$$function__2___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_status_codes$$$function__2___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_status_codes$$$function__2___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_86bf0e9f0b15edd866ec0f2487e90704, module_httpx$_status_codes, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_status_codes$$$function__2___str__->m_type_description == NULL);
frame_frame_httpx$_status_codes$$$function__2___str__ = cache_frame_frame_httpx$_status_codes$$$function__2___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_status_codes$$$function__2___str__);
assert(Py_REFCNT(frame_frame_httpx$_status_codes$$$function__2___str__) == 2);

// Framed code:
{
PyObject *tmp_unicode_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_value);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_status_codes$$$function__2___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_status_codes$$$function__2___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_status_codes$$$function__2___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_status_codes$$$function__2___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_status_codes$$$function__2___str__ == cache_frame_frame_httpx$_status_codes$$$function__2___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_status_codes$$$function__2___str__);
    cache_frame_frame_httpx$_status_codes$$$function__2___str__ = NULL;
}

assertFrameObject(frame_frame_httpx$_status_codes$$$function__2___str__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_httpx$_status_codes$$$function__3_get_reason_phrase(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase)) {
    Py_XDECREF(cache_frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase = MAKE_FUNCTION_FRAME(tstate, code_objects_eecf9473326bfc91f10ce18d26e0adf1, module_httpx$_status_codes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase->m_type_description == NULL);
frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase = cache_frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase);
assert(Py_REFCNT(frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_httpx$_status_codes$codes(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_codes);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase->m_frame.f_lineno = 41;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_phrase);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oo";
    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_ValueError;
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
tmp_return_value = const_str_empty;
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 40;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase->m_frame)) {
        frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase,
    type_description_1,
    par_cls,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase == cache_frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase);
    cache_frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase = NULL;
}

assertFrameObject(frame_frame_httpx$_status_codes$$$function__3_get_reason_phrase);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_status_codes$$$function__4_is_informational(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_status_codes$$$function__4_is_informational;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_status_codes$$$function__4_is_informational = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_status_codes$$$function__4_is_informational)) {
    Py_XDECREF(cache_frame_frame_httpx$_status_codes$$$function__4_is_informational);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_status_codes$$$function__4_is_informational == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_status_codes$$$function__4_is_informational = MAKE_FUNCTION_FRAME(tstate, code_objects_f749b6bf90bb6ed93e8555bbfead26d7, module_httpx$_status_codes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_status_codes$$$function__4_is_informational->m_type_description == NULL);
frame_frame_httpx$_status_codes$$$function__4_is_informational = cache_frame_frame_httpx$_status_codes$$$function__4_is_informational;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_status_codes$$$function__4_is_informational);
assert(Py_REFCNT(frame_frame_httpx$_status_codes$$$function__4_is_informational) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_value);
tmp_assign_source_1 = par_value;
assert(tmp_comparison_chain_1__operand_2 == NULL);
Py_INCREF(tmp_assign_source_1);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_int_pos_100;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_return_value = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
branch_no_1:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_199;
tmp_return_value = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oo";
    goto try_except_handler_1;
}
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
Py_DECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_status_codes$$$function__4_is_informational, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_status_codes$$$function__4_is_informational->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_status_codes$$$function__4_is_informational, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_status_codes$$$function__4_is_informational,
    type_description_1,
    par_cls,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_status_codes$$$function__4_is_informational == cache_frame_frame_httpx$_status_codes$$$function__4_is_informational) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_status_codes$$$function__4_is_informational);
    cache_frame_frame_httpx$_status_codes$$$function__4_is_informational = NULL;
}

assertFrameObject(frame_frame_httpx$_status_codes$$$function__4_is_informational);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_status_codes$$$function__5_is_success(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_status_codes$$$function__5_is_success;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_status_codes$$$function__5_is_success = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_status_codes$$$function__5_is_success)) {
    Py_XDECREF(cache_frame_frame_httpx$_status_codes$$$function__5_is_success);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_status_codes$$$function__5_is_success == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_status_codes$$$function__5_is_success = MAKE_FUNCTION_FRAME(tstate, code_objects_af2be708401e586329e3872f7062c3a6, module_httpx$_status_codes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_status_codes$$$function__5_is_success->m_type_description == NULL);
frame_frame_httpx$_status_codes$$$function__5_is_success = cache_frame_frame_httpx$_status_codes$$$function__5_is_success;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_status_codes$$$function__5_is_success);
assert(Py_REFCNT(frame_frame_httpx$_status_codes$$$function__5_is_success) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_value);
tmp_assign_source_1 = par_value;
assert(tmp_comparison_chain_1__operand_2 == NULL);
Py_INCREF(tmp_assign_source_1);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_int_pos_200;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_return_value = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
branch_no_1:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_299;
tmp_return_value = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oo";
    goto try_except_handler_1;
}
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
Py_DECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_status_codes$$$function__5_is_success, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_status_codes$$$function__5_is_success->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_status_codes$$$function__5_is_success, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_status_codes$$$function__5_is_success,
    type_description_1,
    par_cls,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_status_codes$$$function__5_is_success == cache_frame_frame_httpx$_status_codes$$$function__5_is_success) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_status_codes$$$function__5_is_success);
    cache_frame_frame_httpx$_status_codes$$$function__5_is_success = NULL;
}

assertFrameObject(frame_frame_httpx$_status_codes$$$function__5_is_success);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_status_codes$$$function__6_is_redirect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_status_codes$$$function__6_is_redirect;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_status_codes$$$function__6_is_redirect = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_status_codes$$$function__6_is_redirect)) {
    Py_XDECREF(cache_frame_frame_httpx$_status_codes$$$function__6_is_redirect);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_status_codes$$$function__6_is_redirect == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_status_codes$$$function__6_is_redirect = MAKE_FUNCTION_FRAME(tstate, code_objects_2a8854df2627a0d8708d0ccfda269324, module_httpx$_status_codes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_status_codes$$$function__6_is_redirect->m_type_description == NULL);
frame_frame_httpx$_status_codes$$$function__6_is_redirect = cache_frame_frame_httpx$_status_codes$$$function__6_is_redirect;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_status_codes$$$function__6_is_redirect);
assert(Py_REFCNT(frame_frame_httpx$_status_codes$$$function__6_is_redirect) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_value);
tmp_assign_source_1 = par_value;
assert(tmp_comparison_chain_1__operand_2 == NULL);
Py_INCREF(tmp_assign_source_1);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_int_pos_300;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_return_value = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
branch_no_1:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_399;
tmp_return_value = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oo";
    goto try_except_handler_1;
}
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
Py_DECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_status_codes$$$function__6_is_redirect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_status_codes$$$function__6_is_redirect->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_status_codes$$$function__6_is_redirect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_status_codes$$$function__6_is_redirect,
    type_description_1,
    par_cls,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_status_codes$$$function__6_is_redirect == cache_frame_frame_httpx$_status_codes$$$function__6_is_redirect) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_status_codes$$$function__6_is_redirect);
    cache_frame_frame_httpx$_status_codes$$$function__6_is_redirect = NULL;
}

assertFrameObject(frame_frame_httpx$_status_codes$$$function__6_is_redirect);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_status_codes$$$function__7_is_client_error(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_status_codes$$$function__7_is_client_error;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_status_codes$$$function__7_is_client_error = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_status_codes$$$function__7_is_client_error)) {
    Py_XDECREF(cache_frame_frame_httpx$_status_codes$$$function__7_is_client_error);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_status_codes$$$function__7_is_client_error == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_status_codes$$$function__7_is_client_error = MAKE_FUNCTION_FRAME(tstate, code_objects_c36220765c8d2962e70d064a2daf06ed, module_httpx$_status_codes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_status_codes$$$function__7_is_client_error->m_type_description == NULL);
frame_frame_httpx$_status_codes$$$function__7_is_client_error = cache_frame_frame_httpx$_status_codes$$$function__7_is_client_error;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_status_codes$$$function__7_is_client_error);
assert(Py_REFCNT(frame_frame_httpx$_status_codes$$$function__7_is_client_error) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_value);
tmp_assign_source_1 = par_value;
assert(tmp_comparison_chain_1__operand_2 == NULL);
Py_INCREF(tmp_assign_source_1);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_int_pos_400;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_return_value = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
branch_no_1:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_499;
tmp_return_value = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oo";
    goto try_except_handler_1;
}
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
Py_DECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_status_codes$$$function__7_is_client_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_status_codes$$$function__7_is_client_error->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_status_codes$$$function__7_is_client_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_status_codes$$$function__7_is_client_error,
    type_description_1,
    par_cls,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_status_codes$$$function__7_is_client_error == cache_frame_frame_httpx$_status_codes$$$function__7_is_client_error) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_status_codes$$$function__7_is_client_error);
    cache_frame_frame_httpx$_status_codes$$$function__7_is_client_error = NULL;
}

assertFrameObject(frame_frame_httpx$_status_codes$$$function__7_is_client_error);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_status_codes$$$function__8_is_server_error(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_status_codes$$$function__8_is_server_error;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_status_codes$$$function__8_is_server_error = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_status_codes$$$function__8_is_server_error)) {
    Py_XDECREF(cache_frame_frame_httpx$_status_codes$$$function__8_is_server_error);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_status_codes$$$function__8_is_server_error == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_status_codes$$$function__8_is_server_error = MAKE_FUNCTION_FRAME(tstate, code_objects_606e35f6255251fb4126b9bf0eba71a9, module_httpx$_status_codes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_status_codes$$$function__8_is_server_error->m_type_description == NULL);
frame_frame_httpx$_status_codes$$$function__8_is_server_error = cache_frame_frame_httpx$_status_codes$$$function__8_is_server_error;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_status_codes$$$function__8_is_server_error);
assert(Py_REFCNT(frame_frame_httpx$_status_codes$$$function__8_is_server_error) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_value);
tmp_assign_source_1 = par_value;
assert(tmp_comparison_chain_1__operand_2 == NULL);
Py_INCREF(tmp_assign_source_1);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_int_pos_500;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_return_value = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
branch_no_1:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_599;
tmp_return_value = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oo";
    goto try_except_handler_1;
}
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
Py_DECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_status_codes$$$function__8_is_server_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_status_codes$$$function__8_is_server_error->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_status_codes$$$function__8_is_server_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_status_codes$$$function__8_is_server_error,
    type_description_1,
    par_cls,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_status_codes$$$function__8_is_server_error == cache_frame_frame_httpx$_status_codes$$$function__8_is_server_error) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_status_codes$$$function__8_is_server_error);
    cache_frame_frame_httpx$_status_codes$$$function__8_is_server_error = NULL;
}

assertFrameObject(frame_frame_httpx$_status_codes$$$function__8_is_server_error);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_status_codes$$$function__9_is_error(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_status_codes$$$function__9_is_error;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_status_codes$$$function__9_is_error = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_status_codes$$$function__9_is_error)) {
    Py_XDECREF(cache_frame_frame_httpx$_status_codes$$$function__9_is_error);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_status_codes$$$function__9_is_error == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_status_codes$$$function__9_is_error = MAKE_FUNCTION_FRAME(tstate, code_objects_e824234a053f91e145d7a49711540e51, module_httpx$_status_codes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_status_codes$$$function__9_is_error->m_type_description == NULL);
frame_frame_httpx$_status_codes$$$function__9_is_error = cache_frame_frame_httpx$_status_codes$$$function__9_is_error;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_status_codes$$$function__9_is_error);
assert(Py_REFCNT(frame_frame_httpx$_status_codes$$$function__9_is_error) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_value);
tmp_assign_source_1 = par_value;
assert(tmp_comparison_chain_1__operand_2 == NULL);
Py_INCREF(tmp_assign_source_1);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_int_pos_400;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_return_value = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
branch_no_1:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_599;
tmp_return_value = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oo";
    goto try_except_handler_1;
}
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
Py_DECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_status_codes$$$function__9_is_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_status_codes$$$function__9_is_error->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_status_codes$$$function__9_is_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_status_codes$$$function__9_is_error,
    type_description_1,
    par_cls,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_status_codes$$$function__9_is_error == cache_frame_frame_httpx$_status_codes$$$function__9_is_error) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_status_codes$$$function__9_is_error);
    cache_frame_frame_httpx$_status_codes$$$function__9_is_error = NULL;
}

assertFrameObject(frame_frame_httpx$_status_codes$$$function__9_is_error);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_httpx$_status_codes$$$function__1___new__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_status_codes$$$function__1___new__,
        mod_consts.const_str_plain___new__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3f2d1f97eb76d4cdc5762e9f6b1e6d77,
#endif
        code_objects_a861c4f1f2db68a35366fdb6bf32a94f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_status_codes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_status_codes$$$function__2___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_status_codes$$$function__2___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_df19ea293828c49f2bc9747ca20a0309,
#endif
        code_objects_86bf0e9f0b15edd866ec0f2487e90704,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_status_codes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_status_codes$$$function__3_get_reason_phrase(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_status_codes$$$function__3_get_reason_phrase,
        mod_consts.const_str_plain_get_reason_phrase,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_296b9249f6d59afae3f4b4e6a45e811e,
#endif
        code_objects_eecf9473326bfc91f10ce18d26e0adf1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_status_codes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_status_codes$$$function__4_is_informational(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_status_codes$$$function__4_is_informational,
        mod_consts.const_str_plain_is_informational,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_654fa4aa457f72f488e156f15af98ec7,
#endif
        code_objects_f749b6bf90bb6ed93e8555bbfead26d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_status_codes,
        mod_consts.const_str_digest_a1f384549781bbee7a505f6c392b7842,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_status_codes$$$function__5_is_success(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_status_codes$$$function__5_is_success,
        mod_consts.const_str_plain_is_success,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_11fa3bc38f95ececae1495f05a0ede58,
#endif
        code_objects_af2be708401e586329e3872f7062c3a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_status_codes,
        mod_consts.const_str_digest_66c9fffd0c6f9aa2e4bde09ed09471be,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_status_codes$$$function__6_is_redirect(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_status_codes$$$function__6_is_redirect,
        mod_consts.const_str_plain_is_redirect,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_20f550327f89639f8966f8f1b5210e98,
#endif
        code_objects_2a8854df2627a0d8708d0ccfda269324,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_status_codes,
        mod_consts.const_str_digest_ac78374751ed6e995628682e9f06ef28,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_status_codes$$$function__7_is_client_error(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_status_codes$$$function__7_is_client_error,
        mod_consts.const_str_plain_is_client_error,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_23b2181c8d864205a462c6b7a3ed4cf7,
#endif
        code_objects_c36220765c8d2962e70d064a2daf06ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_status_codes,
        mod_consts.const_str_digest_4e74171d9d1f4ed8e31d6a9a067b5720,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_status_codes$$$function__8_is_server_error(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_status_codes$$$function__8_is_server_error,
        mod_consts.const_str_plain_is_server_error,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6a3a08cbfdaeeeb0a176b4ec3d1bb1ab,
#endif
        code_objects_606e35f6255251fb4126b9bf0eba71a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_status_codes,
        mod_consts.const_str_digest_ce4ae8ea6de1fdba6a96c7c905fa5587,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_status_codes$$$function__9_is_error(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_status_codes$$$function__9_is_error,
        mod_consts.const_str_plain_is_error,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_24c7ff1de28c70d5a4fde895fe63b268,
#endif
        code_objects_e824234a053f91e145d7a49711540e51,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_status_codes,
        mod_consts.const_str_digest_34a0b4be859d83924229da7c86f2ee79,
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

static function_impl_code const function_table_httpx$_status_codes[] = {
impl_httpx$_status_codes$$$function__1___new__,
impl_httpx$_status_codes$$$function__2___str__,
impl_httpx$_status_codes$$$function__3_get_reason_phrase,
impl_httpx$_status_codes$$$function__4_is_informational,
impl_httpx$_status_codes$$$function__5_is_success,
impl_httpx$_status_codes$$$function__6_is_redirect,
impl_httpx$_status_codes$$$function__7_is_client_error,
impl_httpx$_status_codes$$$function__8_is_server_error,
impl_httpx$_status_codes$$$function__9_is_error,
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

    return Nuitka_Function_GetFunctionState(function, function_table_httpx$_status_codes);
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
        module_httpx$_status_codes,
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
        function_table_httpx$_status_codes,
        sizeof(function_table_httpx$_status_codes) / sizeof(function_impl_code)
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
static char const *module_full_name = "httpx._status_codes";
#endif

// Internal entry point for module code.
PyObject *module_code_httpx$_status_codes(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpx$_status_codes");

    // Store the module for future use.
    module_httpx$_status_codes = module;

    moduledict_httpx$_status_codes = MODULE_DICT(module_httpx$_status_codes);

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
        PRINT_STRING("httpx$_status_codes: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpx$_status_codes: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("httpx$_status_codes: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "httpx._status_codes" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inithttpx$_status_codes\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_status_codes, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpx$_status_codes,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpx$_status_codes,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_status_codes, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpx$_status_codes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_status_codes, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_status_codes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_status_codes, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_status_codes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpx$_status_codes);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpx$_status_codes, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpx$_status_codes, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_httpx$_status_codes, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpx$_status_codes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_httpx$_status_codes);
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

        UPDATE_STRING_DICT1(moduledict_httpx$_status_codes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_status_codes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_httpx$_status_codes$$$class__1_codes_8 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_httpx$_status_codes$$$class__1_codes_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_httpx$_status_codes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_httpx$_status_codes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_httpx$_status_codes = MAKE_MODULE_FRAME(code_objects_1875941462d27ec7feddc7b71ab2fff2, module_httpx$_status_codes);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_status_codes);
assert(Py_REFCNT(frame_frame_httpx$_status_codes) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_httpx$_status_codes$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_httpx$_status_codes$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_httpx$_status_codes, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_httpx$_status_codes, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_enum;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_status_codes;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_IntEnum_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_httpx$_status_codes->m_frame.f_lineno = 3;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_httpx$_status_codes,
        mod_consts.const_str_plain_IntEnum,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_IntEnum);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_status_codes, (Nuitka_StringObject *)mod_consts.const_str_plain_IntEnum, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_LIST1(tstate, mod_consts.const_str_plain_codes);
UPDATE_STRING_DICT1(moduledict_httpx$_status_codes, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_httpx$_status_codes$IntEnum(tstate);
assert(!(tmp_tuple_element_1 == NULL));
tmp_assign_source_7 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_7, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_8 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
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


exception_lineno = 8;

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
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_10 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_10;
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


exception_lineno = 8;

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
PyObject *tmp_assign_source_11;
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


exception_lineno = 8;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_codes;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpx$_status_codes->m_frame.f_lineno = 8;
tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_11;
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


exception_lineno = 8;

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
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_2 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_2, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
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


exception_lineno = 8;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
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


exception_lineno = 8;

    goto try_except_handler_1;
}
frame_frame_httpx$_status_codes->m_frame.f_lineno = 8;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 8;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_12;
}
branch_end_1:;
{
PyObject *tmp_assign_source_13;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_httpx$_status_codes$$$class__1_codes_8 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a578fdd7d8d21d5019c58e40447c8925;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_438825f567d17a792be3250f13e446c4;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_codes;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_8;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
}
frame_frame_httpx$_status_codes$$$class__1_codes_2 = MAKE_CLASS_FRAME(tstate, code_objects_c96d82c0cc8fd8d1f51abf831b1f01c6, module_httpx$_status_codes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_status_codes$$$class__1_codes_2);
assert(Py_REFCNT(frame_frame_httpx$_status_codes$$$class__1_codes_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_str_empty_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_e5d99d927889862ead4371af45c03280);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_httpx$_status_codes$$$function__1___new__(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain___new__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_httpx$_status_codes$$$function__2___str__(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain___str__, tmp_dictset_value);
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
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_3;
tmp_called_value_2 = PyObject_GetItem(locals_httpx$_status_codes$$$class__1_codes_8, const_str_plain_classmethod);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_0749acbf241160937c1f21eef0cad2b7);

tmp_args_element_value_1 = MAKE_FUNCTION_httpx$_status_codes$$$function__3_get_reason_phrase(tstate, tmp_annotations_3);

frame_frame_httpx$_status_codes$$$class__1_codes_2->m_frame.f_lineno = 38;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_get_reason_phrase, tmp_dictset_value);
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
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_4;
tmp_called_value_3 = PyObject_GetItem(locals_httpx$_status_codes$$$class__1_codes_8, const_str_plain_classmethod);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_337391d960a753f94d657433a6e98b93);

tmp_args_element_value_2 = MAKE_FUNCTION_httpx$_status_codes$$$function__4_is_informational(tstate, tmp_annotations_4);

frame_frame_httpx$_status_codes$$$class__1_codes_2->m_frame.f_lineno = 45;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_is_informational, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_5;
tmp_called_value_4 = PyObject_GetItem(locals_httpx$_status_codes$$$class__1_codes_8, const_str_plain_classmethod);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_337391d960a753f94d657433a6e98b93);

tmp_args_element_value_3 = MAKE_FUNCTION_httpx$_status_codes$$$function__5_is_success(tstate, tmp_annotations_5);

frame_frame_httpx$_status_codes$$$class__1_codes_2->m_frame.f_lineno = 52;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_is_success, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_6;
tmp_called_value_5 = PyObject_GetItem(locals_httpx$_status_codes$$$class__1_codes_8, const_str_plain_classmethod);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_337391d960a753f94d657433a6e98b93);

tmp_args_element_value_4 = MAKE_FUNCTION_httpx$_status_codes$$$function__6_is_redirect(tstate, tmp_annotations_6);

frame_frame_httpx$_status_codes$$$class__1_codes_2->m_frame.f_lineno = 59;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_is_redirect, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_7;
tmp_called_value_6 = PyObject_GetItem(locals_httpx$_status_codes$$$class__1_codes_8, const_str_plain_classmethod);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_337391d960a753f94d657433a6e98b93);

tmp_args_element_value_5 = MAKE_FUNCTION_httpx$_status_codes$$$function__7_is_client_error(tstate, tmp_annotations_7);

frame_frame_httpx$_status_codes$$$class__1_codes_2->m_frame.f_lineno = 66;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_is_client_error, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_8;
tmp_called_value_7 = PyObject_GetItem(locals_httpx$_status_codes$$$class__1_codes_8, const_str_plain_classmethod);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_337391d960a753f94d657433a6e98b93);

tmp_args_element_value_6 = MAKE_FUNCTION_httpx$_status_codes$$$function__8_is_server_error(tstate, tmp_annotations_8);

frame_frame_httpx$_status_codes$$$class__1_codes_2->m_frame.f_lineno = 73;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_is_server_error, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_9;
tmp_called_value_8 = PyObject_GetItem(locals_httpx$_status_codes$$$class__1_codes_8, const_str_plain_classmethod);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_337391d960a753f94d657433a6e98b93);

tmp_args_element_value_7 = MAKE_FUNCTION_httpx$_status_codes$$$function__9_is_error(tstate, tmp_annotations_9);

frame_frame_httpx$_status_codes$$$class__1_codes_2->m_frame.f_lineno = 80;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_is_error, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_100_str_plain_Continue_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_CONTINUE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_101_str_digest_bc5282b34aa0c68d35abe61079030079_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_SWITCHING_PROTOCOLS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_102_str_plain_Processing_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_PROCESSING, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_103_str_digest_956912a40a5bb8ad88162678090519ae_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_EARLY_HINTS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_200_str_plain_OK_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_OK, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_201_str_plain_Created_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_CREATED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_202_str_plain_Accepted_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_ACCEPTED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_203_str_digest_3b851337cb298604f1ce5e0356ac4e3a_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_NON_AUTHORITATIVE_INFORMATION, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_204_str_digest_9021cc6e96b1bfc1e57d999a0c8735a2_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_NO_CONTENT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_205_str_digest_6841cc68cab7f4f19e8b5eb695c40b13_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_RESET_CONTENT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_206_str_digest_8d00317b41dfa6aa4f082c7acb9278f4_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_PARTIAL_CONTENT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_207_str_digest_7e0b9a1cddfafbd6640fb9fb8a7ac274_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_MULTI_STATUS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_208_str_digest_cda4695fdc9f1c2b14c7afb12426d696_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_ALREADY_REPORTED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_226_str_digest_4150b64831efff8f8dc893024d689b37_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_IM_USED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_300_str_digest_8f0fe58367842a41731d31759f12b7bf_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_MULTIPLE_CHOICES, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_301_str_digest_d0a19d862b698ddef8aeb36b1f85cbca_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_MOVED_PERMANENTLY, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_302_str_plain_Found_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_FOUND, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_303_str_digest_c6fccba2ea7d96bb1565ebc128397480_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_SEE_OTHER, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_304_str_digest_b2a9adbcfd46d0c6d63d3db3b04f4345_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_NOT_MODIFIED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_305_str_digest_c05366924bf6e0fa6c478e4f98175e5a_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_USE_PROXY, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_307_str_digest_7ef0c7fd71bd209fe4f4dd33eef26643_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_TEMPORARY_REDIRECT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_308_str_digest_d72895cd077c729a3d12aca363ebcfba_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_PERMANENT_REDIRECT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_400_str_digest_3d9c13d407f4b3356696e4c3e29649f5_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_BAD_REQUEST, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_401_str_plain_Unauthorized_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_UNAUTHORIZED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_402_str_digest_bb4669fbec2f542672d630081e487a8f_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_PAYMENT_REQUIRED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_403_str_plain_Forbidden_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_FORBIDDEN, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_404_str_digest_590d34d18e144bbb4e7aa891fd90a508_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_NOT_FOUND, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_405_str_digest_d16aba6f8d2d642cf40d389a9b21320e_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_METHOD_NOT_ALLOWED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_406_str_digest_b8570c2a73f1e181d70096359d81a3b5_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_NOT_ACCEPTABLE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_407_str_digest_f061f3538382ca61fcb4aec9cf5e555d_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_PROXY_AUTHENTICATION_REQUIRED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_408_str_digest_2504fb4252ae0b69b4d65268f0852bd8_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_REQUEST_TIMEOUT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_409_str_plain_Conflict_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_CONFLICT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_410_str_plain_Gone_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_GONE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_411_str_digest_8caaab99331cbc2df5103433eeb66150_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_LENGTH_REQUIRED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_412_str_digest_cb94de1de8ef42c6e270b278803d0750_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_PRECONDITION_FAILED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_413_str_digest_867381116c1292a4dd4999ab84d8a70d_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_REQUEST_ENTITY_TOO_LARGE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_414_str_digest_9b79cc5ceb4298bbfa5c306c871a9989_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_REQUEST_URI_TOO_LONG, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_415_str_digest_9d53e6301ee796c89374952916a17cba_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_UNSUPPORTED_MEDIA_TYPE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_416_str_digest_b785f69d89f9a2d6d79a9ba9ab980bce_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_REQUESTED_RANGE_NOT_SATISFIABLE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_417_str_digest_9f76b5a0e9a8baf232733a5972de077d_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_EXPECTATION_FAILED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_418_str_digest_5c7a90cea2c0366716c06fcfb012ed7c_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_IM_A_TEAPOT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_421_str_digest_ef227cb2e6d7617e956a0ca0598edadd_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_MISDIRECTED_REQUEST, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_422_str_digest_5e0433a34f823521f3918df7f046597d_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_UNPROCESSABLE_ENTITY, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_423_str_plain_Locked_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_LOCKED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_424_str_digest_4e8888d2a1d6a08b6bdb1db03391071d_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_FAILED_DEPENDENCY, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_425_str_digest_cfeed05275ed46507c3e758123f44e0b_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_TOO_EARLY, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_426_str_digest_491c2ea555686c6848e65962e71854e1_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_UPGRADE_REQUIRED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_428_str_digest_87f8909be9459a2056a89bdf1f8ec18d_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_PRECONDITION_REQUIRED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_429_str_digest_04aff0c65035cbf6a6c3e97d182844d0_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_TOO_MANY_REQUESTS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_431_str_digest_9990b9ba75e94f3e7610aa2b5a303f76_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_REQUEST_HEADER_FIELDS_TOO_LARGE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_451_str_digest_61dacfcb3e2dcd1f7ab4d8e7b2f28473_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_UNAVAILABLE_FOR_LEGAL_REASONS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_500_str_digest_b5df9f114fcfff3ee8b230863c8fd671_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_INTERNAL_SERVER_ERROR, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_501_str_digest_a35029a521a7937ed903cca29d49cf3b_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_NOT_IMPLEMENTED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_502_str_digest_acc5c6f001f872359f46bdda79e652ef_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_BAD_GATEWAY, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_503_str_digest_e8d2761b9824573fc8de08774a31d458_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_SERVICE_UNAVAILABLE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_504_str_digest_648233a7e42e47b7be4bf9f5448245ba_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_GATEWAY_TIMEOUT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_505_str_digest_94f9cad07d6f7a2390120d132442de4d_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_HTTP_VERSION_NOT_SUPPORTED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_506_str_digest_307704fea95df06aa884126d1e2735aa_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_VARIANT_ALSO_NEGOTIATES, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_507_str_digest_1644407947d6ee3f8ef292b3b3940894_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_INSUFFICIENT_STORAGE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_508_str_digest_0d6fa1cf57d3ac762d61712f81998a55_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_LOOP_DETECTED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_510_str_digest_235dbe47fde89fab56885c5dace5192c_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_NOT_EXTENDED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_tuple_int_pos_511_str_digest_3dd10c19c48090a76cef334954d3bb64_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain_NETWORK_AUTHENTICATION_REQUIRED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_status_codes$$$class__1_codes_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_status_codes$$$class__1_codes_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_status_codes$$$class__1_codes_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_status_codes$$$class__1_codes_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_httpx$_status_codes$$$class__1_codes_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
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


exception_lineno = 8;

    goto try_except_handler_3;
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
tmp_res = PyObject_SetItem(locals_httpx$_status_codes$$$class__1_codes_8, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_codes;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_httpx$_status_codes$$$class__1_codes_8;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpx$_status_codes->m_frame.f_lineno = 8;
tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_14;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_13 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_13);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_httpx$_status_codes$$$class__1_codes_8);
locals_httpx$_status_codes$$$class__1_codes_8 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_status_codes$$$class__1_codes_8);
locals_httpx$_status_codes$$$class__1_codes_8 = NULL;
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
exception_lineno = 8;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_httpx$_status_codes, (Nuitka_StringObject *)mod_consts.const_str_plain_codes, tmp_assign_source_13);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_class_container$class_creation_1__bases_orig);
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = module_var_accessor_httpx$_status_codes$codes(tstate);
if (unlikely(tmp_iter_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_codes);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;

    goto frame_exception_exit_1;
}
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_15;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_16 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 161;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_17 = tmp_for_loop_1__iter_value;
UPDATE_STRING_DICT0(moduledict_httpx$_status_codes, (Nuitka_StringObject *)mod_consts.const_str_plain_code, tmp_assign_source_17);
}
{
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_3;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_value_value_1;
PyObject *tmp_int_arg_1;
PyObject *tmp_capi_result_1;
tmp_expression_value_7 = module_var_accessor_httpx$_status_codes$codes(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_codes);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;

    goto try_except_handler_4;
}
tmp_expression_value_9 = module_var_accessor_httpx$_status_codes$code(tstate);
assert(!(tmp_expression_value_9 == NULL));
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__name_);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_4;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_4;
}
frame_frame_httpx$_status_codes->m_frame.f_lineno = 162;
tmp_name_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_name_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_4;
}
tmp_int_arg_1 = module_var_accessor_httpx$_status_codes$code(tstate);
if (unlikely(tmp_int_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_code);
}

if (tmp_int_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_name_value_3);

exception_lineno = 162;

    goto try_except_handler_4;
}
tmp_value_value_1 = PyNumber_Int(tmp_int_arg_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_name_value_3);

exception_lineno = 162;

    goto try_except_handler_4;
}
tmp_capi_result_1 = BUILTIN_SETATTR(tmp_expression_value_7, tmp_name_value_3, tmp_value_value_1);
CHECK_OBJECT(tmp_name_value_3);
Py_DECREF(tmp_name_value_3);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
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

goto frame_exception_exit_1;
// End of try:
try_end_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_status_codes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_status_codes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_status_codes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_httpx$_status_codes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpx$_status_codes", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "httpx._status_codes" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_httpx$_status_codes);
    return module_httpx$_status_codes;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_status_codes, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("httpx$_status_codes", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

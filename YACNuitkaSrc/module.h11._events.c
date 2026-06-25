/* Generated code for Python module 'h11$_events'
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



/* The "module_h11$_events" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_h11$_events;
PyDictObject *moduledict_h11$_events;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Headers;
PyObject *const_str_plain___setattr__;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_normalize_and_validate;
PyObject *const_tuple_str_plain__parsed_tuple;
PyObject *const_str_plain_method;
PyObject *const_str_plain_bytesify;
PyObject *const_str_plain_target;
PyObject *const_str_plain_http_version;
PyObject *const_bytes_digest_22848ea9e10ef7ba5f0e64aa4ac545b0;
PyObject *const_str_plain_host_count;
PyObject *const_bytes_digest_f5f844450bde69e5c8b575fa76761105;
PyObject *const_str_plain_LocalProtocolError;
PyObject *const_tuple_str_digest_bbf5668c4af6f8c2134b5e483612de24_tuple;
PyObject *const_tuple_str_digest_889abe7f86a7580bc5c46e4ce6b44520_tuple;
PyObject *const_str_plain_validate;
PyObject *const_str_plain_method_re;
PyObject *const_str_digest_4f568c31431db8ff52f026171ca2e546;
PyObject *const_str_plain_request_target_re;
PyObject *const_str_digest_5be7c171adcbb8ad7d478cf84768479a;
PyObject *const_str_plain_reason;
PyObject *const_tuple_str_digest_a92f00fa613866fa621e6928aca81bf5_tuple;
PyObject *const_str_plain_status_code;
PyObject *const_str_plain___post_init__;
PyObject *const_int_pos_100;
PyObject *const_int_pos_200;
PyObject *const_str_digest_db6305ceb7efc4c5c81442ac03fdeee0;
PyObject *const_int_pos_1000;
PyObject *const_str_digest_884f2ccbac7f71c65ad7934e21d66ddc;
PyObject *const_str_plain_data;
PyObject *const_str_plain_chunk_start;
PyObject *const_str_plain_chunk_end;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_re;
PyObject *const_str_plain_abc;
PyObject *const_tuple_str_plain_ABC_tuple;
PyObject *const_str_plain_ABC;
PyObject *const_str_plain_dataclasses;
PyObject *const_tuple_str_plain_dataclass_tuple;
PyObject *const_str_plain_dataclass;
PyObject *const_str_plain_List;
PyObject *const_str_plain_Tuple;
PyObject *const_str_plain_Union;
PyObject *const_str_plain__abnf;
PyObject *const_tuple_str_plain_method_str_plain_request_target_tuple;
PyObject *const_str_plain_request_target;
PyObject *const_str_plain__headers;
PyObject *const_tuple_str_plain_Headers_str_plain_normalize_and_validate_tuple;
PyObject *const_str_plain__util;
PyObject *const_tuple_f086bb142100546722808b2f0a37c9f0_tuple;
PyObject *const_list_5b64e946cd114eac0f3cf007559d3321_list;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_plain_ascii_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_Event;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_e26f38130a8284dd2c307c3c7901b51d;
PyObject *const_str_digest_69f837f8e44947c8367f55db4a7cf686;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_32;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain___slots__;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_Request;
PyObject *const_tuple_false_true_tuple;
PyObject *const_tuple_str_plain_init_str_plain_frozen_tuple;
PyObject *const_str_digest_047c177b24cc4b45b8feaf1a79d09a0f;
PyObject *const_int_pos_41;
PyObject *const_tuple_021f852f9b9dab52654c457680705092_tuple;
PyObject *const_dict_11d08d0d445bef62aaf2b7c2c5f75432;
PyObject *const_str_plain_str;
PyObject *const_str_plain__parsed;
PyObject *const_str_plain_bool;
PyObject *const_str_plain_return;
PyObject *const_str_digest_45e22ae6dbd065d35ef185f04e7a930e;
PyObject *const_str_plain___hash__;
PyObject *const_str_plain__ResponseBase;
PyObject *const_int_pos_129;
PyObject *const_tuple_f80fc8afba8d47b5faf120aba136034d_tuple;
PyObject *const_dict_28c12c0c8fb67fdbb30bf5ad583de240;
PyObject *const_str_digest_ffa789540202f0887335bbf1ddedf7bb;
PyObject *const_dict_056a293e2058d56276328e53ff09a8b9;
PyObject *const_str_digest_04a432940cc7da8d3752db0356c8876d;
PyObject *const_str_plain_InformationalResponse;
PyObject *const_str_digest_b94e6e30b083c49ca4d72d0aa4209974;
PyObject *const_int_pos_176;
PyObject *const_str_digest_760b85b39e43cacf663eaa7df0e22947;
PyObject *const_str_plain_Response;
PyObject *const_str_digest_4c46ac43a13e46f19d90f56cb11b5183;
PyObject *const_int_pos_218;
PyObject *const_str_digest_429fdd007cfc7160c64663cfe8b5fa15;
PyObject *const_str_plain_Data;
PyObject *const_str_digest_550b1bc4ed1be9934c0288201a423f91;
PyObject *const_int_pos_260;
PyObject *const_tuple_str_plain_data_str_plain_chunk_start_str_plain_chunk_end_tuple;
PyObject *const_tuple_false_false_tuple;
PyObject *const_str_digest_7b6f2dcaf0f7afb26874dc91eb48fdfd;
PyObject *const_str_plain_EndOfMessage;
PyObject *const_str_digest_fb4bdf8724dbfe77c0376aae5665a1aa;
PyObject *const_int_pos_316;
PyObject *const_tuple_str_plain_headers_tuple;
PyObject *const_dict_f0601e7894c12d9485b82cc5f7a51b20;
PyObject *const_str_digest_46b5de62daa48de82b88132a2bf385fd;
PyObject *const_str_plain_ConnectionClosed;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_frozen_tuple;
PyObject *const_str_digest_3324aef327ca7c69d6afebf5cbfc01b1;
PyObject *const_int_pos_358;
PyObject *const_str_digest_e03f9fe91cda68110b036489b3f510f9;
PyObject *const_str_digest_37b085b65ce7d132ae02a2547b5cc063;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_10ff0237797475df7aea5fb9308e601f_tuple;
PyObject *const_tuple_0756cab06b31089489830636b406e5b0_tuple;
PyObject *const_tuple_6114876afa41fcdc5edace6d60c0df55_tuple;
PyObject *const_tuple_4f9f9523e46a5c1955325e008d730984_tuple;
PyObject *const_tuple_str_plain_self_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[120];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("h11._events"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Headers);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain___setattr__);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_and_validate);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__parsed_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_bytesify);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_target);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_version);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_22848ea9e10ef7ba5f0e64aa4ac545b0);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_host_count);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_f5f844450bde69e5c8b575fa76761105);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_LocalProtocolError);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_bbf5668c4af6f8c2134b5e483612de24_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_889abe7f86a7580bc5c46e4ce6b44520_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_method_re);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f568c31431db8ff52f026171ca2e546);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_target_re);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_5be7c171adcbb8ad7d478cf84768479a);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_reason);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a92f00fa613866fa621e6928aca81bf5_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_code);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain___post_init__);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_int_pos_100);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_int_pos_200);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_db6305ceb7efc4c5c81442ac03fdeee0);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_int_pos_1000);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_884f2ccbac7f71c65ad7934e21d66ddc);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_start);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_end);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABC_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABC);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_List);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain__abnf);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_method_str_plain_request_target_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_target);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain__headers);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Headers_str_plain_normalize_and_validate_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__util);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_f086bb142100546722808b2f0a37c9f0_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_list_5b64e946cd114eac0f3cf007559d3321_list);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_Event);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_e26f38130a8284dd2c307c3c7901b51d);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_69f837f8e44947c8367f55db4a7cf686);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain___slots__);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_Request);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_false_true_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_init_str_plain_frozen_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_047c177b24cc4b45b8feaf1a79d09a0f);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_int_pos_41);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_021f852f9b9dab52654c457680705092_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_dict_11d08d0d445bef62aaf2b7c2c5f75432);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain__parsed);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_45e22ae6dbd065d35ef185f04e7a930e);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain___hash__);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain__ResponseBase);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_int_pos_129);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_f80fc8afba8d47b5faf120aba136034d_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_dict_28c12c0c8fb67fdbb30bf5ad583de240);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_ffa789540202f0887335bbf1ddedf7bb);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_04a432940cc7da8d3752db0356c8876d);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_InformationalResponse);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_b94e6e30b083c49ca4d72d0aa4209974);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_int_pos_176);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_760b85b39e43cacf663eaa7df0e22947);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c46ac43a13e46f19d90f56cb11b5183);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_int_pos_218);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_429fdd007cfc7160c64663cfe8b5fa15);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_Data);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_550b1bc4ed1be9934c0288201a423f91);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_int_pos_260);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_chunk_start_str_plain_chunk_end_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_false_false_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b6f2dcaf0f7afb26874dc91eb48fdfd);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_EndOfMessage);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb4bdf8724dbfe77c0376aae5665a1aa);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_int_pos_316);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_dict_f0601e7894c12d9485b82cc5f7a51b20);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_46b5de62daa48de82b88132a2bf385fd);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionClosed);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_frozen_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_3324aef327ca7c69d6afebf5cbfc01b1);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_int_pos_358);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_e03f9fe91cda68110b036489b3f510f9);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_37b085b65ce7d132ae02a2547b5cc063);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_10ff0237797475df7aea5fb9308e601f_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_0756cab06b31089489830636b406e5b0_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_6114876afa41fcdc5edace6d60c0df55_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_4f9f9523e46a5c1955325e008d730984_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
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
void checkModuleConstants_h11$_events(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Headers);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain___setattr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___setattr__);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_and_validate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalize_and_validate);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__parsed_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__parsed_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_bytesify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bytesify);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_target));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_target);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_version);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_22848ea9e10ef7ba5f0e64aa4ac545b0));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_22848ea9e10ef7ba5f0e64aa4ac545b0);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_host_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_host_count);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_f5f844450bde69e5c8b575fa76761105));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_f5f844450bde69e5c8b575fa76761105);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_LocalProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LocalProtocolError);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_bbf5668c4af6f8c2134b5e483612de24_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_bbf5668c4af6f8c2134b5e483612de24_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_889abe7f86a7580bc5c46e4ce6b44520_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_889abe7f86a7580bc5c46e4ce6b44520_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_method_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method_re);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f568c31431db8ff52f026171ca2e546));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f568c31431db8ff52f026171ca2e546);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_target_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request_target_re);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_5be7c171adcbb8ad7d478cf84768479a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5be7c171adcbb8ad7d478cf84768479a);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_reason));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reason);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a92f00fa613866fa621e6928aca81bf5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a92f00fa613866fa621e6928aca81bf5_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_code);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain___post_init__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___post_init__);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_int_pos_100));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_100);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_int_pos_200));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_200);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_db6305ceb7efc4c5c81442ac03fdeee0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db6305ceb7efc4c5c81442ac03fdeee0);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_int_pos_1000));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1000);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_884f2ccbac7f71c65ad7934e21d66ddc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_884f2ccbac7f71c65ad7934e21d66ddc);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunk_start);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_end));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunk_end);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABC_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ABC_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABC);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclasses);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dataclass_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclass);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_List));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_List);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain__abnf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__abnf);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_method_str_plain_request_target_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_method_str_plain_request_target_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_target));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request_target);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain__headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__headers);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Headers_str_plain_normalize_and_validate_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Headers_str_plain_normalize_and_validate_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__util));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__util);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_f086bb142100546722808b2f0a37c9f0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f086bb142100546722808b2f0a37c9f0_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_list_5b64e946cd114eac0f3cf007559d3321_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_5b64e946cd114eac0f3cf007559d3321_list);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ascii_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_Event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Event);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_e26f38130a8284dd2c307c3c7901b51d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e26f38130a8284dd2c307c3c7901b51d);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_69f837f8e44947c8367f55db4a7cf686));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_69f837f8e44947c8367f55db4a7cf686);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_int_pos_32));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_32);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain___slots__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___slots__);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_Request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Request);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_false_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_true_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_init_str_plain_frozen_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_init_str_plain_frozen_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_047c177b24cc4b45b8feaf1a79d09a0f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_047c177b24cc4b45b8feaf1a79d09a0f);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_int_pos_41));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_41);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_021f852f9b9dab52654c457680705092_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_021f852f9b9dab52654c457680705092_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_dict_11d08d0d445bef62aaf2b7c2c5f75432));
CHECK_OBJECT_DEEP(mod_consts.const_dict_11d08d0d445bef62aaf2b7c2c5f75432);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain__parsed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__parsed);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_45e22ae6dbd065d35ef185f04e7a930e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45e22ae6dbd065d35ef185f04e7a930e);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain___hash__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___hash__);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain__ResponseBase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ResponseBase);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_int_pos_129));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_129);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_f80fc8afba8d47b5faf120aba136034d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f80fc8afba8d47b5faf120aba136034d_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_dict_28c12c0c8fb67fdbb30bf5ad583de240));
CHECK_OBJECT_DEEP(mod_consts.const_dict_28c12c0c8fb67fdbb30bf5ad583de240);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_ffa789540202f0887335bbf1ddedf7bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ffa789540202f0887335bbf1ddedf7bb);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_04a432940cc7da8d3752db0356c8876d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04a432940cc7da8d3752db0356c8876d);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_InformationalResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InformationalResponse);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_b94e6e30b083c49ca4d72d0aa4209974));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b94e6e30b083c49ca4d72d0aa4209974);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_int_pos_176));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_176);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_760b85b39e43cacf663eaa7df0e22947));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_760b85b39e43cacf663eaa7df0e22947);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Response);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c46ac43a13e46f19d90f56cb11b5183));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4c46ac43a13e46f19d90f56cb11b5183);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_int_pos_218));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_218);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_429fdd007cfc7160c64663cfe8b5fa15));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_429fdd007cfc7160c64663cfe8b5fa15);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_Data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Data);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_550b1bc4ed1be9934c0288201a423f91));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_550b1bc4ed1be9934c0288201a423f91);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_int_pos_260));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_260);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_chunk_start_str_plain_chunk_end_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_data_str_plain_chunk_start_str_plain_chunk_end_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_false_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_false_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b6f2dcaf0f7afb26874dc91eb48fdfd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b6f2dcaf0f7afb26874dc91eb48fdfd);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_EndOfMessage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EndOfMessage);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb4bdf8724dbfe77c0376aae5665a1aa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb4bdf8724dbfe77c0376aae5665a1aa);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_int_pos_316));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_316);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_headers_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_dict_f0601e7894c12d9485b82cc5f7a51b20));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f0601e7894c12d9485b82cc5f7a51b20);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_46b5de62daa48de82b88132a2bf385fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_46b5de62daa48de82b88132a2bf385fd);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionClosed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionClosed);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_frozen_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_frozen_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_3324aef327ca7c69d6afebf5cbfc01b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3324aef327ca7c69d6afebf5cbfc01b1);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_int_pos_358));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_358);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_e03f9fe91cda68110b036489b3f510f9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e03f9fe91cda68110b036489b3f510f9);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_37b085b65ce7d132ae02a2547b5cc063));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37b085b65ce7d132ae02a2547b5cc063);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_10ff0237797475df7aea5fb9308e601f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_10ff0237797475df7aea5fb9308e601f_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_0756cab06b31089489830636b406e5b0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0756cab06b31089489830636b406e5b0_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_6114876afa41fcdc5edace6d60c0df55_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6114876afa41fcdc5edace6d60c0df55_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_4f9f9523e46a5c1955325e008d730984_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4f9f9523e46a5c1955325e008d730984_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 18
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
static PyObject *module_var_accessor_h11$_events$ABC(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ABC);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ABC, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ABC);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ABC, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_events$Event(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Event);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Event, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Event);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Event, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_events$Headers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Headers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Headers);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Headers, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Headers);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Headers, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Headers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Headers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Headers);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_events$List(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_events->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_events$LocalProtocolError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LocalProtocolError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LocalProtocolError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LocalProtocolError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LocalProtocolError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_events$Tuple(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_events->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_events$Union(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_events->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_events$_ResponseBase(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain__ResponseBase);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ResponseBase);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ResponseBase, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ResponseBase);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ResponseBase, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain__ResponseBase);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain__ResponseBase);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ResponseBase);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_events$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_events->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_events$bytesify(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_bytesify);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_bytesify);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_bytesify, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_bytesify);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_bytesify, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_bytesify);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_bytesify);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_bytesify);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_events$dataclass(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclass);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclass, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclass);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclass, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_events$method(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_method);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_method);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_method, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_method);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_method, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_method);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_method);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_method);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_events$method_re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_method_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_method_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_method_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_method_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_method_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_method_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_method_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_method_re);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_events$normalize_and_validate(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_and_validate);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_normalize_and_validate);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_normalize_and_validate, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_normalize_and_validate);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_normalize_and_validate, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_and_validate);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_and_validate);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_and_validate);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_events$re(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_events->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_events$request_target(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_request_target);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_request_target);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_request_target, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_request_target);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_request_target, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_request_target);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_request_target);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_request_target);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_events$request_target_re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_request_target_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_request_target_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_request_target_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_request_target_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_request_target_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_request_target_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_request_target_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_request_target_re);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_events$validate(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_validate);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_validate);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_validate, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_validate);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_validate, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_validate);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_validate);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_validate);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f9e5404fe72525b31a41d7684521fa88;
static PyCodeObject *code_objects_826708c4f70f29cd8fdef3552660fbbe;
static PyCodeObject *code_objects_c93b1a4a6b9e7f79a59e029db0204be1;
static PyCodeObject *code_objects_c3a4ba7884ec25192b7642ef1cbe7123;
static PyCodeObject *code_objects_81a41de01b96b4913dc3259038e2160f;
static PyCodeObject *code_objects_e7580cb94beba4f1efcfebcd718507c1;
static PyCodeObject *code_objects_d647f8348f45ac556ed3b37e9ca42dab;
static PyCodeObject *code_objects_3251de63039a3105ced465380c91633f;
static PyCodeObject *code_objects_7abe5cb617107fdb1a640da3ef95ea3c;
static PyCodeObject *code_objects_b16659abb712140742daa19a6670725c;
static PyCodeObject *code_objects_7647baadbf099f8e0c864758bad5f9dd;
static PyCodeObject *code_objects_c78ce9c1e98f192a11a211f10290a8ce;
static PyCodeObject *code_objects_5abb01e3b7a6ec23927a602c18745b04;
static PyCodeObject *code_objects_587cc84ddb4c94a00a612c621abd91ab;
static PyCodeObject *code_objects_445b91e86f1755173da4be25f2f4f413;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_e03f9fe91cda68110b036489b3f510f9); CHECK_OBJECT(module_filename_obj);
code_objects_f9e5404fe72525b31a41d7684521fa88 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_37b085b65ce7d132ae02a2547b5cc063, mod_consts.const_str_digest_37b085b65ce7d132ae02a2547b5cc063, NULL, NULL, 0, 0, 0);
code_objects_826708c4f70f29cd8fdef3552660fbbe = MAKE_CODE_OBJECT(module_filename_obj, 260, 0, mod_consts.const_str_plain_Data, mod_consts.const_str_plain_Data, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c93b1a4a6b9e7f79a59e029db0204be1 = MAKE_CODE_OBJECT(module_filename_obj, 316, 0, mod_consts.const_str_plain_EndOfMessage, mod_consts.const_str_plain_EndOfMessage, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c3a4ba7884ec25192b7642ef1cbe7123 = MAKE_CODE_OBJECT(module_filename_obj, 32, 0, mod_consts.const_str_plain_Event, mod_consts.const_str_plain_Event, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_81a41de01b96b4913dc3259038e2160f = MAKE_CODE_OBJECT(module_filename_obj, 176, 0, mod_consts.const_str_plain_InformationalResponse, mod_consts.const_str_plain_InformationalResponse, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e7580cb94beba4f1efcfebcd718507c1 = MAKE_CODE_OBJECT(module_filename_obj, 41, 0, mod_consts.const_str_plain_Request, mod_consts.const_str_plain_Request, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d647f8348f45ac556ed3b37e9ca42dab = MAKE_CODE_OBJECT(module_filename_obj, 218, 0, mod_consts.const_str_plain_Response, mod_consts.const_str_plain_Response, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_3251de63039a3105ced465380c91633f = MAKE_CODE_OBJECT(module_filename_obj, 129, 0, mod_consts.const_str_plain__ResponseBase, mod_consts.const_str_plain__ResponseBase, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7abe5cb617107fdb1a640da3ef95ea3c = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_7b6f2dcaf0f7afb26874dc91eb48fdfd, mod_consts.const_tuple_10ff0237797475df7aea5fb9308e601f_tuple, NULL, 4, 0, 0);
code_objects_b16659abb712140742daa19a6670725c = MAKE_CODE_OBJECT(module_filename_obj, 337, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_46b5de62daa48de82b88132a2bf385fd, mod_consts.const_tuple_0756cab06b31089489830636b406e5b0_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 2, 0);
code_objects_7647baadbf099f8e0c864758bad5f9dd = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_45e22ae6dbd065d35ef185f04e7a930e, mod_consts.const_tuple_6114876afa41fcdc5edace6d60c0df55_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 5, 0);
code_objects_c78ce9c1e98f192a11a211f10290a8ce = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_ffa789540202f0887335bbf1ddedf7bb, mod_consts.const_tuple_4f9f9523e46a5c1955325e008d730984_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 5, 0);
code_objects_5abb01e3b7a6ec23927a602c18745b04 = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___post_init__, mod_consts.const_str_digest_760b85b39e43cacf663eaa7df0e22947, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_587cc84ddb4c94a00a612c621abd91ab = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___post_init__, mod_consts.const_str_digest_429fdd007cfc7160c64663cfe8b5fa15, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_445b91e86f1755173da4be25f2f4f413 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___post_init__, mod_consts.const_str_digest_04a432940cc7da8d3752db0356c8876d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_h11$_events$$$function__1___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_h11$_events$$$function__2___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_h11$_events$$$function__3___post_init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_events$$$function__4___post_init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_events$$$function__5___post_init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_events$$$function__6___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_events$$$function__7___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_h11$_events$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_method = python_pars[1];
PyObject *par_headers = python_pars[2];
PyObject *par_target = python_pars[3];
PyObject *par_http_version = python_pars[4];
PyObject *par__parsed = python_pars[5];
PyObject *var_host_count = NULL;
PyObject *var_name = NULL;
PyObject *var_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_events$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_events$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_events$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_h11$_events$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_events$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_events$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7647baadbf099f8e0c864758bad5f9dd, module_h11$_events, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_events$$$function__1___init__->m_type_description == NULL);
frame_frame_h11$_events$$$function__1___init__ = cache_frame_frame_h11$_events$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_events$$$function__1___init__);
assert(Py_REFCNT(frame_frame_h11$_events$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 91;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_h11$_events, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_h11$_events$$$function__1___init__->m_frame.f_lineno = 91;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_headers);
tmp_isinstance_inst_1 = par_headers;
tmp_isinstance_cls_1 = module_var_accessor_h11$_events$Headers(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Headers);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_2 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
tmp_args_element_value_2 = mod_consts.const_str_plain_headers;
CHECK_OBJECT(par_headers);
tmp_args_element_value_3 = par_headers;
frame_frame_h11$_events$$$function__1___init__->m_frame.f_lineno = 93;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain___setattr__,
        call_args
    );
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_1 = (PyObject *)&PyBaseObject_Type;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___setattr__);
assert(!(tmp_called_value_1 == NULL));
CHECK_OBJECT(par_self);
tmp_args_element_value_4 = par_self;
tmp_args_element_value_5 = mod_consts.const_str_plain_headers;
tmp_called_value_2 = module_var_accessor_h11$_events$normalize_and_validate(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_normalize_and_validate);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 96;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_headers);
tmp_kw_call_arg_value_0_1 = par_headers;
CHECK_OBJECT(par__parsed);
tmp_kw_call_dict_value_0_1 = par__parsed;
frame_frame_h11$_events$$$function__1___init__->m_frame.f_lineno = 96;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain__parsed_tuple);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 96;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_h11$_events$$$function__1___init__->m_frame.f_lineno = 95;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_end_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par__parsed);
tmp_operand_value_1 = par__parsed;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooooooc";
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_10;
tmp_expression_value_2 = (PyObject *)&PyBaseObject_Type;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___setattr__);
assert(!(tmp_called_value_3 == NULL));
CHECK_OBJECT(par_self);
tmp_args_element_value_7 = par_self;
tmp_args_element_value_8 = mod_consts.const_str_plain_method;
tmp_called_value_4 = module_var_accessor_h11$_events$bytesify(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bytesify);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 99;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_method);
tmp_args_element_value_10 = par_method;
frame_frame_h11$_events$$$function__1___init__->m_frame.f_lineno = 99;
tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_10);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 99;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_h11$_events$$$function__1___init__->m_frame.f_lineno = 99;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_14;
tmp_expression_value_3 = (PyObject *)&PyBaseObject_Type;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___setattr__);
assert(!(tmp_called_value_5 == NULL));
CHECK_OBJECT(par_self);
tmp_args_element_value_11 = par_self;
tmp_args_element_value_12 = mod_consts.const_str_plain_target;
tmp_called_value_6 = module_var_accessor_h11$_events$bytesify(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bytesify);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 100;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_target);
tmp_args_element_value_14 = par_target;
frame_frame_h11$_events$$$function__1___init__->m_frame.f_lineno = 100;
tmp_args_element_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_14);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 100;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_h11$_events$$$function__1___init__->m_frame.f_lineno = 100;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_18;
tmp_expression_value_4 = (PyObject *)&PyBaseObject_Type;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___setattr__);
assert(!(tmp_called_value_7 == NULL));
CHECK_OBJECT(par_self);
tmp_args_element_value_15 = par_self;
tmp_args_element_value_16 = mod_consts.const_str_plain_http_version;
tmp_called_value_8 = module_var_accessor_h11$_events$bytesify(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bytesify);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 101;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_http_version);
tmp_args_element_value_18 = par_http_version;
frame_frame_h11$_events$$$function__1___init__->m_frame.f_lineno = 101;
tmp_args_element_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_18);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 101;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_h11$_events$$$function__1___init__->m_frame.f_lineno = 101;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
tmp_called_instance_3 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_self);
tmp_args_element_value_19 = par_self;
tmp_args_element_value_20 = mod_consts.const_str_plain_method;
CHECK_OBJECT(par_method);
tmp_args_element_value_21 = par_method;
frame_frame_h11$_events$$$function__1___init__->m_frame.f_lineno = 103;
{
    PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_call_result_7 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain___setattr__,
        call_args
    );
}

if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
tmp_called_instance_4 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_self);
tmp_args_element_value_22 = par_self;
tmp_args_element_value_23 = mod_consts.const_str_plain_target;
CHECK_OBJECT(par_target);
tmp_args_element_value_24 = par_target;
frame_frame_h11$_events$$$function__1___init__->m_frame.f_lineno = 104;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
    tmp_call_result_8 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain___setattr__,
        call_args
    );
}

if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_25;
PyObject *tmp_args_element_value_26;
PyObject *tmp_args_element_value_27;
tmp_called_instance_5 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_self);
tmp_args_element_value_25 = par_self;
tmp_args_element_value_26 = mod_consts.const_str_plain_http_version;
CHECK_OBJECT(par_http_version);
tmp_args_element_value_27 = par_http_version;
frame_frame_h11$_events$$$function__1___init__->m_frame.f_lineno = 105;
{
    PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
    tmp_call_result_9 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_5,
        mod_consts.const_str_plain___setattr__,
        call_args
    );
}

if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
branch_end_2:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_int_0;
assert(var_host_count == NULL);
Py_INCREF(tmp_assign_source_1);
var_host_count = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_headers);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooc";
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
type_description_1 = "oooooooooc";
exception_lineno = 113;
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


exception_lineno = 113;
type_description_1 = "oooooooooc";
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



exception_lineno = 113;
type_description_1 = "oooooooooc";
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



exception_lineno = 113;
type_description_1 = "oooooooooc";
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



exception_lineno = 113;
type_description_1 = "oooooooooc";
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
    PyObject *old = var_name;
    var_name = tmp_assign_source_7;
    Py_INCREF(var_name);
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
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_name);
tmp_cmp_expr_left_1 = var_name;
tmp_cmp_expr_right_1 = mod_consts.const_bytes_digest_22848ea9e10ef7ba5f0e64aa4ac545b0;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooooooc";
    goto try_except_handler_2;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_host_count == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 115;
type_description_1 = "oooooooooc";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_1 = var_host_count;
tmp_iadd_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooooooooc";
    goto try_except_handler_2;
}
tmp_assign_source_9 = tmp_iadd_expr_left_1;
var_host_count = tmp_assign_source_9;

}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooc";
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
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_http_version);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_bytes_digest_f5f844450bde69e5c8b575fa76761105;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (var_host_count == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 116;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_3 = var_host_count;
tmp_cmp_expr_right_3 = const_int_0;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_9;
tmp_called_value_9 = module_var_accessor_h11$_events$LocalProtocolError(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_h11$_events$$$function__1___init__->m_frame.f_lineno = 117;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_digest_bbf5668c4af6f8c2134b5e483612de24_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 117;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooc";
goto frame_exception_exit_1;
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
if (var_host_count == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 118;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_4 = var_host_count;
tmp_cmp_expr_right_4 = const_int_pos_1;
tmp_condition_result_5 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_10;
tmp_called_value_10 = module_var_accessor_h11$_events$LocalProtocolError(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_h11$_events$$$function__1___init__->m_frame.f_lineno = 119;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_str_digest_889abe7f86a7580bc5c46e4ce6b44520_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 119;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooc";
goto frame_exception_exit_1;
}
branch_no_5:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_10;
PyObject *tmp_args_element_value_28;
PyObject *tmp_args_element_value_29;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_30;
tmp_called_value_11 = module_var_accessor_h11$_events$validate(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_validate);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_28 = module_var_accessor_h11$_events$method_re(tstate);
if (unlikely(tmp_args_element_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_method_re);
}

if (tmp_args_element_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_method);
if (tmp_args_element_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_30 = mod_consts.const_str_digest_4f568c31431db8ff52f026171ca2e546;
frame_frame_h11$_events$$$function__1___init__->m_frame.f_lineno = 121;
{
    PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_args_element_value_29);
Py_DECREF(tmp_args_element_value_29);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_11;
PyObject *tmp_args_element_value_31;
PyObject *tmp_args_element_value_32;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_33;
tmp_called_value_12 = module_var_accessor_h11$_events$validate(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_validate);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_31 = module_var_accessor_h11$_events$request_target_re(tstate);
if (unlikely(tmp_args_element_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request_target_re);
}

if (tmp_args_element_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_args_element_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_target);
if (tmp_args_element_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_33 = mod_consts.const_str_digest_5be7c171adcbb8ad7d478cf84768479a;
frame_frame_h11$_events$$$function__1___init__->m_frame.f_lineno = 122;
{
    PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33};
    tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_args_element_value_32);
Py_DECREF(tmp_args_element_value_32);
if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_events$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_events$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_events$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_events$$$function__1___init__,
    type_description_1,
    par_self,
    par_method,
    par_headers,
    par_target,
    par_http_version,
    par__parsed,
    var_host_count,
    var_name,
    var_value,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_h11$_events$$$function__1___init__ == cache_frame_frame_h11$_events$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_events$$$function__1___init__);
    cache_frame_frame_h11$_events$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_h11$_events$$$function__1___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_host_count);
var_host_count = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_host_count);
var_host_count = NULL;
Py_XDECREF(var_name);
var_name = NULL;
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
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_target);
Py_DECREF(par_target);
CHECK_OBJECT(par_http_version);
Py_DECREF(par_http_version);
CHECK_OBJECT(par__parsed);
Py_DECREF(par__parsed);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_target);
Py_DECREF(par_target);
CHECK_OBJECT(par_http_version);
Py_DECREF(par_http_version);
CHECK_OBJECT(par__parsed);
Py_DECREF(par__parsed);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_events$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_headers = python_pars[1];
PyObject *par_status_code = python_pars[2];
PyObject *par_http_version = python_pars[3];
PyObject *par_reason = python_pars[4];
PyObject *par__parsed = python_pars[5];
struct Nuitka_FrameObject *frame_frame_h11$_events$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_events$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_events$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_h11$_events$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_events$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_events$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c78ce9c1e98f192a11a211f10290a8ce, module_h11$_events, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_events$$$function__2___init__->m_type_description == NULL);
frame_frame_h11$_events$$$function__2___init__ = cache_frame_frame_h11$_events$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_events$$$function__2___init__);
assert(Py_REFCNT(frame_frame_h11$_events$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 146;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_h11$_events, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
frame_frame_h11$_events$$$function__2___init__->m_frame.f_lineno = 146;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_headers);
tmp_isinstance_inst_1 = par_headers;
tmp_isinstance_cls_1 = module_var_accessor_h11$_events$Headers(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Headers);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_2 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
tmp_args_element_value_2 = mod_consts.const_str_plain_headers;
CHECK_OBJECT(par_headers);
tmp_args_element_value_3 = par_headers;
frame_frame_h11$_events$$$function__2___init__->m_frame.f_lineno = 148;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain___setattr__,
        call_args
    );
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_1 = (PyObject *)&PyBaseObject_Type;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___setattr__);
assert(!(tmp_called_value_1 == NULL));
CHECK_OBJECT(par_self);
tmp_args_element_value_4 = par_self;
tmp_args_element_value_5 = mod_consts.const_str_plain_headers;
tmp_called_value_2 = module_var_accessor_h11$_events$normalize_and_validate(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_normalize_and_validate);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 151;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_headers);
tmp_kw_call_arg_value_0_1 = par_headers;
CHECK_OBJECT(par__parsed);
tmp_kw_call_dict_value_0_1 = par__parsed;
frame_frame_h11$_events$$$function__2___init__->m_frame.f_lineno = 151;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain__parsed_tuple);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 151;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
frame_frame_h11$_events$$$function__2___init__->m_frame.f_lineno = 150;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_end_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par__parsed);
tmp_operand_value_1 = par__parsed;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooc";
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_10;
tmp_expression_value_2 = (PyObject *)&PyBaseObject_Type;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___setattr__);
assert(!(tmp_called_value_3 == NULL));
CHECK_OBJECT(par_self);
tmp_args_element_value_7 = par_self;
tmp_args_element_value_8 = mod_consts.const_str_plain_reason;
tmp_called_value_4 = module_var_accessor_h11$_events$bytesify(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bytesify);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 154;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_reason);
tmp_args_element_value_10 = par_reason;
frame_frame_h11$_events$$$function__2___init__->m_frame.f_lineno = 154;
tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_10);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 154;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
frame_frame_h11$_events$$$function__2___init__->m_frame.f_lineno = 154;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_14;
tmp_expression_value_3 = (PyObject *)&PyBaseObject_Type;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___setattr__);
assert(!(tmp_called_value_5 == NULL));
CHECK_OBJECT(par_self);
tmp_args_element_value_11 = par_self;
tmp_args_element_value_12 = mod_consts.const_str_plain_http_version;
tmp_called_value_6 = module_var_accessor_h11$_events$bytesify(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bytesify);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 155;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_http_version);
tmp_args_element_value_14 = par_http_version;
frame_frame_h11$_events$$$function__2___init__->m_frame.f_lineno = 155;
tmp_args_element_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_14);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 155;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
frame_frame_h11$_events$$$function__2___init__->m_frame.f_lineno = 155;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_status_code);
tmp_isinstance_inst_2 = par_status_code;
tmp_isinstance_cls_2 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_7;
tmp_called_value_7 = module_var_accessor_h11$_events$LocalProtocolError(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
frame_frame_h11$_events$$$function__2___init__->m_frame.f_lineno = 157;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_digest_a92f00fa613866fa621e6928aca81bf5_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 157;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooc";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
PyObject *tmp_int_arg_1;
tmp_expression_value_4 = (PyObject *)&PyBaseObject_Type;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___setattr__);
assert(!(tmp_called_value_8 == NULL));
CHECK_OBJECT(par_self);
tmp_args_element_value_15 = par_self;
tmp_args_element_value_16 = mod_consts.const_str_plain_status_code;
CHECK_OBJECT(par_status_code);
tmp_int_arg_1 = par_status_code;
tmp_args_element_value_17 = PyNumber_Int(tmp_int_arg_1);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 160;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
frame_frame_h11$_events$$$function__2___init__->m_frame.f_lineno = 160;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
tmp_called_instance_3 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_self);
tmp_args_element_value_18 = par_self;
tmp_args_element_value_19 = mod_consts.const_str_plain_reason;
CHECK_OBJECT(par_reason);
tmp_args_element_value_20 = par_reason;
frame_frame_h11$_events$$$function__2___init__->m_frame.f_lineno = 162;
{
    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_call_result_7 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain___setattr__,
        call_args
    );
}

if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
tmp_called_instance_4 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_self);
tmp_args_element_value_21 = par_self;
tmp_args_element_value_22 = mod_consts.const_str_plain_http_version;
CHECK_OBJECT(par_http_version);
tmp_args_element_value_23 = par_http_version;
frame_frame_h11$_events$$$function__2___init__->m_frame.f_lineno = 163;
{
    PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_call_result_8 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain___setattr__,
        call_args
    );
}

if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
PyObject *tmp_args_element_value_26;
tmp_called_instance_5 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_self);
tmp_args_element_value_24 = par_self;
tmp_args_element_value_25 = mod_consts.const_str_plain_status_code;
CHECK_OBJECT(par_status_code);
tmp_args_element_value_26 = par_status_code;
frame_frame_h11$_events$$$function__2___init__->m_frame.f_lineno = 164;
{
    PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
    tmp_call_result_9 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_5,
        mod_consts.const_str_plain___setattr__,
        call_args
    );
}

if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
branch_end_2:;
{
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_10;
CHECK_OBJECT(par_self);
tmp_called_instance_6 = par_self;
frame_frame_h11$_events$$$function__2___init__->m_frame.f_lineno = 166;
tmp_call_result_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain___post_init__);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_events$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_events$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_events$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_events$$$function__2___init__,
    type_description_1,
    par_self,
    par_headers,
    par_status_code,
    par_http_version,
    par_reason,
    par__parsed,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_h11$_events$$$function__2___init__ == cache_frame_frame_h11$_events$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_events$$$function__2___init__);
    cache_frame_frame_h11$_events$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_h11$_events$$$function__2___init__);

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
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_status_code);
Py_DECREF(par_status_code);
CHECK_OBJECT(par_http_version);
Py_DECREF(par_http_version);
CHECK_OBJECT(par_reason);
Py_DECREF(par_reason);
CHECK_OBJECT(par__parsed);
Py_DECREF(par__parsed);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_status_code);
Py_DECREF(par_status_code);
CHECK_OBJECT(par_http_version);
Py_DECREF(par_http_version);
CHECK_OBJECT(par_reason);
Py_DECREF(par_reason);
CHECK_OBJECT(par__parsed);
Py_DECREF(par__parsed);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_events$$$function__4___post_init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_events$$$function__4___post_init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_events$$$function__4___post_init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_events$$$function__4___post_init__)) {
    Py_XDECREF(cache_frame_frame_h11$_events$$$function__4___post_init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_events$$$function__4___post_init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_events$$$function__4___post_init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5abb01e3b7a6ec23927a602c18745b04, module_h11$_events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_events$$$function__4___post_init__->m_type_description == NULL);
frame_frame_h11$_events$$$function__4___post_init__ = cache_frame_frame_h11$_events$$$function__4___post_init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_events$$$function__4___post_init__);
assert(Py_REFCNT(frame_frame_h11$_events$$$function__4___post_init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_status_code);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__operand_2 == NULL);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
}
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


exception_lineno = 207;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_operand_value_1);
goto try_return_handler_1;
branch_no_2:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_200;
tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "o";
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

Py_XDECREF(tmp_comparison_chain_1__operand_2);
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
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_h11$_events$LocalProtocolError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 208;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_db6305ceb7efc4c5c81442ac03fdeee0;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_status_code);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_h11$_events$$$function__4___post_init__->m_frame.f_lineno = 209;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_h11$_events$$$function__4___post_init__->m_frame.f_lineno = 208;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 208;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_events$$$function__4___post_init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_events$$$function__4___post_init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_events$$$function__4___post_init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_events$$$function__4___post_init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h11$_events$$$function__4___post_init__ == cache_frame_frame_h11$_events$$$function__4___post_init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_events$$$function__4___post_init__);
    cache_frame_frame_h11$_events$$$function__4___post_init__ = NULL;
}

assertFrameObject(frame_frame_h11$_events$$$function__4___post_init__);

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


static PyObject *impl_h11$_events$$$function__5___post_init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_events$$$function__5___post_init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_events$$$function__5___post_init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_events$$$function__5___post_init__)) {
    Py_XDECREF(cache_frame_frame_h11$_events$$$function__5___post_init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_events$$$function__5___post_init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_events$$$function__5___post_init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_587cc84ddb4c94a00a612c621abd91ab, module_h11$_events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_events$$$function__5___post_init__->m_type_description == NULL);
frame_frame_h11$_events$$$function__5___post_init__ = cache_frame_frame_h11$_events$$$function__5___post_init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_events$$$function__5___post_init__);
assert(Py_REFCNT(frame_frame_h11$_events$$$function__5___post_init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_status_code);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__operand_2 == NULL);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
}
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


exception_lineno = 248;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_operand_value_1);
goto try_return_handler_1;
branch_no_2:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_1000;
tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "o";
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

Py_XDECREF(tmp_comparison_chain_1__operand_2);
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
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_h11$_events$LocalProtocolError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 249;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_884f2ccbac7f71c65ad7934e21d66ddc;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_status_code);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_h11$_events$$$function__5___post_init__->m_frame.f_lineno = 250;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_h11$_events$$$function__5___post_init__->m_frame.f_lineno = 249;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 249;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_events$$$function__5___post_init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_events$$$function__5___post_init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_events$$$function__5___post_init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_events$$$function__5___post_init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h11$_events$$$function__5___post_init__ == cache_frame_frame_h11$_events$$$function__5___post_init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_events$$$function__5___post_init__);
    cache_frame_frame_h11$_events$$$function__5___post_init__ = NULL;
}

assertFrameObject(frame_frame_h11$_events$$$function__5___post_init__);

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


static PyObject *impl_h11$_events$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *par_chunk_start = python_pars[2];
PyObject *par_chunk_end = python_pars[3];
struct Nuitka_FrameObject *frame_frame_h11$_events$$$function__6___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_events$$$function__6___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_events$$$function__6___init__)) {
    Py_XDECREF(cache_frame_frame_h11$_events$$$function__6___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_events$$$function__6___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_events$$$function__6___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7abe5cb617107fdb1a640da3ef95ea3c, module_h11$_events, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_events$$$function__6___init__->m_type_description == NULL);
frame_frame_h11$_events$$$function__6___init__ = cache_frame_frame_h11$_events$$$function__6___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_events$$$function__6___init__);
assert(Py_REFCNT(frame_frame_h11$_events$$$function__6___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_1 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
tmp_args_element_value_2 = mod_consts.const_str_plain_data;
CHECK_OBJECT(par_data);
tmp_args_element_value_3 = par_data;
frame_frame_h11$_events$$$function__6___init__->m_frame.f_lineno = 302;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain___setattr__,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_instance_2 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_self);
tmp_args_element_value_4 = par_self;
tmp_args_element_value_5 = mod_consts.const_str_plain_chunk_start;
CHECK_OBJECT(par_chunk_start);
tmp_args_element_value_6 = par_chunk_start;
frame_frame_h11$_events$$$function__6___init__->m_frame.f_lineno = 303;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain___setattr__,
        call_args
    );
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_instance_3 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_self);
tmp_args_element_value_7 = par_self;
tmp_args_element_value_8 = mod_consts.const_str_plain_chunk_end;
CHECK_OBJECT(par_chunk_end);
tmp_args_element_value_9 = par_chunk_end;
frame_frame_h11$_events$$$function__6___init__->m_frame.f_lineno = 304;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_3 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain___setattr__,
        call_args
    );
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_events$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_events$$$function__6___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_events$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_events$$$function__6___init__,
    type_description_1,
    par_self,
    par_data,
    par_chunk_start,
    par_chunk_end
);


// Release cached frame if used for exception.
if (frame_frame_h11$_events$$$function__6___init__ == cache_frame_frame_h11$_events$$$function__6___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_events$$$function__6___init__);
    cache_frame_frame_h11$_events$$$function__6___init__ = NULL;
}

assertFrameObject(frame_frame_h11$_events$$$function__6___init__);

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
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_chunk_start);
Py_DECREF(par_chunk_start);
CHECK_OBJECT(par_chunk_end);
Py_DECREF(par_chunk_end);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_chunk_start);
Py_DECREF(par_chunk_start);
CHECK_OBJECT(par_chunk_end);
Py_DECREF(par_chunk_end);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_events$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_headers = python_pars[1];
PyObject *par__parsed = python_pars[2];
struct Nuitka_FrameObject *frame_frame_h11$_events$$$function__7___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_events$$$function__7___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_events$$$function__7___init__)) {
    Py_XDECREF(cache_frame_frame_h11$_events$$$function__7___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_events$$$function__7___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_events$$$function__7___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b16659abb712140742daa19a6670725c, module_h11$_events, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_events$$$function__7___init__->m_type_description == NULL);
frame_frame_h11$_events$$$function__7___init__ = cache_frame_frame_h11$_events$$$function__7___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_events$$$function__7___init__);
assert(Py_REFCNT(frame_frame_h11$_events$$$function__7___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 345;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_h11$_events, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
frame_frame_h11$_events$$$function__7___init__->m_frame.f_lineno = 345;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_headers);
tmp_cmp_expr_left_1 = par_headers;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_arg_element_1;
tmp_called_value_1 = module_var_accessor_h11$_events$Headers(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Headers);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 347;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = MAKE_LIST_EMPTY(tstate, 0);
frame_frame_h11$_events$$$function__7___init__->m_frame.f_lineno = 347;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_call_arg_element_1);
CHECK_OBJECT(tmp_call_arg_element_1);
Py_DECREF(tmp_call_arg_element_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_headers;
    assert(old != NULL);
    par_headers = tmp_assign_source_1;
    Py_DECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_headers);
tmp_isinstance_inst_1 = par_headers;
tmp_isinstance_cls_1 = module_var_accessor_h11$_events$Headers(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Headers);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 348;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooc";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_2 = module_var_accessor_h11$_events$normalize_and_validate(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_normalize_and_validate);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 349;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_headers);
tmp_kw_call_arg_value_0_1 = par_headers;
CHECK_OBJECT(par__parsed);
tmp_kw_call_dict_value_0_1 = par__parsed;
frame_frame_h11$_events$$$function__7___init__->m_frame.f_lineno = 349;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain__parsed_tuple);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_headers;
    assert(old != NULL);
    par_headers = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_2:;
branch_end_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_2 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
tmp_args_element_value_2 = mod_consts.const_str_plain_headers;
CHECK_OBJECT(par_headers);
tmp_args_element_value_3 = par_headers;
frame_frame_h11$_events$$$function__7___init__->m_frame.f_lineno = 351;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain___setattr__,
        call_args
    );
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_events$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_events$$$function__7___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_events$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_events$$$function__7___init__,
    type_description_1,
    par_self,
    par_headers,
    par__parsed,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_h11$_events$$$function__7___init__ == cache_frame_frame_h11$_events$$$function__7___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_events$$$function__7___init__);
    cache_frame_frame_h11$_events$$$function__7___init__ = NULL;
}

assertFrameObject(frame_frame_h11$_events$$$function__7___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_headers);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
par_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_headers);
par_headers = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par__parsed);
Py_DECREF(par__parsed);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par__parsed);
Py_DECREF(par__parsed);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_h11$_events$$$function__1___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_events$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_45e22ae6dbd065d35ef185f04e7a930e,
#endif
        code_objects_7647baadbf099f8e0c864758bad5f9dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_h11$_events,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_events$$$function__2___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_events$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ffa789540202f0887335bbf1ddedf7bb,
#endif
        code_objects_c78ce9c1e98f192a11a211f10290a8ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_h11$_events,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_events$$$function__3___post_init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___post_init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_04a432940cc7da8d3752db0356c8876d,
#endif
        code_objects_445b91e86f1755173da4be25f2f4f413,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_events$$$function__4___post_init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_events$$$function__4___post_init__,
        mod_consts.const_str_plain___post_init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_760b85b39e43cacf663eaa7df0e22947,
#endif
        code_objects_5abb01e3b7a6ec23927a602c18745b04,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_events$$$function__5___post_init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_events$$$function__5___post_init__,
        mod_consts.const_str_plain___post_init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_429fdd007cfc7160c64663cfe8b5fa15,
#endif
        code_objects_587cc84ddb4c94a00a612c621abd91ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_events$$$function__6___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_events$$$function__6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7b6f2dcaf0f7afb26874dc91eb48fdfd,
#endif
        code_objects_7abe5cb617107fdb1a640da3ef95ea3c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_events$$$function__7___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_events$$$function__7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_46b5de62daa48de82b88132a2bf385fd,
#endif
        code_objects_b16659abb712140742daa19a6670725c,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_h11$_events,
        NULL,
        closure,
        1
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

static function_impl_code const function_table_h11$_events[] = {
impl_h11$_events$$$function__1___init__,
impl_h11$_events$$$function__2___init__,
impl_h11$_events$$$function__4___post_init__,
impl_h11$_events$$$function__5___post_init__,
impl_h11$_events$$$function__6___init__,
impl_h11$_events$$$function__7___init__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_h11$_events);
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
        module_h11$_events,
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
        function_table_h11$_events,
        sizeof(function_table_h11$_events) / sizeof(function_impl_code)
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
static char const *module_full_name = "h11._events";
#endif

// Internal entry point for module code.
PyObject *module_code_h11$_events(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("h11$_events");

    // Store the module for future use.
    module_h11$_events = module;

    moduledict_h11$_events = MODULE_DICT(module_h11$_events);

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
        PRINT_STRING("h11$_events: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("h11$_events: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("h11$_events: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "h11._events" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inith11$_events\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_h11$_events,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_h11$_events,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_h11$_events,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_h11$_events,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_h11$_events,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_h11$_events);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_h11$_events, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_h11$_events, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_h11$_events, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_h11$_events);
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

        UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
struct Nuitka_CellObject *outline_1_var___class__ = NULL;
struct Nuitka_CellObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
struct Nuitka_CellObject *outline_6_var___class__ = NULL;
PyObject *outline_7_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_4__bases = NULL;
PyObject *tmp_class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_class_container$class_creation_5__bases = NULL;
PyObject *tmp_class_container$class_creation_5__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__metaclass = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_class_container$class_creation_6__bases = NULL;
PyObject *tmp_class_container$class_creation_6__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_6__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_6__metaclass = NULL;
PyObject *tmp_class_container$class_creation_6__prepared = NULL;
PyObject *tmp_class_container$class_creation_7__bases = NULL;
PyObject *tmp_class_container$class_creation_7__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_7__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_7__metaclass = NULL;
PyObject *tmp_class_container$class_creation_7__prepared = NULL;
PyObject *tmp_class_container$class_creation_8__bases = NULL;
PyObject *tmp_class_container$class_creation_8__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_8__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_8__metaclass = NULL;
PyObject *tmp_class_container$class_creation_8__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_events;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_h11$_events$$$class__1_Event_32 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_h11$_events$$$class__1_Event_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_h11$_events$$$class__2_Request_41 = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_events$$$class__2_Request_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_h11$_events$$$class__3__ResponseBase_129 = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_events$$$class__3__ResponseBase_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
PyObject *locals_h11$_events$$$class__4_InformationalResponse_176 = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_events$$$class__4_InformationalResponse_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
PyObject *locals_h11$_events$$$class__5_Response_218 = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_events$$$class__5_Response_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
PyObject *locals_h11$_events$$$class__6_Data_260 = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_events$$$class__6_Data_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
PyObject *locals_h11$_events$$$class__7_EndOfMessage_316 = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_events$$$class__7_EndOfMessage_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
PyObject *locals_h11$_events$$$class__8_ConnectionClosed_358 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_h11$_events, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_h11$_events, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_h11$_events = MAKE_MODULE_FRAME(code_objects_f9e5404fe72525b31a41d7684521fa88, module_h11$_events);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_events);
assert(Py_REFCNT(frame_frame_h11$_events) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_h11$_events$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_h11$_events$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_h11$_events, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_1 = (PyObject *)moduledict_h11$_events;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_h11$_events->m_frame.f_lineno = 8;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_2 = (PyObject *)moduledict_h11$_events;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_ABC_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_h11$_events->m_frame.f_lineno = 9;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_h11$_events,
        mod_consts.const_str_plain_ABC,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ABC);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_dataclasses;
tmp_globals_arg_value_3 = (PyObject *)moduledict_h11$_events;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_dataclass_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_h11$_events->m_frame.f_lineno = 10;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_h11$_events,
        mod_consts.const_str_plain_dataclass,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_dataclass);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_7 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_7);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_h11$_events,
        mod_consts.const_str_plain_List,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_List);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_List, tmp_assign_source_8);
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
        (PyObject *)moduledict_h11$_events,
        mod_consts.const_str_plain_Tuple,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Tuple);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple, tmp_assign_source_9);
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
        (PyObject *)moduledict_h11$_events,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_10);
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
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__abnf;
tmp_globals_arg_value_4 = (PyObject *)moduledict_h11$_events;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_method_str_plain_request_target_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_h11$_events->m_frame.f_lineno = 13;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_h11$_events,
        mod_consts.const_str_plain_method,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_method);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_method, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_h11$_events,
        mod_consts.const_str_plain_request_target,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_request_target);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_request_target, tmp_assign_source_13);
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
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__headers;
tmp_globals_arg_value_5 = (PyObject *)moduledict_h11$_events;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Headers_str_plain_normalize_and_validate_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_h11$_events->m_frame.f_lineno = 14;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_8 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_h11$_events,
        mod_consts.const_str_plain_Headers,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Headers);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Headers, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_h11$_events,
        mod_consts.const_str_plain_normalize_and_validate,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_normalize_and_validate);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_and_validate, tmp_assign_source_16);
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
PyObject *tmp_assign_source_17;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__util;
tmp_globals_arg_value_6 = (PyObject *)moduledict_h11$_events;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_f086bb142100546722808b2f0a37c9f0_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_h11$_events->m_frame.f_lineno = 15;
tmp_assign_source_17 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_17;
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_10 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_h11$_events,
        mod_consts.const_str_plain_bytesify,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_bytesify);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_bytesify, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_11 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_h11$_events,
        mod_consts.const_str_plain_LocalProtocolError,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_12 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_h11$_events,
        mod_consts.const_str_plain_validate,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_validate);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_validate, tmp_assign_source_20);
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
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_LIST7(tstate, mod_consts.const_list_5b64e946cd114eac0f3cf007559d3321_list);
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_h11$_events$re(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_compile);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_h11$_events$method(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_method);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_encode);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 28;

    goto frame_exception_exit_1;
}
frame_frame_h11$_events->m_frame.f_lineno = 28;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 28;

    goto frame_exception_exit_1;
}
frame_frame_h11$_events->m_frame.f_lineno = 28;
tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_method_re, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
tmp_expression_value_3 = module_var_accessor_h11$_events$re(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_compile);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_h11$_events$request_target(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request_target);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_encode);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 29;

    goto frame_exception_exit_1;
}
frame_frame_h11$_events->m_frame.f_lineno = 29;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 29;

    goto frame_exception_exit_1;
}
frame_frame_h11$_events->m_frame.f_lineno = 29;
tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_request_target_re, tmp_assign_source_23);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_h11$_events$ABC(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ABC);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto try_except_handler_5;
}
tmp_assign_source_24 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_24, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_25 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_5 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_27 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_27;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
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
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Event;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_h11$_events->m_frame.f_lineno = 32;
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_28;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_8 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
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
PyObject *tmp_expression_value_9;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_9, tmp_name_value_7, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_10;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_10 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
}
frame_frame_h11$_events->m_frame.f_lineno = 32;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 32;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_29;
}
branch_end_1:;
{
PyObject *tmp_assign_source_30;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_h11$_events$$$class__1_Event_32 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e26f38130a8284dd2c307c3c7901b51d;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__1_Event_32, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_69f837f8e44947c8367f55db4a7cf686;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__1_Event_32, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_Event;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__1_Event_32, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_32;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__1_Event_32, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_7;
}
frame_frame_h11$_events$$$class__1_Event_2 = MAKE_CLASS_FRAME(tstate, code_objects_c3a4ba7884ec25192b7642ef1cbe7123, module_h11$_events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_events$$$class__1_Event_2);
assert(Py_REFCNT(frame_frame_h11$_events$$$class__1_Event_2) == 2);

// Framed code:
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__1_Event_32, mod_consts.const_str_plain___slots__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_events$$$class__1_Event_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_events$$$class__1_Event_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_events$$$class__1_Event_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_events$$$class__1_Event_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_h11$_events$$$class__1_Event_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_7;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__1_Event_32, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_7;
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


exception_lineno = 32;

    goto try_except_handler_7;
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
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__1_Event_32, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_7;
}
branch_no_3:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Event;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_h11$_events$$$class__1_Event_32;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_h11$_events->m_frame.f_lineno = 32;
tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_7;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_31;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_30 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_30);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_h11$_events$$$class__1_Event_32);
locals_h11$_events$$$class__1_Event_32 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h11$_events$$$class__1_Event_32);
locals_h11$_events$$$class__1_Event_32 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 32;
goto try_except_handler_5;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Event, tmp_assign_source_30);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_1__bases_orig);
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_h11$_events$Event(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto try_except_handler_8;
}
tmp_assign_source_32 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_32, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_33 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_8;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_11 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_8;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_8;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_35 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_35;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_8;
}
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_8;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_Request;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_h11$_events->m_frame.f_lineno = 41;
tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_36;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_14 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_8;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_15;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_15, tmp_name_value_8, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_8;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_16;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_16 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_16 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_8;
}
frame_frame_h11$_events->m_frame.f_lineno = 41;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 41;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_37;
}
branch_end_4:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_3;
tmp_called_value_9 = module_var_accessor_h11$_events$dataclass(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto try_except_handler_8;
}
frame_frame_h11$_events->m_frame.f_lineno = 40;
tmp_called_value_8 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_true_tuple, 0), mod_consts.const_tuple_str_plain_init_str_plain_frozen_tuple);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_8;
}
outline_1_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_h11$_events$$$class__2_Request_41 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e26f38130a8284dd2c307c3c7901b51d;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__2_Request_41, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_digest_047c177b24cc4b45b8feaf1a79d09a0f;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__2_Request_41, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_Request;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_41;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_10;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__2_Request_41, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_10;
}
frame_frame_h11$_events$$$class__2_Request_3 = MAKE_CLASS_FRAME(tstate, code_objects_e7580cb94beba4f1efcfebcd718507c1, module_h11$_events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_events$$$class__2_Request_3);
assert(Py_REFCNT(frame_frame_h11$_events$$$class__2_Request_3) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_tuple_021f852f9b9dab52654c457680705092_tuple;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain___slots__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, const_str_plain_bytes);

if (tmp_ass_subvalue_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_1 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_ass_subvalue_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_ass_subscribed_1 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_1);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 77;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 77;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_method;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain_Headers);

if (tmp_ass_subvalue_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_2 = module_var_accessor_h11$_events$Headers(tstate);
if (unlikely(tmp_ass_subvalue_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Headers);
}

if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_ass_subvalue_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_ass_subscribed_2 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_2);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 78;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 78;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_headers;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, const_str_plain_bytes);

if (tmp_ass_subvalue_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_3 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_ass_subvalue_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_ass_subscribed_3 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_3);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 79;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_3);

exception_lineno = 79;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_target;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, const_str_plain_bytes);

if (tmp_ass_subvalue_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_4 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_ass_subvalue_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_ass_subscribed_4 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_4);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 80;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_4);

exception_lineno = 80;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_http_version;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_8;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_11d08d0d445bef62aaf2b7c2c5f75432);
tmp_dict_key_1 = mod_consts.const_str_plain_method;
tmp_expression_value_17 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain_Union);

if (tmp_expression_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_17 = module_var_accessor_h11$_events$Union(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_defaults_1);

exception_lineno = 85;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_tuple_element_8 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, const_str_plain_bytes);

if (tmp_tuple_element_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_8 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_tuple_element_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_3, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain_str);

if (tmp_tuple_element_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_8 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_8);
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_defaults_1);

exception_lineno = 85;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_annotations_1 = _PyDict_NewPresized( 6 );
{
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_4;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_9;
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_10;
PyObject *tmp_tuple_element_13;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_headers;
tmp_expression_value_18 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain_Union);

if (tmp_expression_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_18 = module_var_accessor_h11$_events$Union(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;
type_description_2 = "c";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_expression_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_tuple_element_9 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain_Headers);

if (tmp_tuple_element_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_9 = module_var_accessor_h11$_events$Headers(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Headers);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_18);

exception_lineno = 86;
type_description_2 = "c";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_tuple_element_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_5;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_6;
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_7;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_8;
PyObject *tmp_tuple_element_11;
PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_9);
tmp_expression_value_19 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain_List);

if (tmp_expression_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_19 = module_var_accessor_h11$_events$List(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;
type_description_2 = "c";
    goto tuple_build_exception_3;
}
        Py_INCREF(tmp_expression_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_3;
    }
}

tmp_expression_value_20 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain_Tuple);

if (tmp_expression_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_20 = module_var_accessor_h11$_events$Tuple(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_19);

exception_lineno = 86;
type_description_2 = "c";
    goto tuple_build_exception_3;
}
        Py_INCREF(tmp_expression_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_3;
    }
}

tmp_tuple_element_10 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, const_str_plain_bytes);

if (tmp_tuple_element_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_10 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_tuple_element_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_3;
    }
}

tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_6, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, const_str_plain_bytes);

if (tmp_tuple_element_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_10 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_tuple_element_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_3;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_10);
tmp_subscript_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_subscript_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_19);

exception_lineno = 86;
type_description_2 = "c";
    goto tuple_build_exception_3;
}
tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_2 = "c";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_9);
tmp_expression_value_21 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain_List);

if (tmp_expression_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_21 = module_var_accessor_h11$_events$List(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;
type_description_2 = "c";
    goto tuple_build_exception_3;
}
        Py_INCREF(tmp_expression_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_3;
    }
}

tmp_expression_value_22 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain_Tuple);

if (tmp_expression_value_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_22 = module_var_accessor_h11$_events$Tuple(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_21);

exception_lineno = 86;
type_description_2 = "c";
    goto tuple_build_exception_3;
}
        Py_INCREF(tmp_expression_value_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_3;
    }
}

tmp_tuple_element_11 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain_str);

if (tmp_tuple_element_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_11 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_3;
    }
}

tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_8, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain_str);

if (tmp_tuple_element_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_11 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_3;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_11);
tmp_subscript_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_8);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_subscript_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_21);

exception_lineno = 86;
type_description_2 = "c";
    goto tuple_build_exception_3;
}
tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_7);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_2 = "c";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_subscript_value_4, 2, tmp_tuple_element_9);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_expression_value_18);
Py_DECREF(tmp_subscript_value_4);
goto dict_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_2 = "c";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_target;
tmp_expression_value_23 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain_Union);

if (tmp_expression_value_23 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_23 = module_var_accessor_h11$_events$Union(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_2 = "c";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_expression_value_23);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_tuple_element_12 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, const_str_plain_bytes);

if (tmp_tuple_element_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_12 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_tuple_element_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_9, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain_str);

if (tmp_tuple_element_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_12 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_9, 1, tmp_tuple_element_12);
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_9);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
CHECK_OBJECT(tmp_subscript_value_9);
Py_DECREF(tmp_subscript_value_9);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_http_version;
tmp_expression_value_24 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain_Union);

if (tmp_expression_value_24 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_24 = module_var_accessor_h11$_events$Union(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_2 = "c";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_expression_value_24);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_tuple_element_13 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, const_str_plain_bytes);

if (tmp_tuple_element_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_13 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_tuple_element_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_10, 0, tmp_tuple_element_13);
tmp_tuple_element_13 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain_str);

if (tmp_tuple_element_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_13 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_10, 1, tmp_tuple_element_13);
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_10);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_2 = "c";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain__parsed;
tmp_dict_value_1 = PyObject_GetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain_bool);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_kw_defaults_1);
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_closure_1[0] = outline_1_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_h11$_events$$$function__1___init__(tstate, tmp_kw_defaults_1, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_h11$_events$$$class__2_Request_41, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain___hash__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "c";
    goto frame_exception_exit_3;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_events$$$class__2_Request_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_events$$$class__2_Request_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_events$$$class__2_Request_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_events$$$class__2_Request_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_h11$_events$$$class__2_Request_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_10;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_10;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_10;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__2_Request_41, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_10;
}
branch_no_6:;
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_14 = mod_consts.const_str_plain_Request;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_14);
tmp_tuple_element_14 = locals_h11$_events$$$class__2_Request_41;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_h11$_events->m_frame.f_lineno = 41;
tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_10;
}
assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_39);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
tmp_args_element_value_3 = Nuitka_Cell_GET(outline_1_var___class__);
Py_INCREF(tmp_args_element_value_3);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_h11$_events$$$class__2_Request_41);
locals_h11$_events$$$class__2_Request_41 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h11$_events$$$class__2_Request_41);
locals_h11$_events$$$class__2_Request_41 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 41;
goto try_except_handler_8;
outline_result_4:;
frame_frame_h11$_events->m_frame.f_lineno = 40;
tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Request, tmp_assign_source_38);
}
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
Py_DECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
Py_DECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
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
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_40;
PyObject *tmp_tuple_element_15;
tmp_tuple_element_15 = module_var_accessor_h11$_events$Event(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto try_except_handler_11;
}
tmp_assign_source_40 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_40, 0, tmp_tuple_element_15);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_41 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_11;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_11;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_25 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_11 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_11, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_11;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_11;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_43 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_43;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_11;
}
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_11;
}
tmp_tuple_element_16 = mod_consts.const_str_plain__ResponseBase;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_h11$_events->m_frame.f_lineno = 129;
tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_44;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_28 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_11;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_29;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_9, tmp_default_value_3);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_11;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_30;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_30 == NULL));
tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_17);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_11;
}
frame_frame_h11$_events->m_frame.f_lineno = 129;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 129;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_45;
}
branch_end_7:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_12;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_4;
tmp_called_value_13 = module_var_accessor_h11$_events$dataclass(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;

    goto try_except_handler_11;
}
frame_frame_h11$_events->m_frame.f_lineno = 128;
tmp_called_value_12 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_13, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_true_tuple, 0), mod_consts.const_tuple_str_plain_init_str_plain_frozen_tuple);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_11;
}
outline_2_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_h11$_events$$$class__3__ResponseBase_129 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e26f38130a8284dd2c307c3c7901b51d;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__3__ResponseBase_129, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain__ResponseBase;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_129;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_13;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__3__ResponseBase_129, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_13;
}
frame_frame_h11$_events$$$class__3__ResponseBase_4 = MAKE_CLASS_FRAME(tstate, code_objects_3251de63039a3105ced465380c91633f, module_h11$_events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_events$$$class__3__ResponseBase_4);
assert(Py_REFCNT(frame_frame_h11$_events$$$class__3__ResponseBase_4) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_tuple_f80fc8afba8d47b5faf120aba136034d_tuple;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain___slots__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain_Headers);

if (tmp_ass_subvalue_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_5 = module_var_accessor_h11$_events$Headers(tstate);
if (unlikely(tmp_ass_subvalue_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Headers);
}

if (tmp_ass_subvalue_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_ass_subvalue_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_ass_subscribed_5 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_5);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 132;
type_description_2 = "c";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_5);

exception_lineno = 132;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_headers;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
CHECK_OBJECT(tmp_ass_subvalue_5);
Py_DECREF(tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, const_str_plain_bytes);

if (tmp_ass_subvalue_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_6 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_ass_subvalue_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_ass_subscribed_6 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_6);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 133;
type_description_2 = "c";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_6);

exception_lineno = 133;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_http_version;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
CHECK_OBJECT(tmp_ass_subvalue_6);
Py_DECREF(tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, const_str_plain_bytes);

if (tmp_ass_subvalue_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_7 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_ass_subvalue_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_ass_subscribed_7 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_7);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 134;
type_description_2 = "c";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_7);

exception_lineno = 134;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_reason;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
CHECK_OBJECT(tmp_ass_subvalue_7);
Py_DECREF(tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, const_str_plain_int);

if (tmp_ass_subvalue_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_8 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_ass_subvalue_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_ass_subscribed_8 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_8);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 135;
type_description_2 = "c";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_8);

exception_lineno = 135;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_status_code;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
CHECK_OBJECT(tmp_ass_subscribed_8);
Py_DECREF(tmp_ass_subscribed_8);
CHECK_OBJECT(tmp_ass_subvalue_8);
Py_DECREF(tmp_ass_subvalue_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_12;
PyObject *tmp_tuple_element_18;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_28c12c0c8fb67fdbb30bf5ad583de240);
tmp_dict_key_2 = mod_consts.const_str_plain_headers;
tmp_expression_value_31 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain_Union);

if (tmp_expression_value_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_31 = module_var_accessor_h11$_events$Union(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_defaults_2);

exception_lineno = 140;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_expression_value_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_tuple_element_18 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain_Headers);

if (tmp_tuple_element_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_18 = module_var_accessor_h11$_events$Headers(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Headers);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_defaults_2);
Py_DECREF(tmp_expression_value_31);

exception_lineno = 140;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_tuple_element_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_13;
PyObject *tmp_expression_value_33;
PyObject *tmp_subscript_value_14;
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_34;
PyObject *tmp_subscript_value_15;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_16;
PyObject *tmp_tuple_element_20;
PyTuple_SET_ITEM(tmp_subscript_value_12, 0, tmp_tuple_element_18);
tmp_expression_value_32 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain_List);

if (tmp_expression_value_32 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_32 = module_var_accessor_h11$_events$List(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
type_description_2 = "c";
    goto tuple_build_exception_5;
}
        Py_INCREF(tmp_expression_value_32);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_5;
    }
}

tmp_expression_value_33 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain_Tuple);

if (tmp_expression_value_33 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_33 = module_var_accessor_h11$_events$Tuple(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_32);

exception_lineno = 140;
type_description_2 = "c";
    goto tuple_build_exception_5;
}
        Py_INCREF(tmp_expression_value_33);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_5;
    }
}

tmp_tuple_element_19 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, const_str_plain_bytes);

if (tmp_tuple_element_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_19 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_tuple_element_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_5;
    }
}

tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_14, 0, tmp_tuple_element_19);
tmp_tuple_element_19 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, const_str_plain_bytes);

if (tmp_tuple_element_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_19 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_tuple_element_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_5;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_14, 1, tmp_tuple_element_19);
tmp_subscript_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_14);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
CHECK_OBJECT(tmp_subscript_value_14);
Py_DECREF(tmp_subscript_value_14);
if (tmp_subscript_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_32);

exception_lineno = 140;
type_description_2 = "c";
    goto tuple_build_exception_5;
}
tmp_tuple_element_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_13);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
CHECK_OBJECT(tmp_subscript_value_13);
Py_DECREF(tmp_subscript_value_13);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_2 = "c";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_subscript_value_12, 1, tmp_tuple_element_18);
tmp_expression_value_34 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain_List);

if (tmp_expression_value_34 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_34 = module_var_accessor_h11$_events$List(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
type_description_2 = "c";
    goto tuple_build_exception_5;
}
        Py_INCREF(tmp_expression_value_34);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_5;
    }
}

tmp_expression_value_35 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain_Tuple);

if (tmp_expression_value_35 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_35 = module_var_accessor_h11$_events$Tuple(tstate);
if (unlikely(tmp_expression_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_34);

exception_lineno = 140;
type_description_2 = "c";
    goto tuple_build_exception_5;
}
        Py_INCREF(tmp_expression_value_35);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_5;
    }
}

tmp_tuple_element_20 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain_str);

if (tmp_tuple_element_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_20 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_5;
    }
}

tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_16, 0, tmp_tuple_element_20);
tmp_tuple_element_20 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain_str);

if (tmp_tuple_element_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_20 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_5;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_16, 1, tmp_tuple_element_20);
tmp_subscript_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_16);
CHECK_OBJECT(tmp_expression_value_35);
Py_DECREF(tmp_expression_value_35);
CHECK_OBJECT(tmp_subscript_value_16);
Py_DECREF(tmp_subscript_value_16);
if (tmp_subscript_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_34);

exception_lineno = 140;
type_description_2 = "c";
    goto tuple_build_exception_5;
}
tmp_tuple_element_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_15);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
CHECK_OBJECT(tmp_subscript_value_15);
Py_DECREF(tmp_subscript_value_15);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_2 = "c";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_subscript_value_12, 2, tmp_tuple_element_18);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_kw_defaults_2);
Py_DECREF(tmp_expression_value_31);
Py_DECREF(tmp_subscript_value_12);
goto frame_exception_exit_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_12);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
CHECK_OBJECT(tmp_subscript_value_12);
Py_DECREF(tmp_subscript_value_12);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_defaults_2);

exception_lineno = 140;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_annotations_2 = _PyDict_NewPresized( 6 );
{
PyObject *tmp_expression_value_36;
PyObject *tmp_subscript_value_17;
PyObject *tmp_tuple_element_21;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_18;
PyObject *tmp_tuple_element_22;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_status_code;
tmp_dict_value_2 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, const_str_plain_int);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_http_version;
tmp_expression_value_36 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain_Union);

if (tmp_expression_value_36 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_36 = module_var_accessor_h11$_events$Union(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;
type_description_2 = "c";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_36);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_tuple_element_21 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, const_str_plain_bytes);

if (tmp_tuple_element_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_21 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_tuple_element_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_subscript_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_17, 0, tmp_tuple_element_21);
tmp_tuple_element_21 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain_str);

if (tmp_tuple_element_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_21 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_17, 1, tmp_tuple_element_21);
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_17);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
CHECK_OBJECT(tmp_subscript_value_17);
Py_DECREF(tmp_subscript_value_17);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "c";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_reason;
tmp_expression_value_37 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain_Union);

if (tmp_expression_value_37 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_37 = module_var_accessor_h11$_events$Union(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;
type_description_2 = "c";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_37);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_tuple_element_22 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, const_str_plain_bytes);

if (tmp_tuple_element_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_22 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_tuple_element_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_subscript_value_18 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_18, 0, tmp_tuple_element_22);
tmp_tuple_element_22 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain_str);

if (tmp_tuple_element_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_22 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_18, 1, tmp_tuple_element_22);
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_18);
CHECK_OBJECT(tmp_expression_value_37);
Py_DECREF(tmp_expression_value_37);
CHECK_OBJECT(tmp_subscript_value_18);
Py_DECREF(tmp_subscript_value_18);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "c";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain__parsed;
tmp_dict_value_2 = PyObject_GetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain_bool);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_kw_defaults_2);
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_4;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
tmp_closure_2[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_h11$_events$$$function__2___init__(tstate, tmp_kw_defaults_2, tmp_annotations_2, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_h11$_events$$$class__3__ResponseBase_129, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_h11$_events$$$function__3___post_init__(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain___post_init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain___hash__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "c";
    goto frame_exception_exit_4;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_events$$$class__3__ResponseBase_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_events$$$class__3__ResponseBase_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_events$$$class__3__ResponseBase_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_events$$$class__3__ResponseBase_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_h11$_events$$$class__3__ResponseBase_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_13;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_13;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_13;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__3__ResponseBase_129, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_13;
}
branch_no_9:;
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_23;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_14 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_23 = mod_consts.const_str_plain__ResponseBase;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_23 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_23);
tmp_tuple_element_23 = locals_h11$_events$$$class__3__ResponseBase_129;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_h11$_events->m_frame.f_lineno = 129;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_13;
}
assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
Nuitka_Cell_SET(outline_2_var___class__, tmp_assign_source_47);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
tmp_args_element_value_4 = Nuitka_Cell_GET(outline_2_var___class__);
Py_INCREF(tmp_args_element_value_4);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_h11$_events$$$class__3__ResponseBase_129);
locals_h11$_events$$$class__3__ResponseBase_129 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h11$_events$$$class__3__ResponseBase_129);
locals_h11$_events$$$class__3__ResponseBase_129 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 129;
goto try_except_handler_11;
outline_result_6:;
frame_frame_h11$_events->m_frame.f_lineno = 128;
tmp_assign_source_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_11;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain__ResponseBase, tmp_assign_source_46);
}
goto try_end_7;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
Py_DECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
Py_DECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
Py_DECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
Py_DECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
tmp_outline_return_value_3 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_3);
goto outline_result_5;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_5:;
CHECK_OBJECT(tmp_outline_return_value_3);
Py_DECREF(tmp_outline_return_value_3);
}
{
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_48;
PyObject *tmp_tuple_element_24;
tmp_tuple_element_24 = module_var_accessor_h11$_events$_ResponseBase(tstate);
if (unlikely(tmp_tuple_element_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ResponseBase);
}

if (tmp_tuple_element_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;

    goto try_except_handler_14;
}
tmp_assign_source_48 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_48, 0, tmp_tuple_element_24);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_49 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_38;
PyObject *tmp_subscript_value_19;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_14;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_38 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_19 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_38, tmp_subscript_value_19, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_14;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_14;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_51 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_51;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_39;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_39, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_14;
}
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_40;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_25;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_40 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_14;
}
tmp_tuple_element_25 = mod_consts.const_str_plain_InformationalResponse;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_25 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_h11$_events->m_frame.f_lineno = 176;
tmp_assign_source_52 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_52;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_41;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_41 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_41, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_14;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_26;
PyObject *tmp_expression_value_42;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_42 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_26 = BUILTIN_GETATTR(tstate, tmp_expression_value_42, tmp_name_value_10, tmp_default_value_4);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_14;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_43;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_43 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_43 == NULL));
tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_26);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_14;
}
frame_frame_h11$_events->m_frame.f_lineno = 176;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 176;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_14;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_53;
}
branch_end_10:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_16;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_5;
tmp_called_value_17 = module_var_accessor_h11$_events$dataclass(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 175;

    goto try_except_handler_14;
}
frame_frame_h11$_events->m_frame.f_lineno = 175;
tmp_called_value_16 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_true_tuple, 0), mod_consts.const_tuple_str_plain_init_str_plain_frozen_tuple);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_14;
}
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_h11$_events$$$class__4_InformationalResponse_176 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e26f38130a8284dd2c307c3c7901b51d;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__4_InformationalResponse_176, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_digest_b94e6e30b083c49ca4d72d0aa4209974;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__4_InformationalResponse_176, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_plain_InformationalResponse;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__4_InformationalResponse_176, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_int_pos_176;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__4_InformationalResponse_176, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_16;
}
frame_frame_h11$_events$$$class__4_InformationalResponse_5 = MAKE_CLASS_FRAME(tstate, code_objects_81a41de01b96b4913dc3259038e2160f, module_h11$_events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_events$$$class__4_InformationalResponse_5);
assert(Py_REFCNT(frame_frame_h11$_events$$$class__4_InformationalResponse_5) == 2);

// Framed code:
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_h11$_events$$$function__4___post_init__(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_h11$_events$$$class__4_InformationalResponse_176, mod_consts.const_str_plain___post_init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__4_InformationalResponse_176, mod_consts.const_str_plain___hash__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_5;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_events$$$class__4_InformationalResponse_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_events$$$class__4_InformationalResponse_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_events$$$class__4_InformationalResponse_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_events$$$class__4_InformationalResponse_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_h11$_events$$$class__4_InformationalResponse_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_16;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__4_InformationalResponse_176, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_16;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_16;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__4_InformationalResponse_176, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_16;
}
branch_no_12:;
{
PyObject *tmp_assign_source_55;
PyObject *tmp_called_value_18;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_27;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_18 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_27 = mod_consts.const_str_plain_InformationalResponse;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_27 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_27);
tmp_tuple_element_27 = locals_h11$_events$$$class__4_InformationalResponse_176;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_h11$_events->m_frame.f_lineno = 176;
tmp_assign_source_55 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_16;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_55;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_args_element_value_5 = outline_3_var___class__;
Py_INCREF(tmp_args_element_value_5);
goto try_return_handler_16;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
Py_DECREF(locals_h11$_events$$$class__4_InformationalResponse_176);
locals_h11$_events$$$class__4_InformationalResponse_176 = NULL;
goto try_return_handler_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h11$_events$$$class__4_InformationalResponse_176);
locals_h11$_events$$$class__4_InformationalResponse_176 = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto try_except_handler_15;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 176;
goto try_except_handler_14;
outline_result_8:;
frame_frame_h11$_events->m_frame.f_lineno = 175;
tmp_assign_source_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_InformationalResponse, tmp_assign_source_54);
}
goto try_end_8;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
Py_DECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
Py_DECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
Py_DECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
Py_DECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
tmp_outline_return_value_4 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_4);
goto outline_result_7;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_7:;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
}
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_56;
PyObject *tmp_tuple_element_28;
tmp_tuple_element_28 = module_var_accessor_h11$_events$_ResponseBase(tstate);
if (unlikely(tmp_tuple_element_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ResponseBase);
}

if (tmp_tuple_element_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 218;

    goto try_except_handler_17;
}
tmp_assign_source_56 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_56, 0, tmp_tuple_element_28);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_57 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
tmp_assign_source_58 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_58;
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_20;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_17;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_44 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_20 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_44, tmp_subscript_value_20, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_17;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_17;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_59 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_59;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_45;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_45, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_17;
}
tmp_condition_result_18 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_60;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_46;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_29;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_46 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_17;
}
tmp_tuple_element_29 = mod_consts.const_str_plain_Response;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_29 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_h11$_events->m_frame.f_lineno = 218;
tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_60;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_47;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_47 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_47, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_17;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_19 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_30;
PyObject *tmp_expression_value_48;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_48 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_30 = BUILTIN_GETATTR(tstate, tmp_expression_value_48, tmp_name_value_11, tmp_default_value_5);
if (tmp_tuple_element_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_17;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_49;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_49 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_49 == NULL));
tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_tuple_element_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_30);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_17;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_17;
}
frame_frame_h11$_events->m_frame.f_lineno = 218;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 218;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_17;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_61;
}
branch_end_13:;
{
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_20;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_6;
tmp_called_value_21 = module_var_accessor_h11$_events$dataclass(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 217;

    goto try_except_handler_17;
}
frame_frame_h11$_events->m_frame.f_lineno = 217;
tmp_called_value_20 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_21, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_true_tuple, 0), mod_consts.const_tuple_str_plain_init_str_plain_frozen_tuple);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;

    goto try_except_handler_17;
}
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_h11$_events$$$class__5_Response_218 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e26f38130a8284dd2c307c3c7901b51d;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__5_Response_218, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_str_digest_4c46ac43a13e46f19d90f56cb11b5183;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__5_Response_218, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_str_plain_Response;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__5_Response_218, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_int_pos_218;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__5_Response_218, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_19;
}
frame_frame_h11$_events$$$class__5_Response_6 = MAKE_CLASS_FRAME(tstate, code_objects_d647f8348f45ac556ed3b37e9ca42dab, module_h11$_events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_events$$$class__5_Response_6);
assert(Py_REFCNT(frame_frame_h11$_events$$$class__5_Response_6) == 2);

// Framed code:
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_h11$_events$$$function__5___post_init__(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_h11$_events$$$class__5_Response_218, mod_consts.const_str_plain___post_init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__5_Response_218, mod_consts.const_str_plain___hash__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_2 = "o";
    goto frame_exception_exit_6;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_events$$$class__5_Response_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_events$$$class__5_Response_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_events$$$class__5_Response_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_events$$$class__5_Response_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_h11$_events$$$class__5_Response_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_19;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__5_Response_218, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_19;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_19;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__5_Response_218, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_19;
}
branch_no_15:;
{
PyObject *tmp_assign_source_63;
PyObject *tmp_called_value_22;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_31;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_22 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_31 = mod_consts.const_str_plain_Response;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_31 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_31);
tmp_tuple_element_31 = locals_h11$_events$$$class__5_Response_218;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_h11$_events->m_frame.f_lineno = 218;
tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_19;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_63;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_args_element_value_6 = outline_4_var___class__;
Py_INCREF(tmp_args_element_value_6);
goto try_return_handler_19;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
Py_DECREF(locals_h11$_events$$$class__5_Response_218);
locals_h11$_events$$$class__5_Response_218 = NULL;
goto try_return_handler_18;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h11$_events$$$class__5_Response_218);
locals_h11$_events$$$class__5_Response_218 = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto try_except_handler_18;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 218;
goto try_except_handler_17;
outline_result_10:;
frame_frame_h11$_events->m_frame.f_lineno = 217;
tmp_assign_source_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;

    goto try_except_handler_17;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Response, tmp_assign_source_62);
}
goto try_end_9;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
Py_DECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
Py_DECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
Py_DECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
Py_DECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
tmp_outline_return_value_5 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_5);
goto outline_result_9;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_9:;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
}
{
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_64;
PyObject *tmp_tuple_element_32;
tmp_tuple_element_32 = module_var_accessor_h11$_events$Event(tstate);
if (unlikely(tmp_tuple_element_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;

    goto try_except_handler_20;
}
tmp_assign_source_64 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_64, 0, tmp_tuple_element_32);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_64;
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_65 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_20;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
tmp_assign_source_66 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_66;
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_50;
PyObject *tmp_subscript_value_21;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_20;
}
tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_50 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_21 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_50, tmp_subscript_value_21, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_20;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_20;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_67 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_20;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_67;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_51;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_51 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_51, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_20;
}
tmp_condition_result_22 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_68;
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_52;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_33;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_52 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_20;
}
tmp_tuple_element_33 = mod_consts.const_str_plain_Data;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_33 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_h11$_events->m_frame.f_lineno = 260;
tmp_assign_source_68 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_20;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_68;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_53;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_53 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_53, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_20;
}
tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_23 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_23 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
PyObject *tmp_mod_expr_left_6;
PyObject *tmp_mod_expr_right_6;
PyObject *tmp_tuple_element_34;
PyObject *tmp_expression_value_54;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_54 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_34 = BUILTIN_GETATTR(tstate, tmp_expression_value_54, tmp_name_value_12, tmp_default_value_6);
if (tmp_tuple_element_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_20;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_55;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_55 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_55 == NULL));
tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_55);
Py_DECREF(tmp_expression_value_55);
if (tmp_tuple_element_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_34);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_20;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_20;
}
frame_frame_h11$_events->m_frame.f_lineno = 260;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 260;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_20;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_69;
tmp_assign_source_69 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_69;
}
branch_end_16:;
{
PyObject *tmp_assign_source_70;
PyObject *tmp_called_value_24;
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_7;
tmp_called_value_25 = module_var_accessor_h11$_events$dataclass(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;

    goto try_except_handler_20;
}
frame_frame_h11$_events->m_frame.f_lineno = 259;
tmp_called_value_24 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_25, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_true_tuple, 0), mod_consts.const_tuple_str_plain_init_str_plain_frozen_tuple);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;

    goto try_except_handler_20;
}
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_h11$_events$$$class__6_Data_260 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e26f38130a8284dd2c307c3c7901b51d;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__6_Data_260, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_22;
}
tmp_dictset_value = mod_consts.const_str_digest_550b1bc4ed1be9934c0288201a423f91;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__6_Data_260, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_22;
}
tmp_dictset_value = mod_consts.const_str_plain_Data;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__6_Data_260, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_22;
}
tmp_dictset_value = mod_consts.const_int_pos_260;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__6_Data_260, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_22;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__6_Data_260, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_22;
}
frame_frame_h11$_events$$$class__6_Data_7 = MAKE_CLASS_FRAME(tstate, code_objects_826708c4f70f29cd8fdef3552660fbbe, module_h11$_events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_events$$$class__6_Data_7);
assert(Py_REFCNT(frame_frame_h11$_events$$$class__6_Data_7) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_tuple_str_plain_data_str_plain_chunk_start_str_plain_chunk_end_tuple;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__6_Data_260, mod_consts.const_str_plain___slots__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_ass_subvalue_9 = PyObject_GetItem(locals_h11$_events$$$class__6_Data_260, const_str_plain_bytes);

if (tmp_ass_subvalue_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_9 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_ass_subvalue_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_ass_subscribed_9 = PyObject_GetItem(locals_h11$_events$$$class__6_Data_260, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_9);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 295;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_9);

exception_lineno = 295;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
CHECK_OBJECT(tmp_ass_subscribed_9);
Py_DECREF(tmp_ass_subscribed_9);
CHECK_OBJECT(tmp_ass_subvalue_9);
Py_DECREF(tmp_ass_subvalue_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = PyObject_GetItem(locals_h11$_events$$$class__6_Data_260, mod_consts.const_str_plain_bool);

if (tmp_ass_subvalue_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_10 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_ass_subvalue_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_ass_subscribed_10 = PyObject_GetItem(locals_h11$_events$$$class__6_Data_260, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_10);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 296;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_10);

exception_lineno = 296;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_chunk_start;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
CHECK_OBJECT(tmp_ass_subscribed_10);
Py_DECREF(tmp_ass_subscribed_10);
CHECK_OBJECT(tmp_ass_subvalue_10);
Py_DECREF(tmp_ass_subvalue_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
tmp_ass_subvalue_11 = PyObject_GetItem(locals_h11$_events$$$class__6_Data_260, mod_consts.const_str_plain_bool);

if (tmp_ass_subvalue_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_11 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_ass_subvalue_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_ass_subscribed_11 = PyObject_GetItem(locals_h11$_events$$$class__6_Data_260, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_11);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 297;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_11);

exception_lineno = 297;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscript_11 = mod_consts.const_str_plain_chunk_end;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
CHECK_OBJECT(tmp_ass_subscribed_11);
Py_DECREF(tmp_ass_subscribed_11);
CHECK_OBJECT(tmp_ass_subvalue_11);
Py_DECREF(tmp_ass_subvalue_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
tmp_defaults_1 = mod_consts.const_tuple_false_false_tuple;
tmp_dict_key_3 = mod_consts.const_str_plain_data;
tmp_dict_value_3 = PyObject_GetItem(locals_h11$_events$$$class__6_Data_260, const_str_plain_bytes);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_annotations_6 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_chunk_start;
tmp_dict_value_3 = PyObject_GetItem(locals_h11$_events$$$class__6_Data_260, mod_consts.const_str_plain_bool);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_chunk_end;
tmp_dict_value_3 = PyObject_GetItem(locals_h11$_events$$$class__6_Data_260, mod_consts.const_str_plain_bool);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_h11$_events$$$function__6___init__(tstate, tmp_defaults_1, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_h11$_events$$$class__6_Data_260, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__6_Data_260, mod_consts.const_str_plain___hash__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_2 = "o";
    goto frame_exception_exit_7;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_7:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_events$$$class__6_Data_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_events$$$class__6_Data_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_events$$$class__6_Data_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_events$$$class__6_Data_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_h11$_events$$$class__6_Data_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_22;
skip_nested_handling_6:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__6_Data_260, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_22;
}
{
nuitka_bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_6__bases;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_cmp_expr_right_6 = tmp_class_container$class_creation_6__bases_orig;
tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_22;
}
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_6__bases_orig;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__6_Data_260, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_22;
}
branch_no_18:;
{
PyObject *tmp_assign_source_71;
PyObject *tmp_called_value_26;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_35;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_26 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_35 = mod_consts.const_str_plain_Data;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_35 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_35);
tmp_tuple_element_35 = locals_h11$_events$$$class__6_Data_260;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_h11$_events->m_frame.f_lineno = 260;
tmp_assign_source_71 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_22;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_71;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_args_element_value_7 = outline_5_var___class__;
Py_INCREF(tmp_args_element_value_7);
goto try_return_handler_22;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_22:;
Py_DECREF(locals_h11$_events$$$class__6_Data_260);
locals_h11$_events$$$class__6_Data_260 = NULL;
goto try_return_handler_21;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h11$_events$$$class__6_Data_260);
locals_h11$_events$$$class__6_Data_260 = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto try_except_handler_21;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 260;
goto try_except_handler_20;
outline_result_12:;
frame_frame_h11$_events->m_frame.f_lineno = 259;
tmp_assign_source_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;

    goto try_except_handler_20;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_Data, tmp_assign_source_70);
}
goto try_end_10;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
Py_DECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
Py_DECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
Py_DECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
Py_DECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
tmp_outline_return_value_6 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_6);
goto outline_result_11;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_11:;
CHECK_OBJECT(tmp_outline_return_value_6);
Py_DECREF(tmp_outline_return_value_6);
}
{
PyObject *tmp_outline_return_value_7;
// Tried code:
{
PyObject *tmp_assign_source_72;
PyObject *tmp_tuple_element_36;
tmp_tuple_element_36 = module_var_accessor_h11$_events$Event(tstate);
if (unlikely(tmp_tuple_element_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 316;

    goto try_except_handler_23;
}
tmp_assign_source_72 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_72, 0, tmp_tuple_element_36);
assert(tmp_class_container$class_creation_7__bases_orig == NULL);
tmp_class_container$class_creation_7__bases_orig = tmp_assign_source_72;
}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_7__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_73 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_23;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_73;
}
{
PyObject *tmp_assign_source_74;
tmp_assign_source_74 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_74;
}
{
PyObject *tmp_assign_source_75;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_56;
PyObject *tmp_subscript_value_22;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_23;
}
tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_expression_value_56 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_22 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_56, tmp_subscript_value_22, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_23;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_23;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_75 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_23;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_75;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_57;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_57 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_57, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_23;
}
tmp_condition_result_26 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_26 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_assign_source_76;
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_58;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_37;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_58 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_23;
}
tmp_tuple_element_37 = mod_consts.const_str_plain_EndOfMessage;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_37 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_h11$_events->m_frame.f_lineno = 316;
tmp_assign_source_76 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_23;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_76;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_59;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_59 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_59, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_23;
}
tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
assert(!(tmp_res == -1));
tmp_condition_result_27 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_27 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_make_exception_arg_7;
PyObject *tmp_mod_expr_left_7;
PyObject *tmp_mod_expr_right_7;
PyObject *tmp_tuple_element_38;
PyObject *tmp_expression_value_60;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_60 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_38 = BUILTIN_GETATTR(tstate, tmp_expression_value_60, tmp_name_value_13, tmp_default_value_7);
if (tmp_tuple_element_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_23;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_61;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_61 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_61 == NULL));
tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_61);
Py_DECREF(tmp_expression_value_61);
if (tmp_tuple_element_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_38);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_23;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_23;
}
frame_frame_h11$_events->m_frame.f_lineno = 316;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 316;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_23;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_77;
tmp_assign_source_77 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_77;
}
branch_end_19:;
{
PyObject *tmp_assign_source_78;
PyObject *tmp_called_value_28;
PyObject *tmp_called_value_29;
PyObject *tmp_args_element_value_8;
tmp_called_value_29 = module_var_accessor_h11$_events$dataclass(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 315;

    goto try_except_handler_23;
}
frame_frame_h11$_events->m_frame.f_lineno = 315;
tmp_called_value_28 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_29, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_true_tuple, 0), mod_consts.const_tuple_str_plain_init_str_plain_frozen_tuple);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;

    goto try_except_handler_23;
}
outline_6_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_h11$_events$$$class__7_EndOfMessage_316 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e26f38130a8284dd2c307c3c7901b51d;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__7_EndOfMessage_316, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_25;
}
tmp_dictset_value = mod_consts.const_str_digest_fb4bdf8724dbfe77c0376aae5665a1aa;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__7_EndOfMessage_316, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_25;
}
tmp_dictset_value = mod_consts.const_str_plain_EndOfMessage;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__7_EndOfMessage_316, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_25;
}
tmp_dictset_value = mod_consts.const_int_pos_316;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__7_EndOfMessage_316, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_25;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__7_EndOfMessage_316, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_25;
}
frame_frame_h11$_events$$$class__7_EndOfMessage_8 = MAKE_CLASS_FRAME(tstate, code_objects_c93b1a4a6b9e7f79a59e029db0204be1, module_h11$_events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_events$$$class__7_EndOfMessage_8);
assert(Py_REFCNT(frame_frame_h11$_events$$$class__7_EndOfMessage_8) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_tuple_str_plain_headers_tuple;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__7_EndOfMessage_316, mod_consts.const_str_plain___slots__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
{
PyObject *tmp_ass_subvalue_12;
PyObject *tmp_ass_subscribed_12;
PyObject *tmp_ass_subscript_12;
tmp_ass_subvalue_12 = PyObject_GetItem(locals_h11$_events$$$class__7_EndOfMessage_316, mod_consts.const_str_plain_Headers);

if (tmp_ass_subvalue_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_12 = module_var_accessor_h11$_events$Headers(tstate);
if (unlikely(tmp_ass_subvalue_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Headers);
}

if (tmp_ass_subvalue_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 335;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_ass_subvalue_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_ass_subscribed_12 = PyObject_GetItem(locals_h11$_events$$$class__7_EndOfMessage_316, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_12);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 335;
type_description_2 = "c";
    goto frame_exception_exit_8;
}

if (tmp_ass_subscribed_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_12);

exception_lineno = 335;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
tmp_ass_subscript_12 = mod_consts.const_str_plain_headers;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
CHECK_OBJECT(tmp_ass_subscribed_12);
Py_DECREF(tmp_ass_subscribed_12);
CHECK_OBJECT(tmp_ass_subvalue_12);
Py_DECREF(tmp_ass_subvalue_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_kw_defaults_3;
PyObject *tmp_annotations_7;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_expression_value_62;
PyObject *tmp_subscript_value_23;
PyObject *tmp_tuple_element_39;
struct Nuitka_CellObject *tmp_closure_3[1];
tmp_kw_defaults_3 = DICT_COPY(tstate, mod_consts.const_dict_f0601e7894c12d9485b82cc5f7a51b20);
tmp_dict_key_4 = mod_consts.const_str_plain_headers;
tmp_expression_value_62 = PyObject_GetItem(locals_h11$_events$$$class__7_EndOfMessage_316, mod_consts.const_str_plain_Union);

if (tmp_expression_value_62 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_62 = module_var_accessor_h11$_events$Union(tstate);
if (unlikely(tmp_expression_value_62 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_defaults_3);

exception_lineno = 340;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_expression_value_62);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_tuple_element_39 = PyObject_GetItem(locals_h11$_events$$$class__7_EndOfMessage_316, mod_consts.const_str_plain_Headers);

if (tmp_tuple_element_39 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_39 = module_var_accessor_h11$_events$Headers(tstate);
if (unlikely(tmp_tuple_element_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Headers);
}

if (tmp_tuple_element_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_defaults_3);
Py_DECREF(tmp_expression_value_62);

exception_lineno = 341;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_tuple_element_39);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_subscript_value_23 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_63;
PyObject *tmp_subscript_value_24;
PyObject *tmp_expression_value_64;
PyObject *tmp_subscript_value_25;
PyObject *tmp_tuple_element_40;
PyObject *tmp_expression_value_65;
PyObject *tmp_subscript_value_26;
PyObject *tmp_expression_value_66;
PyObject *tmp_subscript_value_27;
PyObject *tmp_tuple_element_41;
PyTuple_SET_ITEM(tmp_subscript_value_23, 0, tmp_tuple_element_39);
tmp_expression_value_63 = PyObject_GetItem(locals_h11$_events$$$class__7_EndOfMessage_316, mod_consts.const_str_plain_List);

if (tmp_expression_value_63 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_63 = module_var_accessor_h11$_events$List(tstate);
if (unlikely(tmp_expression_value_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 341;
type_description_2 = "c";
    goto tuple_build_exception_10;
}
        Py_INCREF(tmp_expression_value_63);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_10;
    }
}

tmp_expression_value_64 = PyObject_GetItem(locals_h11$_events$$$class__7_EndOfMessage_316, mod_consts.const_str_plain_Tuple);

if (tmp_expression_value_64 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_64 = module_var_accessor_h11$_events$Tuple(tstate);
if (unlikely(tmp_expression_value_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_63);

exception_lineno = 341;
type_description_2 = "c";
    goto tuple_build_exception_10;
}
        Py_INCREF(tmp_expression_value_64);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_10;
    }
}

tmp_tuple_element_40 = PyObject_GetItem(locals_h11$_events$$$class__7_EndOfMessage_316, const_str_plain_bytes);

if (tmp_tuple_element_40 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_40 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_tuple_element_40);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_10;
    }
}

tmp_subscript_value_25 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_25, 0, tmp_tuple_element_40);
tmp_tuple_element_40 = PyObject_GetItem(locals_h11$_events$$$class__7_EndOfMessage_316, const_str_plain_bytes);

if (tmp_tuple_element_40 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_40 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_tuple_element_40);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_10;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_25, 1, tmp_tuple_element_40);
tmp_subscript_value_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_64, tmp_subscript_value_25);
CHECK_OBJECT(tmp_expression_value_64);
Py_DECREF(tmp_expression_value_64);
CHECK_OBJECT(tmp_subscript_value_25);
Py_DECREF(tmp_subscript_value_25);
if (tmp_subscript_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_63);

exception_lineno = 341;
type_description_2 = "c";
    goto tuple_build_exception_10;
}
tmp_tuple_element_39 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_24);
CHECK_OBJECT(tmp_expression_value_63);
Py_DECREF(tmp_expression_value_63);
CHECK_OBJECT(tmp_subscript_value_24);
Py_DECREF(tmp_subscript_value_24);
if (tmp_tuple_element_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_2 = "c";
    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_subscript_value_23, 1, tmp_tuple_element_39);
tmp_expression_value_65 = PyObject_GetItem(locals_h11$_events$$$class__7_EndOfMessage_316, mod_consts.const_str_plain_List);

if (tmp_expression_value_65 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_65 = module_var_accessor_h11$_events$List(tstate);
if (unlikely(tmp_expression_value_65 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 341;
type_description_2 = "c";
    goto tuple_build_exception_10;
}
        Py_INCREF(tmp_expression_value_65);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_10;
    }
}

tmp_expression_value_66 = PyObject_GetItem(locals_h11$_events$$$class__7_EndOfMessage_316, mod_consts.const_str_plain_Tuple);

if (tmp_expression_value_66 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_66 = module_var_accessor_h11$_events$Tuple(tstate);
if (unlikely(tmp_expression_value_66 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_65);

exception_lineno = 341;
type_description_2 = "c";
    goto tuple_build_exception_10;
}
        Py_INCREF(tmp_expression_value_66);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_10;
    }
}

tmp_tuple_element_41 = PyObject_GetItem(locals_h11$_events$$$class__7_EndOfMessage_316, mod_consts.const_str_plain_str);

if (tmp_tuple_element_41 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_41 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_41);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_10;
    }
}

tmp_subscript_value_27 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_27, 0, tmp_tuple_element_41);
tmp_tuple_element_41 = PyObject_GetItem(locals_h11$_events$$$class__7_EndOfMessage_316, mod_consts.const_str_plain_str);

if (tmp_tuple_element_41 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_41 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_41);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_10;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_27, 1, tmp_tuple_element_41);
tmp_subscript_value_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_66, tmp_subscript_value_27);
CHECK_OBJECT(tmp_expression_value_66);
Py_DECREF(tmp_expression_value_66);
CHECK_OBJECT(tmp_subscript_value_27);
Py_DECREF(tmp_subscript_value_27);
if (tmp_subscript_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_65);

exception_lineno = 341;
type_description_2 = "c";
    goto tuple_build_exception_10;
}
tmp_tuple_element_39 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_26);
CHECK_OBJECT(tmp_expression_value_65);
Py_DECREF(tmp_expression_value_65);
CHECK_OBJECT(tmp_subscript_value_26);
Py_DECREF(tmp_subscript_value_26);
if (tmp_tuple_element_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_2 = "c";
    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_subscript_value_23, 2, tmp_tuple_element_39);
tmp_tuple_element_39 = Py_None;
PyTuple_SET_ITEM0(tmp_subscript_value_23, 3, tmp_tuple_element_39);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_kw_defaults_3);
Py_DECREF(tmp_expression_value_62);
Py_DECREF(tmp_subscript_value_23);
goto frame_exception_exit_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_62, tmp_subscript_value_23);
CHECK_OBJECT(tmp_expression_value_62);
Py_DECREF(tmp_expression_value_62);
CHECK_OBJECT(tmp_subscript_value_23);
Py_DECREF(tmp_subscript_value_23);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_defaults_3);

exception_lineno = 341;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
tmp_annotations_7 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain__parsed;
tmp_dict_value_4 = PyObject_GetItem(locals_h11$_events$$$class__7_EndOfMessage_316, mod_consts.const_str_plain_bool);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_closure_3[0] = outline_6_var___class__;
Py_INCREF(tmp_closure_3[0]);
tmp_dictset_value = MAKE_FUNCTION_h11$_events$$$function__7___init__(tstate, tmp_kw_defaults_3, tmp_annotations_7, tmp_closure_3);

tmp_res = PyObject_SetItem(locals_h11$_events$$$class__7_EndOfMessage_316, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__7_EndOfMessage_316, mod_consts.const_str_plain___hash__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_2 = "c";
    goto frame_exception_exit_8;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_7;
frame_exception_exit_8:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_events$$$class__7_EndOfMessage_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_events$$$class__7_EndOfMessage_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_events$$$class__7_EndOfMessage_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_events$$$class__7_EndOfMessage_8,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_h11$_events$$$class__7_EndOfMessage_8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_25;
skip_nested_handling_7:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__7_EndOfMessage_316, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_25;
}
{
nuitka_bool tmp_condition_result_28;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_cmp_expr_left_7 = tmp_class_container$class_creation_7__bases;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_cmp_expr_right_7 = tmp_class_container$class_creation_7__bases_orig;
tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_25;
}
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_7__bases_orig;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__7_EndOfMessage_316, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_25;
}
branch_no_21:;
{
PyObject *tmp_assign_source_79;
PyObject *tmp_called_value_30;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_42;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_30 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_42 = mod_consts.const_str_plain_EndOfMessage;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_42 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_42);
tmp_tuple_element_42 = locals_h11$_events$$$class__7_EndOfMessage_316;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_h11$_events->m_frame.f_lineno = 316;
tmp_assign_source_79 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_25;
}
assert(Nuitka_Cell_GET(outline_6_var___class__) == NULL);
Nuitka_Cell_SET(outline_6_var___class__, tmp_assign_source_79);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_6_var___class__));
tmp_args_element_value_8 = Nuitka_Cell_GET(outline_6_var___class__);
Py_INCREF(tmp_args_element_value_8);
goto try_return_handler_25;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_25:;
Py_DECREF(locals_h11$_events$$$class__7_EndOfMessage_316);
locals_h11$_events$$$class__7_EndOfMessage_316 = NULL;
goto try_return_handler_24;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h11$_events$$$class__7_EndOfMessage_316);
locals_h11$_events$$$class__7_EndOfMessage_316 = NULL;
// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto try_except_handler_24;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_24:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 316;
goto try_except_handler_23;
outline_result_14:;
frame_frame_h11$_events->m_frame.f_lineno = 315;
tmp_assign_source_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;

    goto try_except_handler_23;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_EndOfMessage, tmp_assign_source_78);
}
goto try_end_11;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_7__bases_orig);
tmp_class_container$class_creation_7__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
Py_DECREF(tmp_class_container$class_creation_7__bases_orig);
tmp_class_container$class_creation_7__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
Py_DECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
Py_DECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
Py_DECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
tmp_outline_return_value_7 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_7);
goto outline_result_13;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_13:;
CHECK_OBJECT(tmp_outline_return_value_7);
Py_DECREF(tmp_outline_return_value_7);
}
{
PyObject *tmp_outline_return_value_8;
// Tried code:
{
PyObject *tmp_assign_source_80;
PyObject *tmp_tuple_element_43;
tmp_tuple_element_43 = module_var_accessor_h11$_events$Event(tstate);
if (unlikely(tmp_tuple_element_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 358;

    goto try_except_handler_26;
}
tmp_assign_source_80 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_80, 0, tmp_tuple_element_43);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_80;
}
{
PyObject *tmp_assign_source_81;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_81 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_26;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_81;
}
{
PyObject *tmp_assign_source_82;
tmp_assign_source_82 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_82;
}
{
PyObject *tmp_assign_source_83;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_8;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_67;
PyObject *tmp_subscript_value_28;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_26;
}
tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_67 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_28 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_67, tmp_subscript_value_28, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_26;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_26;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_83 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_26;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_83;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_68;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_68 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_68, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_26;
}
tmp_condition_result_30 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_30 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assign_source_84;
PyObject *tmp_called_value_31;
PyObject *tmp_expression_value_69;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_44;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_69 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_26;
}
tmp_tuple_element_44 = mod_consts.const_str_plain_ConnectionClosed;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_44 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_h11$_events->m_frame.f_lineno = 358;
tmp_assign_source_84 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_26;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_84;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_70;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_70 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_70, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_26;
}
tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
assert(!(tmp_res == -1));
tmp_condition_result_31 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_31 != false) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_raise_type_8;
PyObject *tmp_make_exception_arg_8;
PyObject *tmp_mod_expr_left_8;
PyObject *tmp_mod_expr_right_8;
PyObject *tmp_tuple_element_45;
PyObject *tmp_expression_value_71;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_71 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_45 = BUILTIN_GETATTR(tstate, tmp_expression_value_71, tmp_name_value_14, tmp_default_value_8);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_26;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_72;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_72 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_72 == NULL));
tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_72);
Py_DECREF(tmp_expression_value_72);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_45);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_26;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_26;
}
frame_frame_h11$_events->m_frame.f_lineno = 358;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 358;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_26;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_85;
tmp_assign_source_85 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_85;
}
branch_end_22:;
{
PyObject *tmp_assign_source_86;
PyObject *tmp_called_value_32;
PyObject *tmp_called_value_33;
PyObject *tmp_args_element_value_9;
tmp_called_value_33 = module_var_accessor_h11$_events$dataclass(tstate);
if (unlikely(tmp_called_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 357;

    goto try_except_handler_26;
}
frame_frame_h11$_events->m_frame.f_lineno = 357;
tmp_called_value_32 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_33, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_frozen_tuple);
if (tmp_called_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;

    goto try_except_handler_26;
}
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_h11$_events$$$class__8_ConnectionClosed_358 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e26f38130a8284dd2c307c3c7901b51d;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__8_ConnectionClosed_358, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_28;
}
tmp_dictset_value = mod_consts.const_str_digest_3324aef327ca7c69d6afebf5cbfc01b1;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__8_ConnectionClosed_358, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_28;
}
tmp_dictset_value = mod_consts.const_str_plain_ConnectionClosed;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__8_ConnectionClosed_358, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_28;
}
tmp_dictset_value = mod_consts.const_int_pos_358;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__8_ConnectionClosed_358, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_28;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__8_ConnectionClosed_358, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_28;
}
{
nuitka_bool tmp_condition_result_32;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_cmp_expr_left_8 = tmp_class_container$class_creation_8__bases;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_cmp_expr_right_8 = tmp_class_container$class_creation_8__bases_orig;
tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_28;
}
if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_8__bases_orig;
tmp_res = PyObject_SetItem(locals_h11$_events$$$class__8_ConnectionClosed_358, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_28;
}
branch_no_24:;
{
PyObject *tmp_assign_source_87;
PyObject *tmp_called_value_34;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_46;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_34 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_46 = mod_consts.const_str_plain_ConnectionClosed;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_46 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_46);
tmp_tuple_element_46 = locals_h11$_events$$$class__8_ConnectionClosed_358;
PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_h11$_events->m_frame.f_lineno = 358;
tmp_assign_source_87 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_28;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_87;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_args_element_value_9 = outline_7_var___class__;
Py_INCREF(tmp_args_element_value_9);
goto try_return_handler_28;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_28:;
Py_DECREF(locals_h11$_events$$$class__8_ConnectionClosed_358);
locals_h11$_events$$$class__8_ConnectionClosed_358 = NULL;
goto try_return_handler_27;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h11$_events$$$class__8_ConnectionClosed_358);
locals_h11$_events$$$class__8_ConnectionClosed_358 = NULL;
// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto try_except_handler_27;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_27:;
CHECK_OBJECT(outline_7_var___class__);
CHECK_OBJECT(outline_7_var___class__);
Py_DECREF(outline_7_var___class__);
outline_7_var___class__ = NULL;
goto outline_result_16;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 358;
goto try_except_handler_26;
outline_result_16:;
frame_frame_h11$_events->m_frame.f_lineno = 357;
tmp_assign_source_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_32);
Py_DECREF(tmp_called_value_32);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;

    goto try_except_handler_26;
}
UPDATE_STRING_DICT1(moduledict_h11$_events, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosed, tmp_assign_source_86);
}
goto try_end_12;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_8__bases_orig);
tmp_class_container$class_creation_8__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__bases);
tmp_class_container$class_creation_8__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__metaclass);
tmp_class_container$class_creation_8__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
Py_DECREF(tmp_class_container$class_creation_8__bases_orig);
tmp_class_container$class_creation_8__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
Py_DECREF(tmp_class_container$class_creation_8__bases);
tmp_class_container$class_creation_8__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
Py_DECREF(tmp_class_container$class_creation_8__metaclass);
tmp_class_container$class_creation_8__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
Py_DECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
tmp_outline_return_value_8 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_8);
goto outline_result_15;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_15:;
CHECK_OBJECT(tmp_outline_return_value_8);
Py_DECREF(tmp_outline_return_value_8);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_8;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_events->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_h11$_events);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_8:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("h11$_events", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "h11._events" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_h11$_events);
    return module_h11$_events;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_events, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("h11$_events", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

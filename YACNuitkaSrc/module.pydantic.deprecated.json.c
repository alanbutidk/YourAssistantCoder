/* Generated code for Python module 'pydantic$deprecated$json'
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



/* The "module_pydantic$deprecated$json" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pydantic$deprecated$json;
PyDictObject *moduledict_pydantic$deprecated$json;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_isoformat;
PyObject *const_str_plain_as_tuple;
PyObject *const_str_plain_exponent;
PyObject *const_str_digest_d0de4ba0c1ccbce467ef986c50f50c6a;
PyObject *const_str_plain_decode;
PyObject *const_str_plain_total_seconds;
PyObject *const_str_plain_value;
PyObject *const_str_plain_pattern;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_plain_PydanticDeprecatedSince20;
PyObject *const_int_pos_2;
PyObject *const_tuple_str_digest_b7e56934d74f101b79ef1b2216b2cc6f_tuple;
PyObject *const_tuple_str_plain_category_str_plain_stacklevel_tuple;
PyObject *const_str_plain_dataclasses;
PyObject *const_tuple_str_plain_asdict_str_plain_is_dataclass_tuple;
PyObject *const_str_plain_asdict;
PyObject *const_str_plain_is_dataclass;
PyObject *const_str_plain_import_cached_base_model;
PyObject *const_str_plain_model_dump;
PyObject *const_str_plain___mro__;
PyObject *const_slice_none_int_neg_1_none;
PyObject *const_str_plain_ENCODERS_BY_TYPE;
PyObject *const_str_digest_4614280514ed62f9e3f6aec3076c9b93;
PyObject *const_str_digest_448f16c67be1b8a6d9f2ff211d78b507;
PyObject *const_tuple_str_digest_21522b1855074a7fb9551b99e22a6b61_tuple;
PyObject *const_str_plain_pydantic_encoder;
PyObject *const_tuple_str_digest_e547e131cf76d25a4de3ef90816665ef_tuple;
PyObject *const_str_plain_seconds;
PyObject *const_int_pos_60;
PyObject *const_str_plain_days;
PyObject *const_str_chr_45;
PyObject *const_str_plain_P;
PyObject *const_str_plain_DT;
PyObject *const_str_plain_d;
PyObject *const_str_plain_H;
PyObject *const_str_plain_M;
PyObject *const_str_plain_microseconds;
PyObject *const_str_plain_06d;
PyObject *const_str_plain_S;
PyObject *const_str_digest_b8d727bd6e11c96adc54ff8b0751f7b0;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_datetime;
PyObject *const_str_plain_collections;
PyObject *const_tuple_str_plain_deque_tuple;
PyObject *const_str_plain_deque;
PyObject *const_str_plain_decimal;
PyObject *const_tuple_str_plain_Decimal_tuple;
PyObject *const_str_plain_Decimal;
PyObject *const_str_plain_enum;
PyObject *const_tuple_str_plain_Enum_tuple;
PyObject *const_str_plain_Enum;
PyObject *const_str_plain_ipaddress;
PyObject *const_tuple_74bd1f7bbf4f7da6f86be9d8f70006d5_tuple;
PyObject *const_str_plain_IPv4Address;
PyObject *const_str_plain_IPv4Interface;
PyObject *const_str_plain_IPv4Network;
PyObject *const_str_plain_IPv6Address;
PyObject *const_str_plain_IPv6Interface;
PyObject *const_str_plain_IPv6Network;
PyObject *const_str_plain_pathlib;
PyObject *const_tuple_str_plain_Path_tuple;
PyObject *const_str_plain_Path;
PyObject *const_str_plain_re;
PyObject *const_tuple_str_plain_Pattern_tuple;
PyObject *const_str_plain_Pattern;
PyObject *const_str_plain_GeneratorType;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_uuid;
PyObject *const_tuple_str_plain_UUID_tuple;
PyObject *const_str_plain_UUID;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_deprecated_tuple;
PyObject *const_str_plain_deprecated;
PyObject *const_str_digest_8ef7da6e5199c3055d9cfe0c2d0ecea9;
PyObject *const_tuple_str_plain_import_cached_base_model_tuple;
PyObject *const_str_plain_color;
PyObject *const_tuple_str_plain_Color_tuple;
PyObject *const_str_plain_Color;
PyObject *const_str_digest_8ad72a612982b017956848a763ba6f37;
PyObject *const_str_plain_NameEmail;
PyObject *const_str_digest_e5aa17893489aeb017e38d77eaa3b786;
PyObject *const_str_plain_SecretBytes;
PyObject *const_str_plain_SecretStr;
PyObject *const_str_digest_c19110e962cc33b179db397d44e7edf4;
PyObject *const_str_plain_DeprecationWarning;
PyObject *const_tuple_e8ffd0cd531943cdf10ebc1f37be8ca0_tuple;
PyObject *const_str_plain_o;
PyObject *const_str_plain_date;
PyObject *const_str_plain_time;
PyObject *const_str_plain_return;
PyObject *const_str_plain_dec_value;
PyObject *const_tuple_type_int_type_float_tuple;
PyObject *const_str_plain_decimal_encoder;
PyObject *const_str_angle_lambda;
PyObject *const_str_plain_timedelta;
PyObject *const_tuple_str_digest_b7e56934d74f101b79ef1b2216b2cc6f_none_tuple;
PyObject *const_tuple_str_plain_category_tuple;
PyObject *const_str_plain_obj;
PyObject *const_tuple_str_digest_21522b1855074a7fb9551b99e22a6b61_none_tuple;
PyObject *const_str_plain_type_encoders;
PyObject *const_str_plain_custom_pydantic_encoder;
PyObject *const_tuple_str_digest_e547e131cf76d25a4de3ef90816665ef_none_tuple;
PyObject *const_str_plain_td;
PyObject *const_str_plain_timedelta_isoformat;
PyObject *const_str_digest_d63d187acdc68101df0af30d5a9f4642;
PyObject *const_tuple_str_plain_o_tuple;
PyObject *const_tuple_str_plain_td_tuple;
PyObject *const_str_digest_230758988a5d84ae6ccad9b42b314388;
PyObject *const_tuple_7749f8d5d1c5c6853e4b8e78888dc1f6_tuple;
PyObject *const_tuple_str_plain_dec_value_str_plain_exponent_tuple;
PyObject *const_tuple_e7d71767cc426d7e9f26e7a3cb36f16f_tuple;
PyObject *const_tuple_6075df229ad7c12d8ebdea4546556710_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[117];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pydantic.deprecated.json"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_isoformat);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_as_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_exponent);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_d0de4ba0c1ccbce467ef986c50f50c6a);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_total_seconds);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_pattern);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticDeprecatedSince20);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b7e56934d74f101b79ef1b2216b2cc6f_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_asdict_str_plain_is_dataclass_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_asdict);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_dataclass);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_import_cached_base_model);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_dump);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain___mro__);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENCODERS_BY_TYPE);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_4614280514ed62f9e3f6aec3076c9b93);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_448f16c67be1b8a6d9f2ff211d78b507);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_21522b1855074a7fb9551b99e22a6b61_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic_encoder);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e547e131cf76d25a4de3ef90816665ef_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_seconds);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_int_pos_60);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_days);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_chr_45);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_P);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_DT);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_d);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_H);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_M);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_microseconds);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_06d);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_S);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8d727bd6e11c96adc54ff8b0751f7b0);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_datetime);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_collections);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deque_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_deque);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_decimal);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Decimal_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_Decimal);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Enum_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_Enum);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_ipaddress);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_74bd1f7bbf4f7da6f86be9d8f70006d5_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPv4Address);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPv4Interface);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPv4Network);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPv6Address);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPv6Interface);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPv6Network);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_pathlib);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_Path);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Pattern_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_Pattern);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_GeneratorType);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_uuid);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UUID_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_UUID);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deprecated_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_deprecated);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ef7da6e5199c3055d9cfe0c2d0ecea9);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_import_cached_base_model_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_color);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Color_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_Color);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ad72a612982b017956848a763ba6f37);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_NameEmail);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_e5aa17893489aeb017e38d77eaa3b786);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_SecretBytes);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_SecretStr);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_c19110e962cc33b179db397d44e7edf4);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_e8ffd0cd531943cdf10ebc1f37be8ca0_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_o);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_date);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_dec_value);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_float_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_decimal_encoder);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_timedelta);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b7e56934d74f101b79ef1b2216b2cc6f_none_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_category_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_obj);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_21522b1855074a7fb9551b99e22a6b61_none_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_type_encoders);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_custom_pydantic_encoder);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e547e131cf76d25a4de3ef90816665ef_none_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_td);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_timedelta_isoformat);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_d63d187acdc68101df0af30d5a9f4642);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_o_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_td_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_230758988a5d84ae6ccad9b42b314388);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_7749f8d5d1c5c6853e4b8e78888dc1f6_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dec_value_str_plain_exponent_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_e7d71767cc426d7e9f26e7a3cb36f16f_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_6075df229ad7c12d8ebdea4546556710_tuple);
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
void checkModuleConstants_pydantic$deprecated$json(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_isoformat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isoformat);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_as_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_as_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_exponent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exponent);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_d0de4ba0c1ccbce467ef986c50f50c6a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d0de4ba0c1ccbce467ef986c50f50c6a);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_total_seconds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_total_seconds);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_pattern));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pattern);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticDeprecatedSince20));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticDeprecatedSince20);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b7e56934d74f101b79ef1b2216b2cc6f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b7e56934d74f101b79ef1b2216b2cc6f_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclasses);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_asdict_str_plain_is_dataclass_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_asdict_str_plain_is_dataclass_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_asdict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asdict);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_dataclass);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_import_cached_base_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_import_cached_base_model);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_dump));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_dump);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain___mro__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___mro__);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_neg_1_none);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENCODERS_BY_TYPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENCODERS_BY_TYPE);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_4614280514ed62f9e3f6aec3076c9b93));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4614280514ed62f9e3f6aec3076c9b93);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_448f16c67be1b8a6d9f2ff211d78b507));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_448f16c67be1b8a6d9f2ff211d78b507);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_21522b1855074a7fb9551b99e22a6b61_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_21522b1855074a7fb9551b99e22a6b61_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic_encoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pydantic_encoder);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e547e131cf76d25a4de3ef90816665ef_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e547e131cf76d25a4de3ef90816665ef_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_seconds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_seconds);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_int_pos_60));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_60);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_days));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_days);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_chr_45));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_45);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_P));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_P);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_DT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DT);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_d);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_H));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_H);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_M));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_M);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_microseconds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_microseconds);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_06d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_06d);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_S));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_S);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8d727bd6e11c96adc54ff8b0751f7b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8d727bd6e11c96adc54ff8b0751f7b0);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_datetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_datetime);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_collections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_collections);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deque_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_deque_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_deque));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deque);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_decimal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decimal);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Decimal_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Decimal_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_Decimal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Decimal);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enum);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Enum_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Enum_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_Enum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Enum);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_ipaddress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ipaddress);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_74bd1f7bbf4f7da6f86be9d8f70006d5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_74bd1f7bbf4f7da6f86be9d8f70006d5_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPv4Address));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPv4Address);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPv4Interface));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPv4Interface);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPv4Network));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPv4Network);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPv6Address));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPv6Address);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPv6Interface));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPv6Interface);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPv6Network));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPv6Network);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_pathlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pathlib);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Path_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_Path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Path);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Pattern_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Pattern_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_Pattern));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Pattern);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_GeneratorType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GeneratorType);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_uuid));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uuid);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UUID_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_UUID_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_UUID));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UUID);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deprecated_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_deprecated_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_deprecated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deprecated);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ef7da6e5199c3055d9cfe0c2d0ecea9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ef7da6e5199c3055d9cfe0c2d0ecea9);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_import_cached_base_model_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_import_cached_base_model_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_color);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Color_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Color_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_Color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Color);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ad72a612982b017956848a763ba6f37));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ad72a612982b017956848a763ba6f37);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_NameEmail));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NameEmail);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_e5aa17893489aeb017e38d77eaa3b786));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e5aa17893489aeb017e38d77eaa3b786);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_SecretBytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SecretBytes);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_SecretStr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SecretStr);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_c19110e962cc33b179db397d44e7edf4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c19110e962cc33b179db397d44e7edf4);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeprecationWarning);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_e8ffd0cd531943cdf10ebc1f37be8ca0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e8ffd0cd531943cdf10ebc1f37be8ca0_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_o));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_o);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_date));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_date);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_dec_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dec_value);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_float_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_int_type_float_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_decimal_encoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decimal_encoder);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_timedelta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timedelta);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b7e56934d74f101b79ef1b2216b2cc6f_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b7e56934d74f101b79ef1b2216b2cc6f_none_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_category_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_category_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_obj));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_obj);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_21522b1855074a7fb9551b99e22a6b61_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_21522b1855074a7fb9551b99e22a6b61_none_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_type_encoders));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_type_encoders);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_custom_pydantic_encoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_custom_pydantic_encoder);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e547e131cf76d25a4de3ef90816665ef_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e547e131cf76d25a4de3ef90816665ef_none_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_td));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_td);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_timedelta_isoformat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timedelta_isoformat);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_d63d187acdc68101df0af30d5a9f4642));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d63d187acdc68101df0af30d5a9f4642);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_o_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_o_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_td_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_td_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_230758988a5d84ae6ccad9b42b314388));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_230758988a5d84ae6ccad9b42b314388);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_7749f8d5d1c5c6853e4b8e78888dc1f6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7749f8d5d1c5c6853e4b8e78888dc1f6_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dec_value_str_plain_exponent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dec_value_str_plain_exponent_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_e7d71767cc426d7e9f26e7a3cb36f16f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e7d71767cc426d7e9f26e7a3cb36f16f_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_6075df229ad7c12d8ebdea4546556710_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6075df229ad7c12d8ebdea4546556710_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 31
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
static PyObject *module_var_accessor_pydantic$deprecated$json$Any(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$Callable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$Color(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Color);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Color, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Color);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Color, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$Decimal(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Decimal);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Decimal);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Decimal, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Decimal);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Decimal, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Decimal);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Decimal);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Decimal);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$ENCODERS_BY_TYPE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_ENCODERS_BY_TYPE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ENCODERS_BY_TYPE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ENCODERS_BY_TYPE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ENCODERS_BY_TYPE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ENCODERS_BY_TYPE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_ENCODERS_BY_TYPE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_ENCODERS_BY_TYPE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ENCODERS_BY_TYPE);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$Enum(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Enum);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Enum, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Enum);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Enum, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$GeneratorType(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_GeneratorType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GeneratorType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GeneratorType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GeneratorType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GeneratorType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_GeneratorType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_GeneratorType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GeneratorType);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$IPv4Address(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Address);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv4Address);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv4Address, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv4Address);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv4Address, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Address);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Address);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Address);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$IPv4Interface(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Interface);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv4Interface);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv4Interface, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv4Interface);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv4Interface, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Interface);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Interface);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Interface);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$IPv4Network(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Network);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv4Network);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv4Network, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv4Network);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv4Network, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Network);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Network);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Network);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$IPv6Address(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Address);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv6Address);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv6Address, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv6Address);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv6Address, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Address);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Address);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Address);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$IPv6Interface(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Interface);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv6Interface);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv6Interface, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv6Interface);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv6Interface, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Interface);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Interface);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Interface);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$IPv6Network(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Network);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv6Network);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv6Network, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv6Network);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv6Network, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Network);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Network);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Network);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$NameEmail(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_NameEmail);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NameEmail);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NameEmail, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NameEmail);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NameEmail, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_NameEmail);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_NameEmail);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NameEmail);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$Path(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Path);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Path, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Path);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Path, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$Pattern(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Pattern);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Pattern);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Pattern, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Pattern);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Pattern, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Pattern);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Pattern);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Pattern);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$PydanticDeprecatedSince20(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticDeprecatedSince20);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PydanticDeprecatedSince20);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PydanticDeprecatedSince20, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PydanticDeprecatedSince20);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PydanticDeprecatedSince20, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticDeprecatedSince20);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticDeprecatedSince20);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticDeprecatedSince20);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$SecretBytes(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_SecretBytes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SecretBytes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SecretBytes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SecretBytes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SecretBytes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_SecretBytes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_SecretBytes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SecretBytes);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$SecretStr(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_SecretStr);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SecretStr);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SecretStr, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SecretStr);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SecretStr, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_SecretStr);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_SecretStr);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SecretStr);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$UUID(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_UUID);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UUID);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UUID, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UUID);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UUID, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_UUID);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_UUID);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UUID);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$datetime(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_datetime);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_datetime, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_datetime);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_datetime, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$decimal_encoder(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_decimal_encoder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_decimal_encoder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_decimal_encoder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_decimal_encoder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_decimal_encoder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_decimal_encoder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_decimal_encoder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_decimal_encoder);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$deprecated(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_deprecated);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_deprecated);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_deprecated, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_deprecated);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_deprecated, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_deprecated);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_deprecated);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_deprecated);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$deque(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_deque);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_deque);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_deque, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_deque);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_deque, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_deque);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_deque);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_deque);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$import_cached_base_model(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_import_cached_base_model);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_import_cached_base_model);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_import_cached_base_model, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_import_cached_base_model);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_import_cached_base_model, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_import_cached_base_model);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_import_cached_base_model);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_import_cached_base_model);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$isoformat(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_isoformat);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isoformat);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isoformat, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isoformat);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isoformat, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_isoformat);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_isoformat);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_isoformat);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$pydantic_encoder(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_pydantic_encoder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pydantic_encoder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pydantic_encoder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pydantic_encoder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pydantic_encoder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_pydantic_encoder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_pydantic_encoder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_pydantic_encoder);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$json$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$json->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$json->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$json->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warnings);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warnings, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warnings);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warnings, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_6f684dcb4ca6fba53ffa6ce8e36d81fb;
static PyCodeObject *code_objects_33e901e5d508123659127587cf895bd9;
static PyCodeObject *code_objects_bc9b22b10557db5efc2b7788c2a775df;
static PyCodeObject *code_objects_4275e7da4ed874b87be1a5523e6b235f;
static PyCodeObject *code_objects_73190cd52ccb22a0d75adaa147cae4e3;
static PyCodeObject *code_objects_42f91bcf7752a4e5519c6fed9c57acf7;
static PyCodeObject *code_objects_d843dd5762030a41c662817c04005957;
static PyCodeObject *code_objects_822755d2560c58cd49739254caaed997;
static PyCodeObject *code_objects_da2af5a84b7869fe5e8c64d80e99d28d;
static PyCodeObject *code_objects_115695ba62751219afbef69fb9b982cd;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_d63d187acdc68101df0af30d5a9f4642); CHECK_OBJECT(module_filename_obj);
code_objects_6f684dcb4ca6fba53ffa6ce8e36d81fb = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_angle_lambda, mod_consts.const_tuple_str_plain_o_tuple, NULL, 1, 0, 0);
code_objects_33e901e5d508123659127587cf895bd9 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_angle_lambda, mod_consts.const_tuple_str_plain_o_tuple, NULL, 1, 0, 0);
code_objects_bc9b22b10557db5efc2b7788c2a775df = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_angle_lambda, mod_consts.const_tuple_str_plain_o_tuple, NULL, 1, 0, 0);
code_objects_4275e7da4ed874b87be1a5523e6b235f = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_angle_lambda, mod_consts.const_tuple_str_plain_td_tuple, NULL, 1, 0, 0);
code_objects_73190cd52ccb22a0d75adaa147cae4e3 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_230758988a5d84ae6ccad9b42b314388, mod_consts.const_str_digest_230758988a5d84ae6ccad9b42b314388, NULL, NULL, 0, 0, 0);
code_objects_42f91bcf7752a4e5519c6fed9c57acf7 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_custom_pydantic_encoder, mod_consts.const_str_plain_custom_pydantic_encoder, mod_consts.const_tuple_7749f8d5d1c5c6853e4b8e78888dc1f6_tuple, NULL, 2, 0, 0);
code_objects_d843dd5762030a41c662817c04005957 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_decimal_encoder, mod_consts.const_str_plain_decimal_encoder, mod_consts.const_tuple_str_plain_dec_value_str_plain_exponent_tuple, NULL, 1, 0, 0);
code_objects_822755d2560c58cd49739254caaed997 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_isoformat, mod_consts.const_str_plain_isoformat, mod_consts.const_tuple_str_plain_o_tuple, NULL, 1, 0, 0);
code_objects_da2af5a84b7869fe5e8c64d80e99d28d = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_pydantic_encoder, mod_consts.const_str_plain_pydantic_encoder, mod_consts.const_tuple_e7d71767cc426d7e9f26e7a3cb36f16f_tuple, NULL, 1, 0, 0);
code_objects_115695ba62751219afbef69fb9b982cd = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_timedelta_isoformat, mod_consts.const_str_plain_timedelta_isoformat, mod_consts.const_tuple_6075df229ad7c12d8ebdea4546556710_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_pydantic$deprecated$json$$$function__1_isoformat(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$deprecated$json$$$function__2_decimal_encoder(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$deprecated$json$$$function__3_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pydantic$deprecated$json$$$function__4_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pydantic$deprecated$json$$$function__5_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pydantic$deprecated$json$$$function__6_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pydantic$deprecated$json$$$function__7_pydantic_encoder(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$deprecated$json$$$function__9_timedelta_isoformat(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_pydantic$deprecated$json$$$function__1_isoformat(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_o = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$deprecated$json$$$function__1_isoformat;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$deprecated$json$$$function__1_isoformat = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$deprecated$json$$$function__1_isoformat)) {
    Py_XDECREF(cache_frame_frame_pydantic$deprecated$json$$$function__1_isoformat);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$deprecated$json$$$function__1_isoformat == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$deprecated$json$$$function__1_isoformat = MAKE_FUNCTION_FRAME(tstate, code_objects_822755d2560c58cd49739254caaed997, module_pydantic$deprecated$json, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$deprecated$json$$$function__1_isoformat->m_type_description == NULL);
frame_frame_pydantic$deprecated$json$$$function__1_isoformat = cache_frame_frame_pydantic$deprecated$json$$$function__1_isoformat;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$deprecated$json$$$function__1_isoformat);
assert(Py_REFCNT(frame_frame_pydantic$deprecated$json$$$function__1_isoformat) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_o);
tmp_called_instance_1 = par_o;
frame_frame_pydantic$deprecated$json$$$function__1_isoformat->m_frame.f_lineno = 30;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isoformat);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$deprecated$json$$$function__1_isoformat, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$deprecated$json$$$function__1_isoformat->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$deprecated$json$$$function__1_isoformat, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$deprecated$json$$$function__1_isoformat,
    type_description_1,
    par_o
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$deprecated$json$$$function__1_isoformat == cache_frame_frame_pydantic$deprecated$json$$$function__1_isoformat) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$deprecated$json$$$function__1_isoformat);
    cache_frame_frame_pydantic$deprecated$json$$$function__1_isoformat = NULL;
}

assertFrameObject(frame_frame_pydantic$deprecated$json$$$function__1_isoformat);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_o);
Py_DECREF(par_o);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_o);
Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$deprecated$json$$$function__2_decimal_encoder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_dec_value = python_pars[0];
PyObject *var_exponent = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder)) {
    Py_XDECREF(cache_frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder = MAKE_FUNCTION_FRAME(tstate, code_objects_d843dd5762030a41c662817c04005957, module_pydantic$deprecated$json, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder->m_type_description == NULL);
frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder = cache_frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder);
assert(Py_REFCNT(frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_dec_value);
tmp_called_instance_1 = par_dec_value;
frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder->m_frame.f_lineno = 47;
tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_tuple);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_exponent);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_exponent == NULL);
var_exponent = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_exponent);
tmp_isinstance_inst_1 = var_exponent;
tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_exponent);
tmp_cmp_expr_left_1 = var_exponent;
tmp_cmp_expr_right_1 = const_int_0;
tmp_and_right_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_int_arg_1;
CHECK_OBJECT(par_dec_value);
tmp_int_arg_1 = par_dec_value;
tmp_return_value = PyNumber_Int(tmp_int_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_float_arg_1;
CHECK_OBJECT(par_dec_value);
tmp_float_arg_1 = par_dec_value;
tmp_return_value = TO_FLOAT(tmp_float_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder,
    type_description_1,
    par_dec_value,
    var_exponent
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder == cache_frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder);
    cache_frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder = NULL;
}

assertFrameObject(frame_frame_pydantic$deprecated$json$$$function__2_decimal_encoder);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_exponent);
CHECK_OBJECT(var_exponent);
Py_DECREF(var_exponent);
var_exponent = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_exponent);
var_exponent = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_dec_value);
Py_DECREF(par_dec_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_dec_value);
Py_DECREF(par_dec_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$deprecated$json$$$function__3_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_o = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$deprecated$json$$$function__3_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$deprecated$json$$$function__3_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$deprecated$json$$$function__3_lambda)) {
    Py_XDECREF(cache_frame_frame_pydantic$deprecated$json$$$function__3_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$deprecated$json$$$function__3_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$deprecated$json$$$function__3_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_6f684dcb4ca6fba53ffa6ce8e36d81fb, module_pydantic$deprecated$json, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$deprecated$json$$$function__3_lambda->m_type_description == NULL);
frame_frame_pydantic$deprecated$json$$$function__3_lambda = cache_frame_frame_pydantic$deprecated$json$$$function__3_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$deprecated$json$$$function__3_lambda);
assert(Py_REFCNT(frame_frame_pydantic$deprecated$json$$$function__3_lambda) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_o);
tmp_expression_value_1 = par_o;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_decode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$deprecated$json$$$function__3_lambda->m_frame.f_lineno = 55;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$deprecated$json$$$function__3_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$deprecated$json$$$function__3_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$deprecated$json$$$function__3_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$deprecated$json$$$function__3_lambda,
    type_description_1,
    par_o
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$deprecated$json$$$function__3_lambda == cache_frame_frame_pydantic$deprecated$json$$$function__3_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$deprecated$json$$$function__3_lambda);
    cache_frame_frame_pydantic$deprecated$json$$$function__3_lambda = NULL;
}

assertFrameObject(frame_frame_pydantic$deprecated$json$$$function__3_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_o);
Py_DECREF(par_o);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_o);
Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$deprecated$json$$$function__4_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_td = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$deprecated$json$$$function__4_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$deprecated$json$$$function__4_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$deprecated$json$$$function__4_lambda)) {
    Py_XDECREF(cache_frame_frame_pydantic$deprecated$json$$$function__4_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$deprecated$json$$$function__4_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$deprecated$json$$$function__4_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_4275e7da4ed874b87be1a5523e6b235f, module_pydantic$deprecated$json, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$deprecated$json$$$function__4_lambda->m_type_description == NULL);
frame_frame_pydantic$deprecated$json$$$function__4_lambda = cache_frame_frame_pydantic$deprecated$json$$$function__4_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$deprecated$json$$$function__4_lambda);
assert(Py_REFCNT(frame_frame_pydantic$deprecated$json$$$function__4_lambda) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_td);
tmp_called_instance_1 = par_td;
frame_frame_pydantic$deprecated$json$$$function__4_lambda->m_frame.f_lineno = 60;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_total_seconds);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$deprecated$json$$$function__4_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$deprecated$json$$$function__4_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$deprecated$json$$$function__4_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$deprecated$json$$$function__4_lambda,
    type_description_1,
    par_td
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$deprecated$json$$$function__4_lambda == cache_frame_frame_pydantic$deprecated$json$$$function__4_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$deprecated$json$$$function__4_lambda);
    cache_frame_frame_pydantic$deprecated$json$$$function__4_lambda = NULL;
}

assertFrameObject(frame_frame_pydantic$deprecated$json$$$function__4_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_td);
Py_DECREF(par_td);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_td);
Py_DECREF(par_td);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$deprecated$json$$$function__5_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_o = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$deprecated$json$$$function__5_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$deprecated$json$$$function__5_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$deprecated$json$$$function__5_lambda)) {
    Py_XDECREF(cache_frame_frame_pydantic$deprecated$json$$$function__5_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$deprecated$json$$$function__5_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$deprecated$json$$$function__5_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_33e901e5d508123659127587cf895bd9, module_pydantic$deprecated$json, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$deprecated$json$$$function__5_lambda->m_type_description == NULL);
frame_frame_pydantic$deprecated$json$$$function__5_lambda = cache_frame_frame_pydantic$deprecated$json$$$function__5_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$deprecated$json$$$function__5_lambda);
assert(Py_REFCNT(frame_frame_pydantic$deprecated$json$$$function__5_lambda) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_o);
tmp_expression_value_1 = par_o;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_value);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$deprecated$json$$$function__5_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$deprecated$json$$$function__5_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$deprecated$json$$$function__5_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$deprecated$json$$$function__5_lambda,
    type_description_1,
    par_o
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$deprecated$json$$$function__5_lambda == cache_frame_frame_pydantic$deprecated$json$$$function__5_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$deprecated$json$$$function__5_lambda);
    cache_frame_frame_pydantic$deprecated$json$$$function__5_lambda = NULL;
}

assertFrameObject(frame_frame_pydantic$deprecated$json$$$function__5_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_o);
Py_DECREF(par_o);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_o);
Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$deprecated$json$$$function__6_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_o = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$deprecated$json$$$function__6_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$deprecated$json$$$function__6_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$deprecated$json$$$function__6_lambda)) {
    Py_XDECREF(cache_frame_frame_pydantic$deprecated$json$$$function__6_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$deprecated$json$$$function__6_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$deprecated$json$$$function__6_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_bc9b22b10557db5efc2b7788c2a775df, module_pydantic$deprecated$json, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$deprecated$json$$$function__6_lambda->m_type_description == NULL);
frame_frame_pydantic$deprecated$json$$$function__6_lambda = cache_frame_frame_pydantic$deprecated$json$$$function__6_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$deprecated$json$$$function__6_lambda);
assert(Py_REFCNT(frame_frame_pydantic$deprecated$json$$$function__6_lambda) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_o);
tmp_expression_value_1 = par_o;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pattern);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$deprecated$json$$$function__6_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$deprecated$json$$$function__6_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$deprecated$json$$$function__6_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$deprecated$json$$$function__6_lambda,
    type_description_1,
    par_o
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$deprecated$json$$$function__6_lambda == cache_frame_frame_pydantic$deprecated$json$$$function__6_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$deprecated$json$$$function__6_lambda);
    cache_frame_frame_pydantic$deprecated$json$$$function__6_lambda = NULL;
}

assertFrameObject(frame_frame_pydantic$deprecated$json$$$function__6_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_o);
Py_DECREF(par_o);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_o);
Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$deprecated$json$$$function__7_pydantic_encoder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_obj = python_pars[0];
PyObject *var_asdict = NULL;
PyObject *var_is_dataclass = NULL;
PyObject *var_BaseModel = NULL;
PyObject *var_base = NULL;
PyObject *var_encoder = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder)) {
    Py_XDECREF(cache_frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder = MAKE_FUNCTION_FRAME(tstate, code_objects_da2af5a84b7869fe5e8c64d80e99d28d, module_pydantic$deprecated$json, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder->m_type_description == NULL);
frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder = cache_frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder);
assert(Py_REFCNT(frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
tmp_expression_value_1 = module_var_accessor_pydantic$deprecated$json$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = module_var_accessor_pydantic$deprecated$json$PydanticDeprecatedSince20(tstate);
if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticDeprecatedSince20);
}

if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 89;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = mod_consts.const_int_pos_2;
frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder->m_frame.f_lineno = 87;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_b7e56934d74f101b79ef1b2216b2cc6f_tuple, kw_values, mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_dataclasses;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pydantic$deprecated$json;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_asdict_str_plain_is_dataclass_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder->m_frame.f_lineno = 92;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_asdict,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_asdict);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(var_asdict == NULL);
var_asdict = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_is_dataclass,
        const_int_0
    );
} else {
    tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_is_dataclass);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(var_is_dataclass == NULL);
var_is_dataclass = tmp_assign_source_3;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
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
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_pydantic$deprecated$json$import_cached_base_model(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_import_cached_base_model);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder->m_frame.f_lineno = 94;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_BaseModel == NULL);
var_BaseModel = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_obj);
tmp_isinstance_inst_1 = par_obj;
CHECK_OBJECT(var_BaseModel);
tmp_isinstance_cls_1 = var_BaseModel;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooooo";
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
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_obj);
tmp_called_instance_1 = par_obj;
frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder->m_frame.f_lineno = 97;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_model_dump);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_is_dataclass);
tmp_called_value_3 = var_is_dataclass;
CHECK_OBJECT(par_obj);
tmp_args_element_value_1 = par_obj;
frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder->m_frame.f_lineno = 98;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 98;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_asdict);
tmp_called_value_4 = var_asdict;
CHECK_OBJECT(par_obj);
tmp_args_element_value_2 = par_obj;
frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder->m_frame.f_lineno = 99;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
branch_end_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_obj);
tmp_expression_value_4 = par_obj;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___mro__);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_slice_none_int_neg_1_none;
tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
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
type_description_1 = "oooooo";
exception_lineno = 102;
        goto try_except_handler_3;
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
    PyObject *old = var_base;
    var_base = tmp_assign_source_7;
    Py_INCREF(var_base);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
tmp_expression_value_5 = module_var_accessor_pydantic$deprecated$json$ENCODERS_BY_TYPE(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ENCODERS_BY_TYPE);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_base);
tmp_subscript_value_2 = var_base;
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
assert(var_encoder == NULL);
var_encoder = tmp_assign_source_8;
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_KeyError;
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
goto try_continue_handler_5;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 103;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder->m_frame)) {
        frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_5;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// try continue handler code:
try_continue_handler_5:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto loop_start_1;
// End of try:
// End of try:
try_end_2:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_encoder);
tmp_called_value_5 = var_encoder;
CHECK_OBJECT(par_obj);
tmp_args_element_value_3 = par_obj;
frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder->m_frame.f_lineno = 107;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
goto try_return_handler_3;
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Return handler code:
try_return_handler_3:;
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
try_except_handler_3:;
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
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_4614280514ed62f9e3f6aec3076c9b93;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_obj);
tmp_expression_value_7 = par_obj;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_448f16c67be1b8a6d9f2ff211d78b507;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder->m_frame.f_lineno = 109;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 109;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder,
    type_description_1,
    par_obj,
    var_asdict,
    var_is_dataclass,
    var_BaseModel,
    var_base,
    var_encoder
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder == cache_frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder);
    cache_frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder = NULL;
}

assertFrameObject(frame_frame_pydantic$deprecated$json$$$function__7_pydantic_encoder);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_asdict);
CHECK_OBJECT(var_asdict);
Py_DECREF(var_asdict);
var_asdict = NULL;
CHECK_OBJECT(var_is_dataclass);
CHECK_OBJECT(var_is_dataclass);
Py_DECREF(var_is_dataclass);
var_is_dataclass = NULL;
CHECK_OBJECT(var_BaseModel);
CHECK_OBJECT(var_BaseModel);
Py_DECREF(var_BaseModel);
var_BaseModel = NULL;
Py_XDECREF(var_base);
var_base = NULL;
Py_XDECREF(var_encoder);
var_encoder = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_asdict);
var_asdict = NULL;
Py_XDECREF(var_is_dataclass);
var_is_dataclass = NULL;
Py_XDECREF(var_BaseModel);
var_BaseModel = NULL;
Py_XDECREF(var_base);
var_base = NULL;
Py_XDECREF(var_encoder);
var_encoder = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_type_encoders = python_pars[0];
PyObject *par_obj = python_pars[1];
PyObject *var_base = NULL;
PyObject *var_encoder = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder)) {
    Py_XDECREF(cache_frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder = MAKE_FUNCTION_FRAME(tstate, code_objects_42f91bcf7752a4e5519c6fed9c57acf7, module_pydantic$deprecated$json, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder->m_type_description == NULL);
frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder = cache_frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder);
assert(Py_REFCNT(frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
tmp_expression_value_1 = module_var_accessor_pydantic$deprecated$json$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = module_var_accessor_pydantic$deprecated$json$PydanticDeprecatedSince20(tstate);
if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticDeprecatedSince20);
}

if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 120;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = mod_consts.const_int_pos_2;
frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder->m_frame.f_lineno = 118;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_21522b1855074a7fb9551b99e22a6b61_tuple, kw_values, mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_obj);
tmp_expression_value_4 = par_obj;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___mro__);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_slice_none_int_neg_1_none;
tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 124;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_3 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_base;
    var_base = tmp_assign_source_3;
    Py_INCREF(var_base);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_type_encoders);
tmp_expression_value_5 = par_type_encoders;
CHECK_OBJECT(var_base);
tmp_subscript_value_2 = var_base;
tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
assert(var_encoder == NULL);
var_encoder = tmp_assign_source_4;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_KeyError;
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
goto try_continue_handler_4;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 125;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder->m_frame)) {
        frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_4;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// try continue handler code:
try_continue_handler_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto loop_start_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_encoder);
tmp_called_value_2 = var_encoder;
CHECK_OBJECT(par_obj);
tmp_args_element_value_1 = par_obj;
frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder->m_frame.f_lineno = 130;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
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
try_end_2:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_pydantic$deprecated$json$pydantic_encoder(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pydantic_encoder);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_obj);
tmp_args_element_value_2 = par_obj;
frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder->m_frame.f_lineno = 132;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder,
    type_description_1,
    par_type_encoders,
    par_obj,
    var_base,
    var_encoder
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder == cache_frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder);
    cache_frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder = NULL;
}

assertFrameObject(frame_frame_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_base);
var_base = NULL;
Py_XDECREF(var_encoder);
var_encoder = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_base);
var_base = NULL;
Py_XDECREF(var_encoder);
var_encoder = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_type_encoders);
Py_DECREF(par_type_encoders);
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_type_encoders);
Py_DECREF(par_type_encoders);
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$deprecated$json$$$function__9_timedelta_isoformat(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_td = python_pars[0];
PyObject *var_minutes = NULL;
PyObject *var_seconds = NULL;
PyObject *var_hours = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat)) {
    Py_XDECREF(cache_frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat = MAKE_FUNCTION_FRAME(tstate, code_objects_115695ba62751219afbef69fb9b982cd, module_pydantic$deprecated$json, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat->m_type_description == NULL);
frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat = cache_frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat);
assert(Py_REFCNT(frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
tmp_expression_value_1 = module_var_accessor_pydantic$deprecated$json$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = module_var_accessor_pydantic$deprecated$json$PydanticDeprecatedSince20(tstate);
if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticDeprecatedSince20);
}

if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 138;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = mod_consts.const_int_pos_2;
frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat->m_frame.f_lineno = 138;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_e547e131cf76d25a4de3ef90816665ef_tuple, kw_values, mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_divmod_expr_left_1;
PyObject *tmp_divmod_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_td);
tmp_expression_value_2 = par_td;
tmp_divmod_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_seconds);
if (tmp_divmod_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_divmod_expr_right_1 = mod_consts.const_int_pos_60;
tmp_iter_arg_1 = BINARY_OPERATION_DIVMOD_OBJECT_OBJECT_LONG(tmp_divmod_expr_left_1, tmp_divmod_expr_right_1);
CHECK_OBJECT(tmp_divmod_expr_left_1);
Py_DECREF(tmp_divmod_expr_left_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
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

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_minutes == NULL);
Py_INCREF(tmp_assign_source_4);
var_minutes = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_seconds == NULL);
Py_INCREF(tmp_assign_source_5);
var_seconds = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_divmod_expr_left_2;
PyObject *tmp_divmod_expr_right_2;
CHECK_OBJECT(var_minutes);
tmp_divmod_expr_left_2 = var_minutes;
tmp_divmod_expr_right_2 = mod_consts.const_int_pos_60;
tmp_iter_arg_2 = BINARY_OPERATION_DIVMOD_OBJECT_OBJECT_LONG(tmp_divmod_expr_left_2, tmp_divmod_expr_right_2);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;
assert(var_hours == NULL);
Py_INCREF(tmp_assign_source_9);
var_hours = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_minutes;
    assert(old != NULL);
    var_minutes = tmp_assign_source_10;
    Py_INCREF(var_minutes);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_td);
tmp_expression_value_3 = par_td;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_days);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_tuple_element_1 = mod_consts.const_str_chr_45;
goto condexpr_end_1;
condexpr_false_1:;
tmp_tuple_element_1 = const_str_empty;
condexpr_end_1:;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 12);
{
PyObject *tmp_format_value_1;
PyObject *tmp_abs_arg_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyObject *tmp_format_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_plain_P;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_td);
tmp_expression_value_4 = par_td;
tmp_abs_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_days);
if (tmp_abs_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
tmp_format_value_1 = BUILTIN_ABS(tmp_abs_arg_1);
CHECK_OBJECT(tmp_abs_arg_1);
Py_DECREF(tmp_abs_arg_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_plain_DT;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(var_hours);
tmp_format_value_2 = var_hours;
tmp_format_spec_2 = mod_consts.const_str_plain_d;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_plain_H;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
CHECK_OBJECT(var_minutes);
tmp_format_value_3 = var_minutes;
tmp_format_spec_3 = mod_consts.const_str_plain_d;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_plain_M;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
CHECK_OBJECT(var_seconds);
tmp_format_value_4 = var_seconds;
tmp_format_spec_4 = mod_consts.const_str_plain_d;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 9, tmp_tuple_element_1);
CHECK_OBJECT(par_td);
tmp_expression_value_5 = par_td;
tmp_format_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_microseconds);
if (tmp_format_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_5 = mod_consts.const_str_plain_06d;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
CHECK_OBJECT(tmp_format_value_5);
Py_DECREF(tmp_format_value_5);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 10, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_plain_S;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 11, tmp_tuple_element_1);
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat,
    type_description_1,
    par_td,
    var_minutes,
    var_seconds,
    var_hours
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat == cache_frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat);
    cache_frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat = NULL;
}

assertFrameObject(frame_frame_pydantic$deprecated$json$$$function__9_timedelta_isoformat);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_minutes);
CHECK_OBJECT(var_minutes);
Py_DECREF(var_minutes);
var_minutes = NULL;
CHECK_OBJECT(var_seconds);
CHECK_OBJECT(var_seconds);
Py_DECREF(var_seconds);
var_seconds = NULL;
CHECK_OBJECT(var_hours);
CHECK_OBJECT(var_hours);
Py_DECREF(var_hours);
var_hours = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_minutes);
var_minutes = NULL;
Py_XDECREF(var_seconds);
var_seconds = NULL;
Py_XDECREF(var_hours);
var_hours = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_td);
Py_DECREF(par_td);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_td);
Py_DECREF(par_td);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pydantic$deprecated$json$$$function__1_isoformat(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$deprecated$json$$$function__1_isoformat,
        mod_consts.const_str_plain_isoformat,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_822755d2560c58cd49739254caaed997,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$deprecated$json,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$deprecated$json$$$function__2_decimal_encoder(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$deprecated$json$$$function__2_decimal_encoder,
        mod_consts.const_str_plain_decimal_encoder,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d843dd5762030a41c662817c04005957,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$deprecated$json,
        mod_consts.const_str_digest_d0de4ba0c1ccbce467ef986c50f50c6a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$deprecated$json$$$function__3_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$deprecated$json$$$function__3_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6f684dcb4ca6fba53ffa6ce8e36d81fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pydantic$deprecated$json,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$deprecated$json$$$function__4_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$deprecated$json$$$function__4_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4275e7da4ed874b87be1a5523e6b235f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pydantic$deprecated$json,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$deprecated$json$$$function__5_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$deprecated$json$$$function__5_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_33e901e5d508123659127587cf895bd9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pydantic$deprecated$json,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$deprecated$json$$$function__6_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$deprecated$json$$$function__6_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bc9b22b10557db5efc2b7788c2a775df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pydantic$deprecated$json,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$deprecated$json$$$function__7_pydantic_encoder(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$deprecated$json$$$function__7_pydantic_encoder,
        mod_consts.const_str_plain_pydantic_encoder,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_da2af5a84b7869fe5e8c64d80e99d28d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$deprecated$json,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder,
        mod_consts.const_str_plain_custom_pydantic_encoder,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_42f91bcf7752a4e5519c6fed9c57acf7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$deprecated$json,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$deprecated$json$$$function__9_timedelta_isoformat(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$deprecated$json$$$function__9_timedelta_isoformat,
        mod_consts.const_str_plain_timedelta_isoformat,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_115695ba62751219afbef69fb9b982cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$deprecated$json,
        mod_consts.const_str_digest_b8d727bd6e11c96adc54ff8b0751f7b0,
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

static function_impl_code const function_table_pydantic$deprecated$json[] = {
impl_pydantic$deprecated$json$$$function__1_isoformat,
impl_pydantic$deprecated$json$$$function__2_decimal_encoder,
impl_pydantic$deprecated$json$$$function__3_lambda,
impl_pydantic$deprecated$json$$$function__4_lambda,
impl_pydantic$deprecated$json$$$function__5_lambda,
impl_pydantic$deprecated$json$$$function__6_lambda,
impl_pydantic$deprecated$json$$$function__7_pydantic_encoder,
impl_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder,
impl_pydantic$deprecated$json$$$function__9_timedelta_isoformat,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pydantic$deprecated$json);
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
        module_pydantic$deprecated$json,
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
        function_table_pydantic$deprecated$json,
        sizeof(function_table_pydantic$deprecated$json) / sizeof(function_impl_code)
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
static char const *module_full_name = "pydantic.deprecated.json";
#endif

// Internal entry point for module code.
PyObject *module_code_pydantic$deprecated$json(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pydantic$deprecated$json");

    // Store the module for future use.
    module_pydantic$deprecated$json = module;

    moduledict_pydantic$deprecated$json = MODULE_DICT(module_pydantic$deprecated$json);

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
        PRINT_STRING("pydantic$deprecated$json: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pydantic$deprecated$json: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pydantic$deprecated$json: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic.deprecated.json" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpydantic$deprecated$json\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pydantic$deprecated$json,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pydantic$deprecated$json,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pydantic$deprecated$json,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$deprecated$json,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$deprecated$json,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pydantic$deprecated$json);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pydantic$deprecated$json);
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

        UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$deprecated$json;
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
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pydantic$deprecated$json = MAKE_MODULE_FRAME(code_objects_73190cd52ccb22a0d75adaa147cae4e3, module_pydantic$deprecated$json);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$deprecated$json);
assert(Py_REFCNT(frame_frame_pydantic$deprecated$json) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_pydantic$deprecated$json$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_pydantic$deprecated$json$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_datetime;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pydantic$deprecated$json;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 1;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pydantic$deprecated$json;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 2;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_collections;
tmp_globals_arg_value_3 = (PyObject *)moduledict_pydantic$deprecated$json;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_deque_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 3;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_deque,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_deque);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_deque, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_decimal;
tmp_globals_arg_value_4 = (PyObject *)moduledict_pydantic$deprecated$json;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Decimal_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 4;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_Decimal,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Decimal);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Decimal, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_enum;
tmp_globals_arg_value_5 = (PyObject *)moduledict_pydantic$deprecated$json;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Enum_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 5;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_Enum,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Enum);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_ipaddress;
tmp_globals_arg_value_6 = (PyObject *)moduledict_pydantic$deprecated$json;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_74bd1f7bbf4f7da6f86be9d8f70006d5_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 6;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_IPv4Address,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_IPv4Address);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Address, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_IPv4Interface,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_IPv4Interface);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Interface, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_IPv4Network,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_IPv4Network);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Network, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_IPv6Address,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_IPv6Address);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Address, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_IPv6Interface,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_IPv6Interface);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Interface, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_IPv6Network,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_IPv6Network);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Network, tmp_assign_source_16);
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
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_pathlib;
tmp_globals_arg_value_7 = (PyObject *)moduledict_pydantic$deprecated$json;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_Path_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 7;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_Path,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Path);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Path, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_8 = (PyObject *)moduledict_pydantic$deprecated$json;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_Pattern_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 8;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_Pattern,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_Pattern);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Pattern, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_12;
tmp_import_name_from_12 = IMPORT_HARD_TYPES();
assert(!(tmp_import_name_from_12 == NULL));
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_GeneratorType,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_GeneratorType);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_GeneratorType, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_20 == NULL));
assert(tmp_import_from_2__module == NULL);
Py_INCREF(tmp_assign_source_20);
tmp_import_from_2__module = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = Py_False;
UPDATE_STRING_DICT0(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_21);
}
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_13 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_14 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_15 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_24);
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
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_uuid;
tmp_globals_arg_value_9 = (PyObject *)moduledict_pydantic$deprecated$json;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_UUID_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 11;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_UUID,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_UUID);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_UUID, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_10 = (PyObject *)moduledict_pydantic$deprecated$json;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_deprecated_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 13;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_deprecated,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_deprecated);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_deprecated, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_8ef7da6e5199c3055d9cfe0c2d0ecea9;
tmp_globals_arg_value_11 = (PyObject *)moduledict_pydantic$deprecated$json;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_import_cached_base_model_tuple;
tmp_level_value_11 = mod_consts.const_int_pos_2;
frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 15;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_import_cached_base_model,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_import_cached_base_model);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_import_cached_base_model, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain_color;
tmp_globals_arg_value_12 = (PyObject *)moduledict_pydantic$deprecated$json;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_Color_tuple;
tmp_level_value_12 = mod_consts.const_int_pos_2;
frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 16;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_Color,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_Color);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_Color, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_20;
frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 17;
tmp_import_name_from_20 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_8ad72a612982b017956848a763ba6f37, mod_consts.const_str_digest_8ad72a612982b017956848a763ba6f37);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_NameEmail,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_NameEmail);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_NameEmail, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 18;
tmp_assign_source_30 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_e5aa17893489aeb017e38d77eaa3b786, mod_consts.const_str_digest_e5aa17893489aeb017e38d77eaa3b786);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_30;
}
// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_21 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_SecretBytes,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_SecretBytes);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_SecretBytes, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_22 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_SecretStr,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_SecretStr);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_SecretStr, tmp_assign_source_32);
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
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_23;
frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 19;
tmp_import_name_from_23 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_c19110e962cc33b179db397d44e7edf4, mod_consts.const_str_digest_c19110e962cc33b179db397d44e7edf4);
if (tmp_import_name_from_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_pydantic$deprecated$json,
        mod_consts.const_str_plain_PydanticDeprecatedSince20,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_PydanticDeprecatedSince20);
}

CHECK_OBJECT(tmp_import_name_from_23);
Py_DECREF(tmp_import_name_from_23);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticDeprecatedSince20, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = module_var_accessor_pydantic$deprecated$json$PydanticDeprecatedSince20(tstate);
assert(!(tmp_assign_source_34 == NULL));
UPDATE_STRING_DICT0(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = mod_consts.const_tuple_e8ffd0cd531943cdf10ebc1f37be8ca0_tuple;
UPDATE_STRING_DICT0(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
tmp_dict_key_1 = mod_consts.const_str_plain_o;
tmp_expression_value_1 = module_var_accessor_pydantic$deprecated$json$Union(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_pydantic$deprecated$json$datetime(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_datetime);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_date);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_expression_value_3 = module_var_accessor_pydantic$deprecated$json$datetime(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_datetime);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_time);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_assign_source_36 = MAKE_FUNCTION_pydantic$deprecated$json$$$function__1_isoformat(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_isoformat, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_dec_value;
tmp_dict_value_2 = module_var_accessor_pydantic$deprecated$json$Decimal(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Decimal);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_expression_value_4 = module_var_accessor_pydantic$deprecated$json$Union(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto dict_build_exception_1;
}
tmp_subscript_value_2 = mod_consts.const_tuple_type_int_type_float_tuple;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_assign_source_37 = MAKE_FUNCTION_pydantic$deprecated$json$$$function__2_decimal_encoder(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_decimal_encoder, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
tmp_dict_key_3 = (PyObject *)&PyBytes_Type;

tmp_dict_value_3 = MAKE_FUNCTION_pydantic$deprecated$json$$$function__3_lambda(tstate);

tmp_assign_source_38 = _PyDict_NewPresized( 24 );
{
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = module_var_accessor_pydantic$deprecated$json$Color(tstate);
if (unlikely(tmp_dict_key_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Color);
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto dict_build_exception_2;
}
tmp_expression_value_5 = module_var_accessor_pydantic$deprecated$json$datetime(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_datetime);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_date);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = module_var_accessor_pydantic$deprecated$json$isoformat(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isoformat);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_3);

exception_lineno = 57;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto dict_build_exception_2;
}
tmp_expression_value_6 = module_var_accessor_pydantic$deprecated$json$datetime(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_datetime);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_datetime);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = module_var_accessor_pydantic$deprecated$json$isoformat(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isoformat);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_3);

exception_lineno = 58;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto dict_build_exception_2;
}
tmp_expression_value_7 = module_var_accessor_pydantic$deprecated$json$datetime(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_datetime);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_time);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = module_var_accessor_pydantic$deprecated$json$isoformat(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isoformat);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_3);

exception_lineno = 59;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto dict_build_exception_2;
}
tmp_expression_value_8 = module_var_accessor_pydantic$deprecated$json$datetime(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_datetime);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_timedelta);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto dict_build_exception_2;
}

tmp_dict_value_3 = MAKE_FUNCTION_pydantic$deprecated$json$$$function__4_lambda(tstate);

tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = module_var_accessor_pydantic$deprecated$json$Decimal(tstate);
if (unlikely(tmp_dict_key_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Decimal);
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = module_var_accessor_pydantic$deprecated$json$decimal_encoder(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decimal_encoder);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = module_var_accessor_pydantic$deprecated$json$Enum(tstate);
if (unlikely(tmp_dict_key_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Enum);
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;

    goto dict_build_exception_2;
}

tmp_dict_value_3 = MAKE_FUNCTION_pydantic$deprecated$json$$$function__5_lambda(tstate);

tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = (PyObject *)&PyFrozenSet_Type;
tmp_dict_value_3 = (PyObject *)&PyList_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = module_var_accessor_pydantic$deprecated$json$deque(tstate);
if (unlikely(tmp_dict_key_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deque);
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = (PyObject *)&PyList_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = module_var_accessor_pydantic$deprecated$json$GeneratorType(tstate);
if (unlikely(tmp_dict_key_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GeneratorType);
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = (PyObject *)&PyList_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = module_var_accessor_pydantic$deprecated$json$IPv4Address(tstate);
if (unlikely(tmp_dict_key_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv4Address);
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = module_var_accessor_pydantic$deprecated$json$IPv4Interface(tstate);
if (unlikely(tmp_dict_key_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv4Interface);
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = module_var_accessor_pydantic$deprecated$json$IPv4Network(tstate);
if (unlikely(tmp_dict_key_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv4Network);
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = module_var_accessor_pydantic$deprecated$json$IPv6Address(tstate);
if (unlikely(tmp_dict_key_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv6Address);
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = module_var_accessor_pydantic$deprecated$json$IPv6Interface(tstate);
if (unlikely(tmp_dict_key_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv6Interface);
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = module_var_accessor_pydantic$deprecated$json$IPv6Network(tstate);
if (unlikely(tmp_dict_key_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv6Network);
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = module_var_accessor_pydantic$deprecated$json$NameEmail(tstate);
if (unlikely(tmp_dict_key_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameEmail);
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = module_var_accessor_pydantic$deprecated$json$Path(tstate);
if (unlikely(tmp_dict_key_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = module_var_accessor_pydantic$deprecated$json$Pattern(tstate);
if (unlikely(tmp_dict_key_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Pattern);
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;

    goto dict_build_exception_2;
}

tmp_dict_value_3 = MAKE_FUNCTION_pydantic$deprecated$json$$$function__6_lambda(tstate);

tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = module_var_accessor_pydantic$deprecated$json$SecretBytes(tstate);
if (unlikely(tmp_dict_key_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SecretBytes);
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = module_var_accessor_pydantic$deprecated$json$SecretStr(tstate);
if (unlikely(tmp_dict_key_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SecretStr);
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = (PyObject *)&PySet_Type;
tmp_dict_value_3 = (PyObject *)&PyList_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = module_var_accessor_pydantic$deprecated$json$UUID(tstate);
if (unlikely(tmp_dict_key_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UUID);
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_3, tmp_dict_value_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto dict_build_exception_2;
}
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_assign_source_38);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_ENCODERS_BY_TYPE, tmp_assign_source_38);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_4;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_expression_value_9 = (PyObject *)&PyDict_Type;
tmp_expression_value_10 = (PyObject *)&PyType_Type;
tmp_subscript_value_4 = module_var_accessor_pydantic$deprecated$json$Any(tstate);
if (unlikely(tmp_subscript_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_subscript_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_4);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_5;
PyObject *tmp_tuple_element_3;
PyObject *tmp_list_element_1;
PyTuple_SET_ITEM(tmp_subscript_value_3, 0, tmp_tuple_element_2);
tmp_expression_value_11 = module_var_accessor_pydantic$deprecated$json$Callable(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto tuple_build_exception_2;
}
tmp_list_element_1 = module_var_accessor_pydantic$deprecated$json$Any(tstate);
if (unlikely(tmp_list_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto tuple_build_exception_2;
}
tmp_tuple_element_3 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_tuple_element_3, 0, tmp_list_element_1);
tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_5, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = module_var_accessor_pydantic$deprecated$json$Any(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_subscript_value_5, 1, tmp_tuple_element_3);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_subscript_value_5);
goto tuple_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_1 = module_var_accessor_pydantic$deprecated$json$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_ENCODERS_BY_TYPE;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
tmp_called_value_2 = module_var_accessor_pydantic$deprecated$json$deprecated(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deprecated);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;

    goto frame_exception_exit_1;
}
frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 82;
tmp_called_value_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_b7e56934d74f101b79ef1b2216b2cc6f_none_tuple, 0), mod_consts.const_tuple_str_plain_category_tuple);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_dict_key_4 = mod_consts.const_str_plain_obj;
tmp_dict_value_4 = module_var_accessor_pydantic$deprecated$json$Any(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 86;

    goto frame_exception_exit_1;
}
tmp_annotations_3 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_dict_value_4 = module_var_accessor_pydantic$deprecated$json$Any(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;

    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_annotations_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;

tmp_args_element_value_1 = MAKE_FUNCTION_pydantic$deprecated$json$$$function__7_pydantic_encoder(tstate, tmp_annotations_3);

frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 82;
tmp_assign_source_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_pydantic_encoder, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_6;
PyObject *tmp_tuple_element_4;
tmp_called_value_4 = module_var_accessor_pydantic$deprecated$json$deprecated(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deprecated);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;

    goto frame_exception_exit_1;
}
frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 113;
tmp_called_value_3 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_21522b1855074a7fb9551b99e22a6b61_none_tuple, 0), mod_consts.const_tuple_str_plain_category_tuple);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto frame_exception_exit_1;
}
tmp_dict_key_5 = mod_consts.const_str_plain_type_encoders;
tmp_expression_value_12 = (PyObject *)&PyDict_Type;
tmp_tuple_element_4 = module_var_accessor_pydantic$deprecated$json$Any(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 117;

    goto frame_exception_exit_1;
}
tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_7;
PyObject *tmp_tuple_element_5;
PyObject *tmp_list_element_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_8;
PyTuple_SET_ITEM0(tmp_subscript_value_6, 0, tmp_tuple_element_4);
tmp_expression_value_13 = module_var_accessor_pydantic$deprecated$json$Callable(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;

    goto tuple_build_exception_4;
}
tmp_expression_value_14 = (PyObject *)&PyType_Type;
tmp_subscript_value_8 = module_var_accessor_pydantic$deprecated$json$Any(tstate);
if (unlikely(tmp_subscript_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_subscript_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;

    goto tuple_build_exception_4;
}
tmp_list_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_8);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto tuple_build_exception_4;
}
tmp_tuple_element_5 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_tuple_element_5, 0, tmp_list_element_2);
tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_7, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_pydantic$deprecated$json$Any(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM0(tmp_subscript_value_7, 1, tmp_tuple_element_5);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_subscript_value_7);
goto tuple_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_7);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_subscript_value_6);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_6);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 117;

    goto frame_exception_exit_1;
}
tmp_annotations_4 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_obj;
tmp_dict_value_5 = module_var_accessor_pydantic$deprecated$json$Any(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;

    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_dict_value_5 = module_var_accessor_pydantic$deprecated$json$Any(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;

    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_annotations_4);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;

tmp_args_element_value_2 = MAKE_FUNCTION_pydantic$deprecated$json$$$function__8_custom_pydantic_encoder(tstate, tmp_annotations_4);

frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 113;
tmp_assign_source_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_custom_pydantic_encoder, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_5;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_5;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_expression_value_15;
tmp_called_value_6 = module_var_accessor_pydantic$deprecated$json$deprecated(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deprecated);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;

    goto frame_exception_exit_1;
}
frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 135;
tmp_called_value_5 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_e547e131cf76d25a4de3ef90816665ef_none_tuple, 0), mod_consts.const_tuple_str_plain_category_tuple);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto frame_exception_exit_1;
}
tmp_dict_key_6 = mod_consts.const_str_plain_td;
tmp_expression_value_15 = module_var_accessor_pydantic$deprecated$json$datetime(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_datetime);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 136;

    goto frame_exception_exit_1;
}
tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_timedelta);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 136;

    goto frame_exception_exit_1;
}
tmp_annotations_5 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_return;
tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));

tmp_args_element_value_3 = MAKE_FUNCTION_pydantic$deprecated$json$$$function__9_timedelta_isoformat(tstate, tmp_annotations_5);

frame_frame_pydantic$deprecated$json->m_frame.f_lineno = 135;
tmp_assign_source_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)mod_consts.const_str_plain_timedelta_isoformat, tmp_assign_source_41);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$deprecated$json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$deprecated$json->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$deprecated$json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pydantic$deprecated$json);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pydantic$deprecated$json", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic.deprecated.json" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pydantic$deprecated$json);
    return module_pydantic$deprecated$json;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$json, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pydantic$deprecated$json", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

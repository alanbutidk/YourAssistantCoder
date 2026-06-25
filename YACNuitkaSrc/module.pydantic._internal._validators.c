/* Generated code for Python module 'pydantic$_internal$_validators'
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



/* The "module_pydantic$_internal$_validators" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pydantic$_internal$_validators;
PyDictObject *moduledict_pydantic$_internal$_validators;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_tuple_type_str_type_bytes_tuple;
PyObject *const_str_plain_PydanticCustomError;
PyObject *const_str_plain_sequence_str;
PyObject *const_str_digest_06d5be23e2f98f78e2d017b949608086;
PyObject *const_str_plain_type_name;
PyObject *const_str_digest_99db1a65934fbc27c9d8015c206c4699;
PyObject *const_str_plain__import_string_logic;
PyObject *const_str_plain_import_error;
PyObject *const_str_digest_3fce44315663e1d7b16851e14cd31625;
PyObject *const_str_plain_error;
PyObject *const_str_plain_import_module;
PyObject *const_str_plain_strip;
PyObject *const_tuple_str_chr_58_tuple;
PyObject *const_str_digest_69b9d748004252b2ed8d74ef3ff30044;
PyObject *const_str_digest_726de1397b0f14d5e44f7b0f83c185e0;
PyObject *const_str_plain_rsplit;
PyObject *const_tuple_str_dot_int_pos_1_tuple;
PyObject *const_str_chr_58;
PyObject *const_str_digest_d66b77addf1c320d97e68ea87e2c856d;
PyObject *const_str_digest_f28ac297014eae6038f099e88653df5d;
PyObject *const_str_digest_b92ff6ac20808847c903830593d7f598;
PyObject *const_str_digest_c79294b952a0454dc3e373fc0888ef8b;
PyObject *const_str_plain_Pattern;
PyObject *const_str_plain_compile_pattern;
PyObject *const_tuple_43768d30d2dc0760a61b45a5c93419a0_tuple;
PyObject *const_str_plain_pattern;
PyObject *const_tuple_5738c60bc44451550e393940f9780966_tuple;
PyObject *const_tuple_2334f24ac547db223d172cb535c45bd8_tuple;
PyObject *const_str_plain_re;
PyObject *const_tuple_1203882f2f5b8f01445a0442af509f6d_tuple;
PyObject *const_str_plain_IPv4Address;
PyObject *const_tuple_4d46855cbca30b35f28ceaba271a76c3_tuple;
PyObject *const_str_plain_IPv6Address;
PyObject *const_tuple_00def57b01ca2553933131247edda585_tuple;
PyObject *const_str_plain_IPv4Network;
PyObject *const_tuple_81941b276fe35eb1199551f59c33ca46_tuple;
PyObject *const_str_digest_8bbc3fb14e2170a72794a783efbd6cec;
PyObject *const_str_plain_IPv6Network;
PyObject *const_tuple_fe04e1177b04654a5a95396bd1f2522f_tuple;
PyObject *const_str_digest_1660e6cd5790457c61881a386abf2d28;
PyObject *const_str_plain_IPv4Interface;
PyObject *const_tuple_1ee51dea52d3fe4db7655692d241a7c9_tuple;
PyObject *const_str_plain_IPv6Interface;
PyObject *const_tuple_c417093022877e7986807aa675b6a3e0_tuple;
PyObject *const_str_plain_Fraction;
PyObject *const_tuple_6c55e82aaab00efd7db83d0415fc7990_tuple;
PyObject *const_str_plain_math;
PyObject *const_str_plain_isfinite;
PyObject *const_str_plain_PydanticKnownError;
PyObject *const_tuple_str_plain_finite_number_tuple;
PyObject *const_tuple_type_int_type_float_type_str_tuple;
PyObject *const_str_digest_937e07f69752bc4b38e561be8da71913;
PyObject *const_str_plain_greater_than;
PyObject *const_str_plain_gt;
PyObject *const_str_plain__safe_repr;
PyObject *const_str_digest_d801099d73fefda2a09ae94189f74aa8;
PyObject *const_str_plain_greater_than_equal;
PyObject *const_str_plain_ge;
PyObject *const_str_digest_8c3d145ef3c1ce247cab68fd7ee48753;
PyObject *const_str_plain_less_than;
PyObject *const_str_plain_lt;
PyObject *const_str_digest_084d2cfa47d70e88a2df8f4e84ed9df0;
PyObject *const_str_plain_less_than_equal;
PyObject *const_str_plain_le;
PyObject *const_str_digest_6cd391d90e5e02fb9d36108f3ee14c36;
PyObject *const_str_plain_multiple_of;
PyObject *const_str_digest_4ff6c4093d66a319bf8fd186255247ca;
PyObject *const_str_plain_too_short;
PyObject *const_str_plain_field_type;
PyObject *const_str_plain_Value;
PyObject *const_str_plain_min_length;
PyObject *const_str_plain_actual_length;
PyObject *const_str_digest_b317547dd64175e27476980f4b22c937;
PyObject *const_str_plain_too_long;
PyObject *const_str_plain_max_length;
PyObject *const_str_digest_d5b82af57efa3993ca96e58556707ac5;
PyObject *const_str_plain_as_tuple;
PyObject *const_str_plain_exponent;
PyObject *const_str_plain_digits;
PyObject *const_str_plain_max;
PyObject *const_tuple_type_AssertionError_type_AttributeError_tuple;
PyObject *const_str_digest_5517382844ae3b0682934f35741190dd;
PyObject *const_str_digest_016babbfa0298a5569332c9a6b381f4e;
PyObject *const_str_plain__extract_decimal_digits_info;
PyObject *const_str_plain_normalize;
PyObject *const_str_plain_decimal_max_digits;
PyObject *const_str_plain_max_digits;
PyObject *const_str_digest_41eb2c8849e500d7bfc8bf5bdf908516;
PyObject *const_str_plain_decimal_max_places;
PyObject *const_str_plain_decimal_places;
PyObject *const_str_digest_dcd5de7f3e5aa82da87871b739411f38;
PyObject *const_str_plain_collections;
PyObject *const_str_plain_deque;
PyObject *const_str_plain_maxlen;
PyObject *const_tuple_str_plain_maxlen_tuple;
PyObject *const_str_plain_defaultdict;
PyObject *const_str_plain_default_factory;
PyObject *const_str_plain_import_cached_field_info;
PyObject *const_str_plain_get_origin;
PyObject *const_dict_11effe360d9cf8898df6e7aeb7476256;
PyObject *const_str_plain_infer_default;
PyObject *const_str_digest_0662cc80a790909421c748498f8bd88d;
PyObject *const_str_plain_typing_objects;
PyObject *const_str_plain_is_annotated;
PyObject *const_str_plain_typing_extensions;
PyObject *const_str_plain_get_args;
PyObject *const_str_plain_cast;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_abc;
PyObject *const_str_plain_Sequence;
PyObject *const_str_plain_MutableSequence;
PyObject *const_str_plain_MutableSet;
PyObject *const_str_plain_Set;
PyObject *const_str_plain_MutableMapping;
PyObject *const_str_plain_Mapping;
PyObject *const_str_plain_values_type_origin;
PyObject *const_str_plain_values_source_type;
PyObject *const_str_digest_43939a86f51ac3b8e94916dd41e00369;
PyObject *const_str_plain_is_typevar;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain_type_var_default_factory;
PyObject *const_str_digest_b51aea51baf9dd8ba7a7c5d8dbc23435;
PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyObject *const_str_plain_PydanticSchemaGenerationError;
PyObject *const_str_digest_6b373c93b4158c5b77f8404a89458dd5;
PyObject *const_str_digest_92a5a60ff668ebd45b54f4a0a7f9770a;
PyObject *const_str_digest_d3a78165c9a79aca1e4a85d1e5527cec;
PyObject *const_str_digest_7a6e35ffc656118436f6c2999c7e4c24;
PyObject *const_str_plain_instructions;
PyObject *const_str_plain_FieldInfo;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_f3b8a100ce3cad7ba15a20b31e5953d5;
PyObject *const_str_plain_ZoneInfo;
PyObject *const_str_plain_ZoneInfoNotFoundError;
PyObject *const_str_plain_zoneinfo_str;
PyObject *const_str_digest_73107100861c9face037198e55a17c83;
PyObject *const_str_plain_value;
PyObject *const_str_digest_77c4d90f1d38ad795010d9666b63fe92;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain__annotations;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_decimal;
PyObject *const_tuple_str_plain_Decimal_tuple;
PyObject *const_str_plain_Decimal;
PyObject *const_str_plain_fractions;
PyObject *const_tuple_str_plain_Fraction_tuple;
PyObject *const_str_plain_ipaddress;
PyObject *const_tuple_74bd1f7bbf4f7da6f86be9d8f70006d5_tuple;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_zoneinfo;
PyObject *const_tuple_str_plain_ZoneInfo_str_plain_ZoneInfoNotFoundError_tuple;
PyObject *const_str_plain_pydantic_core;
PyObject *const_str_digest_3be1977a43d6fc92a01e1adc500d16b3;
PyObject *const_str_plain_core_schema;
PyObject *const_str_digest_907d5366b2af807fa07d12233a5c2457;
PyObject *const_tuple_str_plain_PydanticKnownError_tuple;
PyObject *const_str_plain_typing_inspection;
PyObject *const_tuple_str_plain_typing_objects_tuple;
PyObject *const_str_digest_5ca6f494e811dc405d56d97fba4ace8c;
PyObject *const_tuple_str_plain_import_cached_field_info_tuple;
PyObject *const_str_digest_93451e65d1b5351f1a776493e6ffe27f;
PyObject *const_dict_8470db10751d75181e07715567a8fbb7;
PyObject *const_str_plain_sequence_validator;
PyObject *const_dict_5dc7b48a4d3bfc083d765d3d7029743a;
PyObject *const_str_plain_import_string;
PyObject *const_dict_214f188218286ca9ba9a36968d138331;
PyObject *const_dict_8e8074bd88bb09ef506136f53c70dc90;
PyObject *const_str_plain_pattern_either_validator;
PyObject *const_dict_baeb9134c688ba4c8a3a73dfe7fa5302;
PyObject *const_str_plain_pattern_str_validator;
PyObject *const_dict_701fd81e0c5d2ac682f08ba4c183822f;
PyObject *const_str_plain_pattern_bytes_validator;
PyObject *const_str_plain_TypeVar;
PyObject *const_tuple_str_plain_PatternType_type_str_type_bytes_tuple;
PyObject *const_str_plain_PatternType;
PyObject *const_dict_5a0afde0132dcff9c09750c93ab63ab1;
PyObject *const_dict_06f270561aa5dff3dedef3548a65b029;
PyObject *const_str_plain_ip_v4_address_validator;
PyObject *const_dict_66820c7e367a08b6b510522e91a39bc7;
PyObject *const_str_plain_ip_v6_address_validator;
PyObject *const_dict_754f2e9d61fc29eb851e397cdeb32df9;
PyObject *const_str_plain_ip_v4_network_validator;
PyObject *const_dict_4485e32ab38f8af6e3ec8d8f9906c1ee;
PyObject *const_str_plain_ip_v6_network_validator;
PyObject *const_dict_1de8b7e98ac781a8c9b0f511346c5439;
PyObject *const_str_plain_ip_v4_interface_validator;
PyObject *const_dict_a45524315bf9ac59d4b3759f4072745b;
PyObject *const_str_plain_ip_v6_interface_validator;
PyObject *const_dict_6c5a8d2911d61c5c0524dd2d194a60bc;
PyObject *const_str_plain_fraction_validator;
PyObject *const_dict_079ecffcdb60a27a0ab22dbf43b5ee25;
PyObject *const_str_plain_forbid_inf_nan_check;
PyObject *const_dict_43d204fa33edda4de052d95a2002e060;
PyObject *const_dict_85265546805f14e32730e13be83c987a;
PyObject *const_str_plain_greater_than_validator;
PyObject *const_dict_7678a2a2901014148c84625934ec2787;
PyObject *const_str_plain_greater_than_or_equal_validator;
PyObject *const_dict_9c4a045c909aa3b57bd08a8596e803ed;
PyObject *const_str_plain_less_than_validator;
PyObject *const_dict_695cdf3554eaee2a1b1e1de9c4e21692;
PyObject *const_str_plain_less_than_or_equal_validator;
PyObject *const_dict_b07f59124b128dd6baf9ad4b18daf7ab;
PyObject *const_str_plain_multiple_of_validator;
PyObject *const_dict_51038fba016b93f2114847c6d74f7a89;
PyObject *const_str_plain_min_length_validator;
PyObject *const_dict_feec26b7a805a0284dda5d2e75df4fe0;
PyObject *const_str_plain_max_length_validator;
PyObject *const_dict_46be6993a741f35bb4ef802ab8d863ff;
PyObject *const_dict_162f80ad2d2a8fabd5f4dd3c37e1d654;
PyObject *const_str_plain_max_digits_validator;
PyObject *const_dict_a314ac2d50c1fd8bd76e8449ae2258a4;
PyObject *const_str_plain_decimal_places_validator;
PyObject *const_dict_4eeb24cb64f0f35a8080b895bee72f63;
PyObject *const_str_plain_deque_validator;
PyObject *const_dict_83a3f45eced2352c9ce341f2483b7265;
PyObject *const_str_plain_defaultdict_validator;
PyObject *const_dict_e903cb0e310dfc1d14b8bea62211e731;
PyObject *const_str_plain_get_defaultdict_default_default_factory;
PyObject *const_dict_0266134b1117629b5053702cdbe89c85;
PyObject *const_str_plain_validate_str_is_valid_iana_tz;
PyObject *const_str_plain_NUMERIC_VALIDATOR_LOOKUP;
PyObject *const_str_digest_45210a81e4e4528aeaa06f54a99db8b9;
PyObject *const_str_plain_IpType;
PyObject *const_str_plain_IP_VALIDATOR_LOOKUP;
PyObject *const_str_digest_b0501b53604489761ce42160314ac43e;
PyObject *const_str_plain_DefaultDict;
PyObject *const_str_plain_OrderedDict;
PyObject *const_str_plain_Counter;
PyObject *const_str_plain_MAPPING_ORIGIN_MAP;
PyObject *const_str_digest_03ec832941afc3df07cc8bf9e7164e93;
PyObject *const_str_digest_6303f7c35270a189a43b0d7bcc7f3e12;
PyObject *const_tuple_e45d08767f05e49cd9c7c6d86cedf572_tuple;
PyObject *const_str_digest_843c0428d2ba9c3a9d07e356b1efc0f4;
PyObject *const_tuple_1d2cb9cf192b5db7c79ae795cf042913_tuple;
PyObject *const_tuple_d5cb51c0edc601b0a1a4b5924390be60_tuple;
PyObject *const_tuple_str_plain_v_tuple;
PyObject *const_tuple_str_plain_pattern_tuple;
PyObject *const_tuple_b2e509b139d4d38d91c2580144103f20_tuple;
PyObject *const_tuple_b6cc6dd1ed205786be286d4c551c926d_tuple;
PyObject *const_tuple_str_plain_input_value_str_plain_handler_tuple;
PyObject *const_tuple_str_plain_x_tuple;
PyObject *const_tuple_str_plain_input_value_tuple;
PyObject *const_tuple_4ed1fac5fcba5fafde3b6cb6e0d2fcf2_tuple;
PyObject *const_tuple_str_plain_x_str_plain_ge_tuple;
PyObject *const_tuple_str_plain_x_str_plain_gt_tuple;
PyObject *const_tuple_str_plain_value_str_plain_e_tuple;
PyObject *const_tuple_372092f7f7f2ab8a2edd67e712df7aba_tuple;
PyObject *const_tuple_str_plain_values_source_type_str_plain_values_type_origin_tuple;
PyObject *const_tuple_str_plain_x_str_plain_le_tuple;
PyObject *const_tuple_str_plain_x_str_plain_lt_tuple;
PyObject *const_tuple_09963a3595c47f41a3a332ce5d6ad132_tuple;
PyObject *const_tuple_str_plain_x_str_plain_max_length_tuple;
PyObject *const_tuple_str_plain_x_str_plain_min_length_tuple;
PyObject *const_tuple_str_plain_x_str_plain_multiple_of_tuple;
PyObject *const_tuple_b6831d3644b14fd7edc526175c71c894_tuple;
PyObject *const_tuple_str_plain_instructions_tuple;
PyObject *const_tuple_str_plain_value_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[261];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pydantic._internal._validators"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_bytes_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticCustomError);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_sequence_str);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_06d5be23e2f98f78e2d017b949608086);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_type_name);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_99db1a65934fbc27c9d8015c206c4699);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__import_string_logic);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_import_error);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_3fce44315663e1d7b16851e14cd31625);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_import_module);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_58_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_69b9d748004252b2ed8d74ef3ff30044);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_726de1397b0f14d5e44f7b0f83c185e0);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsplit);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_int_pos_1_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_chr_58);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_d66b77addf1c320d97e68ea87e2c856d);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_f28ac297014eae6038f099e88653df5d);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_b92ff6ac20808847c903830593d7f598);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_c79294b952a0454dc3e373fc0888ef8b);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_Pattern);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_compile_pattern);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_43768d30d2dc0760a61b45a5c93419a0_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_pattern);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_5738c60bc44451550e393940f9780966_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_2334f24ac547db223d172cb535c45bd8_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_1203882f2f5b8f01445a0442af509f6d_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPv4Address);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_4d46855cbca30b35f28ceaba271a76c3_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPv6Address);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_00def57b01ca2553933131247edda585_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPv4Network);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_81941b276fe35eb1199551f59c33ca46_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_8bbc3fb14e2170a72794a783efbd6cec);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPv6Network);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_fe04e1177b04654a5a95396bd1f2522f_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_1660e6cd5790457c61881a386abf2d28);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPv4Interface);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_1ee51dea52d3fe4db7655692d241a7c9_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPv6Interface);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_c417093022877e7986807aa675b6a3e0_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_Fraction);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_6c55e82aaab00efd7db83d0415fc7990_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_math);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_isfinite);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticKnownError);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_finite_number_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_float_type_str_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_937e07f69752bc4b38e561be8da71913);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_greater_than);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_gt);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain__safe_repr);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_d801099d73fefda2a09ae94189f74aa8);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_greater_than_equal);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_ge);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c3d145ef3c1ce247cab68fd7ee48753);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_less_than);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_lt);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_084d2cfa47d70e88a2df8f4e84ed9df0);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_less_than_equal);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_le);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_6cd391d90e5e02fb9d36108f3ee14c36);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_multiple_of);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ff6c4093d66a319bf8fd186255247ca);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_too_short);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_field_type);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_Value);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_min_length);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_actual_length);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_b317547dd64175e27476980f4b22c937);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_too_long);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_length);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5b82af57efa3993ca96e58556707ac5);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_as_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_exponent);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_digits);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_type_AssertionError_type_AttributeError_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_5517382844ae3b0682934f35741190dd);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_016babbfa0298a5569332c9a6b381f4e);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain__extract_decimal_digits_info);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalize);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_decimal_max_digits);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_digits);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_41eb2c8849e500d7bfc8bf5bdf908516);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_decimal_max_places);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_decimal_places);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcd5de7f3e5aa82da87871b739411f38);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_collections);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_deque);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_maxlen);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxlen_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_defaultdict);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_default_factory);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_import_cached_field_info);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_origin);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_dict_11effe360d9cf8898df6e7aeb7476256);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_infer_default);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_0662cc80a790909421c748498f8bd88d);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_objects);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_annotated);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_args);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_MutableSequence);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_MutableSet);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_Set);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_MutableMapping);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_values_type_origin);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_values_source_type);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_43939a86f51ac3b8e94916dd41e00369);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_typevar);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_type_var_default_factory);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_b51aea51baf9dd8ba7a7c5d8dbc23435);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticSchemaGenerationError);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_6b373c93b4158c5b77f8404a89458dd5);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_92a5a60ff668ebd45b54f4a0a7f9770a);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3a78165c9a79aca1e4a85d1e5527cec);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a6e35ffc656118436f6c2999c7e4c24);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_instructions);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_FieldInfo);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3b8a100ce3cad7ba15a20b31e5953d5);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_ZoneInfo);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_ZoneInfoNotFoundError);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_zoneinfo_str);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_73107100861c9face037198e55a17c83);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_77c4d90f1d38ad795010d9666b63fe92);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain__annotations);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_decimal);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Decimal_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_Decimal);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_fractions);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Fraction_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_ipaddress);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_74bd1f7bbf4f7da6f86be9d8f70006d5_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_zoneinfo);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ZoneInfo_str_plain_ZoneInfoNotFoundError_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic_core);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_core_schema);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_907d5366b2af807fa07d12233a5c2457);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PydanticKnownError_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_inspection);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_typing_objects_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ca6f494e811dc405d56d97fba4ace8c);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_import_cached_field_info_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_dict_8470db10751d75181e07715567a8fbb7);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_sequence_validator);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_dict_5dc7b48a4d3bfc083d765d3d7029743a);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_import_string);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_dict_214f188218286ca9ba9a36968d138331);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_dict_8e8074bd88bb09ef506136f53c70dc90);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_pattern_either_validator);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_dict_baeb9134c688ba4c8a3a73dfe7fa5302);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_pattern_str_validator);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_dict_701fd81e0c5d2ac682f08ba4c183822f);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_pattern_bytes_validator);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PatternType_type_str_type_bytes_tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_PatternType);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_5a0afde0132dcff9c09750c93ab63ab1);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_dict_06f270561aa5dff3dedef3548a65b029);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_ip_v4_address_validator);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_dict_66820c7e367a08b6b510522e91a39bc7);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_ip_v6_address_validator);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_dict_754f2e9d61fc29eb851e397cdeb32df9);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_ip_v4_network_validator);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_dict_4485e32ab38f8af6e3ec8d8f9906c1ee);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_ip_v6_network_validator);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_dict_1de8b7e98ac781a8c9b0f511346c5439);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_ip_v4_interface_validator);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_dict_a45524315bf9ac59d4b3759f4072745b);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_ip_v6_interface_validator);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_dict_6c5a8d2911d61c5c0524dd2d194a60bc);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_fraction_validator);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_dict_079ecffcdb60a27a0ab22dbf43b5ee25);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_forbid_inf_nan_check);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_dict_43d204fa33edda4de052d95a2002e060);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_dict_85265546805f14e32730e13be83c987a);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_greater_than_validator);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_dict_7678a2a2901014148c84625934ec2787);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_greater_than_or_equal_validator);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_dict_9c4a045c909aa3b57bd08a8596e803ed);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_less_than_validator);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_dict_695cdf3554eaee2a1b1e1de9c4e21692);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_less_than_or_equal_validator);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_dict_b07f59124b128dd6baf9ad4b18daf7ab);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain_multiple_of_validator);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_dict_51038fba016b93f2114847c6d74f7a89);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_plain_min_length_validator);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_dict_feec26b7a805a0284dda5d2e75df4fe0);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_length_validator);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_dict_46be6993a741f35bb4ef802ab8d863ff);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_dict_162f80ad2d2a8fabd5f4dd3c37e1d654);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_digits_validator);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_dict_a314ac2d50c1fd8bd76e8449ae2258a4);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain_decimal_places_validator);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_dict_4eeb24cb64f0f35a8080b895bee72f63);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_deque_validator);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_dict_83a3f45eced2352c9ce341f2483b7265);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_plain_defaultdict_validator);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_dict_e903cb0e310dfc1d14b8bea62211e731);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_defaultdict_default_default_factory);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_dict_0266134b1117629b5053702cdbe89c85);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_str_is_valid_iana_tz);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_plain_NUMERIC_VALIDATOR_LOOKUP);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_digest_45210a81e4e4528aeaa06f54a99db8b9);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_str_plain_IpType);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_plain_IP_VALIDATOR_LOOKUP);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0501b53604489761ce42160314ac43e);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_plain_DefaultDict);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_str_plain_OrderedDict);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_plain_Counter);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_str_plain_MAPPING_ORIGIN_MAP);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_digest_03ec832941afc3df07cc8bf9e7164e93);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_str_digest_6303f7c35270a189a43b0d7bcc7f3e12);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_tuple_e45d08767f05e49cd9c7c6d86cedf572_tuple);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_digest_843c0428d2ba9c3a9d07e356b1efc0f4);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_tuple_1d2cb9cf192b5db7c79ae795cf042913_tuple);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_tuple_d5cb51c0edc601b0a1a4b5924390be60_tuple);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_v_tuple);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pattern_tuple);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_tuple_b2e509b139d4d38d91c2580144103f20_tuple);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_tuple_b6cc6dd1ed205786be286d4c551c926d_tuple);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_input_value_str_plain_handler_tuple);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_tuple);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_input_value_tuple);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_tuple_4ed1fac5fcba5fafde3b6cb6e0d2fcf2_tuple);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_ge_tuple);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_gt_tuple);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_value_str_plain_e_tuple);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_tuple_372092f7f7f2ab8a2edd67e712df7aba_tuple);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_values_source_type_str_plain_values_type_origin_tuple);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_le_tuple);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_lt_tuple);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_tuple_09963a3595c47f41a3a332ce5d6ad132_tuple);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_max_length_tuple);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_min_length_tuple);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_multiple_of_tuple);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_tuple_b6831d3644b14fd7edc526175c71c894_tuple);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_instructions_tuple);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_value_tuple);
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
void checkModuleConstants_pydantic$_internal$_validators(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_bytes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_str_type_bytes_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticCustomError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticCustomError);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_sequence_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sequence_str);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_06d5be23e2f98f78e2d017b949608086));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_06d5be23e2f98f78e2d017b949608086);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_type_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_type_name);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_99db1a65934fbc27c9d8015c206c4699));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_99db1a65934fbc27c9d8015c206c4699);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__import_string_logic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__import_string_logic);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_import_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_import_error);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_3fce44315663e1d7b16851e14cd31625));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3fce44315663e1d7b16851e14cd31625);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_import_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_import_module);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_58_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_58_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_69b9d748004252b2ed8d74ef3ff30044));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_69b9d748004252b2ed8d74ef3ff30044);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_726de1397b0f14d5e44f7b0f83c185e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_726de1397b0f14d5e44f7b0f83c185e0);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsplit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rsplit);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_dot_int_pos_1_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_chr_58));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_58);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_d66b77addf1c320d97e68ea87e2c856d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d66b77addf1c320d97e68ea87e2c856d);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_f28ac297014eae6038f099e88653df5d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f28ac297014eae6038f099e88653df5d);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_b92ff6ac20808847c903830593d7f598));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b92ff6ac20808847c903830593d7f598);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_c79294b952a0454dc3e373fc0888ef8b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c79294b952a0454dc3e373fc0888ef8b);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_Pattern));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Pattern);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_compile_pattern));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compile_pattern);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_43768d30d2dc0760a61b45a5c93419a0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_43768d30d2dc0760a61b45a5c93419a0_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_pattern));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pattern);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_5738c60bc44451550e393940f9780966_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5738c60bc44451550e393940f9780966_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_2334f24ac547db223d172cb535c45bd8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2334f24ac547db223d172cb535c45bd8_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_1203882f2f5b8f01445a0442af509f6d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1203882f2f5b8f01445a0442af509f6d_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPv4Address));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPv4Address);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_4d46855cbca30b35f28ceaba271a76c3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4d46855cbca30b35f28ceaba271a76c3_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPv6Address));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPv6Address);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_00def57b01ca2553933131247edda585_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_00def57b01ca2553933131247edda585_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPv4Network));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPv4Network);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_81941b276fe35eb1199551f59c33ca46_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_81941b276fe35eb1199551f59c33ca46_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_8bbc3fb14e2170a72794a783efbd6cec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8bbc3fb14e2170a72794a783efbd6cec);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPv6Network));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPv6Network);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_fe04e1177b04654a5a95396bd1f2522f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fe04e1177b04654a5a95396bd1f2522f_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_1660e6cd5790457c61881a386abf2d28));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1660e6cd5790457c61881a386abf2d28);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPv4Interface));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPv4Interface);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_1ee51dea52d3fe4db7655692d241a7c9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1ee51dea52d3fe4db7655692d241a7c9_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPv6Interface));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPv6Interface);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_c417093022877e7986807aa675b6a3e0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c417093022877e7986807aa675b6a3e0_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_Fraction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Fraction);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_6c55e82aaab00efd7db83d0415fc7990_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6c55e82aaab00efd7db83d0415fc7990_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_math));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_math);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_isfinite));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isfinite);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticKnownError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticKnownError);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_finite_number_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_finite_number_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_float_type_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_int_type_float_type_str_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_937e07f69752bc4b38e561be8da71913));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_937e07f69752bc4b38e561be8da71913);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_greater_than));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_greater_than);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_gt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gt);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain__safe_repr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__safe_repr);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_d801099d73fefda2a09ae94189f74aa8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d801099d73fefda2a09ae94189f74aa8);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_greater_than_equal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_greater_than_equal);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_ge));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ge);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c3d145ef3c1ce247cab68fd7ee48753));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c3d145ef3c1ce247cab68fd7ee48753);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_less_than));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_less_than);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_lt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lt);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_084d2cfa47d70e88a2df8f4e84ed9df0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_084d2cfa47d70e88a2df8f4e84ed9df0);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_less_than_equal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_less_than_equal);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_le));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_le);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_6cd391d90e5e02fb9d36108f3ee14c36));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6cd391d90e5e02fb9d36108f3ee14c36);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_multiple_of));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_multiple_of);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ff6c4093d66a319bf8fd186255247ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ff6c4093d66a319bf8fd186255247ca);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_too_short));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_too_short);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_field_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field_type);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_Value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Value);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_min_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min_length);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_actual_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_actual_length);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_b317547dd64175e27476980f4b22c937));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b317547dd64175e27476980f4b22c937);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_too_long));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_too_long);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_length);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5b82af57efa3993ca96e58556707ac5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5b82af57efa3993ca96e58556707ac5);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_as_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_as_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_exponent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exponent);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_digits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_digits);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_type_AssertionError_type_AttributeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_AssertionError_type_AttributeError_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_5517382844ae3b0682934f35741190dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5517382844ae3b0682934f35741190dd);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_016babbfa0298a5569332c9a6b381f4e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_016babbfa0298a5569332c9a6b381f4e);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain__extract_decimal_digits_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__extract_decimal_digits_info);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalize);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_decimal_max_digits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decimal_max_digits);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_digits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_digits);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_41eb2c8849e500d7bfc8bf5bdf908516));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_41eb2c8849e500d7bfc8bf5bdf908516);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_decimal_max_places));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decimal_max_places);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_decimal_places));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decimal_places);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcd5de7f3e5aa82da87871b739411f38));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcd5de7f3e5aa82da87871b739411f38);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_collections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_collections);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_deque));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deque);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_maxlen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maxlen);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxlen_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_maxlen_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_defaultdict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_defaultdict);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_default_factory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default_factory);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_import_cached_field_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_import_cached_field_info);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_origin);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_dict_11effe360d9cf8898df6e7aeb7476256));
CHECK_OBJECT_DEEP(mod_consts.const_dict_11effe360d9cf8898df6e7aeb7476256);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_infer_default));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_infer_default);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_0662cc80a790909421c748498f8bd88d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0662cc80a790909421c748498f8bd88d);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_objects));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_objects);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_annotated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_annotated);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_args));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_args);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_MutableSequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MutableSequence);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_MutableSet));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MutableSet);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_Set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Set);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_MutableMapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MutableMapping);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_values_type_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values_type_origin);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_values_source_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values_source_type);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_43939a86f51ac3b8e94916dd41e00369));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_43939a86f51ac3b8e94916dd41e00369);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_typevar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_typevar);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_type_var_default_factory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_type_var_default_factory);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_b51aea51baf9dd8ba7a7c5d8dbc23435));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b51aea51baf9dd8ba7a7c5d8dbc23435);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticSchemaGenerationError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticSchemaGenerationError);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_6b373c93b4158c5b77f8404a89458dd5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6b373c93b4158c5b77f8404a89458dd5);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_92a5a60ff668ebd45b54f4a0a7f9770a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_92a5a60ff668ebd45b54f4a0a7f9770a);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3a78165c9a79aca1e4a85d1e5527cec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d3a78165c9a79aca1e4a85d1e5527cec);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a6e35ffc656118436f6c2999c7e4c24));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a6e35ffc656118436f6c2999c7e4c24);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_instructions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_instructions);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_FieldInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FieldInfo);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3b8a100ce3cad7ba15a20b31e5953d5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f3b8a100ce3cad7ba15a20b31e5953d5);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_ZoneInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ZoneInfo);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_ZoneInfoNotFoundError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ZoneInfoNotFoundError);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_zoneinfo_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_zoneinfo_str);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_73107100861c9face037198e55a17c83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_73107100861c9face037198e55a17c83);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_77c4d90f1d38ad795010d9666b63fe92));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_77c4d90f1d38ad795010d9666b63fe92);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain__annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__annotations);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_decimal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decimal);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Decimal_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Decimal_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_Decimal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Decimal);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_fractions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fractions);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Fraction_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Fraction_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_ipaddress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ipaddress);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_74bd1f7bbf4f7da6f86be9d8f70006d5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_74bd1f7bbf4f7da6f86be9d8f70006d5_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_zoneinfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_zoneinfo);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ZoneInfo_str_plain_ZoneInfoNotFoundError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ZoneInfo_str_plain_ZoneInfoNotFoundError_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic_core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pydantic_core);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_core_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_core_schema);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_907d5366b2af807fa07d12233a5c2457));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_907d5366b2af807fa07d12233a5c2457);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PydanticKnownError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PydanticKnownError_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_inspection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_inspection);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_typing_objects_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_typing_objects_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ca6f494e811dc405d56d97fba4ace8c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ca6f494e811dc405d56d97fba4ace8c);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_import_cached_field_info_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_import_cached_field_info_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_dict_8470db10751d75181e07715567a8fbb7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8470db10751d75181e07715567a8fbb7);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_sequence_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sequence_validator);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_dict_5dc7b48a4d3bfc083d765d3d7029743a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5dc7b48a4d3bfc083d765d3d7029743a);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_import_string));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_import_string);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_dict_214f188218286ca9ba9a36968d138331));
CHECK_OBJECT_DEEP(mod_consts.const_dict_214f188218286ca9ba9a36968d138331);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_dict_8e8074bd88bb09ef506136f53c70dc90));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8e8074bd88bb09ef506136f53c70dc90);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_pattern_either_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pattern_either_validator);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_dict_baeb9134c688ba4c8a3a73dfe7fa5302));
CHECK_OBJECT_DEEP(mod_consts.const_dict_baeb9134c688ba4c8a3a73dfe7fa5302);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_pattern_str_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pattern_str_validator);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_dict_701fd81e0c5d2ac682f08ba4c183822f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_701fd81e0c5d2ac682f08ba4c183822f);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_pattern_bytes_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pattern_bytes_validator);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PatternType_type_str_type_bytes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PatternType_type_str_type_bytes_tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_PatternType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PatternType);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_5a0afde0132dcff9c09750c93ab63ab1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5a0afde0132dcff9c09750c93ab63ab1);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_dict_06f270561aa5dff3dedef3548a65b029));
CHECK_OBJECT_DEEP(mod_consts.const_dict_06f270561aa5dff3dedef3548a65b029);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_ip_v4_address_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ip_v4_address_validator);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_dict_66820c7e367a08b6b510522e91a39bc7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_66820c7e367a08b6b510522e91a39bc7);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_ip_v6_address_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ip_v6_address_validator);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_dict_754f2e9d61fc29eb851e397cdeb32df9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_754f2e9d61fc29eb851e397cdeb32df9);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_ip_v4_network_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ip_v4_network_validator);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_dict_4485e32ab38f8af6e3ec8d8f9906c1ee));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4485e32ab38f8af6e3ec8d8f9906c1ee);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_ip_v6_network_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ip_v6_network_validator);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_dict_1de8b7e98ac781a8c9b0f511346c5439));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1de8b7e98ac781a8c9b0f511346c5439);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_ip_v4_interface_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ip_v4_interface_validator);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_dict_a45524315bf9ac59d4b3759f4072745b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a45524315bf9ac59d4b3759f4072745b);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_ip_v6_interface_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ip_v6_interface_validator);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_dict_6c5a8d2911d61c5c0524dd2d194a60bc));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6c5a8d2911d61c5c0524dd2d194a60bc);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_fraction_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fraction_validator);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_dict_079ecffcdb60a27a0ab22dbf43b5ee25));
CHECK_OBJECT_DEEP(mod_consts.const_dict_079ecffcdb60a27a0ab22dbf43b5ee25);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_forbid_inf_nan_check));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_forbid_inf_nan_check);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_dict_43d204fa33edda4de052d95a2002e060));
CHECK_OBJECT_DEEP(mod_consts.const_dict_43d204fa33edda4de052d95a2002e060);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_dict_85265546805f14e32730e13be83c987a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_85265546805f14e32730e13be83c987a);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_greater_than_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_greater_than_validator);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_dict_7678a2a2901014148c84625934ec2787));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7678a2a2901014148c84625934ec2787);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_greater_than_or_equal_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_greater_than_or_equal_validator);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_dict_9c4a045c909aa3b57bd08a8596e803ed));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9c4a045c909aa3b57bd08a8596e803ed);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_less_than_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_less_than_validator);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_dict_695cdf3554eaee2a1b1e1de9c4e21692));
CHECK_OBJECT_DEEP(mod_consts.const_dict_695cdf3554eaee2a1b1e1de9c4e21692);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_less_than_or_equal_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_less_than_or_equal_validator);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_dict_b07f59124b128dd6baf9ad4b18daf7ab));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b07f59124b128dd6baf9ad4b18daf7ab);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain_multiple_of_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_multiple_of_validator);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_dict_51038fba016b93f2114847c6d74f7a89));
CHECK_OBJECT_DEEP(mod_consts.const_dict_51038fba016b93f2114847c6d74f7a89);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_plain_min_length_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min_length_validator);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_dict_feec26b7a805a0284dda5d2e75df4fe0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_feec26b7a805a0284dda5d2e75df4fe0);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_length_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_length_validator);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_dict_46be6993a741f35bb4ef802ab8d863ff));
CHECK_OBJECT_DEEP(mod_consts.const_dict_46be6993a741f35bb4ef802ab8d863ff);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_dict_162f80ad2d2a8fabd5f4dd3c37e1d654));
CHECK_OBJECT_DEEP(mod_consts.const_dict_162f80ad2d2a8fabd5f4dd3c37e1d654);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_digits_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_digits_validator);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_dict_a314ac2d50c1fd8bd76e8449ae2258a4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a314ac2d50c1fd8bd76e8449ae2258a4);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain_decimal_places_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decimal_places_validator);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_dict_4eeb24cb64f0f35a8080b895bee72f63));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4eeb24cb64f0f35a8080b895bee72f63);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_deque_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deque_validator);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_dict_83a3f45eced2352c9ce341f2483b7265));
CHECK_OBJECT_DEEP(mod_consts.const_dict_83a3f45eced2352c9ce341f2483b7265);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_plain_defaultdict_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_defaultdict_validator);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_dict_e903cb0e310dfc1d14b8bea62211e731));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e903cb0e310dfc1d14b8bea62211e731);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_defaultdict_default_default_factory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_defaultdict_default_default_factory);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_dict_0266134b1117629b5053702cdbe89c85));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0266134b1117629b5053702cdbe89c85);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_str_is_valid_iana_tz));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_str_is_valid_iana_tz);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_plain_NUMERIC_VALIDATOR_LOOKUP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NUMERIC_VALIDATOR_LOOKUP);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_digest_45210a81e4e4528aeaa06f54a99db8b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45210a81e4e4528aeaa06f54a99db8b9);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_str_plain_IpType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IpType);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_plain_IP_VALIDATOR_LOOKUP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IP_VALIDATOR_LOOKUP);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0501b53604489761ce42160314ac43e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0501b53604489761ce42160314ac43e);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_plain_DefaultDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DefaultDict);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_str_plain_OrderedDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OrderedDict);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_plain_Counter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Counter);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_str_plain_MAPPING_ORIGIN_MAP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MAPPING_ORIGIN_MAP);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_digest_03ec832941afc3df07cc8bf9e7164e93));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03ec832941afc3df07cc8bf9e7164e93);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_str_digest_6303f7c35270a189a43b0d7bcc7f3e12));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6303f7c35270a189a43b0d7bcc7f3e12);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_tuple_e45d08767f05e49cd9c7c6d86cedf572_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e45d08767f05e49cd9c7c6d86cedf572_tuple);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_digest_843c0428d2ba9c3a9d07e356b1efc0f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_843c0428d2ba9c3a9d07e356b1efc0f4);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_tuple_1d2cb9cf192b5db7c79ae795cf042913_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1d2cb9cf192b5db7c79ae795cf042913_tuple);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_tuple_d5cb51c0edc601b0a1a4b5924390be60_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d5cb51c0edc601b0a1a4b5924390be60_tuple);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_v_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_v_tuple);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pattern_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_pattern_tuple);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_tuple_b2e509b139d4d38d91c2580144103f20_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b2e509b139d4d38d91c2580144103f20_tuple);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_tuple_b6cc6dd1ed205786be286d4c551c926d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b6cc6dd1ed205786be286d4c551c926d_tuple);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_input_value_str_plain_handler_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_input_value_str_plain_handler_tuple);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_tuple);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_input_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_input_value_tuple);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_tuple_4ed1fac5fcba5fafde3b6cb6e0d2fcf2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4ed1fac5fcba5fafde3b6cb6e0d2fcf2_tuple);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_ge_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_ge_tuple);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_gt_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_gt_tuple);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_value_str_plain_e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_value_str_plain_e_tuple);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_tuple_372092f7f7f2ab8a2edd67e712df7aba_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_372092f7f7f2ab8a2edd67e712df7aba_tuple);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_values_source_type_str_plain_values_type_origin_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_values_source_type_str_plain_values_type_origin_tuple);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_le_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_le_tuple);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_lt_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_lt_tuple);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_tuple_09963a3595c47f41a3a332ce5d6ad132_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_09963a3595c47f41a3a332ce5d6ad132_tuple);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_max_length_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_max_length_tuple);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_min_length_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_min_length_tuple);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_multiple_of_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_multiple_of_tuple);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_tuple_b6831d3644b14fd7edc526175c71c894_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b6831d3644b14fd7edc526175c71c894_tuple);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_instructions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_instructions_tuple);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_value_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 44
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
static PyObject *module_var_accessor_pydantic$_internal$_validators$Any(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$Callable(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$Fraction(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_Fraction);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Fraction);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Fraction, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Fraction);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Fraction, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_Fraction);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_Fraction);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Fraction);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$IPv4Address(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Address);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Address);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Address);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Address);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$IPv4Interface(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Interface);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Interface);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Interface);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Interface);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$IPv4Network(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Network);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Network);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Network);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Network);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$IPv6Address(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Address);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Address);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Address);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Address);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$IPv6Interface(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Interface);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Interface);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Interface);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Interface);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$IPv6Network(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Network);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Network);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Network);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Network);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticCustomError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PydanticCustomError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PydanticCustomError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PydanticCustomError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PydanticCustomError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticCustomError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticCustomError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticCustomError);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$PydanticKnownError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticKnownError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PydanticKnownError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PydanticKnownError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PydanticKnownError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PydanticKnownError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticKnownError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticKnownError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticKnownError);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$PydanticSchemaGenerationError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticSchemaGenerationError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PydanticSchemaGenerationError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PydanticSchemaGenerationError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PydanticSchemaGenerationError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PydanticSchemaGenerationError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticSchemaGenerationError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticSchemaGenerationError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticSchemaGenerationError);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$ZoneInfo(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ZoneInfo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ZoneInfo);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ZoneInfo, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ZoneInfo);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ZoneInfo, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ZoneInfo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ZoneInfo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ZoneInfo);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$ZoneInfoNotFoundError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ZoneInfoNotFoundError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ZoneInfoNotFoundError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ZoneInfoNotFoundError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ZoneInfoNotFoundError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ZoneInfoNotFoundError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ZoneInfoNotFoundError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ZoneInfoNotFoundError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ZoneInfoNotFoundError);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$_extract_decimal_digits_info(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain__extract_decimal_digits_info);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__extract_decimal_digits_info);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__extract_decimal_digits_info, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__extract_decimal_digits_info);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__extract_decimal_digits_info, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain__extract_decimal_digits_info);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain__extract_decimal_digits_info);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__extract_decimal_digits_info);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$_import_string_logic(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain__import_string_logic);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__import_string_logic);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__import_string_logic, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__import_string_logic);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__import_string_logic, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain__import_string_logic);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain__import_string_logic);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__import_string_logic);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$_safe_repr(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain__safe_repr);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__safe_repr);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__safe_repr, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__safe_repr);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__safe_repr, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain__safe_repr);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain__safe_repr);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__safe_repr);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$cast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$collections(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_collections);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_collections);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_collections, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_collections);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_collections, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_collections);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_collections);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_collections);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$compile_pattern(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_compile_pattern);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_compile_pattern);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_compile_pattern, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_compile_pattern);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_compile_pattern, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_compile_pattern);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_compile_pattern);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_compile_pattern);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$decimal_places_validator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_decimal_places_validator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_decimal_places_validator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_decimal_places_validator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_decimal_places_validator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_decimal_places_validator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_decimal_places_validator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_decimal_places_validator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_decimal_places_validator);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$get_origin(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_origin);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_origin, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_origin);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_origin, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$greater_than_or_equal_validator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_greater_than_or_equal_validator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_greater_than_or_equal_validator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_greater_than_or_equal_validator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_greater_than_or_equal_validator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_greater_than_or_equal_validator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_greater_than_or_equal_validator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_greater_than_or_equal_validator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_greater_than_or_equal_validator);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$greater_than_validator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_greater_than_validator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_greater_than_validator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_greater_than_validator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_greater_than_validator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_greater_than_validator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_greater_than_validator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_greater_than_validator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_greater_than_validator);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$import_cached_field_info(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_import_cached_field_info);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_import_cached_field_info);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_import_cached_field_info, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_import_cached_field_info);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_import_cached_field_info, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_import_cached_field_info);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_import_cached_field_info);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_import_cached_field_info);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$ip_v4_address_validator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v4_address_validator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ip_v4_address_validator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ip_v4_address_validator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ip_v4_address_validator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ip_v4_address_validator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v4_address_validator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v4_address_validator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v4_address_validator);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$ip_v4_interface_validator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v4_interface_validator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ip_v4_interface_validator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ip_v4_interface_validator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ip_v4_interface_validator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ip_v4_interface_validator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v4_interface_validator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v4_interface_validator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v4_interface_validator);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$ip_v4_network_validator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v4_network_validator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ip_v4_network_validator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ip_v4_network_validator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ip_v4_network_validator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ip_v4_network_validator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v4_network_validator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v4_network_validator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v4_network_validator);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$ip_v6_address_validator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v6_address_validator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ip_v6_address_validator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ip_v6_address_validator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ip_v6_address_validator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ip_v6_address_validator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v6_address_validator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v6_address_validator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v6_address_validator);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$ip_v6_interface_validator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v6_interface_validator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ip_v6_interface_validator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ip_v6_interface_validator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ip_v6_interface_validator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ip_v6_interface_validator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v6_interface_validator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v6_interface_validator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v6_interface_validator);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$ip_v6_network_validator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v6_network_validator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ip_v6_network_validator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ip_v6_network_validator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ip_v6_network_validator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ip_v6_network_validator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v6_network_validator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v6_network_validator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v6_network_validator);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$less_than_or_equal_validator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_less_than_or_equal_validator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_less_than_or_equal_validator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_less_than_or_equal_validator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_less_than_or_equal_validator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_less_than_or_equal_validator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_less_than_or_equal_validator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_less_than_or_equal_validator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_less_than_or_equal_validator);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$less_than_validator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_less_than_validator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_less_than_validator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_less_than_validator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_less_than_validator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_less_than_validator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_less_than_validator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_less_than_validator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_less_than_validator);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$math(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_math);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_math, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_math);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_math, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$max_digits_validator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_max_digits_validator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_max_digits_validator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_max_digits_validator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_max_digits_validator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_max_digits_validator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_max_digits_validator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_max_digits_validator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_max_digits_validator);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$max_length_validator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_max_length_validator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_max_length_validator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_max_length_validator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_max_length_validator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_max_length_validator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_max_length_validator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_max_length_validator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_max_length_validator);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$min_length_validator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_min_length_validator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_min_length_validator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_min_length_validator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_min_length_validator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_min_length_validator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_min_length_validator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_min_length_validator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_min_length_validator);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$multiple_of_validator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_multiple_of_validator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_multiple_of_validator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_multiple_of_validator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_multiple_of_validator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_multiple_of_validator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_multiple_of_validator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_multiple_of_validator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_multiple_of_validator);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$typing_extensions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_extensions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_typing_extensions);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_typing_extensions, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_typing_extensions);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_typing_extensions, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_extensions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_extensions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_extensions);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_validators$typing_objects(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_validators->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_validators->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_objects);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_validators->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_typing_objects);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_typing_objects, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_typing_objects);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_typing_objects, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_objects);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_objects);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_objects);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_693320cd0fc7848a7b5259b0ff868bbd;
static PyCodeObject *code_objects_1c17c25e9bc02a1caff08908474e80f7;
static PyCodeObject *code_objects_f68d3b9d6989ba1f466ab6b6fa72a4d0;
static PyCodeObject *code_objects_cbf299be05b2369cfa6f9e9a570604b2;
static PyCodeObject *code_objects_6ee0137e95a6d88ad232f9b15bc1026e;
static PyCodeObject *code_objects_f5517813ba5a386551ec40263b1d2f4b;
static PyCodeObject *code_objects_7fc1515365bc0c23817f8f86663c808e;
static PyCodeObject *code_objects_dfb7533271e9994350a2555122100607;
static PyCodeObject *code_objects_700a7d8a7f68990065b603ed3259a758;
static PyCodeObject *code_objects_0736871d2252b4be18775619df33f20a;
static PyCodeObject *code_objects_8b7f0e1f0bce8f8e19b21b802669c769;
static PyCodeObject *code_objects_0baf4e2a30972cf32bb104be2e455a52;
static PyCodeObject *code_objects_cb32e649023a1998392d6a1ec0ac03d1;
static PyCodeObject *code_objects_68cc72a9435cbdb997a632f09615824b;
static PyCodeObject *code_objects_ed61d433637c36c95e06472768c5cad5;
static PyCodeObject *code_objects_f9b63a191d4f7028fd3d5c2a194767b3;
static PyCodeObject *code_objects_b1f77bfe8e8e20aeaef124aa4af036b3;
static PyCodeObject *code_objects_00a5500053af52630002388a898cd28c;
static PyCodeObject *code_objects_5e2e77c09408bb1825386f45a409fb65;
static PyCodeObject *code_objects_1c57857d27e7cbb5e219d9b76987bf38;
static PyCodeObject *code_objects_32b93c9c8db63890cf9538d727050df9;
static PyCodeObject *code_objects_a2c468dfa137a8ed0fc7b5dcbf4582f0;
static PyCodeObject *code_objects_cd2b8980564be6628e42a0d5aec76a19;
static PyCodeObject *code_objects_fa56823e18e8d6cb63e0ff9a0325b5f6;
static PyCodeObject *code_objects_1c48cc2b8c597de5fea693d0d5bf5fba;
static PyCodeObject *code_objects_da7f63ec08e33642369b4636baee2edc;
static PyCodeObject *code_objects_cbf9f749b4ff40a66b4979e6b82799a0;
static PyCodeObject *code_objects_43ebfaf833e70ae27c9a4c277bb58981;
static PyCodeObject *code_objects_6eb9fa3f02896b78a4abd6bfbe0e5adc;
static PyCodeObject *code_objects_75f51753f056e165e7858cb1d885668d;
static PyCodeObject *code_objects_b36b92a0c6dd5e5ffd8ece49e436de81;
static PyCodeObject *code_objects_723c5f24f1e765e9684406a61250770c;
static PyCodeObject *code_objects_fe78a43b65215b6b2a971ec0f0a50c24;
static PyCodeObject *code_objects_1a74b6d9d7b7effa0103caabf7df3ae5;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_6303f7c35270a189a43b0d7bcc7f3e12); CHECK_OBJECT(module_filename_obj);
code_objects_693320cd0fc7848a7b5259b0ff868bbd = MAKE_CODE_OBJECT(module_filename_obj, 475, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_f3b8a100ce3cad7ba15a20b31e5953d5, mod_consts.const_tuple_e45d08767f05e49cd9c7c6d86cedf572_tuple, NULL, 1, 0, 0);
code_objects_1c17c25e9bc02a1caff08908474e80f7 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_843c0428d2ba9c3a9d07e356b1efc0f4, mod_consts.const_str_digest_843c0428d2ba9c3a9d07e356b1efc0f4, NULL, NULL, 0, 0, 0);
code_objects_f68d3b9d6989ba1f466ab6b6fa72a4d0 = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__extract_decimal_digits_info, mod_consts.const_str_plain__extract_decimal_digits_info, mod_consts.const_tuple_1d2cb9cf192b5db7c79ae795cf042913_tuple, NULL, 1, 0, 0);
code_objects_cbf299be05b2369cfa6f9e9a570604b2 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__import_string_logic, mod_consts.const_str_plain__import_string_logic, mod_consts.const_tuple_d5cb51c0edc601b0a1a4b5924390be60_tuple, NULL, 1, 0, 0);
code_objects_6ee0137e95a6d88ad232f9b15bc1026e = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__safe_repr, mod_consts.const_str_plain__safe_repr, mod_consts.const_tuple_str_plain_v_tuple, NULL, 1, 0, 0);
code_objects_f5517813ba5a386551ec40263b1d2f4b = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_compile_pattern, mod_consts.const_str_plain_compile_pattern, mod_consts.const_tuple_str_plain_pattern_tuple, NULL, 1, 0, 0);
code_objects_7fc1515365bc0c23817f8f86663c808e = MAKE_CODE_OBJECT(module_filename_obj, 398, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_decimal_places_validator, mod_consts.const_str_plain_decimal_places_validator, mod_consts.const_tuple_b2e509b139d4d38d91c2580144103f20_tuple, NULL, 2, 0, 0);
code_objects_dfb7533271e9994350a2555122100607 = MAKE_CODE_OBJECT(module_filename_obj, 417, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_defaultdict_validator, mod_consts.const_str_plain_defaultdict_validator, mod_consts.const_tuple_b6cc6dd1ed205786be286d4c551c926d_tuple, NULL, 3, 0, 0);
code_objects_700a7d8a7f68990065b603ed3259a758 = MAKE_CODE_OBJECT(module_filename_obj, 413, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_deque_validator, mod_consts.const_str_plain_deque_validator, mod_consts.const_tuple_str_plain_input_value_str_plain_handler_tuple, NULL, 2, 0, 0);
code_objects_0736871d2252b4be18775619df33f20a = MAKE_CODE_OBJECT(module_filename_obj, 257, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_forbid_inf_nan_check, mod_consts.const_str_plain_forbid_inf_nan_check, mod_consts.const_tuple_str_plain_x_tuple, NULL, 1, 0, 0);
code_objects_8b7f0e1f0bce8f8e19b21b802669c769 = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_fraction_validator, mod_consts.const_str_plain_fraction_validator, mod_consts.const_tuple_str_plain_input_value_tuple, NULL, 1, 0, 1);
code_objects_0baf4e2a30972cf32bb104be2e455a52 = MAKE_CODE_OBJECT(module_filename_obj, 427, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_defaultdict_default_default_factory, mod_consts.const_str_plain_get_defaultdict_default_default_factory, mod_consts.const_tuple_4ed1fac5fcba5fafde3b6cb6e0d2fcf2_tuple, NULL, 1, 0, 0);
code_objects_cb32e649023a1998392d6a1ec0ac03d1 = MAKE_CODE_OBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_greater_than_or_equal_validator, mod_consts.const_str_plain_greater_than_or_equal_validator, mod_consts.const_tuple_str_plain_x_str_plain_ge_tuple, NULL, 2, 0, 0);
code_objects_68cc72a9435cbdb997a632f09615824b = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_greater_than_validator, mod_consts.const_str_plain_greater_than_validator, mod_consts.const_tuple_str_plain_x_str_plain_gt_tuple, NULL, 2, 0, 0);
code_objects_ed61d433637c36c95e06472768c5cad5 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_import_string, mod_consts.const_str_plain_import_string, mod_consts.const_tuple_str_plain_value_str_plain_e_tuple, NULL, 1, 0, 0);
code_objects_f9b63a191d4f7028fd3d5c2a194767b3 = MAKE_CODE_OBJECT(module_filename_obj, 432, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_infer_default, mod_consts.const_str_digest_0662cc80a790909421c748498f8bd88d, mod_consts.const_tuple_372092f7f7f2ab8a2edd67e712df7aba_tuple, mod_consts.const_tuple_str_plain_values_source_type_str_plain_values_type_origin_tuple, 0, 0, 0);
code_objects_b1f77bfe8e8e20aeaef124aa4af036b3 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ip_v4_address_validator, mod_consts.const_str_plain_ip_v4_address_validator, mod_consts.const_tuple_str_plain_input_value_tuple, NULL, 1, 0, 1);
code_objects_00a5500053af52630002388a898cd28c = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ip_v4_interface_validator, mod_consts.const_str_plain_ip_v4_interface_validator, mod_consts.const_tuple_str_plain_input_value_tuple, NULL, 1, 0, 1);
code_objects_5e2e77c09408bb1825386f45a409fb65 = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ip_v4_network_validator, mod_consts.const_str_plain_ip_v4_network_validator, mod_consts.const_tuple_str_plain_input_value_tuple, NULL, 1, 0, 1);
code_objects_1c57857d27e7cbb5e219d9b76987bf38 = MAKE_CODE_OBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ip_v6_address_validator, mod_consts.const_str_plain_ip_v6_address_validator, mod_consts.const_tuple_str_plain_input_value_tuple, NULL, 1, 0, 1);
code_objects_32b93c9c8db63890cf9538d727050df9 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ip_v6_interface_validator, mod_consts.const_str_plain_ip_v6_interface_validator, mod_consts.const_tuple_str_plain_input_value_tuple, NULL, 1, 0, 1);
code_objects_a2c468dfa137a8ed0fc7b5dcbf4582f0 = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ip_v6_network_validator, mod_consts.const_str_plain_ip_v6_network_validator, mod_consts.const_tuple_str_plain_input_value_tuple, NULL, 1, 0, 1);
code_objects_cd2b8980564be6628e42a0d5aec76a19 = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_less_than_or_equal_validator, mod_consts.const_str_plain_less_than_or_equal_validator, mod_consts.const_tuple_str_plain_x_str_plain_le_tuple, NULL, 2, 0, 0);
code_objects_fa56823e18e8d6cb63e0ff9a0325b5f6 = MAKE_CODE_OBJECT(module_filename_obj, 291, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_less_than_validator, mod_consts.const_str_plain_less_than_validator, mod_consts.const_tuple_str_plain_x_str_plain_lt_tuple, NULL, 2, 0, 0);
code_objects_1c48cc2b8c597de5fea693d0d5bf5fba = MAKE_CODE_OBJECT(module_filename_obj, 384, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_max_digits_validator, mod_consts.const_str_plain_max_digits_validator, mod_consts.const_tuple_09963a3595c47f41a3a332ce5d6ad132_tuple, NULL, 2, 0, 0);
code_objects_da7f63ec08e33642369b4636baee2edc = MAKE_CODE_OBJECT(module_filename_obj, 329, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_max_length_validator, mod_consts.const_str_plain_max_length_validator, mod_consts.const_tuple_str_plain_x_str_plain_max_length_tuple, NULL, 2, 0, 0);
code_objects_cbf9f749b4ff40a66b4979e6b82799a0 = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_min_length_validator, mod_consts.const_str_plain_min_length_validator, mod_consts.const_tuple_str_plain_x_str_plain_min_length_tuple, NULL, 2, 0, 0);
code_objects_43ebfaf833e70ae27c9a4c277bb58981 = MAKE_CODE_OBJECT(module_filename_obj, 309, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_multiple_of_validator, mod_consts.const_str_plain_multiple_of_validator, mod_consts.const_tuple_str_plain_x_str_plain_multiple_of_tuple, NULL, 2, 0, 0);
code_objects_6eb9fa3f02896b78a4abd6bfbe0e5adc = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_pattern_bytes_validator, mod_consts.const_str_plain_pattern_bytes_validator, mod_consts.const_tuple_str_plain_input_value_tuple, NULL, 1, 0, 1);
code_objects_75f51753f056e165e7858cb1d885668d = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_pattern_either_validator, mod_consts.const_str_plain_pattern_either_validator, mod_consts.const_tuple_str_plain_input_value_tuple, NULL, 1, 0, 1);
code_objects_b36b92a0c6dd5e5ffd8ece49e436de81 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_pattern_str_validator, mod_consts.const_str_plain_pattern_str_validator, mod_consts.const_tuple_str_plain_input_value_tuple, NULL, 1, 0, 1);
code_objects_723c5f24f1e765e9684406a61250770c = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sequence_validator, mod_consts.const_str_plain_sequence_validator, mod_consts.const_tuple_b6831d3644b14fd7edc526175c71c894_tuple, NULL, 2, 0, 1);
code_objects_fe78a43b65215b6b2a971ec0f0a50c24 = MAKE_CODE_OBJECT(module_filename_obj, 456, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_type_var_default_factory, mod_consts.const_str_digest_b51aea51baf9dd8ba7a7c5d8dbc23435, mod_consts.const_tuple_str_plain_instructions_tuple, mod_consts.const_tuple_str_plain_instructions_tuple, 0, 0, 0);
code_objects_1a74b6d9d7b7effa0103caabf7df3ae5 = MAKE_CODE_OBJECT(module_filename_obj, 486, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_validate_str_is_valid_iana_tz, mod_consts.const_str_plain_validate_str_is_valid_iana_tz, mod_consts.const_tuple_str_plain_value_tuple, NULL, 1, 0, 1);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__14_fraction_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__16__safe_repr(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__17_greater_than_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__19_less_than_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__1_sequence_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__21_multiple_of_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__22_min_length_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__23_max_length_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__25_max_digits_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__26_decimal_places_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__27_deque_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__28_defaultdict_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__2_import_string(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__3__import_string_logic(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__4_pattern_either_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__5_pattern_str_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__7_compile_pattern(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_pydantic$_internal$_validators$$$function__1_sequence_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_input_value = python_pars[0];
PyObject *par_validator = python_pars[1];
PyObject *var_value_type = NULL;
PyObject *var_v_list = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_input_value);
tmp_type_arg_1 = par_input_value;
tmp_assign_source_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_assign_source_1 == NULL));
assert(var_value_type == NULL);
var_value_type = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_723c5f24f1e765e9684406a61250770c, module_pydantic$_internal$_validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
CHECK_OBJECT(var_value_type);
tmp_issubclass_cls_1 = var_value_type;
tmp_issubclass_classes_1 = mod_consts.const_tuple_type_str_type_bytes_tuple;
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_sequence_str;
tmp_args_element_value_2 = mod_consts.const_str_digest_06d5be23e2f98f78e2d017b949608086;
tmp_dict_key_1 = mod_consts.const_str_plain_type_name;
CHECK_OBJECT(var_value_type);
tmp_expression_value_1 = var_value_type;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
assert(!(tmp_dict_value_1 == NULL));
tmp_args_element_value_3 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator->m_frame.f_lineno = 38;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 38;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_value_type);
tmp_cmp_expr_left_1 = var_value_type;
tmp_cmp_expr_right_1 = (PyObject *)&PyTuple_Type;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_list_arg_1;
CHECK_OBJECT(par_input_value);
tmp_list_arg_1 = par_input_value;
tmp_assign_source_2 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_input_value;
    assert(old != NULL);
    par_input_value = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_validator);
tmp_called_value_2 = par_validator;
CHECK_OBJECT(par_input_value);
tmp_args_element_value_4 = par_input_value;
frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator->m_frame.f_lineno = 52;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_v_list == NULL);
var_v_list = tmp_assign_source_3;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_value_type);
tmp_cmp_expr_left_2 = var_value_type;
tmp_cmp_expr_right_2 = (PyObject *)&PyList_Type;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(var_v_list);
tmp_return_value = var_v_list;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_issubclass_cls_2;
PyObject *tmp_issubclass_classes_2;
CHECK_OBJECT(var_value_type);
tmp_issubclass_cls_2 = var_value_type;
tmp_issubclass_classes_2 = (PyObject *)&PyRange_Type;
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_2, tmp_issubclass_classes_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(var_v_list);
tmp_return_value = var_v_list;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_4;
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_value_type);
tmp_cmp_expr_left_3 = var_value_type;
tmp_cmp_expr_right_3 = (PyObject *)&PyTuple_Type;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_tuple_arg_1;
CHECK_OBJECT(var_v_list);
tmp_tuple_arg_1 = var_v_list;
tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_value_type);
tmp_called_value_3 = var_value_type;
CHECK_OBJECT(var_v_list);
tmp_args_element_value_5 = var_v_list;
frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator->m_frame.f_lineno = 64;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_5:;
branch_end_4:;
branch_end_3:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator,
    type_description_1,
    par_input_value,
    par_validator,
    var_value_type,
    var_v_list
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__1_sequence_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_input_value);
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);
par_input_value = NULL;
CHECK_OBJECT(var_value_type);
CHECK_OBJECT(var_value_type);
Py_DECREF(var_value_type);
var_value_type = NULL;
CHECK_OBJECT(var_v_list);
CHECK_OBJECT(var_v_list);
Py_DECREF(var_v_list);
var_v_list = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_input_value);
par_input_value = NULL;
CHECK_OBJECT(var_value_type);
CHECK_OBJECT(var_value_type);
Py_DECREF(var_value_type);
var_value_type = NULL;
Py_XDECREF(var_v_list);
var_v_list = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_validator);
Py_DECREF(par_validator);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_validator);
Py_DECREF(par_validator);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__2_import_string(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_value = python_pars[0];
PyObject *var_e = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__2_import_string;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__2_import_string = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__2_import_string)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__2_import_string);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__2_import_string == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__2_import_string = MAKE_FUNCTION_FRAME(tstate, code_objects_ed61d433637c36c95e06472768c5cad5, module_pydantic$_internal$_validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__2_import_string->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__2_import_string = cache_frame_frame_pydantic$_internal$_validators$$$function__2_import_string;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__2_import_string);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__2_import_string) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_value);
tmp_isinstance_inst_1 = par_value;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oo";
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
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$_import_string_logic(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__import_string_logic);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
frame_frame_pydantic$_internal$_validators$$$function__2_import_string->m_frame.f_lineno = 70;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__2_import_string, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__2_import_string, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_1); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_1);
var_e = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_raise_cause_1;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_import_error;
tmp_args_element_value_3 = mod_consts.const_str_digest_3fce44315663e1d7b16851e14cd31625;
tmp_dict_key_1 = mod_consts.const_str_plain_error;
CHECK_OBJECT(var_e);
tmp_unicode_arg_1 = var_e;
tmp_dict_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_args_element_value_4 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_pydantic$_internal$_validators$$$function__2_import_string->m_frame.f_lineno = 72;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 72;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oo";
goto try_except_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 69;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__2_import_string->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__2_import_string->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// End of try:
goto branch_end_1;
branch_no_1:;
CHECK_OBJECT(par_value);
tmp_return_value = par_value;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__2_import_string, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__2_import_string->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__2_import_string, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__2_import_string,
    type_description_1,
    par_value,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__2_import_string == cache_frame_frame_pydantic$_internal$_validators$$$function__2_import_string) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__2_import_string);
    cache_frame_frame_pydantic$_internal$_validators$$$function__2_import_string = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__2_import_string);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__3__import_string_logic(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_dotted_path = python_pars[0];
PyObject *var_import_module = NULL;
PyObject *var_components = NULL;
PyObject *var_module_path = NULL;
PyObject *var_module = NULL;
PyObject *var_e = NULL;
PyObject *var_maybe_module_path = NULL;
PyObject *var_maybe_attribute = NULL;
PyObject *var_attribute = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionStackItem exception_preserved_1;
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
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
{
    PyObject *hard_module = IMPORT_HARD_IMPORTLIB();
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_import_module);
}
assert(!(tmp_assign_source_1 == NULL));
assert(var_import_module == NULL);
var_import_module = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic = MAKE_FUNCTION_FRAME(tstate, code_objects_cbf299be05b2369cfa6f9e9a570604b2, module_pydantic$_internal$_validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic = cache_frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_dotted_path);
tmp_expression_value_2 = par_dotted_path;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_strip);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic->m_frame.f_lineno = 98;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_split);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic->m_frame.f_lineno = 98;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_chr_58_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_components == NULL);
var_components = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_components);
tmp_len_arg_1 = var_components;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 2;
tmp_condition_result_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
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
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_69b9d748004252b2ed8d74ef3ff30044;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_dotted_path);
tmp_operand_value_1 = par_dotted_path;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
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
frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic->m_frame.f_lineno = 100;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ImportError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 100;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_components);
tmp_expression_value_3 = var_components;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_module_path == NULL);
var_module_path = tmp_assign_source_3;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(var_module_path);
tmp_operand_value_2 = var_module_path;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_726de1397b0f14d5e44f7b0f83c185e0;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_3;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_dotted_path);
tmp_operand_value_3 = par_dotted_path;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic->m_frame.f_lineno = 104;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ImportError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_input_2 == NULL));
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 104;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
CHECK_OBJECT(var_module_path);
tmp_name_value_1 = var_module_path;
frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic->m_frame.f_lineno = 107;
{
    PyObject *hard_module = IMPORT_HARD_IMPORTLIB();
    PyObject *import_module_func = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_import_module);
    tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, import_module_func, tmp_name_value_1);
    Py_DECREF(import_module_func);
}
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
assert(var_module == NULL);
Py_INCREF(tmp_assign_source_4);
var_module = tmp_assign_source_4;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_2 = PyExc_ModuleNotFoundError;
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
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_5); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_5);
var_e = tmp_assign_source_5;
}
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = const_str_dot;
CHECK_OBJECT(var_module_path);
tmp_cmp_expr_right_3 = var_module_path;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_4 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_dotted_path);
tmp_expression_value_5 = par_dotted_path;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_strip);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic->m_frame.f_lineno = 111;
tmp_expression_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_rsplit);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic->m_frame.f_lineno = 111;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_str_dot_int_pos_1_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_5;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
assert(var_maybe_module_path == NULL);
Py_INCREF(tmp_assign_source_9);
var_maybe_module_path = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
assert(var_maybe_attribute == NULL);
Py_INCREF(tmp_assign_source_10);
var_maybe_attribute = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
tmp_called_value_5 = module_var_accessor_pydantic$_internal$_validators$_import_string_logic(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__import_string_logic);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_maybe_module_path);
tmp_format_value_3 = var_maybe_module_path;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
CHECK_OBJECT(var_maybe_attribute);
tmp_format_value_4 = var_maybe_attribute;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic->m_frame.f_lineno = 113;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}
goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_4);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 112;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_8;
branch_no_5:;
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_4;
// End of try:
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_4;
PyObject *tmp_raise_cause_1;
tmp_tuple_element_4 = mod_consts.const_str_digest_d66b77addf1c320d97e68ea87e2c856d;
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_5;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_module_path);
tmp_operand_value_4 = var_module_path;
tmp_format_value_5 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_4;
}
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
CHECK_OBJECT(tmp_format_value_5);
Py_DECREF(tmp_format_value_5);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_4);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_make_exception_arg_3 == NULL));
frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic->m_frame.f_lineno = 116;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ImportError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_input_3 == NULL));
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_3;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 116;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooooooo";
goto try_except_handler_4;
}
branch_no_4:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
CHECK_OBJECT(var_e);
tmp_raise_type_input_4 = var_e;
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 117;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(var_e);
var_e = NULL;

goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_3;
// End of try:
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 106;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_3;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_3:;
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
try_end_1:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
nuitka_digit tmp_cmp_expr_right_5;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(var_components);
tmp_len_arg_2 = var_components;
tmp_cmp_expr_left_5 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = 1;
tmp_condition_result_6 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_components);
tmp_expression_value_6 = var_components;
tmp_subscript_value_2 = const_int_pos_1;
tmp_assign_source_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_attribute == NULL);
var_attribute = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_2;
CHECK_OBJECT(var_module);
tmp_expression_value_7 = var_module;
CHECK_OBJECT(var_attribute);
tmp_name_value_2 = var_attribute;
tmp_return_value = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_2, NULL);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooooo";
    goto try_except_handler_9;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    } else if (exception_keeper_lineno_8 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_8);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_AttributeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_12); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_12);
var_e = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_raise_type_5;
PyObject *tmp_raise_type_input_5;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_string_concat_values_5;
PyObject *tmp_tuple_element_5;
PyObject *tmp_raise_cause_2;
tmp_tuple_element_5 = mod_consts.const_str_digest_f28ac297014eae6038f099e88653df5d;
tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_6;
PyObject *tmp_operand_value_5;
PyObject *tmp_format_spec_6;
PyObject *tmp_format_value_7;
PyObject *tmp_operand_value_6;
PyObject *tmp_format_spec_7;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
CHECK_OBJECT(var_attribute);
tmp_operand_value_5 = var_attribute;
tmp_format_value_6 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_5);
if (tmp_format_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_5;
}
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
CHECK_OBJECT(tmp_format_value_6);
Py_DECREF(tmp_format_value_6);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_str_digest_b92ff6ac20808847c903830593d7f598;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 2, tmp_tuple_element_5);
CHECK_OBJECT(var_module_path);
tmp_operand_value_6 = var_module_path;
tmp_format_value_7 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_6);
if (tmp_format_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_5;
}
tmp_format_spec_7 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
CHECK_OBJECT(tmp_format_value_7);
Py_DECREF(tmp_format_value_7);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_5, 3, tmp_tuple_element_5);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_string_concat_values_5);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_5);
CHECK_OBJECT(tmp_string_concat_values_5);
Py_DECREF(tmp_string_concat_values_5);
assert(!(tmp_make_exception_arg_4 == NULL));
frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic->m_frame.f_lineno = 124;
tmp_raise_type_input_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ImportError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_input_5 == NULL));
tmp_raise_type_5 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_5);
CHECK_OBJECT(tmp_raise_type_input_5);
Py_DECREF(tmp_raise_type_input_5);
if (tmp_raise_type_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooooooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(var_e);
tmp_raise_cause_2 = var_e;
exception_state.exception_value = tmp_raise_type_5;
Py_INCREF(tmp_raise_cause_2);
exception_lineno = 124;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_2);
type_description_1 = "ooooooooo";
goto try_except_handler_11;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
goto branch_end_7;
branch_no_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 121;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_10;
branch_end_7:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
// End of try:
goto branch_end_6;
branch_no_6:;
CHECK_OBJECT(var_module);
tmp_return_value = var_module;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_6:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic,
    type_description_1,
    par_dotted_path,
    var_import_module,
    var_components,
    var_module_path,
    var_module,
    var_e,
    var_maybe_module_path,
    var_maybe_attribute,
    var_attribute
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic == cache_frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic);
    cache_frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__3__import_string_logic);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_import_module);
CHECK_OBJECT(var_import_module);
Py_DECREF(var_import_module);
var_import_module = NULL;
CHECK_OBJECT(var_components);
CHECK_OBJECT(var_components);
Py_DECREF(var_components);
var_components = NULL;
CHECK_OBJECT(var_module_path);
CHECK_OBJECT(var_module_path);
Py_DECREF(var_module_path);
var_module_path = NULL;
Py_XDECREF(var_module);
var_module = NULL;
Py_XDECREF(var_maybe_module_path);
var_maybe_module_path = NULL;
Py_XDECREF(var_maybe_attribute);
var_maybe_attribute = NULL;
Py_XDECREF(var_attribute);
var_attribute = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_import_module);
CHECK_OBJECT(var_import_module);
Py_DECREF(var_import_module);
var_import_module = NULL;
Py_XDECREF(var_components);
var_components = NULL;
Py_XDECREF(var_module_path);
var_module_path = NULL;
Py_XDECREF(var_module);
var_module = NULL;
Py_XDECREF(var_maybe_module_path);
var_maybe_module_path = NULL;
Py_XDECREF(var_maybe_attribute);
var_maybe_attribute = NULL;
Py_XDECREF(var_attribute);
var_attribute = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_dotted_path);
Py_DECREF(par_dotted_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_dotted_path);
Py_DECREF(par_dotted_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__4_pattern_either_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_input_value = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_75f51753f056e165e7858cb1d885668d, module_pydantic$_internal$_validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_input_value);
tmp_isinstance_inst_1 = par_input_value;
tmp_expression_value_1 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_1 == NULL));
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Pattern);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "o";
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
CHECK_OBJECT(par_input_value);
tmp_return_value = par_input_value;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_input_value);
tmp_isinstance_inst_2 = par_input_value;
tmp_isinstance_cls_2 = mod_consts.const_tuple_type_str_type_bytes_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$compile_pattern(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_compile_pattern);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_input_value);
tmp_args_element_value_1 = par_input_value;
frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator->m_frame.f_lineno = 134;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator->m_frame.f_lineno = 136;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_43768d30d2dc0760a61b45a5c93419a0_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 136;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_end_2:;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator,
    type_description_1,
    par_input_value
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__4_pattern_either_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__5_pattern_str_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_input_value = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_b36b92a0c6dd5e5ffd8ece49e436de81, module_pydantic$_internal$_validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_input_value);
tmp_isinstance_inst_1 = par_input_value;
tmp_expression_value_1 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_1 == NULL));
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Pattern);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "o";
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_input_value);
tmp_expression_value_2 = par_input_value;
tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pattern);
if (tmp_isinstance_inst_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_inst_2);
Py_DECREF(tmp_isinstance_inst_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(par_input_value);
tmp_return_value = par_input_value;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator->m_frame.f_lineno = 144;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_5738c60bc44451550e393940f9780966_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 144;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_end_2:;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
CHECK_OBJECT(par_input_value);
tmp_isinstance_inst_3 = par_input_value;
tmp_isinstance_cls_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$compile_pattern(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_compile_pattern);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_input_value);
tmp_args_element_value_1 = par_input_value;
frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator->m_frame.f_lineno = 146;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
CHECK_OBJECT(par_input_value);
tmp_isinstance_inst_4 = par_input_value;
tmp_isinstance_cls_4 = (PyObject *)&PyBytes_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator->m_frame.f_lineno = 148;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_5738c60bc44451550e393940f9780966_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 148;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator->m_frame.f_lineno = 150;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_43768d30d2dc0760a61b45a5c93419a0_tuple);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 150;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_end_4:;
branch_end_3:;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator,
    type_description_1,
    par_input_value
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__5_pattern_str_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_input_value = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_6eb9fa3f02896b78a4abd6bfbe0e5adc, module_pydantic$_internal$_validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_input_value);
tmp_isinstance_inst_1 = par_input_value;
tmp_expression_value_1 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_1 == NULL));
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Pattern);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "o";
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_input_value);
tmp_expression_value_2 = par_input_value;
tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pattern);
if (tmp_isinstance_inst_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = (PyObject *)&PyBytes_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_inst_2);
Py_DECREF(tmp_isinstance_inst_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(par_input_value);
tmp_return_value = par_input_value;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator->m_frame.f_lineno = 158;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_2334f24ac547db223d172cb535c45bd8_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 158;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_end_2:;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
CHECK_OBJECT(par_input_value);
tmp_isinstance_inst_3 = par_input_value;
tmp_isinstance_cls_3 = (PyObject *)&PyBytes_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$compile_pattern(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_compile_pattern);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_input_value);
tmp_args_element_value_1 = par_input_value;
frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator->m_frame.f_lineno = 160;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
CHECK_OBJECT(par_input_value);
tmp_isinstance_inst_4 = par_input_value;
tmp_isinstance_cls_4 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator->m_frame.f_lineno = 162;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_2334f24ac547db223d172cb535c45bd8_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 162;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator->m_frame.f_lineno = 164;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_43768d30d2dc0760a61b45a5c93419a0_tuple);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 164;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_end_4:;
branch_end_3:;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator,
    type_description_1,
    par_input_value
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__7_compile_pattern(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_pattern = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern;
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
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern = MAKE_FUNCTION_FRAME(tstate, code_objects_f5517813ba5a386551ec40263b1d2f4b, module_pydantic$_internal$_validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern = cache_frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_pydantic$_internal$_validators$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_pattern);
tmp_args_element_value_1 = par_pattern;
frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern->m_frame.f_lineno = 172;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain_compile, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_1 = module_var_accessor_pydantic$_internal$_validators$re(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_error);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "o";
    goto try_except_handler_2;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_1 = "o";
    goto try_except_handler_2;
}
frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern->m_frame.f_lineno = 174;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_1203882f2f5b8f01445a0442af509f6d_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "o";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 174;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto try_except_handler_2;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 171;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern,
    type_description_1,
    par_pattern
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern == cache_frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern);
    cache_frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__7_compile_pattern);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_pattern);
Py_DECREF(par_pattern);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_pattern);
Py_DECREF(par_pattern);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_input_value = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator;
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
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_b1f77bfe8e8e20aeaef124aa4af036b3, module_pydantic$_internal$_validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_input_value);
tmp_isinstance_inst_1 = par_input_value;
tmp_isinstance_cls_1 = module_var_accessor_pydantic$_internal$_validators$IPv4Address(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv4Address);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "o";
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
CHECK_OBJECT(par_input_value);
tmp_return_value = par_input_value;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$IPv4Address(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv4Address);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 182;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_input_value);
tmp_args_element_value_1 = par_input_value;
frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator->m_frame.f_lineno = 182;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_ValueError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;
type_description_1 = "o";
    goto try_except_handler_2;
}
frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator->m_frame.f_lineno = 184;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_4d46855cbca30b35f28ceaba271a76c3_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "o";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 184;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto try_except_handler_2;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 181;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator,
    type_description_1,
    par_input_value
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_input_value = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator;
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
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_1c57857d27e7cbb5e219d9b76987bf38, module_pydantic$_internal$_validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_input_value);
tmp_isinstance_inst_1 = par_input_value;
tmp_isinstance_cls_1 = module_var_accessor_pydantic$_internal$_validators$IPv6Address(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv6Address);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "o";
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
CHECK_OBJECT(par_input_value);
tmp_return_value = par_input_value;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$IPv6Address(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv6Address);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_input_value);
tmp_args_element_value_1 = par_input_value;
frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator->m_frame.f_lineno = 192;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_ValueError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;
type_description_1 = "o";
    goto try_except_handler_2;
}
frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator->m_frame.f_lineno = 194;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_00def57b01ca2553933131247edda585_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "o";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 194;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto try_except_handler_2;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 191;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator,
    type_description_1,
    par_input_value
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_input_value = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator;
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
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_5e2e77c09408bb1825386f45a409fb65, module_pydantic$_internal$_validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_input_value);
tmp_isinstance_inst_1 = par_input_value;
tmp_isinstance_cls_1 = module_var_accessor_pydantic$_internal$_validators$IPv4Network(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv4Network);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 203;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "o";
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
CHECK_OBJECT(par_input_value);
tmp_return_value = par_input_value;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$IPv4Network(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv4Network);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_input_value);
tmp_args_element_value_1 = par_input_value;
frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator->m_frame.f_lineno = 207;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_ValueError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "o";
    goto try_except_handler_2;
}
frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator->m_frame.f_lineno = 209;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_81941b276fe35eb1199551f59c33ca46_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "o";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 209;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto try_except_handler_2;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 206;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator,
    type_description_1,
    par_input_value
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_input_value = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator;
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
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_a2c468dfa137a8ed0fc7b5dcbf4582f0, module_pydantic$_internal$_validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_input_value);
tmp_isinstance_inst_1 = par_input_value;
tmp_isinstance_cls_1 = module_var_accessor_pydantic$_internal$_validators$IPv6Network(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv6Network);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 218;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "o";
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
CHECK_OBJECT(par_input_value);
tmp_return_value = par_input_value;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$IPv6Network(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv6Network);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_input_value);
tmp_args_element_value_1 = par_input_value;
frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator->m_frame.f_lineno = 222;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_ValueError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 224;
type_description_1 = "o";
    goto try_except_handler_2;
}
frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator->m_frame.f_lineno = 224;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_fe04e1177b04654a5a95396bd1f2522f_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "o";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 224;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto try_except_handler_2;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 221;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator,
    type_description_1,
    par_input_value
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_input_value = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator;
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
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_00a5500053af52630002388a898cd28c, module_pydantic$_internal$_validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_input_value);
tmp_isinstance_inst_1 = par_input_value;
tmp_isinstance_cls_1 = module_var_accessor_pydantic$_internal$_validators$IPv4Interface(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv4Interface);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "o";
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
CHECK_OBJECT(par_input_value);
tmp_return_value = par_input_value;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$IPv4Interface(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv4Interface);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_input_value);
tmp_args_element_value_1 = par_input_value;
frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator->m_frame.f_lineno = 232;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_ValueError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 234;
type_description_1 = "o";
    goto try_except_handler_2;
}
frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator->m_frame.f_lineno = 234;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_1ee51dea52d3fe4db7655692d241a7c9_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "o";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 234;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto try_except_handler_2;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 231;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator,
    type_description_1,
    par_input_value
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_input_value = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator;
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
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_32b93c9c8db63890cf9538d727050df9, module_pydantic$_internal$_validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_input_value);
tmp_isinstance_inst_1 = par_input_value;
tmp_isinstance_cls_1 = module_var_accessor_pydantic$_internal$_validators$IPv6Interface(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv6Interface);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "o";
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
CHECK_OBJECT(par_input_value);
tmp_return_value = par_input_value;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$IPv6Interface(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv6Interface);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_input_value);
tmp_args_element_value_1 = par_input_value;
frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator->m_frame.f_lineno = 242;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_ValueError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;
type_description_1 = "o";
    goto try_except_handler_2;
}
frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator->m_frame.f_lineno = 244;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_c417093022877e7986807aa675b6a3e0_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "o";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 244;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto try_except_handler_2;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 241;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator,
    type_description_1,
    par_input_value
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__14_fraction_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_input_value = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator;
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
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_8b7f0e1f0bce8f8e19b21b802669c769, module_pydantic$_internal$_validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_input_value);
tmp_isinstance_inst_1 = par_input_value;
tmp_isinstance_cls_1 = module_var_accessor_pydantic$_internal$_validators$Fraction(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fraction);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "o";
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
CHECK_OBJECT(par_input_value);
tmp_return_value = par_input_value;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$Fraction(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fraction);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_input_value);
tmp_args_element_value_1 = par_input_value;
frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator->m_frame.f_lineno = 252;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_ValueError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;
type_description_1 = "o";
    goto try_except_handler_2;
}
frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator->m_frame.f_lineno = 254;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_6c55e82aaab00efd7db83d0415fc7990_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "o";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 254;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto try_except_handler_2;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 251;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator,
    type_description_1,
    par_input_value
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__14_fraction_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check = MAKE_FUNCTION_FRAME(tstate, code_objects_0736871d2252b4be18775619df33f20a, module_pydantic$_internal$_validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check = cache_frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_pydantic$_internal$_validators$math(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_1 = par_x;
frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check->m_frame.f_lineno = 258;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isfinite, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
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
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$PydanticKnownError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticKnownError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check->m_frame.f_lineno = 259;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_finite_number_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 259;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check,
    type_description_1,
    par_x
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check == cache_frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check);
    cache_frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_x);
tmp_return_value = par_x;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__16__safe_repr(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_v = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr = MAKE_FUNCTION_FRAME(tstate, code_objects_6ee0137e95a6d88ad232f9b15bc1026e, module_pydantic$_internal$_validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr = cache_frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_v);
tmp_isinstance_inst_1 = par_v;
tmp_isinstance_cls_1 = mod_consts.const_tuple_type_int_type_float_type_str_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "o";
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
CHECK_OBJECT(par_v);
tmp_return_value = par_v;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_v);
tmp_operand_value_1 = par_v;
tmp_return_value = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr,
    type_description_1,
    par_v
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr == cache_frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr);
    cache_frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__16__safe_repr);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_v);
Py_DECREF(par_v);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_v);
Py_DECREF(par_v);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__17_greater_than_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_gt = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_68cc72a9435cbdb997a632f09615824b, module_pydantic$_internal$_validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator) == 2);

// Framed code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_x);
tmp_cmp_expr_left_1 = par_x;
CHECK_OBJECT(par_gt);
tmp_cmp_expr_right_1 = par_gt;
tmp_operand_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$PydanticKnownError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticKnownError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_greater_than;
tmp_dict_key_1 = mod_consts.const_str_plain_gt;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$_safe_repr(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__safe_repr);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_gt);
tmp_args_element_value_3 = par_gt;
frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator->m_frame.f_lineno = 276;
tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_args_element_value_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator->m_frame.f_lineno = 276;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "oo";
    goto try_except_handler_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 276;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_1;
}
branch_no_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_TypeError;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_d801099d73fefda2a09ae94189f74aa8;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_x);
tmp_format_value_1 = par_x;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator->m_frame.f_lineno = 279;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 279;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_2;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 274;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
try_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator,
    type_description_1,
    par_x,
    par_gt
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__17_greater_than_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_x);
tmp_return_value = par_x;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_gt);
Py_DECREF(par_gt);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_gt);
Py_DECREF(par_gt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_ge = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_cb32e649023a1998392d6a1ec0ac03d1, module_pydantic$_internal$_validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator) == 2);

// Framed code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_x);
tmp_cmp_expr_left_1 = par_x;
CHECK_OBJECT(par_ge);
tmp_cmp_expr_right_1 = par_ge;
tmp_operand_value_1 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$PydanticKnownError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticKnownError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_greater_than_equal;
tmp_dict_key_1 = mod_consts.const_str_plain_ge;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$_safe_repr(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__safe_repr);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_ge);
tmp_args_element_value_3 = par_ge;
frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator->m_frame.f_lineno = 285;
tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_args_element_value_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator->m_frame.f_lineno = 285;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oo";
    goto try_except_handler_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 285;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_1;
}
branch_no_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_TypeError;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_8c3d145ef3c1ce247cab68fd7ee48753;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_x);
tmp_format_value_1 = par_x;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator->m_frame.f_lineno = 288;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 288;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_2;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 283;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
try_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator,
    type_description_1,
    par_x,
    par_ge
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_x);
tmp_return_value = par_x;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_ge);
Py_DECREF(par_ge);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_ge);
Py_DECREF(par_ge);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__19_less_than_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_lt = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_fa56823e18e8d6cb63e0ff9a0325b5f6, module_pydantic$_internal$_validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator) == 2);

// Framed code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_x);
tmp_cmp_expr_left_1 = par_x;
CHECK_OBJECT(par_lt);
tmp_cmp_expr_right_1 = par_lt;
tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$PydanticKnownError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticKnownError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 294;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_less_than;
tmp_dict_key_1 = mod_consts.const_str_plain_lt;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$_safe_repr(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__safe_repr);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 294;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_lt);
tmp_args_element_value_3 = par_lt;
frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator->m_frame.f_lineno = 294;
tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_args_element_value_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator->m_frame.f_lineno = 294;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oo";
    goto try_except_handler_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 294;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_1;
}
branch_no_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_TypeError;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_084d2cfa47d70e88a2df8f4e84ed9df0;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_x);
tmp_format_value_1 = par_x;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator->m_frame.f_lineno = 297;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 297;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_2;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 292;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
try_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator,
    type_description_1,
    par_x,
    par_lt
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__19_less_than_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_x);
tmp_return_value = par_x;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_lt);
Py_DECREF(par_lt);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_lt);
Py_DECREF(par_lt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_le = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_cd2b8980564be6628e42a0d5aec76a19, module_pydantic$_internal$_validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator) == 2);

// Framed code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_x);
tmp_cmp_expr_left_1 = par_x;
CHECK_OBJECT(par_le);
tmp_cmp_expr_right_1 = par_le;
tmp_operand_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$PydanticKnownError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticKnownError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_less_than_equal;
tmp_dict_key_1 = mod_consts.const_str_plain_le;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$_safe_repr(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__safe_repr);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_le);
tmp_args_element_value_3 = par_le;
frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator->m_frame.f_lineno = 303;
tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_args_element_value_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator->m_frame.f_lineno = 303;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oo";
    goto try_except_handler_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 303;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_1;
}
branch_no_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_TypeError;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_6cd391d90e5e02fb9d36108f3ee14c36;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_x);
tmp_format_value_1 = par_x;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator->m_frame.f_lineno = 306;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 306;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_2;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 301;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
try_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator,
    type_description_1,
    par_x,
    par_le
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_x);
tmp_return_value = par_x;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_le);
Py_DECREF(par_le);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_le);
Py_DECREF(par_le);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__21_multiple_of_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_multiple_of = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_43ebfaf833e70ae27c9a4c277bb58981, module_pydantic$_internal$_validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator) == 2);

// Framed code:
// Tried code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
CHECK_OBJECT(par_x);
tmp_mod_expr_left_1 = par_x;
CHECK_OBJECT(par_multiple_of);
tmp_mod_expr_right_1 = par_multiple_of;
tmp_condition_result_1 = BINARY_OPERATION_MOD_NBOOL_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oo";
    goto try_except_handler_1;
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$PydanticKnownError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticKnownError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 312;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_multiple_of;
tmp_dict_key_1 = mod_consts.const_str_plain_multiple_of;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$_safe_repr(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__safe_repr);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 312;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_multiple_of);
tmp_args_element_value_3 = par_multiple_of;
frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator->m_frame.f_lineno = 312;
tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_args_element_value_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator->m_frame.f_lineno = 312;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oo";
    goto try_except_handler_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 312;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_1;
}
branch_no_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_4ff6c4093d66a319bf8fd186255247ca;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_x);
tmp_format_value_1 = par_x;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator->m_frame.f_lineno = 315;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 315;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_2;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 310;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
try_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator,
    type_description_1,
    par_x,
    par_multiple_of
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__21_multiple_of_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_x);
tmp_return_value = par_x;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_multiple_of);
Py_DECREF(par_multiple_of);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_multiple_of);
Py_DECREF(par_multiple_of);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__22_min_length_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_min_length = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_cbf9f749b4ff40a66b4979e6b82799a0, module_pydantic$_internal$_validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator) == 2);

// Framed code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_x);
tmp_len_arg_1 = par_x;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_min_length);
tmp_cmp_expr_right_1 = par_min_length;
tmp_operand_value_1 = RICH_COMPARE_GE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$PydanticKnownError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticKnownError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 321;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_too_short;
tmp_dict_key_1 = mod_consts.const_str_plain_field_type;
tmp_dict_value_1 = mod_consts.const_str_plain_Value;
tmp_args_element_value_2 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_len_arg_2;
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_min_length;
CHECK_OBJECT(par_min_length);
tmp_dict_value_1 = par_min_length;
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_actual_length;
CHECK_OBJECT(par_x);
tmp_len_arg_2 = par_x;
tmp_dict_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "oo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_args_element_value_2);
goto try_except_handler_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator->m_frame.f_lineno = 321;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oo";
    goto try_except_handler_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 321;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_1;
}
branch_no_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_TypeError;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_b317547dd64175e27476980f4b22c937;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_x);
tmp_format_value_1 = par_x;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator->m_frame.f_lineno = 326;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 326;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_2;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 319;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
try_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator,
    type_description_1,
    par_x,
    par_min_length
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__22_min_length_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_x);
tmp_return_value = par_x;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_min_length);
Py_DECREF(par_min_length);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_min_length);
Py_DECREF(par_min_length);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__23_max_length_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_max_length = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_da7f63ec08e33642369b4636baee2edc, module_pydantic$_internal$_validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator) == 2);

// Framed code:
// Tried code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_x);
tmp_len_arg_1 = par_x;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_max_length);
tmp_cmp_expr_right_1 = par_max_length;
tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oo";
    goto try_except_handler_1;
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$PydanticKnownError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticKnownError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_too_long;
tmp_dict_key_1 = mod_consts.const_str_plain_field_type;
tmp_dict_value_1 = mod_consts.const_str_plain_Value;
tmp_args_element_value_2 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_len_arg_2;
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_max_length;
CHECK_OBJECT(par_max_length);
tmp_dict_value_1 = par_max_length;
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_actual_length;
CHECK_OBJECT(par_x);
tmp_len_arg_2 = par_x;
tmp_dict_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_args_element_value_2);
goto try_except_handler_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator->m_frame.f_lineno = 332;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oo";
    goto try_except_handler_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 332;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_1;
}
branch_no_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_TypeError;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_d5b82af57efa3993ca96e58556707ac5;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_x);
tmp_format_value_1 = par_x;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator->m_frame.f_lineno = 338;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 338;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_2;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 330;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
try_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator,
    type_description_1,
    par_x,
    par_max_length
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__23_max_length_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_x);
tmp_return_value = par_x;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_max_length);
Py_DECREF(par_max_length);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_max_length);
Py_DECREF(par_max_length);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_decimal = python_pars[0];
PyObject *var_decimal_tuple = NULL;
PyObject *var_exponent = NULL;
PyObject *var_num_digits = NULL;
PyObject *var_decimal_places = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info = MAKE_FUNCTION_FRAME(tstate, code_objects_f68d3b9d6989ba1f466ab6b6fa72a4d0, module_pydantic$_internal$_validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info = cache_frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_decimal);
tmp_called_instance_1 = par_decimal;
frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info->m_frame.f_lineno = 357;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_tuple);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(var_decimal_tuple == NULL);
var_decimal_tuple = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_decimal_tuple);
tmp_expression_value_1 = var_decimal_tuple;
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_exponent);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooooo";
    goto try_except_handler_2;
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
frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info->m_frame.f_lineno = 359;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 359;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto try_except_handler_2;
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_decimal_tuple);
tmp_expression_value_2 = var_decimal_tuple;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_exponent);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(var_exponent == NULL);
var_exponent = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_decimal_tuple);
tmp_expression_value_3 = var_decimal_tuple;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_digits);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(var_num_digits == NULL);
var_num_digits = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_exponent);
tmp_cmp_expr_left_1 = var_exponent;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(var_num_digits);
tmp_iadd_expr_left_1 = var_num_digits;
CHECK_OBJECT(var_exponent);
tmp_iadd_expr_right_1 = var_exponent;
tmp_result = INPLACE_OPERATION_ADD_LONG_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_4 = tmp_iadd_expr_left_1;
var_num_digits = tmp_assign_source_4;

}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = const_int_0;
assert(var_decimal_places == NULL);
Py_INCREF(tmp_assign_source_5);
var_decimal_places = tmp_assign_source_5;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_abs_arg_1;
CHECK_OBJECT(var_exponent);
tmp_abs_arg_1 = var_exponent;
tmp_assign_source_6 = BUILTIN_ABS(tmp_abs_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(var_decimal_places == NULL);
var_decimal_places = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(var_num_digits);
tmp_args_element_value_1 = var_num_digits;
CHECK_OBJECT(var_decimal_places);
tmp_args_element_value_2 = var_decimal_places;
frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info->m_frame.f_lineno = 377;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_num_digits;
    assert(old != NULL);
    var_num_digits = tmp_assign_source_7;
    Py_DECREF(old);
}

}
branch_end_2:;
goto try_end_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_2 = mod_consts.const_tuple_type_AssertionError_type_AttributeError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_5517382844ae3b0682934f35741190dd;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_decimal);
tmp_format_value_1 = par_decimal;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info->m_frame.f_lineno = 381;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 381;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto try_except_handler_3;
}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 356;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_3;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
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
try_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info,
    type_description_1,
    par_decimal,
    var_decimal_tuple,
    var_exponent,
    var_num_digits,
    var_decimal_places
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info == cache_frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info);
    cache_frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_decimal_places);
tmp_tuple_element_2 = var_decimal_places;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_num_digits);
tmp_tuple_element_2 = var_num_digits;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_decimal_tuple);
CHECK_OBJECT(var_decimal_tuple);
Py_DECREF(var_decimal_tuple);
var_decimal_tuple = NULL;
CHECK_OBJECT(var_exponent);
CHECK_OBJECT(var_exponent);
Py_DECREF(var_exponent);
var_exponent = NULL;
CHECK_OBJECT(var_num_digits);
CHECK_OBJECT(var_num_digits);
Py_DECREF(var_num_digits);
var_num_digits = NULL;
CHECK_OBJECT(var_decimal_places);
CHECK_OBJECT(var_decimal_places);
Py_DECREF(var_decimal_places);
var_decimal_places = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_decimal_tuple);
var_decimal_tuple = NULL;
Py_XDECREF(var_exponent);
var_exponent = NULL;
Py_XDECREF(var_num_digits);
var_num_digits = NULL;
Py_XDECREF(var_decimal_places);
var_decimal_places = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_decimal);
Py_DECREF(par_decimal);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_decimal);
Py_DECREF(par_decimal);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__25_max_digits_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_max_digits = python_pars[1];
PyObject *var__ = NULL;
PyObject *var_num_digits = NULL;
PyObject *var_normalized_num_digits = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_1c48cc2b8c597de5fea693d0d5bf5fba, module_pydantic$_internal$_validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator) == 2);

// Framed code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$_extract_decimal_digits_info(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__extract_decimal_digits_info);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 386;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_1 = par_x;
frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator->m_frame.f_lineno = 386;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "ooooo";
    goto try_except_handler_3;
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



exception_lineno = 386;
type_description_1 = "ooooo";
    goto try_except_handler_4;
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



exception_lineno = 386;
type_description_1 = "ooooo";
    goto try_except_handler_4;
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



exception_lineno = 386;
type_description_1 = "ooooo";
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_4);
var__ = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_num_digits == NULL);
Py_INCREF(tmp_assign_source_5);
var_num_digits = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$_extract_decimal_digits_info(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__extract_decimal_digits_info);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 387;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(par_x);
tmp_called_instance_1 = par_x;
frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator->m_frame.f_lineno = 387;
tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_normalize);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator->m_frame.f_lineno = 387;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "ooooo";
    goto try_except_handler_5;
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



exception_lineno = 387;
type_description_1 = "ooooo";
    goto try_except_handler_6;
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



exception_lineno = 387;
type_description_1 = "ooooo";
    goto try_except_handler_6;
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



exception_lineno = 387;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
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

goto try_except_handler_5;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_2;
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
{
    PyObject *old = var__;
    assert(old != NULL);
    var__ = tmp_assign_source_9;
    Py_INCREF(var__);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
assert(var_normalized_num_digits == NULL);
Py_INCREF(tmp_assign_source_10);
var_normalized_num_digits = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_num_digits);
tmp_cmp_expr_left_1 = var_num_digits;
CHECK_OBJECT(par_max_digits);
tmp_cmp_expr_right_1 = par_max_digits;
tmp_and_left_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_normalized_num_digits);
tmp_cmp_expr_left_2 = var_normalized_num_digits;
CHECK_OBJECT(par_max_digits);
tmp_cmp_expr_right_2 = par_max_digits;
tmp_and_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "ooooo";
    goto try_except_handler_2;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_called_value_3 = module_var_accessor_pydantic$_internal$_validators$PydanticKnownError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticKnownError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 389;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_3 = mod_consts.const_str_plain_decimal_max_digits;
tmp_dict_key_1 = mod_consts.const_str_plain_max_digits;
CHECK_OBJECT(par_max_digits);
tmp_dict_value_1 = par_max_digits;
tmp_args_element_value_4 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator->m_frame.f_lineno = 389;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 389;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto try_except_handler_2;
}
branch_no_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_41eb2c8849e500d7bfc8bf5bdf908516;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_x);
tmp_format_value_1 = par_x;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator->m_frame.f_lineno = 395;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 395;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto try_except_handler_7;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 385;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_7;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator,
    type_description_1,
    par_x,
    par_max_digits,
    var__,
    var_num_digits,
    var_normalized_num_digits
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__25_max_digits_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_x);
tmp_return_value = par_x;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
CHECK_OBJECT(var_num_digits);
CHECK_OBJECT(var_num_digits);
Py_DECREF(var_num_digits);
var_num_digits = NULL;
CHECK_OBJECT(var_normalized_num_digits);
CHECK_OBJECT(var_normalized_num_digits);
Py_DECREF(var_normalized_num_digits);
var_normalized_num_digits = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_num_digits);
var_num_digits = NULL;
Py_XDECREF(var_normalized_num_digits);
var_normalized_num_digits = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_max_digits);
Py_DECREF(par_max_digits);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_max_digits);
Py_DECREF(par_max_digits);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__26_decimal_places_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_decimal_places = python_pars[1];
PyObject *var_decimal_places_ = NULL;
PyObject *var__ = NULL;
PyObject *var_normalized_decimal_places = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_7fc1515365bc0c23817f8f86663c808e, module_pydantic$_internal$_validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator) == 2);

// Framed code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$_extract_decimal_digits_info(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__extract_decimal_digits_info);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 400;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_1 = par_x;
frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator->m_frame.f_lineno = 400;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooooo";
    goto try_except_handler_3;
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



exception_lineno = 400;
type_description_1 = "ooooo";
    goto try_except_handler_4;
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



exception_lineno = 400;
type_description_1 = "ooooo";
    goto try_except_handler_4;
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



exception_lineno = 400;
type_description_1 = "ooooo";
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_decimal_places_ == NULL);
Py_INCREF(tmp_assign_source_4);
var_decimal_places_ = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_5);
var__ = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_decimal_places_);
tmp_cmp_expr_left_1 = var_decimal_places_;
CHECK_OBJECT(par_decimal_places);
tmp_cmp_expr_right_1 = par_decimal_places;
tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$_extract_decimal_digits_info(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__extract_decimal_digits_info);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 402;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(par_x);
tmp_called_instance_1 = par_x;
frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator->m_frame.f_lineno = 402;
tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_normalize);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator->m_frame.f_lineno = 402;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "ooooo";
    goto try_except_handler_5;
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



exception_lineno = 402;
type_description_1 = "ooooo";
    goto try_except_handler_6;
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



exception_lineno = 402;
type_description_1 = "ooooo";
    goto try_except_handler_6;
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



exception_lineno = 402;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
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

goto try_except_handler_5;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_2;
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
assert(var_normalized_decimal_places == NULL);
Py_INCREF(tmp_assign_source_9);
var_normalized_decimal_places = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var__;
    assert(old != NULL);
    var__ = tmp_assign_source_10;
    Py_INCREF(var__);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_normalized_decimal_places);
tmp_cmp_expr_left_2 = var_normalized_decimal_places;
CHECK_OBJECT(par_decimal_places);
tmp_cmp_expr_right_2 = par_decimal_places;
tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_called_value_3 = module_var_accessor_pydantic$_internal$_validators$PydanticKnownError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticKnownError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 404;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_3 = mod_consts.const_str_plain_decimal_max_places;
tmp_dict_key_1 = mod_consts.const_str_plain_decimal_places;
CHECK_OBJECT(par_decimal_places);
tmp_dict_value_1 = par_decimal_places;
tmp_args_element_value_4 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator->m_frame.f_lineno = 404;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 404;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto try_except_handler_2;
}
branch_no_2:;
branch_no_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_dcd5de7f3e5aa82da87871b739411f38;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_x);
tmp_format_value_1 = par_x;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator->m_frame.f_lineno = 410;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 410;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto try_except_handler_7;
}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 399;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_7;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator,
    type_description_1,
    par_x,
    par_decimal_places,
    var_decimal_places_,
    var__,
    var_normalized_decimal_places
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__26_decimal_places_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_x);
tmp_return_value = par_x;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_decimal_places_);
CHECK_OBJECT(var_decimal_places_);
Py_DECREF(var_decimal_places_);
var_decimal_places_ = NULL;
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
Py_XDECREF(var_normalized_decimal_places);
var_normalized_decimal_places = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_decimal_places_);
var_decimal_places_ = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_normalized_decimal_places);
var_normalized_decimal_places = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_decimal_places);
Py_DECREF(par_decimal_places);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_decimal_places);
Py_DECREF(par_decimal_places);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__27_deque_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_input_value = python_pars[0];
PyObject *par_handler = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_700a7d8a7f68990065b603ed3259a758, module_pydantic$_internal$_validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
tmp_expression_value_1 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 414;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_deque);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_handler);
tmp_called_value_2 = par_handler;
CHECK_OBJECT(par_input_value);
tmp_args_element_value_1 = par_input_value;
frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator->m_frame.f_lineno = 414;
tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 414;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_input_value);
tmp_expression_value_2 = par_input_value;
tmp_name_value_1 = mod_consts.const_str_plain_maxlen;
tmp_default_value_1 = Py_None;
tmp_kw_call_dict_value_0_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_1, tmp_default_value_1);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 414;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator->m_frame.f_lineno = 414;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_maxlen_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator,
    type_description_1,
    par_input_value,
    par_handler
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__27_deque_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);
CHECK_OBJECT(par_handler);
Py_DECREF(par_handler);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);
CHECK_OBJECT(par_handler);
Py_DECREF(par_handler);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__28_defaultdict_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_input_value = python_pars[0];
PyObject *par_handler = python_pars[1];
PyObject *par_default_default_factory = python_pars[2];
PyObject *var_default_factory = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator = MAKE_FUNCTION_FRAME(tstate, code_objects_dfb7533271e9994350a2555122100607, module_pydantic$_internal$_validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator = cache_frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_input_value);
tmp_isinstance_inst_1 = par_input_value;
tmp_expression_value_1 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 420;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_defaultdict);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_input_value);
tmp_expression_value_2 = par_input_value;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_default_factory);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_default_factory == NULL);
var_default_factory = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_3 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 422;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_defaultdict);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_default_factory);
tmp_args_element_value_1 = var_default_factory;
CHECK_OBJECT(par_handler);
tmp_called_value_2 = par_handler;
CHECK_OBJECT(par_input_value);
tmp_args_element_value_3 = par_input_value;
frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator->m_frame.f_lineno = 422;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 422;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator->m_frame.f_lineno = 422;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_6;
tmp_expression_value_4 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 424;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_defaultdict);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_default_default_factory);
tmp_args_element_value_4 = par_default_default_factory;
CHECK_OBJECT(par_handler);
tmp_called_value_4 = par_handler;
CHECK_OBJECT(par_input_value);
tmp_args_element_value_6 = par_input_value;
frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator->m_frame.f_lineno = 424;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 424;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator->m_frame.f_lineno = 424;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator,
    type_description_1,
    par_input_value,
    par_handler,
    par_default_default_factory,
    var_default_factory
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator == cache_frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator);
    cache_frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__28_defaultdict_validator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_default_factory);
var_default_factory = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_default_factory);
var_default_factory = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);
CHECK_OBJECT(par_handler);
Py_DECREF(par_handler);
CHECK_OBJECT(par_default_default_factory);
Py_DECREF(par_default_default_factory);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_input_value);
Py_DECREF(par_input_value);
CHECK_OBJECT(par_handler);
Py_DECREF(par_handler);
CHECK_OBJECT(par_default_default_factory);
Py_DECREF(par_default_default_factory);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_values_source_type = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *var_FieldInfo = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_values_type_origin = Nuitka_Cell_NewEmpty();
PyObject *var_infer_default = NULL;
PyObject *var_field_info = NULL;
PyObject *var_default_default_factory = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory = MAKE_FUNCTION_FRAME(tstate, code_objects_0baf4e2a30972cf32bb104be2e455a52, module_pydantic$_internal$_validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory = cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$import_cached_field_info(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_import_cached_field_info);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 428;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory->m_frame.f_lineno = 428;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_FieldInfo) == NULL);
Nuitka_Cell_SET(var_FieldInfo, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$get_origin(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_origin);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 430;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_values_source_type));
tmp_args_element_value_1 = Nuitka_Cell_GET(par_values_source_type);
frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory->m_frame.f_lineno = 430;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_values_type_origin) == NULL);
Nuitka_Cell_SET(var_values_type_origin, tmp_assign_source_2);

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_11effe360d9cf8898df6e7aeb7476256);
tmp_closure_1[0] = par_values_source_type;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = var_values_type_origin;
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_3 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default(tstate, tmp_annotations_1, tmp_closure_1);

assert(var_infer_default == NULL);
var_infer_default = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
tmp_called_instance_1 = module_var_accessor_pydantic$_internal$_validators$typing_objects(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_typing_objects);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 474;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_values_type_origin));
tmp_args_element_value_2 = Nuitka_Cell_GET(var_values_type_origin);
frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory->m_frame.f_lineno = 474;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_annotated, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 474;
type_description_1 = "cccooo";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_next_arg_1;
PyObject *tmp_next_default_1;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_2 = module_var_accessor_pydantic$_internal$_validators$typing_extensions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_typing_extensions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 475;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_values_source_type));
tmp_args_element_value_3 = Nuitka_Cell_GET(par_values_source_type);
frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory->m_frame.f_lineno = 475;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_args, tmp_args_element_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_5;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_2[2];
tmp_closure_2[0] = var_FieldInfo;
Py_INCREF(tmp_closure_2[0]);
tmp_closure_2[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_next_arg_1 = MAKE_GENERATOR_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$genexpr__1_genexpr(tstate, tmp_closure_2);

goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_next_default_1 = Py_None;
tmp_assign_source_4 = BUILTIN_NEXT2(tstate, tmp_next_arg_1, tmp_next_default_1);
CHECK_OBJECT(tmp_next_arg_1);
Py_DECREF(tmp_next_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
assert(var_field_info == NULL);
var_field_info = tmp_assign_source_4;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = Py_None;
assert(var_field_info == NULL);
Py_INCREF(tmp_assign_source_6);
var_field_info = tmp_assign_source_6;
}
branch_end_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_3;
CHECK_OBJECT(var_field_info);
tmp_truth_name_2 = CHECK_IF_TRUE(var_field_info);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_field_info);
tmp_expression_value_1 = var_field_info;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_default_factory);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 478;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_3;
tmp_called_value_3 = module_var_accessor_pydantic$_internal$_validators$cast(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 480;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_pydantic$_internal$_validators$Callable(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 480;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = MAKE_LIST_EMPTY(tstate, 0);
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_pydantic$_internal$_validators$Any(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 480;
type_description_1 = "cccooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_field_info);
tmp_expression_value_3 = var_field_info;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_default_factory);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 480;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory->m_frame.f_lineno = 480;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
assert(var_default_default_factory == NULL);
var_default_default_factory = tmp_assign_source_7;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_4;
CHECK_OBJECT(var_infer_default);
tmp_called_value_4 = var_infer_default;
frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory->m_frame.f_lineno = 482;
tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
assert(var_default_default_factory == NULL);
var_default_default_factory = tmp_assign_source_8;
}
branch_end_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory,
    type_description_1,
    par_values_source_type,
    var_FieldInfo,
    var_values_type_origin,
    var_infer_default,
    var_field_info,
    var_default_default_factory
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory == cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory);
    cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_default_default_factory);
tmp_return_value = var_default_default_factory;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_values_source_type);
CHECK_OBJECT(par_values_source_type);
Py_DECREF(par_values_source_type);
par_values_source_type = NULL;
CHECK_OBJECT(var_FieldInfo);
CHECK_OBJECT(var_FieldInfo);
Py_DECREF(var_FieldInfo);
var_FieldInfo = NULL;
CHECK_OBJECT(var_values_type_origin);
CHECK_OBJECT(var_values_type_origin);
Py_DECREF(var_values_type_origin);
var_values_type_origin = NULL;
CHECK_OBJECT(var_infer_default);
CHECK_OBJECT(var_infer_default);
Py_DECREF(var_infer_default);
var_infer_default = NULL;
CHECK_OBJECT(var_field_info);
CHECK_OBJECT(var_field_info);
Py_DECREF(var_field_info);
var_field_info = NULL;
CHECK_OBJECT(var_default_default_factory);
CHECK_OBJECT(var_default_default_factory);
Py_DECREF(var_default_default_factory);
var_default_default_factory = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_values_source_type);
CHECK_OBJECT(par_values_source_type);
Py_DECREF(par_values_source_type);
par_values_source_type = NULL;
CHECK_OBJECT(var_FieldInfo);
CHECK_OBJECT(var_FieldInfo);
Py_DECREF(var_FieldInfo);
var_FieldInfo = NULL;
CHECK_OBJECT(var_values_type_origin);
CHECK_OBJECT(var_values_type_origin);
Py_DECREF(var_values_type_origin);
var_values_type_origin = NULL;
Py_XDECREF(var_infer_default);
var_infer_default = NULL;
Py_XDECREF(var_field_info);
var_field_info = NULL;
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


static PyObject *impl_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_allowed_default_types = NULL;
PyObject *var_values_type = NULL;
struct Nuitka_CellObject *var_instructions = Nuitka_Cell_NewEmpty();
PyObject *var_type_var_default_factory = NULL;
PyObject *var_allowed_msg = NULL;
PyObject *outline_0_var_t = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default = MAKE_FUNCTION_FRAME(tstate, code_objects_f9b63a191d4f7028fd3d5c2a194767b3, module_pydantic$_internal$_validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default = cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = (PyObject *)&PyTuple_Type;
tmp_dict_value_1 = (PyObject *)&PyTuple_Type;
tmp_assign_source_1 = _PyDict_NewPresized( 17 );
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_expression_value_2 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 435;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_abc);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Sequence);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = (PyObject *)&PyTuple_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_expression_value_4 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 436;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_abc);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_MutableSequence);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = (PyObject *)&PyList_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = (PyObject *)&PyList_Type;
tmp_dict_value_1 = (PyObject *)&PyList_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_expression_value_5 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_5 == NULL));
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_Sequence);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = (PyObject *)&PyList_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = (PyObject *)&PySet_Type;
tmp_dict_value_1 = (PyObject *)&PySet_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_expression_value_6 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_6 == NULL));
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_MutableSet);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = (PyObject *)&PySet_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_expression_value_8 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 441;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_abc);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_MutableSet);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = (PyObject *)&PySet_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_expression_value_10 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 442;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_abc);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_Set);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = (PyObject *)&PyFrozenSet_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_expression_value_11 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_11 == NULL));
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_MutableMapping);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = (PyObject *)&PyDict_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_expression_value_12 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_12 == NULL));
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_Mapping);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = (PyObject *)&PyDict_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_expression_value_14 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 445;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_abc);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_Mapping);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = (PyObject *)&PyDict_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_expression_value_16 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 446;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_abc);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_MutableMapping);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = (PyObject *)&PyDict_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "oocoocc";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = (PyObject *)&PyFloat_Type;
tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = (PyObject *)&PyLong_Type;
tmp_dict_value_1 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = (PyObject *)&PyUnicode_Type;
tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = (PyObject *)&PyBool_Type;
tmp_dict_value_1 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_allowed_default_types == NULL);
var_allowed_default_types = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_values_type_origin);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 452;
type_description_1 = "oocoocc";
    goto frame_exception_exit_1;
}

tmp_or_left_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oocoocc";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_values_source_type);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 452;
type_description_1 = "oocoocc";
    goto frame_exception_exit_1;
}

tmp_or_right_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_assign_source_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_2 = tmp_or_left_value_1;
or_end_1:;
assert(var_values_type == NULL);
Py_INCREF(tmp_assign_source_2);
var_values_type = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = mod_consts.const_str_digest_43939a86f51ac3b8e94916dd41e00369;
assert(Nuitka_Cell_GET(var_instructions) == NULL);
Py_INCREF(tmp_assign_source_3);
Nuitka_Cell_SET(var_instructions, tmp_assign_source_3);

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
tmp_called_instance_1 = module_var_accessor_pydantic$_internal$_validators$typing_objects(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_typing_objects);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 454;
type_description_1 = "oocoocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_values_type);
tmp_args_element_value_1 = var_values_type;
frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default->m_frame.f_lineno = 454;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_typevar, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oocoocc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 454;
type_description_1 = "oocoocc";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
tmp_closure_1[0] = var_instructions;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_4 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory(tstate, tmp_annotations_1, tmp_closure_1);

assert(var_type_var_default_factory == NULL);
var_type_var_default_factory = tmp_assign_source_4;
}
CHECK_OBJECT(var_type_var_default_factory);
tmp_return_value = var_type_var_default_factory;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
CHECK_OBJECT(var_values_type);
tmp_key_value_1 = var_values_type;
CHECK_OBJECT(var_allowed_default_types);
tmp_dict_arg_value_1 = var_allowed_default_types;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "oocoocc";
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
PyObject *tmp_assign_source_5;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
PyObject *tmp_set_arg_1;
PyObject *tmp_dict_arg_1;
CHECK_OBJECT(var_allowed_default_types);
tmp_dict_arg_1 = var_allowed_default_types;
tmp_set_arg_1 = DICT_ITERVALUES(tstate, tmp_dict_arg_1);
assert(!(tmp_set_arg_1 == NULL));
tmp_iter_arg_1 = PySet_New(tmp_set_arg_1);
CHECK_OBJECT(tmp_set_arg_1);
Py_DECREF(tmp_set_arg_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oocoocc";
    goto try_except_handler_2;
}
tmp_assign_source_6 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_7;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_8 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oocoocc";
exception_lineno = 465;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_9 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_t;
    outline_0_var_t = tmp_assign_source_9;
    Py_INCREF(outline_0_var_t);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_t);
tmp_expression_value_17 = outline_0_var_t;
tmp_append_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, const_str_plain___name__);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oocoocc";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oocoocc";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oocoocc";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_iterable_value_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_iterable_value_1);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp_1__$0);
Py_DECREF(tmp_listcomp_1__$0);
tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp_1__contraction);
Py_DECREF(tmp_listcomp_1__contraction);
tmp_listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_0);
tmp_listcomp_1__iter_value_0 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp_1__$0);
Py_DECREF(tmp_listcomp_1__$0);
tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp_1__contraction);
Py_DECREF(tmp_listcomp_1__contraction);
tmp_listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_0);
tmp_listcomp_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_t);
outline_0_var_t = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_t);
outline_0_var_t = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 465;
goto frame_exception_exit_1;
outline_result_1:;
tmp_assign_source_5 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oocoocc";
    goto frame_exception_exit_1;
}
assert(var_allowed_msg == NULL);
var_allowed_msg = tmp_assign_source_5;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$PydanticSchemaGenerationError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticSchemaGenerationError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 466;
type_description_1 = "oocoocc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_6b373c93b4158c5b77f8404a89458dd5;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_values_source_type);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 467;
type_description_1 = "oocoocc";
    goto tuple_build_exception_1;
}

tmp_format_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 467;
type_description_1 = "oocoocc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_92a5a60ff668ebd45b54f4a0a7f9770a;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(var_allowed_msg);
tmp_tuple_element_1 = var_allowed_msg;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_d3a78165c9a79aca1e4a85d1e5527cec;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_add_expr_left_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_add_expr_left_1 == NULL));
CHECK_OBJECT(Nuitka_Cell_GET(var_instructions));
tmp_add_expr_right_1 = Nuitka_Cell_GET(var_instructions);
tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
assert(!(tmp_args_element_value_2 == NULL));
frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default->m_frame.f_lineno = 466;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;
type_description_1 = "oocoocc";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;
type_description_1 = "oocoocc";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 466;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oocoocc";
goto frame_exception_exit_1;
}
branch_no_2:;
branch_end_1:;
{
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
CHECK_OBJECT(var_allowed_default_types);
tmp_dict_arg_value_2 = var_allowed_default_types;
CHECK_OBJECT(var_values_type);
tmp_key_value_2 = var_values_type;
tmp_return_value = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oocoocc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default,
    type_description_1,
    var_allowed_default_types,
    var_values_type,
    var_instructions,
    var_type_var_default_factory,
    var_allowed_msg,
    self->m_closure[1],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default == cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default);
    cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_allowed_default_types);
CHECK_OBJECT(var_allowed_default_types);
Py_DECREF(var_allowed_default_types);
var_allowed_default_types = NULL;
CHECK_OBJECT(var_values_type);
CHECK_OBJECT(var_values_type);
Py_DECREF(var_values_type);
var_values_type = NULL;
CHECK_OBJECT(var_instructions);
CHECK_OBJECT(var_instructions);
Py_DECREF(var_instructions);
var_instructions = NULL;
Py_XDECREF(var_type_var_default_factory);
var_type_var_default_factory = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_allowed_default_types);
var_allowed_default_types = NULL;
Py_XDECREF(var_values_type);
var_values_type = NULL;
CHECK_OBJECT(var_instructions);
CHECK_OBJECT(var_instructions);
Py_DECREF(var_instructions);
var_instructions = NULL;
Py_XDECREF(var_allowed_msg);
var_allowed_msg = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory = MAKE_FUNCTION_FRAME(tstate, code_objects_fe78a43b65215b6b2a971ec0f0a50c24, module_pydantic$_internal$_validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory = cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_add_expr_left_1 = mod_consts.const_str_digest_7a6e35ffc656118436f6c2999c7e4c24;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_instructions);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 459;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_add_expr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_make_exception_arg_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory->m_frame.f_lineno = 457;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 457;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "c";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory,
    type_description_1,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory == cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory);
    cache_frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory);

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

}



#if 1
struct pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$genexpr__1_genexpr_locals {
PyObject *var_v;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$genexpr__1_genexpr_locals *generator_heap = (struct pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_v = NULL;
generator_heap->tmp_iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_693320cd0fc7848a7b5259b0ff868bbd, module_pydantic$_internal$_validators, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "Noc";
generator_heap->exception_lineno = 475;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_v;
    generator_heap->var_v = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_v);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(generator_heap->var_v);
tmp_isinstance_inst_1 = generator_heap->var_v;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_FieldInfo);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 475;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_isinstance_cls_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 475;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_v);
tmp_expression_value_1 = generator_heap->var_v;
Py_INCREF(tmp_expression_value_1);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 475;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 475;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

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
    NULL,
    generator_heap->var_v,
    generator->m_closure[0]
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
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_v);
generator_heap->var_v = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_v);
generator_heap->var_v = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$genexpr__1_genexpr_context,
        module_pydantic$_internal$_validators,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_f3b8a100ce3cad7ba15a20b31e5953d5,
#endif
        code_objects_693320cd0fc7848a7b5259b0ff868bbd,
        closure,
        2,
#if 1
        sizeof(struct pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_value = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz;
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
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz = MAKE_FUNCTION_FRAME(tstate, code_objects_1a74b6d9d7b7effa0103caabf7df3ae5, module_pydantic$_internal$_validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz->m_type_description == NULL);
frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz = cache_frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_value);
tmp_isinstance_inst_1 = par_value;
tmp_isinstance_cls_1 = module_var_accessor_pydantic$_internal$_validators$ZoneInfo(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ZoneInfo);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 487;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "o";
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
CHECK_OBJECT(par_value);
tmp_return_value = par_value;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_validators$ZoneInfo(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ZoneInfo);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 490;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz->m_frame.f_lineno = 490;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_tuple_element_1 = module_var_accessor_pydantic$_internal$_validators$ZoneInfoNotFoundError(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ZoneInfoNotFoundError);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 491;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = PyExc_ValueError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = PyExc_TypeError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 2, tmp_tuple_element_1);
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
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
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_validators$PydanticCustomError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 492;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_zoneinfo_str;
tmp_args_element_value_3 = mod_consts.const_str_digest_73107100861c9face037198e55a17c83;
tmp_dict_key_1 = mod_consts.const_str_plain_value;
CHECK_OBJECT(par_value);
tmp_dict_value_1 = par_value;
tmp_args_element_value_4 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz->m_frame.f_lineno = 492;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "o";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 492;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto try_except_handler_2;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 489;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz->m_frame)) {
        frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz,
    type_description_1,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz == cache_frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz);
    cache_frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator,
        mod_consts.const_str_plain_ip_v4_network_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5e2e77c09408bb1825386f45a409fb65,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        mod_consts.const_str_digest_8bbc3fb14e2170a72794a783efbd6cec,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator,
        mod_consts.const_str_plain_ip_v6_network_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a2c468dfa137a8ed0fc7b5dcbf4582f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        mod_consts.const_str_digest_1660e6cd5790457c61881a386abf2d28,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator,
        mod_consts.const_str_plain_ip_v4_interface_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_00a5500053af52630002388a898cd28c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator,
        mod_consts.const_str_plain_ip_v6_interface_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_32b93c9c8db63890cf9538d727050df9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__14_fraction_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__14_fraction_validator,
        mod_consts.const_str_plain_fraction_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8b7f0e1f0bce8f8e19b21b802669c769,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check,
        mod_consts.const_str_plain_forbid_inf_nan_check,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0736871d2252b4be18775619df33f20a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__16__safe_repr(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__16__safe_repr,
        mod_consts.const_str_plain__safe_repr,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6ee0137e95a6d88ad232f9b15bc1026e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        mod_consts.const_str_digest_937e07f69752bc4b38e561be8da71913,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__17_greater_than_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__17_greater_than_validator,
        mod_consts.const_str_plain_greater_than_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_68cc72a9435cbdb997a632f09615824b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator,
        mod_consts.const_str_plain_greater_than_or_equal_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cb32e649023a1998392d6a1ec0ac03d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__19_less_than_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__19_less_than_validator,
        mod_consts.const_str_plain_less_than_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fa56823e18e8d6cb63e0ff9a0325b5f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__1_sequence_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__1_sequence_validator,
        mod_consts.const_str_plain_sequence_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_723c5f24f1e765e9684406a61250770c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        mod_consts.const_str_digest_99db1a65934fbc27c9d8015c206c4699,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator,
        mod_consts.const_str_plain_less_than_or_equal_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cd2b8980564be6628e42a0d5aec76a19,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__21_multiple_of_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__21_multiple_of_validator,
        mod_consts.const_str_plain_multiple_of_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_43ebfaf833e70ae27c9a4c277bb58981,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__22_min_length_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__22_min_length_validator,
        mod_consts.const_str_plain_min_length_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cbf9f749b4ff40a66b4979e6b82799a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__23_max_length_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__23_max_length_validator,
        mod_consts.const_str_plain_max_length_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_da7f63ec08e33642369b4636baee2edc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info,
        mod_consts.const_str_plain__extract_decimal_digits_info,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f68d3b9d6989ba1f466ab6b6fa72a4d0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        mod_consts.const_str_digest_016babbfa0298a5569332c9a6b381f4e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__25_max_digits_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__25_max_digits_validator,
        mod_consts.const_str_plain_max_digits_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1c48cc2b8c597de5fea693d0d5bf5fba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__26_decimal_places_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__26_decimal_places_validator,
        mod_consts.const_str_plain_decimal_places_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7fc1515365bc0c23817f8f86663c808e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__27_deque_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__27_deque_validator,
        mod_consts.const_str_plain_deque_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_700a7d8a7f68990065b603ed3259a758,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__28_defaultdict_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__28_defaultdict_validator,
        mod_consts.const_str_plain_defaultdict_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dfb7533271e9994350a2555122100607,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory,
        mod_consts.const_str_plain_get_defaultdict_default_default_factory,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0baf4e2a30972cf32bb104be2e455a52,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default,
        mod_consts.const_str_plain_infer_default,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0662cc80a790909421c748498f8bd88d,
#endif
        code_objects_f9b63a191d4f7028fd3d5c2a194767b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory,
        mod_consts.const_str_plain_type_var_default_factory,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b51aea51baf9dd8ba7a7c5d8dbc23435,
#endif
        code_objects_fe78a43b65215b6b2a971ec0f0a50c24,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__2_import_string(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__2_import_string,
        mod_consts.const_str_plain_import_string,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ed61d433637c36c95e06472768c5cad5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz,
        mod_consts.const_str_plain_validate_str_is_valid_iana_tz,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1a74b6d9d7b7effa0103caabf7df3ae5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__3__import_string_logic(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__3__import_string_logic,
        mod_consts.const_str_plain__import_string_logic,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cbf299be05b2369cfa6f9e9a570604b2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        mod_consts.const_str_digest_c79294b952a0454dc3e373fc0888ef8b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__4_pattern_either_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__4_pattern_either_validator,
        mod_consts.const_str_plain_pattern_either_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_75f51753f056e165e7858cb1d885668d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__5_pattern_str_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__5_pattern_str_validator,
        mod_consts.const_str_plain_pattern_str_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b36b92a0c6dd5e5ffd8ece49e436de81,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator,
        mod_consts.const_str_plain_pattern_bytes_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6eb9fa3f02896b78a4abd6bfbe0e5adc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__7_compile_pattern(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__7_compile_pattern,
        mod_consts.const_str_plain_compile_pattern,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f5517813ba5a386551ec40263b1d2f4b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator,
        mod_consts.const_str_plain_ip_v4_address_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b1f77bfe8e8e20aeaef124aa4af036b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator,
        mod_consts.const_str_plain_ip_v6_address_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1c57857d27e7cbb5e219d9b76987bf38,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_validators,
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

static function_impl_code const function_table_pydantic$_internal$_validators[] = {
impl_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default,
impl_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory$$$function__1_infer_default$$$function__1_type_var_default_factory,
impl_pydantic$_internal$_validators$$$function__1_sequence_validator,
impl_pydantic$_internal$_validators$$$function__2_import_string,
impl_pydantic$_internal$_validators$$$function__3__import_string_logic,
impl_pydantic$_internal$_validators$$$function__4_pattern_either_validator,
impl_pydantic$_internal$_validators$$$function__5_pattern_str_validator,
impl_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator,
impl_pydantic$_internal$_validators$$$function__7_compile_pattern,
impl_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator,
impl_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator,
impl_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator,
impl_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator,
impl_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator,
impl_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator,
impl_pydantic$_internal$_validators$$$function__14_fraction_validator,
impl_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check,
impl_pydantic$_internal$_validators$$$function__16__safe_repr,
impl_pydantic$_internal$_validators$$$function__17_greater_than_validator,
impl_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator,
impl_pydantic$_internal$_validators$$$function__19_less_than_validator,
impl_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator,
impl_pydantic$_internal$_validators$$$function__21_multiple_of_validator,
impl_pydantic$_internal$_validators$$$function__22_min_length_validator,
impl_pydantic$_internal$_validators$$$function__23_max_length_validator,
impl_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info,
impl_pydantic$_internal$_validators$$$function__25_max_digits_validator,
impl_pydantic$_internal$_validators$$$function__26_decimal_places_validator,
impl_pydantic$_internal$_validators$$$function__27_deque_validator,
impl_pydantic$_internal$_validators$$$function__28_defaultdict_validator,
impl_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory,
impl_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pydantic$_internal$_validators);
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
        module_pydantic$_internal$_validators,
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
        function_table_pydantic$_internal$_validators,
        sizeof(function_table_pydantic$_internal$_validators) / sizeof(function_impl_code)
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
static char const *module_full_name = "pydantic._internal._validators";
#endif

// Internal entry point for module code.
PyObject *module_code_pydantic$_internal$_validators(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pydantic$_internal$_validators");

    // Store the module for future use.
    module_pydantic$_internal$_validators = module;

    moduledict_pydantic$_internal$_validators = MODULE_DICT(module_pydantic$_internal$_validators);

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
        PRINT_STRING("pydantic$_internal$_validators: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pydantic$_internal$_validators: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pydantic$_internal$_validators: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic._internal._validators" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpydantic$_internal$_validators\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pydantic$_internal$_validators,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pydantic$_internal$_validators,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pydantic$_internal$_validators,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$_internal$_validators,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$_internal$_validators,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pydantic$_internal$_validators);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pydantic$_internal$_validators);
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

        UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_validators;
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
tmp_assign_source_1 = mod_consts.const_str_digest_77c4d90f1d38ad795010d9666b63fe92;
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pydantic$_internal$_validators = MAKE_MODULE_FRAME(code_objects_1c17c25e9bc02a1caff08908474e80f7, module_pydantic$_internal$_validators);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_validators);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_validators) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_pydantic$_internal$_validators$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_pydantic$_internal$_validators$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain__annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pydantic$_internal$_validators;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_pydantic$_internal$_validators->m_frame.f_lineno = 8;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_collections, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_math;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pydantic$_internal$_validators;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_pydantic$_internal$_validators->m_frame.f_lineno = 9;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_math, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_3 = (PyObject *)moduledict_pydantic$_internal$_validators;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_pydantic$_internal$_validators->m_frame.f_lineno = 10;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_9 == NULL));
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_decimal;
tmp_globals_arg_value_4 = (PyObject *)moduledict_pydantic$_internal$_validators;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Decimal_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_pydantic$_internal$_validators->m_frame.f_lineno = 12;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_Decimal,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Decimal);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_Decimal, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_fractions;
tmp_globals_arg_value_5 = (PyObject *)moduledict_pydantic$_internal$_validators;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Fraction_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_pydantic$_internal$_validators->m_frame.f_lineno = 13;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_Fraction,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Fraction);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_Fraction, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_ipaddress;
tmp_globals_arg_value_6 = (PyObject *)moduledict_pydantic$_internal$_validators;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_74bd1f7bbf4f7da6f86be9d8f70006d5_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_pydantic$_internal$_validators->m_frame.f_lineno = 14;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_IPv4Address,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_IPv4Address);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Address, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_IPv4Interface,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_IPv4Interface);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Interface, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_IPv4Network,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_IPv4Network);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Network, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_IPv6Address,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_IPv6Address);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Address, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_IPv6Interface,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_IPv6Interface);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Interface, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_IPv6Network,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_IPv6Network);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Network, tmp_assign_source_18);
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
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_19 == NULL));
assert(tmp_import_from_2__module == NULL);
Py_INCREF(tmp_assign_source_19);
tmp_import_from_2__module = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_11 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_12 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_13 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_get_origin,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_get_origin);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin, tmp_assign_source_24);
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
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_zoneinfo;
tmp_globals_arg_value_7 = (PyObject *)moduledict_pydantic$_internal$_validators;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_ZoneInfo_str_plain_ZoneInfoNotFoundError_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_pydantic$_internal$_validators->m_frame.f_lineno = 16;
tmp_assign_source_25 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_25;
}
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_14 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_ZoneInfo,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_ZoneInfo);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ZoneInfo, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_15 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_ZoneInfoNotFoundError,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_ZoneInfoNotFoundError);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ZoneInfoNotFoundError, tmp_assign_source_27);
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
PyObject *tmp_assign_source_28;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_8 = (PyObject *)moduledict_pydantic$_internal$_validators;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = Py_None;
tmp_level_value_8 = const_int_0;
frame_frame_pydantic$_internal$_validators->m_frame.f_lineno = 18;
tmp_assign_source_28 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_extensions, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
frame_frame_pydantic$_internal$_validators->m_frame.f_lineno = 19;
tmp_assign_source_29 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_plain_pydantic_core, mod_consts.const_str_plain_pydantic_core);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_29;
}
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_16 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_PydanticCustomError,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_PydanticCustomError);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticCustomError, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
frame_frame_pydantic$_internal$_validators->m_frame.f_lineno = 19;
tmp_assign_source_31 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_core_schema, tmp_assign_source_31);
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
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_907d5366b2af807fa07d12233a5c2457;
tmp_globals_arg_value_9 = (PyObject *)moduledict_pydantic$_internal$_validators;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_PydanticKnownError_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_pydantic$_internal$_validators->m_frame.f_lineno = 20;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_PydanticKnownError,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_PydanticKnownError);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticKnownError, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_typing_inspection;
tmp_globals_arg_value_10 = (PyObject *)moduledict_pydantic$_internal$_validators;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_typing_objects_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_pydantic$_internal$_validators->m_frame.f_lineno = 21;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_typing_objects,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_typing_objects);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_objects, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_5ca6f494e811dc405d56d97fba4ace8c;
tmp_globals_arg_value_11 = (PyObject *)moduledict_pydantic$_internal$_validators;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_import_cached_field_info_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_pydantic$_internal$_validators->m_frame.f_lineno = 23;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_import_cached_field_info,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_import_cached_field_info);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_import_cached_field_info, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_20;
frame_frame_pydantic$_internal$_validators->m_frame.f_lineno = 24;
tmp_import_name_from_20 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f, mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_pydantic$_internal$_validators,
        mod_consts.const_str_plain_PydanticSchemaGenerationError,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_PydanticSchemaGenerationError);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticSchemaGenerationError, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_8470db10751d75181e07715567a8fbb7);

tmp_assign_source_36 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__1_sequence_validator(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_sequence_validator, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_5dc7b48a4d3bfc083d765d3d7029743a);

tmp_assign_source_37 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__2_import_string(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_import_string, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_214f188218286ca9ba9a36968d138331);

tmp_assign_source_38 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__3__import_string_logic(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain__import_string_logic, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_8e8074bd88bb09ef506136f53c70dc90);

tmp_assign_source_39 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__4_pattern_either_validator(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_pattern_either_validator, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_baeb9134c688ba4c8a3a73dfe7fa5302);

tmp_assign_source_40 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__5_pattern_str_validator(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_pattern_str_validator, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_701fd81e0c5d2ac682f08ba4c183822f);

tmp_assign_source_41 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__6_pattern_bytes_validator(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_pattern_bytes_validator, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_pydantic$_internal$_validators->m_frame.f_lineno = 167;
tmp_assign_source_42 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_TypeVar,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_PatternType_type_str_type_bytes_tuple, 0)
);

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_PatternType, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_5a0afde0132dcff9c09750c93ab63ab1);

tmp_assign_source_43 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__7_compile_pattern(tstate, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_compile_pattern, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_06f270561aa5dff3dedef3548a65b029);

tmp_assign_source_44 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__8_ip_v4_address_validator(tstate, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v4_address_validator, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_66820c7e367a08b6b510522e91a39bc7);

tmp_assign_source_45 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__9_ip_v6_address_validator(tstate, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v6_address_validator, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_754f2e9d61fc29eb851e397cdeb32df9);

tmp_assign_source_46 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__10_ip_v4_network_validator(tstate, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v4_network_validator, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_4485e32ab38f8af6e3ec8d8f9906c1ee);

tmp_assign_source_47 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__11_ip_v6_network_validator(tstate, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v6_network_validator, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_1de8b7e98ac781a8c9b0f511346c5439);

tmp_assign_source_48 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__12_ip_v4_interface_validator(tstate, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v4_interface_validator, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_a45524315bf9ac59d4b3759f4072745b);

tmp_assign_source_49 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__13_ip_v6_interface_validator(tstate, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_ip_v6_interface_validator, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_6c5a8d2911d61c5c0524dd2d194a60bc);

tmp_assign_source_50 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__14_fraction_validator(tstate, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_fraction_validator, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_079ecffcdb60a27a0ab22dbf43b5ee25);

tmp_assign_source_51 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__15_forbid_inf_nan_check(tstate, tmp_annotations_15);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_forbid_inf_nan_check, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_43d204fa33edda4de052d95a2002e060);

tmp_assign_source_52 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__16__safe_repr(tstate, tmp_annotations_16);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain__safe_repr, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_85265546805f14e32730e13be83c987a);

tmp_assign_source_53 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__17_greater_than_validator(tstate, tmp_annotations_17);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_greater_than_validator, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_7678a2a2901014148c84625934ec2787);

tmp_assign_source_54 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__18_greater_than_or_equal_validator(tstate, tmp_annotations_18);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_greater_than_or_equal_validator, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_9c4a045c909aa3b57bd08a8596e803ed);

tmp_assign_source_55 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__19_less_than_validator(tstate, tmp_annotations_19);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_less_than_validator, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_695cdf3554eaee2a1b1e1de9c4e21692);

tmp_assign_source_56 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__20_less_than_or_equal_validator(tstate, tmp_annotations_20);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_less_than_or_equal_validator, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_b07f59124b128dd6baf9ad4b18daf7ab);

tmp_assign_source_57 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__21_multiple_of_validator(tstate, tmp_annotations_21);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_multiple_of_validator, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_51038fba016b93f2114847c6d74f7a89);

tmp_assign_source_58 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__22_min_length_validator(tstate, tmp_annotations_22);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_min_length_validator, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_feec26b7a805a0284dda5d2e75df4fe0);

tmp_assign_source_59 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__23_max_length_validator(tstate, tmp_annotations_23);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_max_length_validator, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_annotations_24;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_46be6993a741f35bb4ef802ab8d863ff);

tmp_assign_source_60 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__24__extract_decimal_digits_info(tstate, tmp_annotations_24);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain__extract_decimal_digits_info, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_annotations_25;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_162f80ad2d2a8fabd5f4dd3c37e1d654);

tmp_assign_source_61 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__25_max_digits_validator(tstate, tmp_annotations_25);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_max_digits_validator, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_annotations_26;
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_a314ac2d50c1fd8bd76e8449ae2258a4);

tmp_assign_source_62 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__26_decimal_places_validator(tstate, tmp_annotations_26);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_decimal_places_validator, tmp_assign_source_62);
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_annotations_27;
tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_4eeb24cb64f0f35a8080b895bee72f63);

tmp_assign_source_63 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__27_deque_validator(tstate, tmp_annotations_27);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_deque_validator, tmp_assign_source_63);
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_annotations_28;
tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_83a3f45eced2352c9ce341f2483b7265);

tmp_assign_source_64 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__28_defaultdict_validator(tstate, tmp_annotations_28);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict_validator, tmp_assign_source_64);
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_annotations_29;
tmp_annotations_29 = DICT_COPY(tstate, mod_consts.const_dict_e903cb0e310dfc1d14b8bea62211e731);

tmp_assign_source_65 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__29_get_defaultdict_default_default_factory(tstate, tmp_annotations_29);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_get_defaultdict_default_default_factory, tmp_assign_source_65);
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_annotations_30;
tmp_annotations_30 = DICT_COPY(tstate, mod_consts.const_dict_0266134b1117629b5053702cdbe89c85);

tmp_assign_source_66 = MAKE_FUNCTION_pydantic$_internal$_validators$$$function__30_validate_str_is_valid_iana_tz(tstate, tmp_annotations_30);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_validate_str_is_valid_iana_tz, tmp_assign_source_66);
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_gt;
tmp_dict_value_1 = module_var_accessor_pydantic$_internal$_validators$greater_than_validator(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_assign_source_67 = _PyDict_NewPresized( 9 );
tmp_res = PyDict_SetItem(tmp_assign_source_67, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_ge;
tmp_dict_value_1 = module_var_accessor_pydantic$_internal$_validators$greater_than_or_equal_validator(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_67, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_lt;
tmp_dict_value_1 = module_var_accessor_pydantic$_internal$_validators$less_than_validator(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_67, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_le;
tmp_dict_value_1 = module_var_accessor_pydantic$_internal$_validators$less_than_or_equal_validator(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_67, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_multiple_of;
tmp_dict_value_1 = module_var_accessor_pydantic$_internal$_validators$multiple_of_validator(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_67, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_min_length;
tmp_dict_value_1 = module_var_accessor_pydantic$_internal$_validators$min_length_validator(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_67, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_max_length;
tmp_dict_value_1 = module_var_accessor_pydantic$_internal$_validators$max_length_validator(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_67, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_max_digits;
tmp_dict_value_1 = module_var_accessor_pydantic$_internal$_validators$max_digits_validator(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_67, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_decimal_places;
tmp_dict_value_1 = module_var_accessor_pydantic$_internal$_validators$decimal_places_validator(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_67, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_NUMERIC_VALIDATOR_LOOKUP, tmp_assign_source_67);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_45210a81e4e4528aeaa06f54a99db8b9;
tmp_ass_subscribed_1 = module_var_accessor_pydantic$_internal$_validators$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 495;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_NUMERIC_VALIDATOR_LOOKUP;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 495;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_1 = module_var_accessor_pydantic$_internal$_validators$Union(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 507;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = module_var_accessor_pydantic$_internal$_validators$IPv4Address(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv4Address);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 507;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 6);
PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_pydantic$_internal$_validators$IPv6Address(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv6Address);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 507;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_pydantic$_internal$_validators$IPv4Network(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv4Network);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 507;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_pydantic$_internal$_validators$IPv6Network(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv6Network);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 507;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_pydantic$_internal$_validators$IPv4Interface(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv4Interface);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 507;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 4, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_pydantic$_internal$_validators$IPv6Interface(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv6Interface);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 507;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 5, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_68 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IpType, tmp_assign_source_68);
}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = module_var_accessor_pydantic$_internal$_validators$IPv4Address(tstate);
if (unlikely(tmp_dict_key_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv4Address);
}

if (tmp_dict_key_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 510;

    goto frame_exception_exit_1;
}
tmp_dict_value_2 = module_var_accessor_pydantic$_internal$_validators$ip_v4_address_validator(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ip_v4_address_validator);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 510;

    goto frame_exception_exit_1;
}
tmp_assign_source_69 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_assign_source_69, tmp_dict_key_2, tmp_dict_value_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;

    goto dict_build_exception_1;
}
tmp_dict_key_2 = module_var_accessor_pydantic$_internal$_validators$IPv6Address(tstate);
if (unlikely(tmp_dict_key_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv6Address);
}

if (tmp_dict_key_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 511;

    goto dict_build_exception_1;
}
tmp_dict_value_2 = module_var_accessor_pydantic$_internal$_validators$ip_v6_address_validator(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ip_v6_address_validator);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 511;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_69, tmp_dict_key_2, tmp_dict_value_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 511;

    goto dict_build_exception_1;
}
tmp_dict_key_2 = module_var_accessor_pydantic$_internal$_validators$IPv4Network(tstate);
if (unlikely(tmp_dict_key_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv4Network);
}

if (tmp_dict_key_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 512;

    goto dict_build_exception_1;
}
tmp_dict_value_2 = module_var_accessor_pydantic$_internal$_validators$ip_v4_network_validator(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ip_v4_network_validator);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 512;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_69, tmp_dict_key_2, tmp_dict_value_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;

    goto dict_build_exception_1;
}
tmp_dict_key_2 = module_var_accessor_pydantic$_internal$_validators$IPv6Network(tstate);
if (unlikely(tmp_dict_key_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv6Network);
}

if (tmp_dict_key_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 513;

    goto dict_build_exception_1;
}
tmp_dict_value_2 = module_var_accessor_pydantic$_internal$_validators$ip_v6_network_validator(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ip_v6_network_validator);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 513;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_69, tmp_dict_key_2, tmp_dict_value_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto dict_build_exception_1;
}
tmp_dict_key_2 = module_var_accessor_pydantic$_internal$_validators$IPv4Interface(tstate);
if (unlikely(tmp_dict_key_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv4Interface);
}

if (tmp_dict_key_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;

    goto dict_build_exception_1;
}
tmp_dict_value_2 = module_var_accessor_pydantic$_internal$_validators$ip_v4_interface_validator(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ip_v4_interface_validator);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_69, tmp_dict_key_2, tmp_dict_value_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;

    goto dict_build_exception_1;
}
tmp_dict_key_2 = module_var_accessor_pydantic$_internal$_validators$IPv6Interface(tstate);
if (unlikely(tmp_dict_key_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv6Interface);
}

if (tmp_dict_key_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 515;

    goto dict_build_exception_1;
}
tmp_dict_value_2 = module_var_accessor_pydantic$_internal$_validators$ip_v6_interface_validator(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ip_v6_interface_validator);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 515;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_69, tmp_dict_key_2, tmp_dict_value_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 515;

    goto dict_build_exception_1;
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_69);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_IP_VALIDATOR_LOOKUP, tmp_assign_source_69);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_b0501b53604489761ce42160314ac43e;
tmp_ass_subscribed_2 = module_var_accessor_pydantic$_internal$_validators$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 509;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_IP_VALIDATOR_LOOKUP;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_2 == NULL));
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_DefaultDict);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;

    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_3);

exception_lineno = 519;

    goto frame_exception_exit_1;
}
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_defaultdict);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_3);

exception_lineno = 519;

    goto frame_exception_exit_1;
}
tmp_assign_source_70 = _PyDict_NewPresized( 11 );
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
tmp_res = PyDict_SetItem(tmp_assign_source_70, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;

    goto dict_build_exception_2;
}
tmp_expression_value_4 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 520;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_defaultdict);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;

    goto dict_build_exception_2;
}
tmp_expression_value_5 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_3);

exception_lineno = 520;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_defaultdict);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_3);

exception_lineno = 520;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_70, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;

    goto dict_build_exception_2;
}
tmp_expression_value_6 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_6 == NULL));
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_OrderedDict);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;

    goto dict_build_exception_2;
}
tmp_expression_value_7 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_3);

exception_lineno = 521;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_OrderedDict);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_3);

exception_lineno = 521;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_70, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;

    goto dict_build_exception_2;
}
tmp_expression_value_8 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 522;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_OrderedDict);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;

    goto dict_build_exception_2;
}
tmp_expression_value_9 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_3);

exception_lineno = 522;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_OrderedDict);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_3);

exception_lineno = 522;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_70, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;

    goto dict_build_exception_2;
}
tmp_expression_value_10 = module_var_accessor_pydantic$_internal$_validators$typing_extensions(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_typing_extensions);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 523;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_OrderedDict);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;

    goto dict_build_exception_2;
}
tmp_expression_value_11 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_3);

exception_lineno = 523;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_OrderedDict);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_3);

exception_lineno = 523;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_70, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;

    goto dict_build_exception_2;
}
tmp_expression_value_12 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_12 == NULL));
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_Counter);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;

    goto dict_build_exception_2;
}
tmp_expression_value_13 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_3);

exception_lineno = 524;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_Counter);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_3);

exception_lineno = 524;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_70, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;

    goto dict_build_exception_2;
}
tmp_expression_value_14 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 525;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_Counter);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;

    goto dict_build_exception_2;
}
tmp_expression_value_15 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_3);

exception_lineno = 525;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_Counter);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_3);

exception_lineno = 525;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_70, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;

    goto dict_build_exception_2;
}
tmp_expression_value_16 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_16 == NULL));
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_Mapping);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = (PyObject *)&PyDict_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_70, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;

    goto dict_build_exception_2;
}
tmp_expression_value_17 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_17 == NULL));
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_MutableMapping);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = (PyObject *)&PyDict_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_70, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;

    goto dict_build_exception_2;
}
tmp_expression_value_19 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 530;

    goto dict_build_exception_2;
}
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_abc);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_Mapping);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = (PyObject *)&PyDict_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_70, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;

    goto dict_build_exception_2;
}
tmp_expression_value_21 = module_var_accessor_pydantic$_internal$_validators$collections(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 531;

    goto dict_build_exception_2;
}
tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_abc);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 531;

    goto dict_build_exception_2;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_MutableMapping);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 531;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = (PyObject *)&PyDict_Type;
tmp_res = PyDict_SetItem(tmp_assign_source_70, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 531;

    goto dict_build_exception_2;
}
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_assign_source_70);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)mod_consts.const_str_plain_MAPPING_ORIGIN_MAP, tmp_assign_source_70);
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_03ec832941afc3df07cc8bf9e7164e93;
tmp_ass_subscribed_3 = module_var_accessor_pydantic$_internal$_validators$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 518;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_MAPPING_ORIGIN_MAP;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_validators, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_validators->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_validators, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pydantic$_internal$_validators);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pydantic$_internal$_validators", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic._internal._validators" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pydantic$_internal$_validators);
    return module_pydantic$_internal$_validators;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_validators, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pydantic$_internal$_validators", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

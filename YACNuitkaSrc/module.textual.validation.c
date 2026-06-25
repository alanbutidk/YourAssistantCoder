/* Generated code for Python module 'textual$validation'
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



/* The "module_textual$validation" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$validation;
PyDictObject *moduledict_textual$validation;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_failures;
PyObject *const_str_plain_ValidationResult;
PyObject *const_str_plain_success;
PyObject *const_str_plain_failure;
PyObject *const_str_digest_2dd8f42733a48bc1d53df16d4fd43e4f;
PyObject *const_str_plain_is_valid;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_117fd841c497869ae89d7055b30d2654;
PyObject *const_str_digest_f66997df06bbb6e5bf8a16434e3f6dbe;
PyObject *const_str_digest_a3c830da83bd08aa3ba0813d97dfc01b;
PyObject *const_str_plain_description;
PyObject *const_str_digest_e6b83880e85ac1ca8c1d2487cacfe7b7;
PyObject *const_str_digest_dd1d4510b42f14431d985840aa96bcd3;
PyObject *const_str_plain_validator;
PyObject *const_str_plain_failure_description;
PyObject *const_str_plain_describe_failure;
PyObject *const_str_plain_self;
PyObject *const_str_plain_value;
PyObject *const_str_plain___rich_repr__;
PyObject *const_str_digest_e727d1cc943501a1df2854a620a8133b;
PyObject *const_str_digest_409a1a7b4828127445742821dbf1d312;
PyObject *const_str_digest_a4909497a39b22c8c0b99414b4729097;
PyObject *const_str_plain_Failure;
PyObject *const_tuple_str_plain_validator_str_plain_value_str_plain_description_tuple;
PyObject *const_str_digest_e899f975b314e334ae9784da4e442494;
PyObject *const_tuple_str_plain_failure_description_tuple;
PyObject *const_str_plain_regex;
PyObject *const_str_plain_flags;
PyObject *const_str_plain_re;
PyObject *const_str_plain_fullmatch;
PyObject *const_tuple_str_plain_flags_tuple;
PyObject *const_str_plain_Regex;
PyObject *const_str_plain_NoResults;
PyObject *const_tuple_str_plain_failures_tuple;
PyObject *const_str_digest_144e60269c399b9877e4883954bcfac1;
PyObject *const_str_digest_307f82519655986c85d6d7477773afe9;
PyObject *const_str_digest_e336b28c3dd4e668862ccf30f428441d;
PyObject *const_str_digest_ef6e126a27444a65730c4627f0f46601;
PyObject *const_str_digest_b681ba7d8e0075c9746177a4c26f9d65;
PyObject *const_str_plain_minimum;
PyObject *const_str_plain_maximum;
PyObject *const_str_plain_Number;
PyObject *const_str_plain_NotANumber;
PyObject *const_str_plain_math;
PyObject *const_str_plain_isnan;
PyObject *const_str_plain_isinf;
PyObject *const_str_plain__validate_range;
PyObject *const_str_plain_NotInRange;
PyObject *const_str_digest_b45cb9f01c0e7c1d582c9e905634cfbb;
PyObject *const_str_digest_a92a9f8aa6e19f0c0805526e141cbcae;
PyObject *const_str_digest_b30c369a44e312368d00cef38c2fe25a;
PyObject *const_str_digest_6691261ebc709df78da950b31fda8612;
PyObject *const_str_digest_5d23036a9aa8de046f5f14885debcc6a;
PyObject *const_str_digest_8c5675ddf056e3e905c04ecfb8417d95;
PyObject *const_str_digest_7f0aead4232d288d8dfdff349b11a1b5;
PyObject *const_str_plain_validate;
PyObject *const_str_plain_Integer;
PyObject *const_str_plain_NotAnInteger;
PyObject *const_str_digest_34951e10b8e0cf1a08e61464fe5b0114;
PyObject *const_str_digest_fad3abfb80f6ca75d103078043accaa8;
PyObject *const_str_plain_Length;
PyObject *const_str_plain_Incorrect;
PyObject *const_str_digest_e2e60caa0817fd82a8be04301fe14125;
PyObject *const_str_digest_8b9edbe04f4bbf31cd97554a6330f855;
PyObject *const_str_digest_0d6199b3e9f19389317ddce2368b8e6d;
PyObject *const_str_digest_a1099c01dd1e986f43df65efff1b83ad;
PyObject *const_str_plain_function;
PyObject *const_str_plain_Function;
PyObject *const_str_plain_ReturnedFalse;
PyObject *const_str_digest_9e6f4872c263b0b1f0e044e99770b3a9;
PyObject *const_str_plain_URL;
PyObject *const_str_plain_InvalidURL;
PyObject *const_str_plain_urlparse;
PyObject *const_str_plain_scheme;
PyObject *const_str_plain_netloc;
PyObject *const_str_digest_2aa76b747f5edc0197e5e63ff5891479;
PyObject *const_str_digest_92febbc5ca5a0308fa00c23ab6ed677f;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_abc;
PyObject *const_tuple_str_plain_ABC_str_plain_abstractmethod_tuple;
PyObject *const_str_plain_ABC;
PyObject *const_str_plain_abstractmethod;
PyObject *const_str_plain_dataclasses;
PyObject *const_tuple_str_plain_dataclass_str_plain_field_tuple;
PyObject *const_str_plain_dataclass;
PyObject *const_str_plain_field;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Pattern;
PyObject *const_str_plain_Sequence;
PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
PyObject *const_tuple_str_plain_urlparse_tuple;
PyObject *const_str_digest_0266ac3c468cbbaf99b230132943e04e;
PyObject *const_str_plain_rich;
PyObject *const_str_digest_fa0c17a47f15604424647e05bb834ee5;
PyObject *const_str_digest_2d37d12774366da9c044e04e305c0689;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_22;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_type_list_tuple;
PyObject *const_tuple_str_plain_default_factory_tuple;
PyObject *const_str_digest_d4cea08f0d33855a31de6ef8e45128c0;
PyObject *const_dict_82a2db770d6e5b7368dd6eca563a0201;
PyObject *const_str_plain_merge;
PyObject *const_str_digest_9b03316c5f518e62d5c1801ad0641595;
PyObject *const_dict_4e0b39eb9f8b899cf62049ee9d8c8742;
PyObject *const_str_digest_9a87f64d32ebe8cdd57d82dd946ac1ef;
PyObject *const_dict_541f8a3b8fc1c5c55800daa726b82b83;
PyObject *const_str_digest_df03a6358c714d63fe4702edc8554aa3;
PyObject *const_dict_0fc05ed22f6723891cdf750312b81bd3;
PyObject *const_str_plain_failure_descriptions;
PyObject *const_str_digest_a8b67279b9cf346a5e975e922d0a225c;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_digest_57b2360b8be8f6bcc632805f89446534;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_a00db67dd6421b21697b3f585ed522ed;
PyObject *const_int_pos_88;
PyObject *const_str_plain_Validator;
PyObject *const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain___post_init__;
PyObject *const_str_digest_921844861e4e94182ebe69b1a4983bf9;
PyObject *const_dict_a367242e045973b662a9e05f7c4b4498;
PyObject *const_tuple_str_plain_description_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_33063c0e3d3c7888bd021a11eb41bf27;
PyObject *const_int_pos_112;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_c212bd30af73643296d2eccfb5a26e8d;
PyObject *const_str_digest_8e62433a45639e028a655b20f9a14212;
PyObject *const_dict_98ffed80e59f5fb575806dc2bd70961d;
PyObject *const_str_digest_10f3628189506ec6418b02a384879362;
PyObject *const_str_digest_307f0b0c6db8cf5cc0b4a756f3f1abd4;
PyObject *const_dict_af0a7ee4eda1bf396268a812c0a8ac6b;
PyObject *const_str_digest_65c02cac87ec84c99f53586ce1f8da26;
PyObject *const_str_digest_10014cbef10e074bd54aba872075d203;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_dict_066619fc82a59c3babf73b191af57341;
PyObject *const_str_digest_6f8ee926e8ffba4ee41350e2a61bdf72;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_4553acc93ac17f12a477f0f7d42222e4;
PyObject *const_int_pos_222;
PyObject *const_tuple_int_0_none_tuple;
PyObject *const_dict_0f3513e5fa95b98f23a50ad1addb370d;
PyObject *const_str_digest_ca2d4a917d3a03d715a687b414f5ca0f;
PyObject *const_str_digest_1dd962682e869c43539b3383578e629d;
PyObject *const_str_digest_85bc9f4a74f106b04085468e7cd43bab;
PyObject *const_int_pos_237;
PyObject *const_str_digest_487815fab0e20e3f62a0a286ebe0b31f;
PyObject *const_str_digest_14f8bf20edfa5c2c50fd156f88940e7b;
PyObject *const_tuple_str_plain_regex_str_plain_flags_tuple;
PyObject *const_str_digest_e1ee591f7bf9dd885f591586e48b70b6;
PyObject *const_int_pos_268;
PyObject *const_dict_6d97cb11182c3742b9c1c003e822f160;
PyObject *const_str_digest_887c2b94c694da58556d0ac22a2a227a;
PyObject *const_str_digest_b044462e860524b0118eef27f537940d;
PyObject *const_str_digest_a07b7e9d4290d6de7d42d2e7e52ce5f3;
PyObject *const_int_pos_283;
PyObject *const_str_digest_a6d899727c34eff052b8e750bda6a338;
PyObject *const_str_digest_eb1c44b4d67d4bfbf3fac47a6cbeff09;
PyObject *const_int_pos_286;
PyObject *const_str_digest_eb71437a81da08940dc091a8ac33bacc;
PyObject *const_dict_cc1d275bdf3fd44eacedf2dfcce806d6;
PyObject *const_str_digest_12ffbdcb46026790d66e2f71851e14f1;
PyObject *const_str_digest_42eae3e456a31ff07a00029b9229d9e0;
PyObject *const_tuple_str_plain_minimum_str_plain_maximum_tuple;
PyObject *const_str_digest_9a9530cbfcd669a55089995bb15bcfdb;
PyObject *const_int_pos_342;
PyObject *const_str_digest_185898f93c093b8f5613857e7496f71b;
PyObject *const_str_digest_c9d653641cd57ced5a2cf81d61768458;
PyObject *const_int_pos_345;
PyObject *const_str_digest_ec3fadf0a8a06dcc340006fc8fe3a509;
PyObject *const_str_digest_ec9473a7c651fee093c60eb5dbbd1092;
PyObject *const_str_digest_5e04bf4f4865d62fb8e7741681596813;
PyObject *const_int_pos_391;
PyObject *const_dict_3b4b58b5e921989c40d659ef22153fca;
PyObject *const_str_digest_ec9c1208271a689759eb0a19959bc4d4;
PyObject *const_str_digest_249d2b5e707392f5c05b054dc5b6052f;
PyObject *const_str_digest_ea0bc1a9b6adfd0156c886788693ef71;
PyObject *const_int_pos_406;
PyObject *const_str_digest_a161950c5df00c66e69e1a011f7c2a5e;
PyObject *const_str_digest_9ffd1487f9d76a45573d0955768c28d3;
PyObject *const_str_digest_214e9bdd47fbd7a302758956ff6107db;
PyObject *const_int_pos_443;
PyObject *const_dict_a335a1c8b691c9369d1a727457cc2910;
PyObject *const_str_digest_d25853d5c90f6752db5e08f687c57513;
PyObject *const_str_digest_c933c7da3a2520030ef8aa56fb6949f7;
PyObject *const_str_digest_f4c08eb2ccba920f2d3af130dcda10e8;
PyObject *const_int_pos_455;
PyObject *const_str_digest_5891c2fa91654c7b72c226b7427812ba;
PyObject *const_str_digest_6b94be1c57a245029f2263e79674195f;
PyObject *const_tuple_str_plain_function_tuple;
PyObject *const_str_digest_494d6e52a3ea00ae5ccb605cdcc73d35;
PyObject *const_int_pos_485;
PyObject *const_str_digest_8b863347c298e9cdb926cbf2e1ecaaf5;
PyObject *const_str_digest_66d27ac7bd552877bdaf7318cfea7020;
PyObject *const_int_pos_488;
PyObject *const_str_digest_86ad2160d4c4b8005fd430907fe0ea86;
PyObject *const_str_digest_cb70b65f7f42e82048c487fcfc21840f;
PyObject *const_str_digest_443e5c7487d6a69e2c5907207268aef1;
PyObject *const_str_digest_cc4b97404aa0e75df793fc1990a21c88;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_result_tuple;
PyObject *const_str_digest_d853e415ec0e96fe302fb566a9fd6f29;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_fb043da2e6f2c9391ddd955691288b8c_tuple;
PyObject *const_tuple_44b99073efc90a3ffab97e59a4f1a87d_tuple;
PyObject *const_tuple_af0894dd3ded144c6a518efef60213ac_tuple;
PyObject *const_tuple_str_plain_self_str_plain_failure_description_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
PyObject *const_tuple_str_plain_self_str_plain_failure_tuple;
PyObject *const_tuple_c3a8e5223d590ce9891671570d20ee76_tuple;
PyObject *const_tuple_str_plain_results_str_plain_is_valid_str_plain_failures_tuple;
PyObject *const_tuple_str_plain_self_str_plain_value_str_plain_is_valid_tuple;
PyObject *const_tuple_661f53b5cf3b70f951abb381853b8d01_tuple;
PyObject *const_tuple_a586a1bd1e4f6ef1ace6c77a2c93388e_tuple;
PyObject *const_tuple_str_plain_self_str_plain_value_str_plain_float_value_tuple;
PyObject *const_tuple_ae4fd272658f8e11e2445c1da66ede50_tuple;
PyObject *const_tuple_ead687b7070046cf4150fddc8d4acfa3_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[223];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.validation"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_failures);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_ValidationResult);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_success);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_failure);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_2dd8f42733a48bc1d53df16d4fd43e4f);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_valid);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_117fd841c497869ae89d7055b30d2654);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_f66997df06bbb6e5bf8a16434e3f6dbe);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3c830da83bd08aa3ba0813d97dfc01b);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_description);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_e6b83880e85ac1ca8c1d2487cacfe7b7);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd1d4510b42f14431d985840aa96bcd3);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_validator);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_failure_description);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_describe_failure);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain___rich_repr__);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_e727d1cc943501a1df2854a620a8133b);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_409a1a7b4828127445742821dbf1d312);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4909497a39b22c8c0b99414b4729097);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_Failure);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_validator_str_plain_value_str_plain_description_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_e899f975b314e334ae9784da4e442494);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_failure_description_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_regex);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_flags);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_fullmatch);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_flags_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_Regex);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoResults);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_failures_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_144e60269c399b9877e4883954bcfac1);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_307f82519655986c85d6d7477773afe9);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_e336b28c3dd4e668862ccf30f428441d);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef6e126a27444a65730c4627f0f46601);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_b681ba7d8e0075c9746177a4c26f9d65);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_minimum);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_maximum);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_Number);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotANumber);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_math);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_isnan);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_isinf);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_range);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotInRange);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_b45cb9f01c0e7c1d582c9e905634cfbb);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_a92a9f8aa6e19f0c0805526e141cbcae);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_b30c369a44e312368d00cef38c2fe25a);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_6691261ebc709df78da950b31fda8612);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d23036a9aa8de046f5f14885debcc6a);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c5675ddf056e3e905c04ecfb8417d95);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_7f0aead4232d288d8dfdff349b11a1b5);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_Integer);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotAnInteger);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_34951e10b8e0cf1a08e61464fe5b0114);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_fad3abfb80f6ca75d103078043accaa8);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_Length);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_Incorrect);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_e2e60caa0817fd82a8be04301fe14125);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b9edbe04f4bbf31cd97554a6330f855);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d6199b3e9f19389317ddce2368b8e6d);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_a1099c01dd1e986f43df65efff1b83ad);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_function);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_Function);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReturnedFalse);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e6f4872c263b0b1f0e044e99770b3a9);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_URL);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidURL);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_scheme);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_netloc);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_2aa76b747f5edc0197e5e63ff5891479);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_92febbc5ca5a0308fa00c23ab6ed677f);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABC_str_plain_abstractmethod_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABC);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_str_plain_field_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_field);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_Pattern);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urlparse_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_rich);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d37d12774366da9c044e04e305c0689);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_int_pos_22);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_type_list_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_factory_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4cea08f0d33855a31de6ef8e45128c0);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_dict_82a2db770d6e5b7368dd6eca563a0201);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_merge);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_9b03316c5f518e62d5c1801ad0641595);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_dict_4e0b39eb9f8b899cf62049ee9d8c8742);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_9a87f64d32ebe8cdd57d82dd946ac1ef);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_dict_541f8a3b8fc1c5c55800daa726b82b83);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_df03a6358c714d63fe4702edc8554aa3);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_failure_descriptions);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_a8b67279b9cf346a5e975e922d0a225c);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_57b2360b8be8f6bcc632805f89446534);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_a00db67dd6421b21697b3f585ed522ed);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_int_pos_88);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_Validator);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain___post_init__);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_921844861e4e94182ebe69b1a4983bf9);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_description_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_33063c0e3d3c7888bd021a11eb41bf27);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_int_pos_112);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_dict_c212bd30af73643296d2eccfb5a26e8d);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e62433a45639e028a655b20f9a14212);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_dict_98ffed80e59f5fb575806dc2bd70961d);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_10f3628189506ec6418b02a384879362);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_307f0b0c6db8cf5cc0b4a756f3f1abd4);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_dict_af0a7ee4eda1bf396268a812c0a8ac6b);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_65c02cac87ec84c99f53586ce1f8da26);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_10014cbef10e074bd54aba872075d203);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_dict_066619fc82a59c3babf73b191af57341);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f8ee926e8ffba4ee41350e2a61bdf72);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_4553acc93ac17f12a477f0f7d42222e4);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_int_pos_222);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_none_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_dict_0f3513e5fa95b98f23a50ad1addb370d);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca2d4a917d3a03d715a687b414f5ca0f);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_1dd962682e869c43539b3383578e629d);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_85bc9f4a74f106b04085468e7cd43bab);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_int_pos_237);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_487815fab0e20e3f62a0a286ebe0b31f);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_14f8bf20edfa5c2c50fd156f88940e7b);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_regex_str_plain_flags_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_e1ee591f7bf9dd885f591586e48b70b6);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_int_pos_268);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_dict_6d97cb11182c3742b9c1c003e822f160);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_887c2b94c694da58556d0ac22a2a227a);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_b044462e860524b0118eef27f537940d);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_a07b7e9d4290d6de7d42d2e7e52ce5f3);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_int_pos_283);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_a6d899727c34eff052b8e750bda6a338);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb1c44b4d67d4bfbf3fac47a6cbeff09);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_int_pos_286);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb71437a81da08940dc091a8ac33bacc);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_dict_cc1d275bdf3fd44eacedf2dfcce806d6);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_12ffbdcb46026790d66e2f71851e14f1);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_42eae3e456a31ff07a00029b9229d9e0);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_minimum_str_plain_maximum_tuple);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_9a9530cbfcd669a55089995bb15bcfdb);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_int_pos_342);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_185898f93c093b8f5613857e7496f71b);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_c9d653641cd57ced5a2cf81d61768458);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_int_pos_345);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_ec3fadf0a8a06dcc340006fc8fe3a509);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_ec9473a7c651fee093c60eb5dbbd1092);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e04bf4f4865d62fb8e7741681596813);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_int_pos_391);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_3b4b58b5e921989c40d659ef22153fca);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_ec9c1208271a689759eb0a19959bc4d4);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_249d2b5e707392f5c05b054dc5b6052f);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea0bc1a9b6adfd0156c886788693ef71);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_int_pos_406);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_a161950c5df00c66e69e1a011f7c2a5e);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ffd1487f9d76a45573d0955768c28d3);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_214e9bdd47fbd7a302758956ff6107db);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_int_pos_443);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_dict_a335a1c8b691c9369d1a727457cc2910);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_d25853d5c90f6752db5e08f687c57513);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_c933c7da3a2520030ef8aa56fb6949f7);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_f4c08eb2ccba920f2d3af130dcda10e8);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_int_pos_455);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_5891c2fa91654c7b72c226b7427812ba);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_digest_6b94be1c57a245029f2263e79674195f);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_function_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_494d6e52a3ea00ae5ccb605cdcc73d35);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_int_pos_485);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b863347c298e9cdb926cbf2e1ecaaf5);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_66d27ac7bd552877bdaf7318cfea7020);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_int_pos_488);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_86ad2160d4c4b8005fd430907fe0ea86);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb70b65f7f42e82048c487fcfc21840f);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_443e5c7487d6a69e2c5907207268aef1);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc4b97404aa0e75df793fc1990a21c88);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_result_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_digest_d853e415ec0e96fe302fb566a9fd6f29);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_fb043da2e6f2c9391ddd955691288b8c_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_44b99073efc90a3ffab97e59a4f1a87d_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_af0894dd3ded144c6a518efef60213ac_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_failure_description_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_failure_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_c3a8e5223d590ce9891671570d20ee76_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_results_str_plain_is_valid_str_plain_failures_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_str_plain_is_valid_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_661f53b5cf3b70f951abb381853b8d01_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_a586a1bd1e4f6ef1ace6c77a2c93388e_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_str_plain_float_value_tuple);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_ae4fd272658f8e11e2445c1da66ede50_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_ead687b7070046cf4150fddc8d4acfa3_tuple);
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
void checkModuleConstants_textual$validation(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_failures));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_failures);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_ValidationResult));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ValidationResult);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_success));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_success);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_failure));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_failure);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_2dd8f42733a48bc1d53df16d4fd43e4f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2dd8f42733a48bc1d53df16d4fd43e4f);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_valid));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_valid);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_117fd841c497869ae89d7055b30d2654));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_117fd841c497869ae89d7055b30d2654);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_f66997df06bbb6e5bf8a16434e3f6dbe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f66997df06bbb6e5bf8a16434e3f6dbe);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3c830da83bd08aa3ba0813d97dfc01b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a3c830da83bd08aa3ba0813d97dfc01b);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_description));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_description);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_e6b83880e85ac1ca8c1d2487cacfe7b7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e6b83880e85ac1ca8c1d2487cacfe7b7);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd1d4510b42f14431d985840aa96bcd3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd1d4510b42f14431d985840aa96bcd3);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validator);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_failure_description));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_failure_description);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_describe_failure));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_describe_failure);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain___rich_repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rich_repr__);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_e727d1cc943501a1df2854a620a8133b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e727d1cc943501a1df2854a620a8133b);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_409a1a7b4828127445742821dbf1d312));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_409a1a7b4828127445742821dbf1d312);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4909497a39b22c8c0b99414b4729097));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a4909497a39b22c8c0b99414b4729097);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_Failure));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Failure);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_validator_str_plain_value_str_plain_description_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_validator_str_plain_value_str_plain_description_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_e899f975b314e334ae9784da4e442494));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e899f975b314e334ae9784da4e442494);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_failure_description_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_failure_description_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_regex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_regex);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_flags));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flags);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_fullmatch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fullmatch);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_flags_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_flags_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_Regex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Regex);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoResults));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoResults);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_failures_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_failures_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_144e60269c399b9877e4883954bcfac1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_144e60269c399b9877e4883954bcfac1);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_307f82519655986c85d6d7477773afe9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_307f82519655986c85d6d7477773afe9);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_e336b28c3dd4e668862ccf30f428441d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e336b28c3dd4e668862ccf30f428441d);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef6e126a27444a65730c4627f0f46601));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ef6e126a27444a65730c4627f0f46601);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_b681ba7d8e0075c9746177a4c26f9d65));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b681ba7d8e0075c9746177a4c26f9d65);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_minimum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_minimum);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_maximum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maximum);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_Number));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Number);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotANumber));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NotANumber);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_math));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_math);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_isnan));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isnan);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_isinf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isinf);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_range));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__validate_range);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotInRange));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NotInRange);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_b45cb9f01c0e7c1d582c9e905634cfbb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b45cb9f01c0e7c1d582c9e905634cfbb);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_a92a9f8aa6e19f0c0805526e141cbcae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a92a9f8aa6e19f0c0805526e141cbcae);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_b30c369a44e312368d00cef38c2fe25a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b30c369a44e312368d00cef38c2fe25a);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_6691261ebc709df78da950b31fda8612));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6691261ebc709df78da950b31fda8612);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d23036a9aa8de046f5f14885debcc6a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5d23036a9aa8de046f5f14885debcc6a);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c5675ddf056e3e905c04ecfb8417d95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c5675ddf056e3e905c04ecfb8417d95);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_7f0aead4232d288d8dfdff349b11a1b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7f0aead4232d288d8dfdff349b11a1b5);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_Integer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Integer);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotAnInteger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NotAnInteger);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_34951e10b8e0cf1a08e61464fe5b0114));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_34951e10b8e0cf1a08e61464fe5b0114);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_fad3abfb80f6ca75d103078043accaa8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fad3abfb80f6ca75d103078043accaa8);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_Length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Length);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_Incorrect));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Incorrect);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_e2e60caa0817fd82a8be04301fe14125));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e2e60caa0817fd82a8be04301fe14125);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b9edbe04f4bbf31cd97554a6330f855));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b9edbe04f4bbf31cd97554a6330f855);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d6199b3e9f19389317ddce2368b8e6d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d6199b3e9f19389317ddce2368b8e6d);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_a1099c01dd1e986f43df65efff1b83ad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a1099c01dd1e986f43df65efff1b83ad);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_function));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_function);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_Function));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Function);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReturnedFalse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReturnedFalse);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e6f4872c263b0b1f0e044e99770b3a9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9e6f4872c263b0b1f0e044e99770b3a9);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_URL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_URL);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidURL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidURL);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlparse);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_scheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scheme);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_netloc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_netloc);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_2aa76b747f5edc0197e5e63ff5891479));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2aa76b747f5edc0197e5e63ff5891479);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_92febbc5ca5a0308fa00c23ab6ed677f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_92febbc5ca5a0308fa00c23ab6ed677f);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABC_str_plain_abstractmethod_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ABC_str_plain_abstractmethod_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABC);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclasses);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_str_plain_field_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dataclass_str_plain_field_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclass);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_field));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_Pattern));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Pattern);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urlparse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_urlparse_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_rich));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rich);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d37d12774366da9c044e04e305c0689));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d37d12774366da9c044e04e305c0689);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_int_pos_22));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_22);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_type_list_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_list_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_factory_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_default_factory_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4cea08f0d33855a31de6ef8e45128c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d4cea08f0d33855a31de6ef8e45128c0);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_dict_82a2db770d6e5b7368dd6eca563a0201));
CHECK_OBJECT_DEEP(mod_consts.const_dict_82a2db770d6e5b7368dd6eca563a0201);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_merge));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_merge);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_9b03316c5f518e62d5c1801ad0641595));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9b03316c5f518e62d5c1801ad0641595);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_dict_4e0b39eb9f8b899cf62049ee9d8c8742));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4e0b39eb9f8b899cf62049ee9d8c8742);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_9a87f64d32ebe8cdd57d82dd946ac1ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9a87f64d32ebe8cdd57d82dd946ac1ef);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_dict_541f8a3b8fc1c5c55800daa726b82b83));
CHECK_OBJECT_DEEP(mod_consts.const_dict_541f8a3b8fc1c5c55800daa726b82b83);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_df03a6358c714d63fe4702edc8554aa3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_df03a6358c714d63fe4702edc8554aa3);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_failure_descriptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_failure_descriptions);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_a8b67279b9cf346a5e975e922d0a225c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a8b67279b9cf346a5e975e922d0a225c);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_57b2360b8be8f6bcc632805f89446534));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_57b2360b8be8f6bcc632805f89446534);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_a00db67dd6421b21697b3f585ed522ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a00db67dd6421b21697b3f585ed522ed);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_int_pos_88));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_88);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_Validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Validator);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain___post_init__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___post_init__);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_921844861e4e94182ebe69b1a4983bf9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_921844861e4e94182ebe69b1a4983bf9);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_description_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_description_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_33063c0e3d3c7888bd021a11eb41bf27));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_33063c0e3d3c7888bd021a11eb41bf27);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_int_pos_112));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_112);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_dict_c212bd30af73643296d2eccfb5a26e8d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c212bd30af73643296d2eccfb5a26e8d);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e62433a45639e028a655b20f9a14212));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8e62433a45639e028a655b20f9a14212);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_dict_98ffed80e59f5fb575806dc2bd70961d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_98ffed80e59f5fb575806dc2bd70961d);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_10f3628189506ec6418b02a384879362));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_10f3628189506ec6418b02a384879362);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_307f0b0c6db8cf5cc0b4a756f3f1abd4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_307f0b0c6db8cf5cc0b4a756f3f1abd4);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_dict_af0a7ee4eda1bf396268a812c0a8ac6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_af0a7ee4eda1bf396268a812c0a8ac6b);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_65c02cac87ec84c99f53586ce1f8da26));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_65c02cac87ec84c99f53586ce1f8da26);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_10014cbef10e074bd54aba872075d203));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_10014cbef10e074bd54aba872075d203);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_dict_066619fc82a59c3babf73b191af57341));
CHECK_OBJECT_DEEP(mod_consts.const_dict_066619fc82a59c3babf73b191af57341);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f8ee926e8ffba4ee41350e2a61bdf72));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6f8ee926e8ffba4ee41350e2a61bdf72);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_4553acc93ac17f12a477f0f7d42222e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4553acc93ac17f12a477f0f7d42222e4);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_int_pos_222));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_222);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_none_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_dict_0f3513e5fa95b98f23a50ad1addb370d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0f3513e5fa95b98f23a50ad1addb370d);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca2d4a917d3a03d715a687b414f5ca0f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca2d4a917d3a03d715a687b414f5ca0f);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_1dd962682e869c43539b3383578e629d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1dd962682e869c43539b3383578e629d);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_85bc9f4a74f106b04085468e7cd43bab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_85bc9f4a74f106b04085468e7cd43bab);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_int_pos_237));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_237);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_487815fab0e20e3f62a0a286ebe0b31f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_487815fab0e20e3f62a0a286ebe0b31f);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_14f8bf20edfa5c2c50fd156f88940e7b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_14f8bf20edfa5c2c50fd156f88940e7b);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_regex_str_plain_flags_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_regex_str_plain_flags_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_e1ee591f7bf9dd885f591586e48b70b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e1ee591f7bf9dd885f591586e48b70b6);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_int_pos_268));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_268);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_dict_6d97cb11182c3742b9c1c003e822f160));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6d97cb11182c3742b9c1c003e822f160);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_887c2b94c694da58556d0ac22a2a227a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_887c2b94c694da58556d0ac22a2a227a);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_b044462e860524b0118eef27f537940d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b044462e860524b0118eef27f537940d);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_a07b7e9d4290d6de7d42d2e7e52ce5f3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a07b7e9d4290d6de7d42d2e7e52ce5f3);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_int_pos_283));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_283);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_a6d899727c34eff052b8e750bda6a338));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a6d899727c34eff052b8e750bda6a338);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb1c44b4d67d4bfbf3fac47a6cbeff09));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb1c44b4d67d4bfbf3fac47a6cbeff09);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_int_pos_286));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_286);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb71437a81da08940dc091a8ac33bacc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb71437a81da08940dc091a8ac33bacc);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_dict_cc1d275bdf3fd44eacedf2dfcce806d6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cc1d275bdf3fd44eacedf2dfcce806d6);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_12ffbdcb46026790d66e2f71851e14f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_12ffbdcb46026790d66e2f71851e14f1);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_42eae3e456a31ff07a00029b9229d9e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_42eae3e456a31ff07a00029b9229d9e0);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_minimum_str_plain_maximum_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_minimum_str_plain_maximum_tuple);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_9a9530cbfcd669a55089995bb15bcfdb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9a9530cbfcd669a55089995bb15bcfdb);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_int_pos_342));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_342);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_185898f93c093b8f5613857e7496f71b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_185898f93c093b8f5613857e7496f71b);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_c9d653641cd57ced5a2cf81d61768458));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c9d653641cd57ced5a2cf81d61768458);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_int_pos_345));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_345);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_ec3fadf0a8a06dcc340006fc8fe3a509));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ec3fadf0a8a06dcc340006fc8fe3a509);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_ec9473a7c651fee093c60eb5dbbd1092));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ec9473a7c651fee093c60eb5dbbd1092);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e04bf4f4865d62fb8e7741681596813));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e04bf4f4865d62fb8e7741681596813);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_int_pos_391));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_391);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_3b4b58b5e921989c40d659ef22153fca));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3b4b58b5e921989c40d659ef22153fca);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_ec9c1208271a689759eb0a19959bc4d4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ec9c1208271a689759eb0a19959bc4d4);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_249d2b5e707392f5c05b054dc5b6052f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_249d2b5e707392f5c05b054dc5b6052f);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea0bc1a9b6adfd0156c886788693ef71));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea0bc1a9b6adfd0156c886788693ef71);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_int_pos_406));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_406);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_a161950c5df00c66e69e1a011f7c2a5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a161950c5df00c66e69e1a011f7c2a5e);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ffd1487f9d76a45573d0955768c28d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9ffd1487f9d76a45573d0955768c28d3);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_214e9bdd47fbd7a302758956ff6107db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_214e9bdd47fbd7a302758956ff6107db);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_int_pos_443));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_443);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_dict_a335a1c8b691c9369d1a727457cc2910));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a335a1c8b691c9369d1a727457cc2910);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_d25853d5c90f6752db5e08f687c57513));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d25853d5c90f6752db5e08f687c57513);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_c933c7da3a2520030ef8aa56fb6949f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c933c7da3a2520030ef8aa56fb6949f7);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_f4c08eb2ccba920f2d3af130dcda10e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f4c08eb2ccba920f2d3af130dcda10e8);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_int_pos_455));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_455);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_5891c2fa91654c7b72c226b7427812ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5891c2fa91654c7b72c226b7427812ba);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_digest_6b94be1c57a245029f2263e79674195f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6b94be1c57a245029f2263e79674195f);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_function_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_function_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_494d6e52a3ea00ae5ccb605cdcc73d35));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_494d6e52a3ea00ae5ccb605cdcc73d35);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_int_pos_485));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_485);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b863347c298e9cdb926cbf2e1ecaaf5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b863347c298e9cdb926cbf2e1ecaaf5);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_66d27ac7bd552877bdaf7318cfea7020));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_66d27ac7bd552877bdaf7318cfea7020);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_int_pos_488));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_488);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_86ad2160d4c4b8005fd430907fe0ea86));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86ad2160d4c4b8005fd430907fe0ea86);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb70b65f7f42e82048c487fcfc21840f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cb70b65f7f42e82048c487fcfc21840f);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_443e5c7487d6a69e2c5907207268aef1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_443e5c7487d6a69e2c5907207268aef1);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc4b97404aa0e75df793fc1990a21c88));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cc4b97404aa0e75df793fc1990a21c88);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_result_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_result_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_digest_d853e415ec0e96fe302fb566a9fd6f29));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d853e415ec0e96fe302fb566a9fd6f29);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_fb043da2e6f2c9391ddd955691288b8c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fb043da2e6f2c9391ddd955691288b8c_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_44b99073efc90a3ffab97e59a4f1a87d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_44b99073efc90a3ffab97e59a4f1a87d_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_af0894dd3ded144c6a518efef60213ac_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_af0894dd3ded144c6a518efef60213ac_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_failure_description_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_failure_description_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_failure_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_failure_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_c3a8e5223d590ce9891671570d20ee76_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c3a8e5223d590ce9891671570d20ee76_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_results_str_plain_is_valid_str_plain_failures_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_results_str_plain_is_valid_str_plain_failures_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_str_plain_is_valid_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_value_str_plain_is_valid_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_661f53b5cf3b70f951abb381853b8d01_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_661f53b5cf3b70f951abb381853b8d01_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_a586a1bd1e4f6ef1ace6c77a2c93388e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a586a1bd1e4f6ef1ace6c77a2c93388e_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_str_plain_float_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_value_str_plain_float_value_tuple);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_ae4fd272658f8e11e2445c1da66ede50_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ae4fd272658f8e11e2445c1da66ede50_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_ead687b7070046cf4150fddc8d4acfa3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ead687b7070046cf4150fddc8d4acfa3_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 17
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
static PyObject *module_var_accessor_textual$validation$ABC(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$validation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$validation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$validation->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC);
    }

    return result;
}

static PyObject *module_var_accessor_textual$validation$Failure(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$validation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$validation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Failure);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$validation->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Failure);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Failure, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Failure);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Failure, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Failure);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Failure);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Failure);
    }

    return result;
}

static PyObject *module_var_accessor_textual$validation$Function(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$validation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$validation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Function);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$validation->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Function);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Function, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Function);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Function, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Function);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Function);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Function);
    }

    return result;
}

static PyObject *module_var_accessor_textual$validation$Integer(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$validation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$validation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Integer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$validation->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Integer);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Integer, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Integer);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Integer, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Integer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Integer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Integer);
    }

    return result;
}

static PyObject *module_var_accessor_textual$validation$Length(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$validation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$validation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Length);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$validation->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Length);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Length, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Length);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Length, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Length);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Length);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Length);
    }

    return result;
}

static PyObject *module_var_accessor_textual$validation$Number(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$validation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$validation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Number);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$validation->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Number);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Number, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Number);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Number, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Number);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Number);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Number);
    }

    return result;
}

static PyObject *module_var_accessor_textual$validation$Regex(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$validation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$validation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Regex);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$validation->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Regex);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Regex, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Regex);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Regex, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Regex);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Regex);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Regex);
    }

    return result;
}

static PyObject *module_var_accessor_textual$validation$URL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$validation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$validation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_URL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$validation->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_URL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_URL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_URL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_URL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_URL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_URL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_URL);
    }

    return result;
}

static PyObject *module_var_accessor_textual$validation$ValidationResult(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$validation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$validation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_ValidationResult);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$validation->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ValidationResult);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ValidationResult, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ValidationResult);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ValidationResult, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_ValidationResult);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_ValidationResult);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ValidationResult);
    }

    return result;
}

static PyObject *module_var_accessor_textual$validation$Validator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$validation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$validation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Validator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$validation->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Validator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Validator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Validator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Validator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Validator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Validator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Validator);
    }

    return result;
}

static PyObject *module_var_accessor_textual$validation$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$validation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$validation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$validation->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$validation$abstractmethod(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$validation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$validation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$validation->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abstractmethod);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abstractmethod, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abstractmethod);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abstractmethod, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
    }

    return result;
}

static PyObject *module_var_accessor_textual$validation$dataclass(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$validation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$validation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$validation->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }

    return result;
}

static PyObject *module_var_accessor_textual$validation$field(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$validation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$validation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_field);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$validation->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_field);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_field, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_field);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_field, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_field);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_field);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_field);
    }

    return result;
}

static PyObject *module_var_accessor_textual$validation$math(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$validation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$validation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$validation->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }

    return result;
}

static PyObject *module_var_accessor_textual$validation$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$validation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$validation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$validation->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_textual$validation$urlparse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$validation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$validation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$validation->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_c172f74f52f12d0fbdbba125cede2840;
static PyCodeObject *code_objects_66b93368a6336288ff1a072d1b94917f;
static PyCodeObject *code_objects_7ec411b092249a38a944123253db7a06;
static PyCodeObject *code_objects_6f61db7ee215d62a739976b718e54268;
static PyCodeObject *code_objects_4bd6d7e3a9fb263419a0c461c9cbff69;
static PyCodeObject *code_objects_764f9d7d17ecde01118ac78a01cf70ce;
static PyCodeObject *code_objects_60fbb5ed333b76eaf9dc12d96a50a733;
static PyCodeObject *code_objects_6bfbaa27d7adea86b5937533051bc6b7;
static PyCodeObject *code_objects_7a101ef8a367e1ca0513b5232ce23ad9;
static PyCodeObject *code_objects_707dc899585ce7ad0305ba3ef8a7a2b0;
static PyCodeObject *code_objects_f2f01ed09ad3b87e4a6fb996086b2b5c;
static PyCodeObject *code_objects_fd3bec027cd12f0f528277eef395b163;
static PyCodeObject *code_objects_4c0b2f068d49a0218b3ed91854cbccbf;
static PyCodeObject *code_objects_e20e418fe785f9552ed0212dac4c8bf8;
static PyCodeObject *code_objects_6ed11fb15f68acd40bd666b700966ef4;
static PyCodeObject *code_objects_623462fda6d66770c22f196fbc93dfaa;
static PyCodeObject *code_objects_15e0d3d32d2605c7cbdcc103701b9bf1;
static PyCodeObject *code_objects_989cc688bc3b539fabd7d9637fb32256;
static PyCodeObject *code_objects_7d36ba2fe3b172d832261d33f9d0e41c;
static PyCodeObject *code_objects_7d5669cc98c57527e23898f4dcd92847;
static PyCodeObject *code_objects_48c1fef5ff870a420385eabcf7c065e8;
static PyCodeObject *code_objects_79c05dc6126bf12c0c5e3410ead46651;
static PyCodeObject *code_objects_ea253d3a7aba2335807611dfb1c2737b;
static PyCodeObject *code_objects_c11f2e1694849624d73458c2326c53f9;
static PyCodeObject *code_objects_31df4966c192885971aff06fa484794f;
static PyCodeObject *code_objects_2636c09aba4af1371ae21cae79abfc26;
static PyCodeObject *code_objects_2179c0390567c3880b1e2c2edfcbb256;
static PyCodeObject *code_objects_3df53e1d92d5ee8ec88c884baee157fa;
static PyCodeObject *code_objects_3acb8e58566911ff7f1ccd573ca037f1;
static PyCodeObject *code_objects_d569b99fef77dd501a30dfcead1d1f21;
static PyCodeObject *code_objects_df9754b4197f23d229e14c0235ef97e5;
static PyCodeObject *code_objects_d78f00e2c36504870bd1d5c9bb2be1c4;
static PyCodeObject *code_objects_8bda884817444951b1b57560ebc059b0;
static PyCodeObject *code_objects_024eeaa2405418a297fbb870455e9aa0;
static PyCodeObject *code_objects_53e7406cebc5275d51442cf06bdda7e5;
static PyCodeObject *code_objects_47be9f084d2a4e1f4d38228b989ef937;
static PyCodeObject *code_objects_961e821fad9f74344ec456dafdfed5f2;
static PyCodeObject *code_objects_de726df5967634e30454fa9381fa7c63;
static PyCodeObject *code_objects_88727624455245e600910f89b95c78d5;
static PyCodeObject *code_objects_a867c4cc6eea09a5de74648ef8ac1e98;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_cc4b97404aa0e75df793fc1990a21c88); CHECK_OBJECT(module_filename_obj);
code_objects_c172f74f52f12d0fbdbba125cede2840 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_117fd841c497869ae89d7055b30d2654, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_result_tuple, NULL, 1, 0, 0);
code_objects_66b93368a6336288ff1a072d1b94917f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_d853e415ec0e96fe302fb566a9fd6f29, mod_consts.const_str_digest_d853e415ec0e96fe302fb566a9fd6f29, NULL, NULL, 0, 0, 0);
code_objects_7ec411b092249a38a944123253db7a06 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Failure, mod_consts.const_str_plain_Failure, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6f61db7ee215d62a739976b718e54268 = MAKE_CODE_OBJECT(module_filename_obj, 443, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Function, mod_consts.const_str_plain_Function, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_4bd6d7e3a9fb263419a0c461c9cbff69 = MAKE_CODE_OBJECT(module_filename_obj, 342, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Integer, mod_consts.const_str_plain_Integer, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_764f9d7d17ecde01118ac78a01cf70ce = MAKE_CODE_OBJECT(module_filename_obj, 391, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Length, mod_consts.const_str_plain_Length, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_60fbb5ed333b76eaf9dc12d96a50a733 = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Number, mod_consts.const_str_plain_Number, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6bfbaa27d7adea86b5937533051bc6b7 = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Regex, mod_consts.const_str_plain_Regex, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7a101ef8a367e1ca0513b5232ce23ad9 = MAKE_CODE_OBJECT(module_filename_obj, 485, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_URL, mod_consts.const_str_plain_URL, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_707dc899585ce7ad0305ba3ef8a7a2b0 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ValidationResult, mod_consts.const_str_plain_ValidationResult, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f2f01ed09ad3b87e4a6fb996086b2b5c = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Validator, mod_consts.const_str_plain_Validator, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_fd3bec027cd12f0f528277eef395b163 = MAKE_CODE_OBJECT(module_filename_obj, 446, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_d25853d5c90f6752db5e08f687c57513, mod_consts.const_tuple_fb043da2e6f2c9391ddd955691288b8c_tuple, mod_consts.const_tuple_str_plain___class___tuple, 3, 0, 0);
code_objects_4c0b2f068d49a0218b3ed91854cbccbf = MAKE_CODE_OBJECT(module_filename_obj, 394, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_ec9c1208271a689759eb0a19959bc4d4, mod_consts.const_tuple_44b99073efc90a3ffab97e59a4f1a87d_tuple, mod_consts.const_tuple_str_plain___class___tuple, 4, 0, 0);
code_objects_e20e418fe785f9552ed0212dac4c8bf8 = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_887c2b94c694da58556d0ac22a2a227a, mod_consts.const_tuple_44b99073efc90a3ffab97e59a4f1a87d_tuple, mod_consts.const_tuple_str_plain___class___tuple, 4, 0, 0);
code_objects_6ed11fb15f68acd40bd666b700966ef4 = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_ca2d4a917d3a03d715a687b414f5ca0f, mod_consts.const_tuple_af0894dd3ded144c6a518efef60213ac_tuple, mod_consts.const_tuple_str_plain___class___tuple, 4, 0, 0);
code_objects_623462fda6d66770c22f196fbc93dfaa = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_8e62433a45639e028a655b20f9a14212, mod_consts.const_tuple_str_plain_self_str_plain_failure_description_tuple, NULL, 2, 0, 0);
code_objects_15e0d3d32d2605c7cbdcc103701b9bf1 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___post_init__, mod_consts.const_str_digest_921844861e4e94182ebe69b1a4983bf9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_989cc688bc3b539fabd7d9637fb32256 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___rich_repr__, mod_consts.const_str_digest_e727d1cc943501a1df2854a620a8133b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7d36ba2fe3b172d832261d33f9d0e41c = MAKE_CODE_OBJECT(module_filename_obj, 312, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__validate_range, mod_consts.const_str_digest_12ffbdcb46026790d66e2f71851e14f1, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_7d5669cc98c57527e23898f4dcd92847 = MAKE_CODE_OBJECT(module_filename_obj, 473, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_describe_failure, mod_consts.const_str_digest_6b94be1c57a245029f2263e79674195f, mod_consts.const_tuple_str_plain_self_str_plain_failure_tuple, NULL, 2, 0, 0);
code_objects_48c1fef5ff870a420385eabcf7c065e8 = MAKE_CODE_OBJECT(module_filename_obj, 369, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_describe_failure, mod_consts.const_str_digest_ec9473a7c651fee093c60eb5dbbd1092, mod_consts.const_tuple_str_plain_self_str_plain_failure_tuple, NULL, 2, 0, 0);
code_objects_79c05dc6126bf12c0c5e3410ead46651 = MAKE_CODE_OBJECT(module_filename_obj, 424, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_describe_failure, mod_consts.const_str_digest_9ffd1487f9d76a45573d0955768c28d3, mod_consts.const_tuple_str_plain_self_str_plain_failure_tuple, NULL, 2, 0, 0);
code_objects_ea253d3a7aba2335807611dfb1c2737b = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_describe_failure, mod_consts.const_str_digest_42eae3e456a31ff07a00029b9229d9e0, mod_consts.const_tuple_str_plain_self_str_plain_failure_tuple, NULL, 2, 0, 0);
code_objects_c11f2e1694849624d73458c2326c53f9 = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_describe_failure, mod_consts.const_str_digest_14f8bf20edfa5c2c50fd156f88940e7b, mod_consts.const_tuple_str_plain_self_str_plain_failure_tuple, NULL, 2, 0, 0);
code_objects_31df4966c192885971aff06fa484794f = MAKE_CODE_OBJECT(module_filename_obj, 510, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_describe_failure, mod_consts.const_str_digest_443e5c7487d6a69e2c5907207268aef1, mod_consts.const_tuple_str_plain_self_str_plain_failure_tuple, NULL, 2, 0, 0);
code_objects_2636c09aba4af1371ae21cae79abfc26 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_describe_failure, mod_consts.const_str_digest_65c02cac87ec84c99f53586ce1f8da26, mod_consts.const_tuple_str_plain_self_str_plain_failure_tuple, NULL, 2, 0, 0);
code_objects_2179c0390567c3880b1e2c2edfcbb256 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_failure, mod_consts.const_str_digest_df03a6358c714d63fe4702edc8554aa3, mod_consts.const_tuple_str_plain_failures_tuple, NULL, 1, 0, 0);
code_objects_3df53e1d92d5ee8ec88c884baee157fa = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_failure, mod_consts.const_str_digest_6f8ee926e8ffba4ee41350e2a61bdf72, mod_consts.const_tuple_c3a8e5223d590ce9891671570d20ee76_tuple, NULL, 4, 0, 0);
code_objects_3acb8e58566911ff7f1ccd573ca037f1 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_failure_descriptions, mod_consts.const_str_digest_a8b67279b9cf346a5e975e922d0a225c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d569b99fef77dd501a30dfcead1d1f21 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_valid, mod_consts.const_str_digest_57b2360b8be8f6bcc632805f89446534, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_df9754b4197f23d229e14c0235ef97e5 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_merge, mod_consts.const_str_digest_9b03316c5f518e62d5c1801ad0641595, mod_consts.const_tuple_str_plain_results_str_plain_is_valid_str_plain_failures_tuple, NULL, 1, 0, 0);
code_objects_d78f00e2c36504870bd1d5c9bb2be1c4 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_success, mod_consts.const_str_digest_9a87f64d32ebe8cdd57d82dd946ac1ef, NULL, NULL, 0, 0, 0);
code_objects_8bda884817444951b1b57560ebc059b0 = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_success, mod_consts.const_str_digest_10014cbef10e074bd54aba872075d203, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_024eeaa2405418a297fbb870455e9aa0 = MAKE_CODE_OBJECT(module_filename_obj, 458, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_validate, mod_consts.const_str_digest_5891c2fa91654c7b72c226b7427812ba, mod_consts.const_tuple_str_plain_self_str_plain_value_str_plain_is_valid_tuple, NULL, 2, 0, 0);
code_objects_53e7406cebc5275d51442cf06bdda7e5 = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_validate, mod_consts.const_str_digest_ec3fadf0a8a06dcc340006fc8fe3a509, mod_consts.const_tuple_661f53b5cf3b70f951abb381853b8d01_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_47be9f084d2a4e1f4d38228b989ef937 = MAKE_CODE_OBJECT(module_filename_obj, 409, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_validate, mod_consts.const_str_digest_a161950c5df00c66e69e1a011f7c2a5e, mod_consts.const_tuple_a586a1bd1e4f6ef1ace6c77a2c93388e_tuple, NULL, 2, 0, 0);
code_objects_961e821fad9f74344ec456dafdfed5f2 = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_validate, mod_consts.const_str_digest_eb71437a81da08940dc091a8ac33bacc, mod_consts.const_tuple_str_plain_self_str_plain_value_str_plain_float_value_tuple, NULL, 2, 0, 0);
code_objects_de726df5967634e30454fa9381fa7c63 = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_validate, mod_consts.const_str_digest_487815fab0e20e3f62a0a286ebe0b31f, mod_consts.const_tuple_ae4fd272658f8e11e2445c1da66ede50_tuple, NULL, 2, 0, 0);
code_objects_88727624455245e600910f89b95c78d5 = MAKE_CODE_OBJECT(module_filename_obj, 491, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_validate, mod_consts.const_str_digest_86ad2160d4c4b8005fd430907fe0ea86, mod_consts.const_tuple_ead687b7070046cf4150fddc8d4acfa3_tuple, NULL, 2, 0, 0);
code_objects_a867c4cc6eea09a5de74648ef8ac1e98 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_validate, mod_consts.const_str_digest_307f0b0c6db8cf5cc0b4a756f3f1abd4, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$validation$$$function__1_merge$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_textual$validation$$$function__7___rich_repr__$$$genobj__1___rich_repr__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__10_describe_failure(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__11_success(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__12_failure(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__13___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__14_validate(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__15_describe_failure(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__16___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__17_validate(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__18__validate_range(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__19_describe_failure(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__1_merge(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__20_validate(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__21_describe_failure(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__22___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__23_validate(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__24_describe_failure(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__25___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__26_validate(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__27_describe_failure(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__28_validate(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__29_describe_failure(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__2_success(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__3_failure(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__4_failure_descriptions(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__5_is_valid(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__6___post_init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__7___rich_repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__8___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$validation$$$function__9_validate(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$validation$$$function__1_merge(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_results = python_pars[0];
nuitka_bool var_is_valid = NUITKA_BOOL_UNASSIGNED;
PyObject *var_failures = NULL;
PyObject *outline_0_var_result = NULL;
PyObject *outline_0_var_failure = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__contraction_iter_0 = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_1__iter_value_1 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__1_merge;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__1_merge = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__1_merge)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__1_merge);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__1_merge == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__1_merge = MAKE_FUNCTION_FRAME(tstate, code_objects_df9754b4197f23d229e14c0235ef97e5, module_textual$validation, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__1_merge->m_type_description == NULL);
frame_frame_textual$validation$$$function__1_merge = cache_frame_frame_textual$validation$$$function__1_merge;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__1_merge);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__1_merge) == 2);

// Framed code:
{
nuitka_bool tmp_assign_source_1;
PyObject *tmp_all_arg_1;
PyObject *tmp_capi_result_1;
int tmp_truth_name_1;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_results);
tmp_iter_arg_1 = par_results;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "obo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_2;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_all_arg_1 = MAKE_GENERATOR_textual$validation$$$function__1_merge$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_capi_result_1 = BUILTIN_ALL(tstate, tmp_all_arg_1);
CHECK_OBJECT(tmp_all_arg_1);
Py_DECREF(tmp_all_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "obo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
assert(!(tmp_truth_name_1 == -1));
tmp_assign_source_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
var_is_valid = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_3;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(par_results);
tmp_iter_arg_2 = par_results;
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "obo";
    goto try_except_handler_3;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_5;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "obo";
exception_lineno = 39;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_1;
    tmp_listcomp_1__iter_value_1 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_listcomp_1__iter_value_1);
tmp_assign_source_7 = tmp_listcomp_1__iter_value_1;
{
    PyObject *old = outline_0_var_result;
    outline_0_var_result = tmp_assign_source_7;
    Py_INCREF(outline_0_var_result);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_3;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(outline_0_var_result);
tmp_expression_value_1 = outline_0_var_result;
tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_failures);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "obo";
    goto try_except_handler_4;
}
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "obo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_listcomp_1__contraction_iter_0;
    tmp_listcomp_1__contraction_iter_0 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
tmp_next_source_2 = tmp_listcomp_1__contraction_iter_0;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "obo";
exception_lineno = 39;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_10 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_failure;
    outline_0_var_failure = tmp_assign_source_10;
    Py_INCREF(outline_0_var_failure);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_failure);
tmp_append_value_1 = outline_0_var_failure;
tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "obo";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "obo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
Py_DECREF(tmp_listcomp_1__contraction_iter_0);
tmp_listcomp_1__contraction_iter_0 = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "obo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_3 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_3);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
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
Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
tmp_listcomp_1__contraction_iter_0 = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_1);
tmp_listcomp_1__iter_value_1 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
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
Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
tmp_listcomp_1__contraction_iter_0 = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_1);
tmp_listcomp_1__iter_value_1 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(outline_0_var_result);
outline_0_var_result = NULL;
Py_XDECREF(outline_0_var_failure);
outline_0_var_failure = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_result);
outline_0_var_result = NULL;
Py_XDECREF(outline_0_var_failure);
outline_0_var_failure = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 39;
goto frame_exception_exit_1;
outline_result_2:;
assert(var_failures == NULL);
var_failures = tmp_assign_source_3;
}
{
bool tmp_condition_result_1;
assert(var_is_valid != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_1 = var_is_valid == NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_textual$validation$ValidationResult(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ValidationResult);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
type_description_1 = "obo";
    goto frame_exception_exit_1;
}
frame_frame_textual$validation$$$function__1_merge->m_frame.f_lineno = 41;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_success);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "obo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
tmp_called_instance_2 = module_var_accessor_textual$validation$ValidationResult(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ValidationResult);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "obo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_failures);
tmp_args_element_value_1 = var_failures;
frame_frame_textual$validation$$$function__1_merge->m_frame.f_lineno = 43;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_failure, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "obo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__1_merge, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__1_merge->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__1_merge, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__1_merge,
    type_description_1,
    par_results,
    (int)var_is_valid,
    var_failures
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__1_merge == cache_frame_frame_textual$validation$$$function__1_merge) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__1_merge);
    cache_frame_frame_textual$validation$$$function__1_merge = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__1_merge);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
assert(var_is_valid != NUITKA_BOOL_UNASSIGNED);
var_is_valid = NUITKA_BOOL_UNASSIGNED;
CHECK_OBJECT(var_failures);
CHECK_OBJECT(var_failures);
Py_DECREF(var_failures);
var_failures = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

var_is_valid = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_failures);
var_failures = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_results);
Py_DECREF(par_results);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_results);
Py_DECREF(par_results);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct textual$validation$$$function__1_merge$$$genexpr__1_genexpr_locals {
PyObject *var_result;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *textual$validation$$$function__1_merge$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$validation$$$function__1_merge$$$genexpr__1_genexpr_locals *generator_heap = (struct textual$validation$$$function__1_merge$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_result = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_c172f74f52f12d0fbdbba125cede2840, module_textual$validation, sizeof(void *)+sizeof(void *));
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
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 38;
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
    PyObject *old = generator_heap->var_result;
    generator_heap->var_result = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_result);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_result);
tmp_expression_value_2 = generator_heap->var_result;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_is_valid);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 38;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 38;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 38;
generator_heap->type_description_1 = "No";
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
    generator_heap->var_result
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

Py_XDECREF(generator_heap->var_result);
generator_heap->var_result = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_result);
generator_heap->var_result = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$validation$$$function__1_merge$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$validation$$$function__1_merge$$$genexpr__1_genexpr_context,
        module_textual$validation,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_117fd841c497869ae89d7055b30d2654,
#endif
        code_objects_c172f74f52f12d0fbdbba125cede2840,
        closure,
        1,
#if 1
        sizeof(struct textual$validation$$$function__1_merge$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$validation$$$function__2_success(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__2_success;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__2_success = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__2_success)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__2_success);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__2_success == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__2_success = MAKE_FUNCTION_FRAME(tstate, code_objects_d78f00e2c36504870bd1d5c9bb2be1c4, module_textual$validation, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__2_success->m_type_description == NULL);
frame_frame_textual$validation$$$function__2_success = cache_frame_frame_textual$validation$$$function__2_success;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__2_success);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__2_success) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_textual$validation$ValidationResult(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ValidationResult);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto frame_exception_exit_1;
}
frame_frame_textual$validation$$$function__2_success->m_frame.f_lineno = 52;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__2_success, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__2_success->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__2_success, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__2_success,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__2_success == cache_frame_frame_textual$validation$$$function__2_success) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__2_success);
    cache_frame_frame_textual$validation$$$function__2_success = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__2_success);

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


static PyObject *impl_textual$validation$$$function__3_failure(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_failures = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__3_failure;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__3_failure = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__3_failure)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__3_failure);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__3_failure == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__3_failure = MAKE_FUNCTION_FRAME(tstate, code_objects_2179c0390567c3880b1e2c2edfcbb256, module_textual$validation, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__3_failure->m_type_description == NULL);
frame_frame_textual$validation$$$function__3_failure = cache_frame_frame_textual$validation$$$function__3_failure;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__3_failure);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__3_failure) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_textual$validation$ValidationResult(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ValidationResult);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_failures);
tmp_args_element_value_1 = par_failures;
frame_frame_textual$validation$$$function__3_failure->m_frame.f_lineno = 64;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__3_failure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__3_failure->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__3_failure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__3_failure,
    type_description_1,
    par_failures
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__3_failure == cache_frame_frame_textual$validation$$$function__3_failure) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__3_failure);
    cache_frame_frame_textual$validation$$$function__3_failure = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__3_failure);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_failures);
Py_DECREF(par_failures);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_failures);
Py_DECREF(par_failures);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__4_failure_descriptions(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *outline_0_var_failure = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__4_failure_descriptions;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__4_failure_descriptions = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__4_failure_descriptions)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__4_failure_descriptions);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__4_failure_descriptions == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__4_failure_descriptions = MAKE_FUNCTION_FRAME(tstate, code_objects_3acb8e58566911ff7f1ccd573ca037f1, module_textual$validation, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__4_failure_descriptions->m_type_description == NULL);
frame_frame_textual$validation$$$function__4_failure_descriptions = cache_frame_frame_textual$validation$$$function__4_failure_descriptions;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__4_failure_descriptions);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__4_failure_descriptions) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_failures);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "o";
exception_lineno = 75;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_failure;
    outline_0_var_failure = tmp_assign_source_4;
    Py_INCREF(outline_0_var_failure);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(outline_0_var_failure);
tmp_expression_value_2 = outline_0_var_failure;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_description);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_failure);
tmp_expression_value_3 = outline_0_var_failure;
tmp_append_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_description);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "o";
    goto try_except_handler_2;
}
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "o";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_return_value = tmp_listcomp_1__contraction;
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
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
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
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

goto try_except_handler_1;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(outline_0_var_failure);
outline_0_var_failure = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_failure);
outline_0_var_failure = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 75;
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__4_failure_descriptions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__4_failure_descriptions->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__4_failure_descriptions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__4_failure_descriptions,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__4_failure_descriptions == cache_frame_frame_textual$validation$$$function__4_failure_descriptions) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__4_failure_descriptions);
    cache_frame_frame_textual$validation$$$function__4_failure_descriptions = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__4_failure_descriptions);

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


static PyObject *impl_textual$validation$$$function__5_is_valid(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__5_is_valid;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__5_is_valid = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__5_is_valid)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__5_is_valid);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__5_is_valid == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__5_is_valid = MAKE_FUNCTION_FRAME(tstate, code_objects_d569b99fef77dd501a30dfcead1d1f21, module_textual$validation, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__5_is_valid->m_type_description == NULL);
frame_frame_textual$validation$$$function__5_is_valid = cache_frame_frame_textual$validation$$$function__5_is_valid;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__5_is_valid);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__5_is_valid) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_1;
bool tmp_tmp_return_value_cbool_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_failures);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 0;
tmp_tmp_return_value_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_return_value = (tmp_tmp_return_value_cbool_1 != false) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__5_is_valid, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__5_is_valid->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__5_is_valid, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__5_is_valid,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__5_is_valid == cache_frame_frame_textual$validation$$$function__5_is_valid) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__5_is_valid);
    cache_frame_frame_textual$validation$$$function__5_is_valid = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__5_is_valid);

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


static PyObject *impl_textual$validation$$$function__6___post_init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__6___post_init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__6___post_init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__6___post_init__)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__6___post_init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__6___post_init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__6___post_init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_15e0d3d32d2605c7cbdcc103701b9bf1, module_textual$validation, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__6___post_init__->m_type_description == NULL);
frame_frame_textual$validation$$$function__6___post_init__ = cache_frame_frame_textual$validation$$$function__6___post_init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__6___post_init__);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__6___post_init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_description);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_validator);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_failure_description);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_validator);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_failure_description);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_description, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_validator);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_textual$validation$$$function__6___post_init__->m_frame.f_lineno = 104;
tmp_assattr_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_describe_failure, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_description, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
branch_end_2:;
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__6___post_init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__6___post_init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__6___post_init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__6___post_init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__6___post_init__ == cache_frame_frame_textual$validation$$$function__6___post_init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__6___post_init__);
    cache_frame_frame_textual$validation$$$function__6___post_init__ = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__6___post_init__);

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


static PyObject *impl_textual$validation$$$function__7___rich_repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_textual$validation$$$function__7___rich_repr__$$$genobj__1___rich_repr__(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
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
struct textual$validation$$$function__7___rich_repr__$$$genobj__1___rich_repr___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *textual$validation$$$function__7___rich_repr__$$$genobj__1___rich_repr___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$validation$$$function__7___rich_repr__$$$genobj__1___rich_repr___locals *generator_heap = (struct textual$validation$$$function__7___rich_repr__$$$genobj__1___rich_repr___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_989cc688bc3b539fabd7d9637fb32256, module_textual$validation, sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 107;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_value);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 107;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 107;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 108;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_validator);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 108;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_3;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 108;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
{
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_3;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 109;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_description);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 109;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 3;
return tmp_expression_value_5;
yield_return_3:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 109;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_3 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_3);
Py_DECREF(tmp_yield_result_3);
}

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
goto function_exception_exit;
frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$validation$$$function__7___rich_repr__$$$genobj__1___rich_repr__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$validation$$$function__7___rich_repr__$$$genobj__1___rich_repr___context,
        module_textual$validation,
        mod_consts.const_str_plain___rich_repr__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_e727d1cc943501a1df2854a620a8133b,
#endif
        code_objects_989cc688bc3b539fabd7d9637fb32256,
        closure,
        1,
#if 1
        sizeof(struct textual$validation$$$function__7___rich_repr__$$$genobj__1___rich_repr___locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$validation$$$function__8___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_failure_description = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__8___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__8___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__8___init__)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__8___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__8___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__8___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_623462fda6d66770c22f196fbc93dfaa, module_textual$validation, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__8___init__->m_type_description == NULL);
frame_frame_textual$validation$$$function__8___init__ = cache_frame_frame_textual$validation$$$function__8___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__8___init__);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__8___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_failure_description);
tmp_assattr_value_1 = par_failure_description;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_failure_description, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__8___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__8___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__8___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__8___init__,
    type_description_1,
    par_self,
    par_failure_description
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__8___init__ == cache_frame_frame_textual$validation$$$function__8___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__8___init__);
    cache_frame_frame_textual$validation$$$function__8___init__ = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__8___init__);

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
CHECK_OBJECT(par_failure_description);
Py_DECREF(par_failure_description);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_failure_description);
Py_DECREF(par_failure_description);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__10_describe_failure(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_failure = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__10_describe_failure;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__10_describe_failure = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__10_describe_failure)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__10_describe_failure);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__10_describe_failure == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__10_describe_failure = MAKE_FUNCTION_FRAME(tstate, code_objects_2636c09aba4af1371ae21cae79abfc26, module_textual$validation, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__10_describe_failure->m_type_description == NULL);
frame_frame_textual$validation$$$function__10_describe_failure = cache_frame_frame_textual$validation$$$function__10_describe_failure;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__10_describe_failure);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__10_describe_failure) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_failure_description);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__10_describe_failure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__10_describe_failure->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__10_describe_failure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__10_describe_failure,
    type_description_1,
    par_self,
    par_failure
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__10_describe_failure == cache_frame_frame_textual$validation$$$function__10_describe_failure) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__10_describe_failure);
    cache_frame_frame_textual$validation$$$function__10_describe_failure = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__10_describe_failure);

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
CHECK_OBJECT(par_failure);
Py_DECREF(par_failure);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_failure);
Py_DECREF(par_failure);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__11_success(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__11_success;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__11_success = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__11_success)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__11_success);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__11_success == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__11_success = MAKE_FUNCTION_FRAME(tstate, code_objects_8bda884817444951b1b57560ebc059b0, module_textual$validation, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__11_success->m_type_description == NULL);
frame_frame_textual$validation$$$function__11_success = cache_frame_frame_textual$validation$$$function__11_success;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__11_success);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__11_success) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_textual$validation$ValidationResult(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ValidationResult);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$validation$$$function__11_success->m_frame.f_lineno = 187;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__11_success, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__11_success->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__11_success, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__11_success,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__11_success == cache_frame_frame_textual$validation$$$function__11_success) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__11_success);
    cache_frame_frame_textual$validation$$$function__11_success = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__11_success);

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


static PyObject *impl_textual$validation$$$function__12_failure(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_description = python_pars[1];
PyObject *par_value = python_pars[2];
PyObject *par_failures = python_pars[3];
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__12_failure;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__12_failure = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__12_failure)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__12_failure);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__12_failure == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__12_failure = MAKE_FUNCTION_FRAME(tstate, code_objects_3df53e1d92d5ee8ec88c884baee157fa, module_textual$validation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__12_failure->m_type_description == NULL);
frame_frame_textual$validation$$$function__12_failure = cache_frame_frame_textual$validation$$$function__12_failure;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__12_failure);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__12_failure) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_failures);
tmp_isinstance_inst_1 = par_failures;
tmp_isinstance_cls_1 = module_var_accessor_textual$validation$Failure(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Failure);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooooo";
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
PyObject *tmp_list_element_1;
CHECK_OBJECT(par_failures);
tmp_list_element_1 = par_failures;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_assign_source_1, 0, tmp_list_element_1);
{
    PyObject *old = par_failures;
    assert(old != NULL);
    par_failures = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_list_element_2;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
tmp_called_value_1 = module_var_accessor_textual$validation$ValidationResult(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ValidationResult);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_failures);
tmp_or_left_value_1 = par_failures;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_called_value_2 = module_var_accessor_textual$validation$Failure(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Failure);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 217;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_kw_call_value_0_1 = par_self;
CHECK_OBJECT(par_value);
tmp_kw_call_value_1_1 = par_value;
CHECK_OBJECT(par_description);
tmp_kw_call_value_2_1 = par_description;
frame_frame_textual$validation$$$function__12_failure->m_frame.f_lineno = 217;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_validator_str_plain_value_str_plain_description_tuple);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_or_right_value_1, 0, tmp_list_element_2);
tmp_args_element_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_args_element_value_1 = tmp_or_left_value_1;
or_end_1:;
frame_frame_textual$validation$$$function__12_failure->m_frame.f_lineno = 216;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__12_failure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__12_failure->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__12_failure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__12_failure,
    type_description_1,
    par_self,
    par_description,
    par_value,
    par_failures,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__12_failure == cache_frame_frame_textual$validation$$$function__12_failure) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__12_failure);
    cache_frame_frame_textual$validation$$$function__12_failure = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__12_failure);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_result);
tmp_return_value = var_result;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_failures);
CHECK_OBJECT(par_failures);
Py_DECREF(par_failures);
par_failures = NULL;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_failures);
CHECK_OBJECT(par_failures);
Py_DECREF(par_failures);
par_failures = NULL;
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
CHECK_OBJECT(par_description);
Py_DECREF(par_description);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_description);
Py_DECREF(par_description);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__13___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_regex = python_pars[1];
PyObject *par_flags = python_pars[2];
PyObject *par_failure_description = python_pars[3];
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__13___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__13___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__13___init__)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__13___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__13___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__13___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6ed11fb15f68acd40bd666b700966ef4, module_textual$validation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__13___init__->m_type_description == NULL);
frame_frame_textual$validation$$$function__13___init__ = cache_frame_frame_textual$validation$$$function__13___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__13___init__);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__13___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 231;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_textual$validation, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_failure_description);
tmp_kw_call_value_0_1 = par_failure_description;
frame_frame_textual$validation$$$function__13___init__->m_frame.f_lineno = 231;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_failure_description_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_regex);
tmp_assattr_value_1 = par_regex;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_regex, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_flags);
tmp_assattr_value_2 = par_flags;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_flags, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__13___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__13___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__13___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__13___init__,
    type_description_1,
    par_self,
    par_regex,
    par_flags,
    par_failure_description,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__13___init__ == cache_frame_frame_textual$validation$$$function__13___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__13___init__);
    cache_frame_frame_textual$validation$$$function__13___init__ = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__13___init__);

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
CHECK_OBJECT(par_regex);
Py_DECREF(par_regex);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);
CHECK_OBJECT(par_failure_description);
Py_DECREF(par_failure_description);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_regex);
Py_DECREF(par_regex);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);
CHECK_OBJECT(par_failure_description);
Py_DECREF(par_failure_description);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__14_validate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *var_regex = NULL;
nuitka_bool var_has_match = NUITKA_BOOL_UNASSIGNED;
PyObject *var_failures = NULL;
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__14_validate;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__14_validate = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__14_validate)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__14_validate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__14_validate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__14_validate = MAKE_FUNCTION_FRAME(tstate, code_objects_de726df5967634e30454fa9381fa7c63, module_textual$validation, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__14_validate->m_type_description == NULL);
frame_frame_textual$validation$$$function__14_validate = cache_frame_frame_textual$validation$$$function__14_validate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__14_validate);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__14_validate) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_regex);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooobo";
    goto frame_exception_exit_1;
}
assert(var_regex == NULL);
var_regex = tmp_assign_source_1;
}
{
nuitka_bool tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_textual$validation$re(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 250;
type_description_1 = "ooobo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_fullmatch);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooobo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_regex);
tmp_kw_call_arg_value_0_1 = var_regex;
CHECK_OBJECT(par_value);
tmp_kw_call_arg_value_1_1 = par_value;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_flags);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 250;
type_description_1 = "ooobo";
    goto frame_exception_exit_1;
}
frame_frame_textual$validation$$$function__14_validate->m_frame.f_lineno = 250;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooobo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_assign_source_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
var_has_match = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
assert(var_has_match != NUITKA_BOOL_UNASSIGNED);
tmp_operand_value_1 = (var_has_match == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_textual$validation$Regex(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Regex);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "ooobo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_value);
tmp_args_element_value_2 = par_value;
frame_frame_textual$validation$$$function__14_validate->m_frame.f_lineno = 252;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_NoResults,
        call_args
    );
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooobo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
assert(var_failures == NULL);
var_failures = tmp_assign_source_3;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_failure);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooobo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_failures);
tmp_kw_call_value_0_1 = var_failures;
frame_frame_textual$validation$$$function__14_validate->m_frame.f_lineno = 253;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_failures_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooobo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_textual$validation$$$function__14_validate->m_frame.f_lineno = 254;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_success);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooobo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__14_validate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__14_validate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__14_validate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__14_validate,
    type_description_1,
    par_self,
    par_value,
    var_regex,
    (int)var_has_match,
    var_failures
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__14_validate == cache_frame_frame_textual$validation$$$function__14_validate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__14_validate);
    cache_frame_frame_textual$validation$$$function__14_validate = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__14_validate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_regex);
CHECK_OBJECT(var_regex);
Py_DECREF(var_regex);
var_regex = NULL;
assert(var_has_match != NUITKA_BOOL_UNASSIGNED);
var_has_match = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_failures);
var_failures = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_regex);
var_regex = NULL;
var_has_match = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_failures);
var_failures = NULL;
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
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__15_describe_failure(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_failure = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__15_describe_failure;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__15_describe_failure = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__15_describe_failure)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__15_describe_failure);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__15_describe_failure == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__15_describe_failure = MAKE_FUNCTION_FRAME(tstate, code_objects_c11f2e1694849624d73458c2326c53f9, module_textual$validation, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__15_describe_failure->m_type_description == NULL);
frame_frame_textual$validation$$$function__15_describe_failure = cache_frame_frame_textual$validation$$$function__15_describe_failure;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__15_describe_failure);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__15_describe_failure) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_307f82519655986c85d6d7477773afe9;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_regex);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_e336b28c3dd4e668862ccf30f428441d;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_flags);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_ef6e126a27444a65730c4627f0f46601;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__15_describe_failure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__15_describe_failure->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__15_describe_failure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__15_describe_failure,
    type_description_1,
    par_self,
    par_failure
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__15_describe_failure == cache_frame_frame_textual$validation$$$function__15_describe_failure) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__15_describe_failure);
    cache_frame_frame_textual$validation$$$function__15_describe_failure = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__15_describe_failure);

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
CHECK_OBJECT(par_failure);
Py_DECREF(par_failure);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_failure);
Py_DECREF(par_failure);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__16___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_minimum = python_pars[1];
PyObject *par_maximum = python_pars[2];
PyObject *par_failure_description = python_pars[3];
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__16___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__16___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__16___init__)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__16___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__16___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__16___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e20e418fe785f9552ed0212dac4c8bf8, module_textual$validation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__16___init__->m_type_description == NULL);
frame_frame_textual$validation$$$function__16___init__ = cache_frame_frame_textual$validation$$$function__16___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__16___init__);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__16___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 277;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_textual$validation, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_failure_description);
tmp_kw_call_value_0_1 = par_failure_description;
frame_frame_textual$validation$$$function__16___init__->m_frame.f_lineno = 277;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_failure_description_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_minimum);
tmp_assattr_value_1 = par_minimum;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_minimum, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_maximum);
tmp_assattr_value_2 = par_maximum;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_maximum, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__16___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__16___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__16___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__16___init__,
    type_description_1,
    par_self,
    par_minimum,
    par_maximum,
    par_failure_description,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__16___init__ == cache_frame_frame_textual$validation$$$function__16___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__16___init__);
    cache_frame_frame_textual$validation$$$function__16___init__ = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__16___init__);

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
CHECK_OBJECT(par_minimum);
Py_DECREF(par_minimum);
CHECK_OBJECT(par_maximum);
Py_DECREF(par_maximum);
CHECK_OBJECT(par_failure_description);
Py_DECREF(par_failure_description);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_minimum);
Py_DECREF(par_minimum);
CHECK_OBJECT(par_maximum);
Py_DECREF(par_maximum);
CHECK_OBJECT(par_failure_description);
Py_DECREF(par_failure_description);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__17_validate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *var_float_value = NULL;
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__17_validate;
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
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__17_validate = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__17_validate)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__17_validate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__17_validate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__17_validate = MAKE_FUNCTION_FRAME(tstate, code_objects_961e821fad9f74344ec456dafdfed5f2, module_textual$validation, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__17_validate->m_type_description == NULL);
frame_frame_textual$validation$$$function__17_validate = cache_frame_frame_textual$validation$$$function__17_validate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__17_validate);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__17_validate) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_float_arg_1;
CHECK_OBJECT(par_value);
tmp_float_arg_1 = par_value;
tmp_assign_source_1 = TO_FLOAT(tmp_float_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(var_float_value == NULL);
var_float_value = tmp_assign_source_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__17_validate, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__17_validate, exception_keeper_lineno_1);
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
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_textual$validation$ValidationResult(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ValidationResult);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 301;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_failure);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_called_instance_1 = module_var_accessor_textual$validation$Number(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Number);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 301;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_value);
tmp_args_element_value_3 = par_value;
frame_frame_textual$validation$$$function__17_validate->m_frame.f_lineno = 301;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_NotANumber,
        call_args
    );
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 301;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_textual$validation$$$function__17_validate->m_frame.f_lineno = 301;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
goto try_return_handler_3;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 298;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$validation$$$function__17_validate->m_frame)) {
        frame_frame_textual$validation$$$function__17_validate->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
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
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
int tmp_truth_name_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
int tmp_truth_name_2;
tmp_called_instance_2 = module_var_accessor_textual$validation$math(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_float_value);
tmp_args_element_value_4 = var_float_value;
frame_frame_textual$validation$$$function__17_validate->m_frame.f_lineno = 303;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_isnan, tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 303;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_called_instance_3 = module_var_accessor_textual$validation$math(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_float_value);
tmp_args_element_value_5 = var_float_value;
frame_frame_textual$validation$$$function__17_validate->m_frame.f_lineno = 303;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_isinf, tmp_args_element_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 303;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_list_element_2;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_expression_value_2 = module_var_accessor_textual$validation$ValidationResult(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ValidationResult);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_failure);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_4 = module_var_accessor_textual$validation$Number(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Number);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 304;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_7 = par_self;
CHECK_OBJECT(par_value);
tmp_args_element_value_8 = par_value;
frame_frame_textual$validation$$$function__17_validate->m_frame.f_lineno = 304;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_list_element_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_NotANumber,
        call_args
    );
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 304;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_6, 0, tmp_list_element_2);
frame_frame_textual$validation$$$function__17_validate->m_frame.f_lineno = 304;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(par_self);
tmp_called_instance_5 = par_self;
CHECK_OBJECT(var_float_value);
tmp_args_element_value_9 = var_float_value;
frame_frame_textual$validation$$$function__17_validate->m_frame.f_lineno = 306;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain__validate_range, tmp_args_element_value_9);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooo";
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_10;
PyObject *tmp_list_element_3;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_expression_value_3 = module_var_accessor_textual$validation$ValidationResult(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ValidationResult);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 307;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_failure);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_6 = module_var_accessor_textual$validation$Number(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Number);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 308;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_11 = par_self;
CHECK_OBJECT(par_value);
tmp_args_element_value_12 = par_value;
frame_frame_textual$validation$$$function__17_validate->m_frame.f_lineno = 308;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_list_element_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_6,
        mod_consts.const_str_plain_NotInRange,
        call_args
    );
}

if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 308;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_10, 0, tmp_list_element_3);
frame_frame_textual$validation$$$function__17_validate->m_frame.f_lineno = 307;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_3:;
{
PyObject *tmp_called_instance_7;
CHECK_OBJECT(par_self);
tmp_called_instance_7 = par_self;
frame_frame_textual$validation$$$function__17_validate->m_frame.f_lineno = 310;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts.const_str_plain_success);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__17_validate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__17_validate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__17_validate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__17_validate,
    type_description_1,
    par_self,
    par_value,
    var_float_value
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__17_validate == cache_frame_frame_textual$validation$$$function__17_validate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__17_validate);
    cache_frame_frame_textual$validation$$$function__17_validate = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__17_validate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_float_value);
var_float_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_float_value);
var_float_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__18__validate_range(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__18__validate_range;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__18__validate_range = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__18__validate_range)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__18__validate_range);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__18__validate_range == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__18__validate_range = MAKE_FUNCTION_FRAME(tstate, code_objects_7d36ba2fe3b172d832261d33f9d0e41c, module_textual$validation, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__18__validate_range->m_type_description == NULL);
frame_frame_textual$validation$$$function__18__validate_range = cache_frame_frame_textual$validation$$$function__18__validate_range;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__18__validate_range);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__18__validate_range) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_minimum);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_2 = par_value;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_minimum);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_maximum);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_4 = par_value;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_maximum);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_2 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__18__validate_range, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__18__validate_range->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__18__validate_range, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__18__validate_range,
    type_description_1,
    par_self,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__18__validate_range == cache_frame_frame_textual$validation$$$function__18__validate_range) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__18__validate_range);
    cache_frame_frame_textual$validation$$$function__18__validate_range = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__18__validate_range);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__19_describe_failure(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_failure = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__19_describe_failure;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__19_describe_failure = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__19_describe_failure)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__19_describe_failure);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__19_describe_failure == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__19_describe_failure = MAKE_FUNCTION_FRAME(tstate, code_objects_ea253d3a7aba2335807611dfb1c2737b, module_textual$validation, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__19_describe_failure->m_type_description == NULL);
frame_frame_textual$validation$$$function__19_describe_failure = cache_frame_frame_textual$validation$$$function__19_describe_failure;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__19_describe_failure);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__19_describe_failure) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_failure);
tmp_isinstance_inst_1 = par_failure;
tmp_expression_value_1 = module_var_accessor_textual$validation$Number(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Number);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 329;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_NotANumber);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
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
tmp_return_value = mod_consts.const_str_digest_b30c369a44e312368d00cef38c2fe25a;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_failure);
tmp_isinstance_inst_2 = par_failure;
tmp_expression_value_2 = module_var_accessor_textual$validation$Number(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Number);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 331;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_NotInRange);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oo";
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
bool tmp_condition_result_3;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_minimum);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_maximum);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_condition_result_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_3 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_6691261ebc709df78da950b31fda8612;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_maximum);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
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
goto branch_end_3;
branch_no_3:;
{
bool tmp_condition_result_4;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_minimum);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_maximum);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_and_right_value_2 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
tmp_condition_result_4 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_4 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_5d23036a9aa8de046f5f14885debcc6a;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_minimum);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_digest_8c5675ddf056e3e905c04ecfb8417d95;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_minimum);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_7f0aead4232d288d8dfdff349b11a1b5;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_maximum);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
tmp_tuple_element_3 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
branch_end_4:;
branch_end_3:;
goto branch_end_2;
branch_no_2:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__19_describe_failure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__19_describe_failure->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__19_describe_failure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__19_describe_failure,
    type_description_1,
    par_self,
    par_failure
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__19_describe_failure == cache_frame_frame_textual$validation$$$function__19_describe_failure) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__19_describe_failure);
    cache_frame_frame_textual$validation$$$function__19_describe_failure = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__19_describe_failure);

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
CHECK_OBJECT(par_failure);
Py_DECREF(par_failure);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_failure);
Py_DECREF(par_failure);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__20_validate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *var_number_validation_result = NULL;
PyObject *var_int_value = NULL;
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__20_validate;
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
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__20_validate = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__20_validate)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__20_validate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__20_validate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__20_validate = MAKE_FUNCTION_FRAME(tstate, code_objects_53e7406cebc5275d51442cf06bdda7e5, module_textual$validation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__20_validate->m_type_description == NULL);
frame_frame_textual$validation$$$function__20_validate = cache_frame_frame_textual$validation$$$function__20_validate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__20_validate);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__20_validate) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 358;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_textual$validation, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
frame_frame_textual$validation$$$function__20_validate->m_frame.f_lineno = 358;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_validate, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
assert(var_number_validation_result == NULL);
var_number_validation_result = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_number_validation_result);
tmp_expression_value_1 = var_number_validation_result;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_is_valid);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooooc";
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
CHECK_OBJECT(var_number_validation_result);
tmp_return_value = var_number_validation_result;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_int_arg_1;
CHECK_OBJECT(par_value);
tmp_int_arg_1 = par_value;
tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
assert(var_int_value == NULL);
var_int_value = tmp_assign_source_2;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__20_validate, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__20_validate, exception_keeper_lineno_1);
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_list_element_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_2 = module_var_accessor_textual$validation$ValidationResult(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ValidationResult);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 366;
type_description_1 = "ooooc";
    goto try_except_handler_3;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_failure);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "ooooc";
    goto try_except_handler_3;
}
tmp_called_instance_2 = module_var_accessor_textual$validation$Integer(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Integer);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 366;
type_description_1 = "ooooc";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_3 = par_self;
CHECK_OBJECT(par_value);
tmp_args_element_value_4 = par_value;
frame_frame_textual$validation$$$function__20_validate->m_frame.f_lineno = 366;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_NotAnInteger,
        call_args
    );
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 366;
type_description_1 = "ooooc";
    goto try_except_handler_3;
}
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_1);
frame_frame_textual$validation$$$function__20_validate->m_frame.f_lineno = 366;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "ooooc";
    goto try_except_handler_3;
}
goto try_return_handler_3;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 363;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$validation$$$function__20_validate->m_frame)) {
        frame_frame_textual$validation$$$function__20_validate->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooc";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
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
{
PyObject *tmp_called_instance_3;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
frame_frame_textual$validation$$$function__20_validate->m_frame.f_lineno = 367;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_success);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__20_validate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__20_validate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__20_validate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__20_validate,
    type_description_1,
    par_self,
    par_value,
    var_number_validation_result,
    var_int_value,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__20_validate == cache_frame_frame_textual$validation$$$function__20_validate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__20_validate);
    cache_frame_frame_textual$validation$$$function__20_validate = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__20_validate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_number_validation_result);
CHECK_OBJECT(var_number_validation_result);
Py_DECREF(var_number_validation_result);
var_number_validation_result = NULL;
Py_XDECREF(var_int_value);
var_int_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_number_validation_result);
var_number_validation_result = NULL;
Py_XDECREF(var_int_value);
var_int_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__21_describe_failure(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_failure = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__21_describe_failure;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__21_describe_failure = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__21_describe_failure)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__21_describe_failure);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__21_describe_failure == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__21_describe_failure = MAKE_FUNCTION_FRAME(tstate, code_objects_48c1fef5ff870a420385eabcf7c065e8, module_textual$validation, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__21_describe_failure->m_type_description == NULL);
frame_frame_textual$validation$$$function__21_describe_failure = cache_frame_frame_textual$validation$$$function__21_describe_failure;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__21_describe_failure);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__21_describe_failure) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_failure);
tmp_isinstance_inst_1 = par_failure;
tmp_expression_value_1 = module_var_accessor_textual$validation$Integer(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Integer);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 378;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_NotANumber);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
tmp_expression_value_2 = module_var_accessor_textual$validation$Integer(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Integer);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 378;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_NotAnInteger);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_isinstance_cls_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
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
tmp_return_value = mod_consts.const_str_digest_fad3abfb80f6ca75d103078043accaa8;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_failure);
tmp_isinstance_inst_2 = par_failure;
tmp_expression_value_3 = module_var_accessor_textual$validation$Integer(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Integer);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 380;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_NotInRange);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "oo";
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
bool tmp_condition_result_3;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_minimum);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_maximum);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_condition_result_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_3 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_6691261ebc709df78da950b31fda8612;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_maximum);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
goto branch_end_3;
branch_no_3:;
{
bool tmp_condition_result_4;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_minimum);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_maximum);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_and_right_value_2 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
tmp_condition_result_4 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_4 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_digest_5d23036a9aa8de046f5f14885debcc6a;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_minimum);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = mod_consts.const_str_digest_8c5675ddf056e3e905c04ecfb8417d95;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_minimum);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oo";
    goto tuple_build_exception_4;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_7f0aead4232d288d8dfdff349b11a1b5;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_maximum);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oo";
    goto tuple_build_exception_4;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_4);
tmp_tuple_element_4 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
branch_end_4:;
branch_end_3:;
goto branch_end_2;
branch_no_2:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__21_describe_failure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__21_describe_failure->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__21_describe_failure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__21_describe_failure,
    type_description_1,
    par_self,
    par_failure
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__21_describe_failure == cache_frame_frame_textual$validation$$$function__21_describe_failure) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__21_describe_failure);
    cache_frame_frame_textual$validation$$$function__21_describe_failure = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__21_describe_failure);

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
CHECK_OBJECT(par_failure);
Py_DECREF(par_failure);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_failure);
Py_DECREF(par_failure);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__22___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_minimum = python_pars[1];
PyObject *par_maximum = python_pars[2];
PyObject *par_failure_description = python_pars[3];
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__22___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__22___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__22___init__)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__22___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__22___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__22___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4c0b2f068d49a0218b3ed91854cbccbf, module_textual$validation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__22___init__->m_type_description == NULL);
frame_frame_textual$validation$$$function__22___init__ = cache_frame_frame_textual$validation$$$function__22___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__22___init__);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__22___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 400;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_textual$validation, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_failure_description);
tmp_kw_call_value_0_1 = par_failure_description;
frame_frame_textual$validation$$$function__22___init__->m_frame.f_lineno = 400;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_failure_description_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_minimum);
tmp_assattr_value_1 = par_minimum;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_minimum, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_maximum);
tmp_assattr_value_2 = par_maximum;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_maximum, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__22___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__22___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__22___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__22___init__,
    type_description_1,
    par_self,
    par_minimum,
    par_maximum,
    par_failure_description,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__22___init__ == cache_frame_frame_textual$validation$$$function__22___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__22___init__);
    cache_frame_frame_textual$validation$$$function__22___init__ = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__22___init__);

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
CHECK_OBJECT(par_minimum);
Py_DECREF(par_minimum);
CHECK_OBJECT(par_maximum);
Py_DECREF(par_maximum);
CHECK_OBJECT(par_failure_description);
Py_DECREF(par_failure_description);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_minimum);
Py_DECREF(par_minimum);
CHECK_OBJECT(par_maximum);
Py_DECREF(par_maximum);
CHECK_OBJECT(par_failure_description);
Py_DECREF(par_failure_description);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__23_validate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *var_too_short = NULL;
PyObject *var_too_long = NULL;
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__23_validate;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__23_validate = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__23_validate)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__23_validate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__23_validate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__23_validate = MAKE_FUNCTION_FRAME(tstate, code_objects_47be9f084d2a4e1f4d38228b989ef937, module_textual$validation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__23_validate->m_type_description == NULL);
frame_frame_textual$validation$$$function__23_validate = cache_frame_frame_textual$validation$$$function__23_validate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__23_validate);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__23_validate) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_minimum);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_value);
tmp_len_arg_1 = par_value;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_minimum);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 418;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = RICH_COMPARE_LT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
tmp_assign_source_1 = tmp_and_left_value_1;
and_end_1:;
assert(var_too_short == NULL);
var_too_short = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_len_arg_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_maximum);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_value);
tmp_len_arg_2 = par_value;
tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_maximum);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 419;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = RICH_COMPARE_GT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_and_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
Py_INCREF(tmp_and_left_value_2);
tmp_assign_source_2 = tmp_and_left_value_2;
and_end_2:;
assert(var_too_long == NULL);
var_too_long = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
int tmp_truth_name_1;
int tmp_truth_name_2;
CHECK_OBJECT(var_too_short);
tmp_truth_name_1 = CHECK_IF_TRUE(var_too_short);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_too_long);
tmp_truth_name_2 = CHECK_IF_TRUE(var_too_long);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_5 = module_var_accessor_textual$validation$ValidationResult(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ValidationResult);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 421;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_failure);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_textual$validation$Length(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Length);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 421;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_value);
tmp_args_element_value_3 = par_value;
frame_frame_textual$validation$$$function__23_validate->m_frame.f_lineno = 421;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_Incorrect,
        call_args
    );
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 421;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_textual$validation$$$function__23_validate->m_frame.f_lineno = 421;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_textual$validation$$$function__23_validate->m_frame.f_lineno = 422;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_success);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__23_validate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__23_validate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__23_validate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__23_validate,
    type_description_1,
    par_self,
    par_value,
    var_too_short,
    var_too_long
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__23_validate == cache_frame_frame_textual$validation$$$function__23_validate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__23_validate);
    cache_frame_frame_textual$validation$$$function__23_validate = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__23_validate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_too_short);
CHECK_OBJECT(var_too_short);
Py_DECREF(var_too_short);
var_too_short = NULL;
CHECK_OBJECT(var_too_long);
CHECK_OBJECT(var_too_long);
Py_DECREF(var_too_long);
var_too_long = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_too_short);
var_too_short = NULL;
Py_XDECREF(var_too_long);
var_too_long = NULL;
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
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__24_describe_failure(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_failure = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__24_describe_failure;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__24_describe_failure = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__24_describe_failure)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__24_describe_failure);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__24_describe_failure == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__24_describe_failure = MAKE_FUNCTION_FRAME(tstate, code_objects_79c05dc6126bf12c0c5e3410ead46651, module_textual$validation, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__24_describe_failure->m_type_description == NULL);
frame_frame_textual$validation$$$function__24_describe_failure = cache_frame_frame_textual$validation$$$function__24_describe_failure;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__24_describe_failure);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__24_describe_failure) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_failure);
tmp_isinstance_inst_1 = par_failure;
tmp_expression_value_1 = module_var_accessor_textual$validation$Length(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Length);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 433;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Incorrect);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
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
{
bool tmp_condition_result_2;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_minimum);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_maximum);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_8b9edbe04f4bbf31cd97554a6330f855;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_maximum);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_0d6199b3e9f19389317ddce2368b8e6d;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
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
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_minimum);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_maximum);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_and_right_value_2 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
tmp_condition_result_3 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_3 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_a1099c01dd1e986f43df65efff1b83ad;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_minimum);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_0d6199b3e9f19389317ddce2368b8e6d;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_digest_8c5675ddf056e3e905c04ecfb8417d95;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_minimum);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_7f0aead4232d288d8dfdff349b11a1b5;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_maximum);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_0d6199b3e9f19389317ddce2368b8e6d;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
branch_end_3:;
branch_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__24_describe_failure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__24_describe_failure->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__24_describe_failure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__24_describe_failure,
    type_description_1,
    par_self,
    par_failure
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__24_describe_failure == cache_frame_frame_textual$validation$$$function__24_describe_failure) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__24_describe_failure);
    cache_frame_frame_textual$validation$$$function__24_describe_failure = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__24_describe_failure);

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
CHECK_OBJECT(par_failure);
Py_DECREF(par_failure);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_failure);
Py_DECREF(par_failure);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__25___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_function = python_pars[1];
PyObject *par_failure_description = python_pars[2];
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__25___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__25___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__25___init__)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__25___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__25___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__25___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_fd3bec027cd12f0f528277eef395b163, module_textual$validation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__25___init__->m_type_description == NULL);
frame_frame_textual$validation$$$function__25___init__ = cache_frame_frame_textual$validation$$$function__25___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__25___init__);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__25___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 451;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_textual$validation, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_failure_description);
tmp_kw_call_value_0_1 = par_failure_description;
frame_frame_textual$validation$$$function__25___init__->m_frame.f_lineno = 451;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_failure_description_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_function);
tmp_assattr_value_1 = par_function;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_function, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__25___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__25___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__25___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__25___init__,
    type_description_1,
    par_self,
    par_function,
    par_failure_description,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__25___init__ == cache_frame_frame_textual$validation$$$function__25___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__25___init__);
    cache_frame_frame_textual$validation$$$function__25___init__ = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__25___init__);

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
CHECK_OBJECT(par_function);
Py_DECREF(par_function);
CHECK_OBJECT(par_failure_description);
Py_DECREF(par_failure_description);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_function);
Py_DECREF(par_function);
CHECK_OBJECT(par_failure_description);
Py_DECREF(par_failure_description);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__26_validate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *var_is_valid = NULL;
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__26_validate;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__26_validate = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__26_validate)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__26_validate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__26_validate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__26_validate = MAKE_FUNCTION_FRAME(tstate, code_objects_024eeaa2405418a297fbb870455e9aa0, module_textual$validation, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__26_validate->m_type_description == NULL);
frame_frame_textual$validation$$$function__26_validate = cache_frame_frame_textual$validation$$$function__26_validate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__26_validate);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__26_validate) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
frame_frame_textual$validation$$$function__26_validate->m_frame.f_lineno = 468;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_function, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_is_valid == NULL);
var_is_valid = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_is_valid);
tmp_truth_name_1 = CHECK_IF_TRUE(var_is_valid);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
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
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_textual$validation$$$function__26_validate->m_frame.f_lineno = 470;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_success);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_failure);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_3 = module_var_accessor_textual$validation$Function(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Function);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 471;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_value);
tmp_args_element_value_3 = par_value;
frame_frame_textual$validation$$$function__26_validate->m_frame.f_lineno = 471;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_kw_call_value_0_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_ReturnedFalse,
        call_args
    );
}

if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 471;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$validation$$$function__26_validate->m_frame.f_lineno = 471;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_failures_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__26_validate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__26_validate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__26_validate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__26_validate,
    type_description_1,
    par_self,
    par_value,
    var_is_valid
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__26_validate == cache_frame_frame_textual$validation$$$function__26_validate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__26_validate);
    cache_frame_frame_textual$validation$$$function__26_validate = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__26_validate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_is_valid);
CHECK_OBJECT(var_is_valid);
Py_DECREF(var_is_valid);
var_is_valid = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_is_valid);
var_is_valid = NULL;
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
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__27_describe_failure(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_failure = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__27_describe_failure;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__27_describe_failure = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__27_describe_failure)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__27_describe_failure);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__27_describe_failure == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__27_describe_failure = MAKE_FUNCTION_FRAME(tstate, code_objects_7d5669cc98c57527e23898f4dcd92847, module_textual$validation, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__27_describe_failure->m_type_description == NULL);
frame_frame_textual$validation$$$function__27_describe_failure = cache_frame_frame_textual$validation$$$function__27_describe_failure;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__27_describe_failure);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__27_describe_failure) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_failure_description);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__27_describe_failure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__27_describe_failure->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__27_describe_failure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__27_describe_failure,
    type_description_1,
    par_self,
    par_failure
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__27_describe_failure == cache_frame_frame_textual$validation$$$function__27_describe_failure) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__27_describe_failure);
    cache_frame_frame_textual$validation$$$function__27_describe_failure = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__27_describe_failure);

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
CHECK_OBJECT(par_failure);
Py_DECREF(par_failure);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_failure);
Py_DECREF(par_failure);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$validation$$$function__28_validate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *var_invalid_url = NULL;
PyObject *var_parsed_url = NULL;
struct Nuitka_FrameObject *frame_frame_textual$validation$$$function__28_validate;
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
static struct Nuitka_FrameObject *cache_frame_frame_textual$validation$$$function__28_validate = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$validation$$$function__28_validate)) {
    Py_XDECREF(cache_frame_frame_textual$validation$$$function__28_validate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$validation$$$function__28_validate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$validation$$$function__28_validate = MAKE_FUNCTION_FRAME(tstate, code_objects_88727624455245e600910f89b95c78d5, module_textual$validation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$validation$$$function__28_validate->m_type_description == NULL);
frame_frame_textual$validation$$$function__28_validate = cache_frame_frame_textual$validation$$$function__28_validate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$function__28_validate);
assert(Py_REFCNT(frame_frame_textual$validation$$$function__28_validate) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_textual$validation$ValidationResult(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ValidationResult);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 500;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_failure);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_textual$validation$URL(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_URL);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 500;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_value);
tmp_args_element_value_3 = par_value;
frame_frame_textual$validation$$$function__28_validate->m_frame.f_lineno = 500;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_InvalidURL,
        call_args
    );
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 500;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_textual$validation$$$function__28_validate->m_frame.f_lineno = 500;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_invalid_url == NULL);
var_invalid_url = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_textual$validation$urlparse(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlparse);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 502;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_4 = par_value;
frame_frame_textual$validation$$$function__28_validate->m_frame.f_lineno = 502;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 502;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_parsed_url == NULL);
var_parsed_url = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_all_arg_1;
PyObject *tmp_list_element_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_parsed_url);
tmp_expression_value_2 = var_parsed_url;
tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_scheme);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_all_arg_1 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyList_SET_ITEM(tmp_all_arg_1, 0, tmp_list_element_2);
CHECK_OBJECT(var_parsed_url);
tmp_expression_value_3 = var_parsed_url;
tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_netloc);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_1 = "oooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_all_arg_1, 1, tmp_list_element_2);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_all_arg_1);
goto try_except_handler_2;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_operand_value_1 = BUILTIN_ALL(tstate, tmp_all_arg_1);
CHECK_OBJECT(tmp_all_arg_1);
Py_DECREF(tmp_all_arg_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(var_invalid_url);
tmp_return_value = var_invalid_url;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__28_validate, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__28_validate, exception_keeper_lineno_1);
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
CHECK_OBJECT(var_invalid_url);
tmp_return_value = var_invalid_url;
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 501;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$validation$$$function__28_validate->m_frame)) {
        frame_frame_textual$validation$$$function__28_validate->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
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
{
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_textual$validation$$$function__28_validate->m_frame.f_lineno = 508;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_success);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 508;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$function__28_validate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$function__28_validate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$function__28_validate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$function__28_validate,
    type_description_1,
    par_self,
    par_value,
    var_invalid_url,
    var_parsed_url
);


// Release cached frame if used for exception.
if (frame_frame_textual$validation$$$function__28_validate == cache_frame_frame_textual$validation$$$function__28_validate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$validation$$$function__28_validate);
    cache_frame_frame_textual$validation$$$function__28_validate = NULL;
}

assertFrameObject(frame_frame_textual$validation$$$function__28_validate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_invalid_url);
CHECK_OBJECT(var_invalid_url);
Py_DECREF(var_invalid_url);
var_invalid_url = NULL;
Py_XDECREF(var_parsed_url);
var_parsed_url = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_invalid_url);
var_invalid_url = NULL;
Py_XDECREF(var_parsed_url);
var_parsed_url = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__10_describe_failure(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__10_describe_failure,
        mod_consts.const_str_plain_describe_failure,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_65c02cac87ec84c99f53586ce1f8da26,
#endif
        code_objects_2636c09aba4af1371ae21cae79abfc26,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_409a1a7b4828127445742821dbf1d312,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__11_success(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__11_success,
        mod_consts.const_str_plain_success,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_10014cbef10e074bd54aba872075d203,
#endif
        code_objects_8bda884817444951b1b57560ebc059b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_a4909497a39b22c8c0b99414b4729097,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__12_failure(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__12_failure,
        mod_consts.const_str_plain_failure,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6f8ee926e8ffba4ee41350e2a61bdf72,
#endif
        code_objects_3df53e1d92d5ee8ec88c884baee157fa,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_e899f975b314e334ae9784da4e442494,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__13___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__13___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ca2d4a917d3a03d715a687b414f5ca0f,
#endif
        code_objects_6ed11fb15f68acd40bd666b700966ef4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__14_validate(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__14_validate,
        mod_consts.const_str_plain_validate,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_487815fab0e20e3f62a0a286ebe0b31f,
#endif
        code_objects_de726df5967634e30454fa9381fa7c63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_144e60269c399b9877e4883954bcfac1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__15_describe_failure(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__15_describe_failure,
        mod_consts.const_str_plain_describe_failure,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_14f8bf20edfa5c2c50fd156f88940e7b,
#endif
        code_objects_c11f2e1694849624d73458c2326c53f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_b681ba7d8e0075c9746177a4c26f9d65,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__16___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__16___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_887c2b94c694da58556d0ac22a2a227a,
#endif
        code_objects_e20e418fe785f9552ed0212dac4c8bf8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__17_validate(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__17_validate,
        mod_consts.const_str_plain_validate,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_eb71437a81da08940dc091a8ac33bacc,
#endif
        code_objects_961e821fad9f74344ec456dafdfed5f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_b45cb9f01c0e7c1d582c9e905634cfbb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__18__validate_range(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__18__validate_range,
        mod_consts.const_str_plain__validate_range,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_12ffbdcb46026790d66e2f71851e14f1,
#endif
        code_objects_7d36ba2fe3b172d832261d33f9d0e41c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_a92a9f8aa6e19f0c0805526e141cbcae,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__19_describe_failure(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__19_describe_failure,
        mod_consts.const_str_plain_describe_failure,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_42eae3e456a31ff07a00029b9229d9e0,
#endif
        code_objects_ea253d3a7aba2335807611dfb1c2737b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_b681ba7d8e0075c9746177a4c26f9d65,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__1_merge(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__1_merge,
        mod_consts.const_str_plain_merge,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9b03316c5f518e62d5c1801ad0641595,
#endif
        code_objects_df9754b4197f23d229e14c0235ef97e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_2dd8f42733a48bc1d53df16d4fd43e4f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__20_validate(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__20_validate,
        mod_consts.const_str_plain_validate,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ec3fadf0a8a06dcc340006fc8fe3a509,
#endif
        code_objects_53e7406cebc5275d51442cf06bdda7e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_34951e10b8e0cf1a08e61464fe5b0114,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__21_describe_failure(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__21_describe_failure,
        mod_consts.const_str_plain_describe_failure,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ec9473a7c651fee093c60eb5dbbd1092,
#endif
        code_objects_48c1fef5ff870a420385eabcf7c065e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_b681ba7d8e0075c9746177a4c26f9d65,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__22___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__22___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ec9c1208271a689759eb0a19959bc4d4,
#endif
        code_objects_4c0b2f068d49a0218b3ed91854cbccbf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__23_validate(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__23_validate,
        mod_consts.const_str_plain_validate,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a161950c5df00c66e69e1a011f7c2a5e,
#endif
        code_objects_47be9f084d2a4e1f4d38228b989ef937,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_e2e60caa0817fd82a8be04301fe14125,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__24_describe_failure(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__24_describe_failure,
        mod_consts.const_str_plain_describe_failure,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9ffd1487f9d76a45573d0955768c28d3,
#endif
        code_objects_79c05dc6126bf12c0c5e3410ead46651,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_b681ba7d8e0075c9746177a4c26f9d65,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__25___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__25___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d25853d5c90f6752db5e08f687c57513,
#endif
        code_objects_fd3bec027cd12f0f528277eef395b163,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__26_validate(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__26_validate,
        mod_consts.const_str_plain_validate,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5891c2fa91654c7b72c226b7427812ba,
#endif
        code_objects_024eeaa2405418a297fbb870455e9aa0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_9e6f4872c263b0b1f0e044e99770b3a9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__27_describe_failure(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__27_describe_failure,
        mod_consts.const_str_plain_describe_failure,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6b94be1c57a245029f2263e79674195f,
#endif
        code_objects_7d5669cc98c57527e23898f4dcd92847,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_b681ba7d8e0075c9746177a4c26f9d65,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__28_validate(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__28_validate,
        mod_consts.const_str_plain_validate,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_86ad2160d4c4b8005fd430907fe0ea86,
#endif
        code_objects_88727624455245e600910f89b95c78d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_2aa76b747f5edc0197e5e63ff5891479,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__29_describe_failure(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_describe_failure,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_443e5c7487d6a69e2c5907207268aef1,
#endif
        code_objects_31df4966c192885971aff06fa484794f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_b681ba7d8e0075c9746177a4c26f9d65,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnGeneric(result, mod_consts.const_str_digest_cb70b65f7f42e82048c487fcfc21840f);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__2_success(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__2_success,
        mod_consts.const_str_plain_success,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9a87f64d32ebe8cdd57d82dd946ac1ef,
#endif
        code_objects_d78f00e2c36504870bd1d5c9bb2be1c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_f66997df06bbb6e5bf8a16434e3f6dbe,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__3_failure(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__3_failure,
        mod_consts.const_str_plain_failure,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_df03a6358c714d63fe4702edc8554aa3,
#endif
        code_objects_2179c0390567c3880b1e2c2edfcbb256,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_a3c830da83bd08aa3ba0813d97dfc01b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__4_failure_descriptions(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__4_failure_descriptions,
        mod_consts.const_str_plain_failure_descriptions,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a8b67279b9cf346a5e975e922d0a225c,
#endif
        code_objects_3acb8e58566911ff7f1ccd573ca037f1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_e6b83880e85ac1ca8c1d2487cacfe7b7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__5_is_valid(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__5_is_valid,
        mod_consts.const_str_plain_is_valid,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_57b2360b8be8f6bcc632805f89446534,
#endif
        code_objects_d569b99fef77dd501a30dfcead1d1f21,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_dd1d4510b42f14431d985840aa96bcd3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__6___post_init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__6___post_init__,
        mod_consts.const_str_plain___post_init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_921844861e4e94182ebe69b1a4983bf9,
#endif
        code_objects_15e0d3d32d2605c7cbdcc103701b9bf1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__7___rich_repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__7___rich_repr__,
        mod_consts.const_str_plain___rich_repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e727d1cc943501a1df2854a620a8133b,
#endif
        code_objects_989cc688bc3b539fabd7d9637fb32256,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__8___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$validation$$$function__8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8e62433a45639e028a655b20f9a14212,
#endif
        code_objects_623462fda6d66770c22f196fbc93dfaa,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$validation$$$function__9_validate(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_validate,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_307f0b0c6db8cf5cc0b4a756f3f1abd4,
#endif
        code_objects_a867c4cc6eea09a5de74648ef8ac1e98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$validation,
        mod_consts.const_str_digest_10f3628189506ec6418b02a384879362,
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

static function_impl_code const function_table_textual$validation[] = {
impl_textual$validation$$$function__1_merge,
impl_textual$validation$$$function__2_success,
impl_textual$validation$$$function__3_failure,
impl_textual$validation$$$function__4_failure_descriptions,
impl_textual$validation$$$function__5_is_valid,
impl_textual$validation$$$function__6___post_init__,
impl_textual$validation$$$function__7___rich_repr__,
impl_textual$validation$$$function__8___init__,
impl_textual$validation$$$function__10_describe_failure,
impl_textual$validation$$$function__11_success,
impl_textual$validation$$$function__12_failure,
impl_textual$validation$$$function__13___init__,
impl_textual$validation$$$function__14_validate,
impl_textual$validation$$$function__15_describe_failure,
impl_textual$validation$$$function__16___init__,
impl_textual$validation$$$function__17_validate,
impl_textual$validation$$$function__18__validate_range,
impl_textual$validation$$$function__19_describe_failure,
impl_textual$validation$$$function__20_validate,
impl_textual$validation$$$function__21_describe_failure,
impl_textual$validation$$$function__22___init__,
impl_textual$validation$$$function__23_validate,
impl_textual$validation$$$function__24_describe_failure,
impl_textual$validation$$$function__25___init__,
impl_textual$validation$$$function__26_validate,
impl_textual$validation$$$function__27_describe_failure,
impl_textual$validation$$$function__28_validate,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$validation);
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
        module_textual$validation,
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
        function_table_textual$validation,
        sizeof(function_table_textual$validation) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.validation";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$validation(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$validation");

    // Store the module for future use.
    module_textual$validation = module;

    moduledict_textual$validation = MODULE_DICT(module_textual$validation);

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
        PRINT_STRING("textual$validation: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$validation: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$validation: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.validation" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$validation\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$validation,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$validation,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$validation,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$validation,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$validation,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$validation);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$validation, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$validation, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$validation, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$validation);
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

        UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
struct Nuitka_CellObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
struct Nuitka_CellObject *outline_5_var___class__ = NULL;
PyObject *outline_6_var___class__ = NULL;
PyObject *outline_7_var___class__ = NULL;
struct Nuitka_CellObject *outline_8_var___class__ = NULL;
PyObject *outline_9_var___class__ = NULL;
struct Nuitka_CellObject *outline_10_var___class__ = NULL;
PyObject *outline_11_var___class__ = NULL;
struct Nuitka_CellObject *outline_12_var___class__ = NULL;
PyObject *outline_13_var___class__ = NULL;
PyObject *outline_14_var___class__ = NULL;
PyObject *outline_15_var___class__ = NULL;
PyObject *tmp_Function$class_container$class_creation_1__bases = NULL;
PyObject *tmp_Function$class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_Function$class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_Function$class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_Function$class_container$class_creation_1__prepared = NULL;
PyObject *tmp_Integer$class_container$class_creation_1__bases = NULL;
PyObject *tmp_Integer$class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_Integer$class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_Integer$class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_Integer$class_container$class_creation_1__prepared = NULL;
PyObject *tmp_Length$class_container$class_creation_1__bases = NULL;
PyObject *tmp_Length$class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_Length$class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_Length$class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_Length$class_container$class_creation_1__prepared = NULL;
PyObject *tmp_Number$class_container$class_creation_1__bases = NULL;
PyObject *tmp_Number$class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_Number$class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_Number$class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_Number$class_container$class_creation_1__prepared = NULL;
PyObject *tmp_Number$class_container$class_creation_2__bases = NULL;
PyObject *tmp_Number$class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_Number$class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_Number$class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_Number$class_container$class_creation_2__prepared = NULL;
PyObject *tmp_Regex$class_container$class_creation_1__bases = NULL;
PyObject *tmp_Regex$class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_Regex$class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_Regex$class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_Regex$class_container$class_creation_1__prepared = NULL;
PyObject *tmp_URL$class_container$class_creation_1__bases = NULL;
PyObject *tmp_URL$class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_URL$class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_URL$class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_URL$class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
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
PyObject *tmp_class_container$class_creation_9__bases = NULL;
PyObject *tmp_class_container$class_creation_9__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_9__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_9__metaclass = NULL;
PyObject *tmp_class_container$class_creation_9__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$validation;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_textual$validation$$$class__1_ValidationResult_22 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$validation$$$class__1_ValidationResult_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_textual$validation$$$class__2_Failure_88 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$validation$$$class__2_Failure_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
int tmp_res;
PyObject *locals_textual$validation$$$class__3_Validator_112 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$validation$$$class__3_Validator_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_textual$validation$$$class__4_Regex_222 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$validation$$$class__4_Regex_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
PyObject *locals_textual$validation$$$class__5_NoResults_237 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
PyObject *locals_textual$validation$$$class__6_Number_268 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$validation$$$class__6_Number_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
PyObject *locals_textual$validation$$$class__7_NotANumber_283 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
PyObject *locals_textual$validation$$$class__8_NotInRange_286 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
PyObject *locals_textual$validation$$$class__9_Integer_342 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$validation$$$class__9_Integer_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
PyObject *locals_textual$validation$$$class__10_NotAnInteger_345 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
PyObject *locals_textual$validation$$$class__11_Length_391 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$validation$$$class__11_Length_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
PyObject *locals_textual$validation$$$class__12_Incorrect_406 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_36;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_37;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_38;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_39;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
PyObject *locals_textual$validation$$$class__13_Function_443 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$validation$$$class__13_Function_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
PyObject *locals_textual$validation$$$class__14_ReturnedFalse_455 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_40;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_41;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_42;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_43;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_44;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_45;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
PyObject *locals_textual$validation$$$class__15_URL_485 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$validation$$$class__15_URL_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
PyObject *locals_textual$validation$$$class__16_InvalidURL_488 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_46;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_47;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_48;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_49;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_50;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_51;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_92febbc5ca5a0308fa00c23ab6ed677f;
UPDATE_STRING_DICT0(moduledict_textual$validation, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$validation, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$validation = MAKE_MODULE_FRAME(code_objects_66b93368a6336288ff1a072d1b94917f, module_textual$validation);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation);
assert(Py_REFCNT(frame_frame_textual$validation) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$validation$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$validation$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$validation, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_math;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$validation;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_textual$validation->m_frame.f_lineno = 11;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_math, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$validation;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_textual$validation->m_frame.f_lineno = 12;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$validation;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_ABC_str_plain_abstractmethod_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$validation->m_frame.f_lineno = 13;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$validation,
        mod_consts.const_str_plain_ABC,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ABC);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$validation,
        mod_consts.const_str_plain_abstractmethod,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod, tmp_assign_source_9);
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
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_dataclasses;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$validation;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_dataclass_str_plain_field_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$validation->m_frame.f_lineno = 14;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$validation,
        mod_consts.const_str_plain_dataclass,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_dataclass);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$validation,
        mod_consts.const_str_plain_field,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_field);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_field, tmp_assign_source_12);
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
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_13 == NULL));
assert(tmp_import_from_3__module == NULL);
Py_INCREF(tmp_assign_source_13);
tmp_import_from_3__module = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_5 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$validation,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_6 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$validation,
        mod_consts.const_str_plain_Pattern,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Pattern);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Pattern, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_7 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$validation,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Sequence);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_16);
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
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$validation;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_urlparse_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$validation->m_frame.f_lineno = 16;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_textual$validation,
        mod_consts.const_str_plain_urlparse,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_urlparse);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e;
tmp_globals_arg_value_6 = (PyObject *)moduledict_textual$validation;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = Py_None;
tmp_level_value_6 = const_int_0;
frame_frame_textual$validation->m_frame.f_lineno = 18;
tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_rich, tmp_assign_source_18);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_textual$validation$dataclass(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 21;

    goto try_except_handler_4;
}
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$validation$$$class__1_ValidationResult_22 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5;
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__1_ValidationResult_22, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_2d37d12774366da9c044e04e305c0689;
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__1_ValidationResult_22, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_ValidationResult;
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__1_ValidationResult_22, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_22;
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__1_ValidationResult_22, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__1_ValidationResult_22, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_textual$validation$$$class__1_ValidationResult_2 = MAKE_CLASS_FRAME(tstate, code_objects_707dc899585ce7ad0305ba3ef8a7a2b0, module_textual$validation, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$class__1_ValidationResult_2);
assert(Py_REFCNT(frame_frame_textual$validation$$$class__1_ValidationResult_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_textual$validation$field(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_field);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_textual$validation$$$class__1_ValidationResult_2->m_frame.f_lineno = 25;
tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_type_list_tuple, 0), mod_consts.const_tuple_str_plain_default_factory_tuple);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__1_ValidationResult_22, mod_consts.const_str_plain_failures, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_d4cea08f0d33855a31de6ef8e45128c0;
tmp_ass_subscribed_1 = DICT_GET_ITEM0(tstate, locals_textual$validation$$$class__1_ValidationResult_22, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_failures;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_staticmethod_arg_1;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_82a2db770d6e5b7368dd6eca563a0201);

tmp_staticmethod_arg_1 = MAKE_FUNCTION_textual$validation$$$function__1_merge(tstate, tmp_annotations_1);

tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_1);
CHECK_OBJECT(tmp_staticmethod_arg_1);
Py_DECREF(tmp_staticmethod_arg_1);
assert(!(tmp_dictset_value == NULL));
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__1_ValidationResult_22, mod_consts.const_str_plain_merge, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_staticmethod_arg_2;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_4e0b39eb9f8b899cf62049ee9d8c8742);

tmp_staticmethod_arg_2 = MAKE_FUNCTION_textual$validation$$$function__2_success(tstate, tmp_annotations_2);

tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_2);
CHECK_OBJECT(tmp_staticmethod_arg_2);
Py_DECREF(tmp_staticmethod_arg_2);
assert(!(tmp_dictset_value == NULL));
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__1_ValidationResult_22, mod_consts.const_str_plain_success, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_staticmethod_arg_3;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_541f8a3b8fc1c5c55800daa726b82b83);

tmp_staticmethod_arg_3 = MAKE_FUNCTION_textual$validation$$$function__3_failure(tstate, tmp_annotations_3);

tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_3);
CHECK_OBJECT(tmp_staticmethod_arg_3);
Py_DECREF(tmp_staticmethod_arg_3);
assert(!(tmp_dictset_value == NULL));
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__1_ValidationResult_22, mod_consts.const_str_plain_failure, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_4;
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_args_element_value_2 = MAKE_FUNCTION_textual$validation$$$function__4_failure_descriptions(tstate, tmp_annotations_4);

frame_frame_textual$validation$$$class__1_ValidationResult_2->m_frame.f_lineno = 66;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__1_ValidationResult_22, mod_consts.const_str_plain_failure_descriptions, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_5;
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_3 = MAKE_FUNCTION_textual$validation$$$function__5_is_valid(tstate, tmp_annotations_5);

frame_frame_textual$validation$$$class__1_ValidationResult_2->m_frame.f_lineno = 81;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__1_ValidationResult_22, mod_consts.const_str_plain_is_valid, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$class__1_ValidationResult_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$class__1_ValidationResult_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$class__1_ValidationResult_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$class__1_ValidationResult_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$validation$$$class__1_ValidationResult_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_6;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__1_ValidationResult_22, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_5 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_ValidationResult;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_textual$validation$$$class__1_ValidationResult_22;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$validation->m_frame.f_lineno = 22;
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_6;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_22;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_args_element_value_1 = outline_0_var___class__;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_textual$validation$$$class__1_ValidationResult_22);
locals_textual$validation$$$class__1_ValidationResult_22 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$validation$$$class__1_ValidationResult_22);
locals_textual$validation$$$class__1_ValidationResult_22 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 22;
goto try_except_handler_4;
outline_result_2:;
frame_frame_textual$validation->m_frame.f_lineno = 21;
tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_ValidationResult, tmp_assign_source_21);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
Py_DECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
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
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_24;
}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_4;
tmp_called_value_6 = module_var_accessor_textual$validation$dataclass(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto try_except_handler_7;
}
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_textual$validation$$$class__2_Failure_88 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5;
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__2_Failure_88, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_a00db67dd6421b21697b3f585ed522ed;
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__2_Failure_88, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Failure;
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__2_Failure_88, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_88;
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__2_Failure_88, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__2_Failure_88, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_textual$validation$$$class__2_Failure_3 = MAKE_CLASS_FRAME(tstate, code_objects_7ec411b092249a38a944123253db7a06, module_textual$validation, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$class__2_Failure_3);
assert(Py_REFCNT(frame_frame_textual$validation$$$class__2_Failure_3) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_Validator;
tmp_ass_subscribed_2 = DICT_GET_ITEM0(tstate, locals_textual$validation$$$class__2_Failure_88, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 91;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_validator;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
tmp_dictset_value = Py_None;
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__2_Failure_88, mod_consts.const_str_plain_value, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_3 = DICT_GET_ITEM0(tstate, locals_textual$validation$$$class__2_Failure_88, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_value;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
tmp_dictset_value = Py_None;
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__2_Failure_88, mod_consts.const_str_plain_description, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_4 = DICT_GET_ITEM0(tstate, locals_textual$validation$$$class__2_Failure_88, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_description;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$class__2_Failure_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$class__2_Failure_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$class__2_Failure_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$class__2_Failure_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_textual$validation$$$class__2_Failure_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_9;
skip_nested_handling_2:;
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__6___post_init__(tstate, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__2_Failure_88, mod_consts.const_str_plain___post_init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498);

tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__7___rich_repr__(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__2_Failure_88, mod_consts.const_str_plain___rich_repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain_description_tuple;
tmp_result = DICT_SET_ITEM(locals_textual$validation$$$class__2_Failure_88, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_called_value_7 = (PyObject *)&PyType_Type;
tmp_tuple_element_2 = mod_consts.const_str_plain_Failure;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_textual$validation$$$class__2_Failure_88;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_textual$validation->m_frame.f_lineno = 88;
tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_9;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_26;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_args_element_value_4 = outline_1_var___class__;
Py_INCREF(tmp_args_element_value_4);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_textual$validation$$$class__2_Failure_88);
locals_textual$validation$$$class__2_Failure_88 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$validation$$$class__2_Failure_88);
locals_textual$validation$$$class__2_Failure_88 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 88;
goto try_except_handler_7;
outline_result_4:;
frame_frame_textual$validation->m_frame.f_lineno = 87;
tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Failure, tmp_assign_source_25);
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
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
PyObject *tmp_assign_source_27;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = module_var_accessor_textual$validation$ABC(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ABC);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;

    goto try_except_handler_10;
}
tmp_assign_source_27 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_27, 0, tmp_tuple_element_3);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_28 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_10;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_10;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_10;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_30 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_30;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_10;
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
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_10;
}
tmp_tuple_element_4 = mod_consts.const_str_plain_Validator;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_textual$validation->m_frame.f_lineno = 112;
tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_31;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_10;
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
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_7, tmp_default_value_1);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_10;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_10;
}
frame_frame_textual$validation->m_frame.f_lineno = 112;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 112;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_32;
}
branch_end_1:;
{
PyObject *tmp_assign_source_33;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_textual$validation$$$class__3_Validator_112 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__3_Validator_112, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_digest_33063c0e3d3c7888bd021a11eb41bf27;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__3_Validator_112, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_Validator;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__3_Validator_112, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_112;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__3_Validator_112, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_12;
}
frame_frame_textual$validation$$$class__3_Validator_4 = MAKE_CLASS_FRAME(tstate, code_objects_f2f01ed09ad3b87e4a6fb996086b2b5c, module_textual$validation, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$class__3_Validator_4);
assert(Py_REFCNT(frame_frame_textual$validation$$$class__3_Validator_4) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_8;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_c212bd30af73643296d2eccfb5a26e8d);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__8___init__(tstate, tmp_defaults_1, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__3_Validator_112, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_9;
tmp_called_value_9 = PyObject_GetItem(locals_textual$validation$$$class__3_Validator_112, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = module_var_accessor_textual$validation$abstractmethod(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_98ffed80e59f5fb575806dc2bd70961d);

tmp_args_element_value_5 = MAKE_FUNCTION_textual$validation$$$function__9_validate(tstate, tmp_annotations_9);

frame_frame_textual$validation$$$class__3_Validator_4->m_frame.f_lineno = 146;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__3_Validator_112, mod_consts.const_str_plain_validate, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_af0a7ee4eda1bf396268a812c0a8ac6b);

tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__10_describe_failure(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__3_Validator_112, mod_consts.const_str_plain_describe_failure, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_4e0b39eb9f8b899cf62049ee9d8c8742);

tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__11_success(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__3_Validator_112, mod_consts.const_str_plain_success, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_12;
tmp_defaults_2 = mod_consts.const_tuple_none_none_none_tuple;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_066619fc82a59c3babf73b191af57341);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__12_failure(tstate, tmp_defaults_2, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__3_Validator_112, mod_consts.const_str_plain_failure, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$class__3_Validator_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$class__3_Validator_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$class__3_Validator_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$class__3_Validator_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_textual$validation$$$class__3_Validator_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_12;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_failure_description_tuple;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__3_Validator_112, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_12;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_12;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__3_Validator_112, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_12;
}
branch_no_3:;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_10 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_Validator;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_textual$validation$$$class__3_Validator_112;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_textual$validation->m_frame.f_lineno = 112;
tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_12;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_34;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_33 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_33);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_textual$validation$$$class__3_Validator_112);
locals_textual$validation$$$class__3_Validator_112 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$validation$$$class__3_Validator_112);
locals_textual$validation$$$class__3_Validator_112 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 112;
goto try_except_handler_10;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Validator, tmp_assign_source_33);
}
goto try_end_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
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
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
PyObject *tmp_assign_source_35;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = module_var_accessor_textual$validation$Validator(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Validator);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;

    goto try_except_handler_13;
}
tmp_assign_source_35 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_35, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_36 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_13;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_7 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_13;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_13;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_38 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_38;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_13;
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
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_13;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_Regex;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_textual$validation->m_frame.f_lineno = 222;
tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_39;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_13;
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
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_8, tmp_default_value_2);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_13;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_13;
}
frame_frame_textual$validation->m_frame.f_lineno = 222;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 222;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_13;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_40;
}
branch_end_4:;
{
PyObject *tmp_assign_source_41;
outline_3_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_textual$validation$$$class__4_Regex_222 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__4_Regex_222, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_digest_4553acc93ac17f12a477f0f7d42222e4;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__4_Regex_222, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_Regex;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__4_Regex_222, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_222;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__4_Regex_222, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_15;
}
frame_frame_textual$validation$$$class__4_Regex_5 = MAKE_CLASS_FRAME(tstate, code_objects_6bfbaa27d7adea86b5937533051bc6b7, module_textual$validation, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$class__4_Regex_5);
assert(Py_REFCNT(frame_frame_textual$validation$$$class__4_Regex_5) == 2);

// Framed code:
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_13;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_defaults_3 = mod_consts.const_tuple_int_0_none_tuple;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_0f3513e5fa95b98f23a50ad1addb370d);
Py_INCREF(tmp_defaults_3);
tmp_closure_1[0] = outline_3_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__13___init__(tstate, tmp_defaults_3, tmp_annotations_13, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__4_Regex_222, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_42;
PyObject *tmp_tuple_element_10;
tmp_tuple_element_10 = PyObject_GetItem(locals_textual$validation$$$class__4_Regex_222, mod_consts.const_str_plain_Failure);

if (tmp_tuple_element_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_10 = module_var_accessor_textual$validation$Failure(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Failure);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_16;
}
        Py_INCREF(tmp_tuple_element_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_16;
    }
}

tmp_assign_source_42 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_42, 0, tmp_tuple_element_10);
assert(tmp_Regex$class_container$class_creation_1__bases_orig == NULL);
tmp_Regex$class_container$class_creation_1__bases_orig = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_3 = tmp_Regex$class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_43 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_16;
}
assert(tmp_Regex$class_container$class_creation_1__bases == NULL);
tmp_Regex$class_container$class_creation_1__bases = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_Regex$class_container$class_creation_1__class_decl_dict == NULL);
tmp_Regex$class_container$class_creation_1__class_decl_dict = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_Regex$class_container$class_creation_1__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__bases);
tmp_expression_value_13 = tmp_Regex$class_container$class_creation_1__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_16;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__bases);
tmp_bases_value_3 = tmp_Regex$class_container$class_creation_1__bases;
tmp_assign_source_45 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_16;
}
assert(tmp_Regex$class_container$class_creation_1__metaclass == NULL);
tmp_Regex$class_container$class_creation_1__metaclass = tmp_assign_source_45;
}
{
bool tmp_condition_result_9;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__metaclass);
tmp_expression_value_14 = tmp_Regex$class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_condition_result_9 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__metaclass);
tmp_expression_value_15 = tmp_Regex$class_container$class_creation_1__metaclass;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_tuple_element_11 = mod_consts.const_str_plain_NoResults;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__bases);
tmp_tuple_element_11 = tmp_Regex$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_6 = tmp_Regex$class_container$class_creation_1__class_decl_dict;
frame_frame_textual$validation$$$class__4_Regex_5->m_frame.f_lineno = 237;
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_16;
}
assert(tmp_Regex$class_container$class_creation_1__prepared == NULL);
tmp_Regex$class_container$class_creation_1__prepared = tmp_assign_source_46;
}
{
bool tmp_condition_result_10;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__prepared);
tmp_expression_value_16 = tmp_Regex$class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_10 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__metaclass);
tmp_expression_value_17 = tmp_Regex$class_container$class_creation_1__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_12 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_9, tmp_default_value_3);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__prepared);
tmp_type_arg_6 = tmp_Regex$class_container$class_creation_1__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_16;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_16;
}
frame_frame_textual$validation$$$class__4_Regex_5->m_frame.f_lineno = 237;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 237;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "c";
goto try_except_handler_16;
}
branch_no_7:;
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = MAKE_DICT_EMPTY(tstate);
assert(tmp_Regex$class_container$class_creation_1__prepared == NULL);
tmp_Regex$class_container$class_creation_1__prepared = tmp_assign_source_47;
}
branch_end_6:;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__prepared);
tmp_set_locals_5 = tmp_Regex$class_container$class_creation_1__prepared;
locals_textual$validation$$$class__5_NoResults_237 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__5_NoResults_237, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_digest_1dd962682e869c43539b3383578e629d;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__5_NoResults_237, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_digest_85bc9f4a74f106b04085468e7cd43bab;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__5_NoResults_237, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_int_pos_237;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__5_NoResults_237, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_18;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__5_NoResults_237, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_18;
}
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__bases);
tmp_cmp_expr_left_2 = tmp_Regex$class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_2 = tmp_Regex$class_container$class_creation_1__bases_orig;
tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_18;
}
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_Regex$class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__5_NoResults_237, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_18;
}
branch_no_8:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__metaclass);
tmp_called_value_13 = tmp_Regex$class_container$class_creation_1__metaclass;
tmp_tuple_element_13 = mod_consts.const_str_plain_NoResults;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__bases);
tmp_tuple_element_13 = tmp_Regex$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_13);
tmp_tuple_element_13 = locals_textual$validation$$$class__5_NoResults_237;
PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_13);
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_7 = tmp_Regex$class_container$class_creation_1__class_decl_dict;
frame_frame_textual$validation$$$class__4_Regex_5->m_frame.f_lineno = 237;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_18;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_48;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_dictset_value = outline_4_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_18;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
Py_DECREF(locals_textual$validation$$$class__5_NoResults_237);
locals_textual$validation$$$class__5_NoResults_237 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$validation$$$class__5_NoResults_237);
locals_textual$validation$$$class__5_NoResults_237 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_17;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 237;
goto try_except_handler_16;
outline_result_10:;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__4_Regex_222, mod_consts.const_str_plain_NoResults, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto try_except_handler_16;
}
goto try_end_7;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_Regex$class_container$class_creation_1__bases_orig);
tmp_Regex$class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_Regex$class_container$class_creation_1__bases);
tmp_Regex$class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_Regex$class_container$class_creation_1__class_decl_dict);
tmp_Regex$class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_Regex$class_container$class_creation_1__metaclass);
tmp_Regex$class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_Regex$class_container$class_creation_1__prepared);
tmp_Regex$class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_5;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_Regex$class_container$class_creation_1__bases_orig);
tmp_Regex$class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__bases);
Py_DECREF(tmp_Regex$class_container$class_creation_1__bases);
tmp_Regex$class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_Regex$class_container$class_creation_1__class_decl_dict);
tmp_Regex$class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__metaclass);
Py_DECREF(tmp_Regex$class_container$class_creation_1__metaclass);
tmp_Regex$class_container$class_creation_1__metaclass = NULL;
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_Regex$class_container$class_creation_1__prepared);
Py_DECREF(tmp_Regex$class_container$class_creation_1__prepared);
tmp_Regex$class_container$class_creation_1__prepared = NULL;
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
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_98ffed80e59f5fb575806dc2bd70961d);

tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__14_validate(tstate, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__4_Regex_222, mod_consts.const_str_plain_validate, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_af0a7ee4eda1bf396268a812c0a8ac6b);

tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__15_describe_failure(tstate, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__4_Regex_222, mod_consts.const_str_plain_describe_failure, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$class__4_Regex_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$class__4_Regex_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$class__4_Regex_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$class__4_Regex_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_textual$validation$$$class__4_Regex_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_15;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_regex_str_plain_flags_tuple;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__4_Regex_222, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_15;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_15;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__4_Regex_222, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_15;
}
branch_no_9:;
{
PyObject *tmp_assign_source_49;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_14 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_14 = mod_consts.const_str_plain_Regex;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_14);
tmp_tuple_element_14 = locals_textual$validation$$$class__4_Regex_222;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_textual$validation->m_frame.f_lineno = 222;
tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_15;
}
assert(Nuitka_Cell_GET(outline_3_var___class__) == NULL);
Nuitka_Cell_SET(outline_3_var___class__, tmp_assign_source_49);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_3_var___class__));
tmp_assign_source_41 = Nuitka_Cell_GET(outline_3_var___class__);
Py_INCREF(tmp_assign_source_41);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_textual$validation$$$class__4_Regex_222);
locals_textual$validation$$$class__4_Regex_222 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$validation$$$class__4_Regex_222);
locals_textual$validation$$$class__4_Regex_222 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 222;
goto try_except_handler_13;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Regex, tmp_assign_source_41);
}
goto try_end_8;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
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
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

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
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_50;
PyObject *tmp_tuple_element_15;
tmp_tuple_element_15 = module_var_accessor_textual$validation$Validator(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Validator);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 268;

    goto try_except_handler_19;
}
tmp_assign_source_50 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_50, 0, tmp_tuple_element_15);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_51 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_19;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_19 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_19;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_19;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_53 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_53;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_19;
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
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_19;
}
tmp_tuple_element_16 = mod_consts.const_str_plain_Number;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_textual$validation->m_frame.f_lineno = 268;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_54;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_22 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_19;
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
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_23;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_10, tmp_default_value_4);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_19;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_24 == NULL));
tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_17);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_19;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_19;
}
frame_frame_textual$validation->m_frame.f_lineno = 268;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 268;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_19;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_55;
}
branch_end_10:;
{
PyObject *tmp_assign_source_56;
outline_5_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_5__prepared;
locals_textual$validation$$$class__6_Number_268 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__6_Number_268, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_digest_e1ee591f7bf9dd885f591586e48b70b6;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__6_Number_268, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_plain_Number;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__6_Number_268, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_int_pos_268;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__6_Number_268, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_21;
}
frame_frame_textual$validation$$$class__6_Number_6 = MAKE_CLASS_FRAME(tstate, code_objects_60fbb5ed333b76eaf9dc12d96a50a733, module_textual$validation, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$class__6_Number_6);
assert(Py_REFCNT(frame_frame_textual$validation$$$class__6_Number_6) == 2);

// Framed code:
{
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_16;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_defaults_4 = mod_consts.const_tuple_none_none_none_tuple;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_6d97cb11182c3742b9c1c003e822f160);
Py_INCREF(tmp_defaults_4);
tmp_closure_2[0] = outline_5_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__16___init__(tstate, tmp_defaults_4, tmp_annotations_16, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__6_Number_268, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_outline_return_value_7;
// Tried code:
{
PyObject *tmp_assign_source_57;
PyObject *tmp_tuple_element_18;
tmp_tuple_element_18 = PyObject_GetItem(locals_textual$validation$$$class__6_Number_268, mod_consts.const_str_plain_Failure);

if (tmp_tuple_element_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_18 = module_var_accessor_textual$validation$Failure(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Failure);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_22;
}
        Py_INCREF(tmp_tuple_element_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_22;
    }
}

tmp_assign_source_57 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_57, 0, tmp_tuple_element_18);
assert(tmp_Number$class_container$class_creation_1__bases_orig == NULL);
tmp_Number$class_container$class_creation_1__bases_orig = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_5 = tmp_Number$class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_58 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_22;
}
assert(tmp_Number$class_container$class_creation_1__bases == NULL);
tmp_Number$class_container$class_creation_1__bases = tmp_assign_source_58;
}
{
PyObject *tmp_assign_source_59;
tmp_assign_source_59 = MAKE_DICT_EMPTY(tstate);
assert(tmp_Number$class_container$class_creation_1__class_decl_dict == NULL);
tmp_Number$class_container$class_creation_1__class_decl_dict = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_16;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_Number$class_container$class_creation_1__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_22;
}
tmp_condition_result_16 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__bases);
tmp_expression_value_25 = tmp_Number$class_container$class_creation_1__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_5, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_22;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_22;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__bases);
tmp_bases_value_5 = tmp_Number$class_container$class_creation_1__bases;
tmp_assign_source_60 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_22;
}
assert(tmp_Number$class_container$class_creation_1__metaclass == NULL);
tmp_Number$class_container$class_creation_1__metaclass = tmp_assign_source_60;
}
{
bool tmp_condition_result_17;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__metaclass);
tmp_expression_value_26 = tmp_Number$class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_22;
}
tmp_condition_result_17 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_61;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_19;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__metaclass);
tmp_expression_value_27 = tmp_Number$class_container$class_creation_1__metaclass;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_22;
}
tmp_tuple_element_19 = mod_consts.const_str_plain_NotANumber;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__bases);
tmp_tuple_element_19 = tmp_Number$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_19);
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_10 = tmp_Number$class_container$class_creation_1__class_decl_dict;
frame_frame_textual$validation$$$class__6_Number_6->m_frame.f_lineno = 283;
tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_22;
}
assert(tmp_Number$class_container$class_creation_1__prepared == NULL);
tmp_Number$class_container$class_creation_1__prepared = tmp_assign_source_61;
}
{
bool tmp_condition_result_18;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__prepared);
tmp_expression_value_28 = tmp_Number$class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_22;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_18 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_20;
PyObject *tmp_expression_value_29;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__metaclass);
tmp_expression_value_29 = tmp_Number$class_container$class_creation_1__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_20 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_11, tmp_default_value_5);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_22;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_30;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__prepared);
tmp_type_arg_10 = tmp_Number$class_container$class_creation_1__prepared;
tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_30 == NULL));
tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_20);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_22;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_22;
}
frame_frame_textual$validation$$$class__6_Number_6->m_frame.f_lineno = 283;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 283;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "c";
goto try_except_handler_22;
}
branch_no_13:;
goto branch_end_12;
branch_no_12:;
{
PyObject *tmp_assign_source_62;
tmp_assign_source_62 = MAKE_DICT_EMPTY(tstate);
assert(tmp_Number$class_container$class_creation_1__prepared == NULL);
tmp_Number$class_container$class_creation_1__prepared = tmp_assign_source_62;
}
branch_end_12:;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__prepared);
tmp_set_locals_7 = tmp_Number$class_container$class_creation_1__prepared;
locals_textual$validation$$$class__7_NotANumber_283 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__7_NotANumber_283, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_str_digest_b044462e860524b0118eef27f537940d;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__7_NotANumber_283, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_str_digest_a07b7e9d4290d6de7d42d2e7e52ce5f3;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__7_NotANumber_283, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_int_pos_283;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__7_NotANumber_283, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_24;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__7_NotANumber_283, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_24;
}
{
nuitka_bool tmp_condition_result_19;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__bases);
tmp_cmp_expr_left_4 = tmp_Number$class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_4 = tmp_Number$class_container$class_creation_1__bases_orig;
tmp_condition_result_19 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_24;
}
if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_Number$class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__7_NotANumber_283, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_24;
}
branch_no_14:;
{
PyObject *tmp_assign_source_63;
PyObject *tmp_called_value_17;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_21;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__metaclass);
tmp_called_value_17 = tmp_Number$class_container$class_creation_1__metaclass;
tmp_tuple_element_21 = mod_consts.const_str_plain_NotANumber;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__bases);
tmp_tuple_element_21 = tmp_Number$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_21);
tmp_tuple_element_21 = locals_textual$validation$$$class__7_NotANumber_283;
PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_21);
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_11 = tmp_Number$class_container$class_creation_1__class_decl_dict;
frame_frame_textual$validation$$$class__6_Number_6->m_frame.f_lineno = 283;
tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_24;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_63;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_dictset_value = outline_6_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_24;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_24:;
Py_DECREF(locals_textual$validation$$$class__7_NotANumber_283);
locals_textual$validation$$$class__7_NotANumber_283 = NULL;
goto try_return_handler_23;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$validation$$$class__7_NotANumber_283);
locals_textual$validation$$$class__7_NotANumber_283 = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto try_except_handler_23;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 283;
goto try_except_handler_22;
outline_result_14:;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__6_Number_268, mod_consts.const_str_plain_NotANumber, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "c";
    goto try_except_handler_22;
}
goto try_end_9;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_Number$class_container$class_creation_1__bases_orig);
tmp_Number$class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_Number$class_container$class_creation_1__bases);
tmp_Number$class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_Number$class_container$class_creation_1__class_decl_dict);
tmp_Number$class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_Number$class_container$class_creation_1__metaclass);
tmp_Number$class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_Number$class_container$class_creation_1__prepared);
tmp_Number$class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto frame_exception_exit_6;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_Number$class_container$class_creation_1__bases_orig);
tmp_Number$class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__bases);
Py_DECREF(tmp_Number$class_container$class_creation_1__bases);
tmp_Number$class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_Number$class_container$class_creation_1__class_decl_dict);
tmp_Number$class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__metaclass);
Py_DECREF(tmp_Number$class_container$class_creation_1__metaclass);
tmp_Number$class_container$class_creation_1__metaclass = NULL;
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_Number$class_container$class_creation_1__prepared);
Py_DECREF(tmp_Number$class_container$class_creation_1__prepared);
tmp_Number$class_container$class_creation_1__prepared = NULL;
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
PyObject *tmp_assign_source_64;
PyObject *tmp_tuple_element_22;
tmp_tuple_element_22 = PyObject_GetItem(locals_textual$validation$$$class__6_Number_268, mod_consts.const_str_plain_Failure);

if (tmp_tuple_element_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_22 = module_var_accessor_textual$validation$Failure(tstate);
if (unlikely(tmp_tuple_element_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Failure);
}

if (tmp_tuple_element_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_25;
}
        Py_INCREF(tmp_tuple_element_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_25;
    }
}

tmp_assign_source_64 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_64, 0, tmp_tuple_element_22);
assert(tmp_Number$class_container$class_creation_2__bases_orig == NULL);
tmp_Number$class_container$class_creation_2__bases_orig = tmp_assign_source_64;
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_6 = tmp_Number$class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_65 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_25;
}
assert(tmp_Number$class_container$class_creation_2__bases == NULL);
tmp_Number$class_container$class_creation_2__bases = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
tmp_assign_source_66 = MAKE_DICT_EMPTY(tstate);
assert(tmp_Number$class_container$class_creation_2__class_decl_dict == NULL);
tmp_Number$class_container$class_creation_2__class_decl_dict = tmp_assign_source_66;
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_20;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_Number$class_container$class_creation_2__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_25;
}
tmp_condition_result_20 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__bases);
tmp_expression_value_31 = tmp_Number$class_container$class_creation_2__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_6, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_25;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_25;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__bases);
tmp_bases_value_6 = tmp_Number$class_container$class_creation_2__bases;
tmp_assign_source_67 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_25;
}
assert(tmp_Number$class_container$class_creation_2__metaclass == NULL);
tmp_Number$class_container$class_creation_2__metaclass = tmp_assign_source_67;
}
{
bool tmp_condition_result_21;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__metaclass);
tmp_expression_value_32 = tmp_Number$class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_25;
}
tmp_condition_result_21 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_21 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_assign_source_68;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_23;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__metaclass);
tmp_expression_value_33 = tmp_Number$class_container$class_creation_2__metaclass;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_25;
}
tmp_tuple_element_23 = mod_consts.const_str_plain_NotInRange;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__bases);
tmp_tuple_element_23 = tmp_Number$class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_23);
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_12 = tmp_Number$class_container$class_creation_2__class_decl_dict;
frame_frame_textual$validation$$$class__6_Number_6->m_frame.f_lineno = 286;
tmp_assign_source_68 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_25;
}
assert(tmp_Number$class_container$class_creation_2__prepared == NULL);
tmp_Number$class_container$class_creation_2__prepared = tmp_assign_source_68;
}
{
bool tmp_condition_result_22;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_34;
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__prepared);
tmp_expression_value_34 = tmp_Number$class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_25;
}
tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_22 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
PyObject *tmp_mod_expr_left_6;
PyObject *tmp_mod_expr_right_6;
PyObject *tmp_tuple_element_24;
PyObject *tmp_expression_value_35;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__metaclass);
tmp_expression_value_35 = tmp_Number$class_container$class_creation_2__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_24 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_12, tmp_default_value_6);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_25;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_36;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__prepared);
tmp_type_arg_12 = tmp_Number$class_container$class_creation_2__prepared;
tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_36 == NULL));
tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_24);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_25;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_25;
}
frame_frame_textual$validation$$$class__6_Number_6->m_frame.f_lineno = 286;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 286;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "c";
goto try_except_handler_25;
}
branch_no_16:;
goto branch_end_15;
branch_no_15:;
{
PyObject *tmp_assign_source_69;
tmp_assign_source_69 = MAKE_DICT_EMPTY(tstate);
assert(tmp_Number$class_container$class_creation_2__prepared == NULL);
tmp_Number$class_container$class_creation_2__prepared = tmp_assign_source_69;
}
branch_end_15:;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__prepared);
tmp_set_locals_8 = tmp_Number$class_container$class_creation_2__prepared;
locals_textual$validation$$$class__8_NotInRange_286 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__8_NotInRange_286, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_str_digest_a6d899727c34eff052b8e750bda6a338;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__8_NotInRange_286, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_str_digest_eb1c44b4d67d4bfbf3fac47a6cbeff09;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__8_NotInRange_286, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_int_pos_286;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__8_NotInRange_286, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_27;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__8_NotInRange_286, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_27;
}
{
nuitka_bool tmp_condition_result_23;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__bases);
tmp_cmp_expr_left_5 = tmp_Number$class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_5 = tmp_Number$class_container$class_creation_2__bases_orig;
tmp_condition_result_23 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_27;
}
if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_Number$class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__8_NotInRange_286, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_27;
}
branch_no_17:;
{
PyObject *tmp_assign_source_70;
PyObject *tmp_called_value_19;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_25;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__metaclass);
tmp_called_value_19 = tmp_Number$class_container$class_creation_2__metaclass;
tmp_tuple_element_25 = mod_consts.const_str_plain_NotInRange;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__bases);
tmp_tuple_element_25 = tmp_Number$class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_25);
tmp_tuple_element_25 = locals_textual$validation$$$class__8_NotInRange_286;
PyTuple_SET_ITEM0(tmp_args_value_13, 2, tmp_tuple_element_25);
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_13 = tmp_Number$class_container$class_creation_2__class_decl_dict;
frame_frame_textual$validation$$$class__6_Number_6->m_frame.f_lineno = 286;
tmp_assign_source_70 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_27;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_70;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_dictset_value = outline_7_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_27;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_27:;
Py_DECREF(locals_textual$validation$$$class__8_NotInRange_286);
locals_textual$validation$$$class__8_NotInRange_286 = NULL;
goto try_return_handler_26;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$validation$$$class__8_NotInRange_286);
locals_textual$validation$$$class__8_NotInRange_286 = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto try_except_handler_26;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_26:;
CHECK_OBJECT(outline_7_var___class__);
CHECK_OBJECT(outline_7_var___class__);
Py_DECREF(outline_7_var___class__);
outline_7_var___class__ = NULL;
goto outline_result_16;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 286;
goto try_except_handler_25;
outline_result_16:;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__6_Number_268, mod_consts.const_str_plain_NotInRange, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto try_except_handler_25;
}
goto try_end_10;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_Number$class_container$class_creation_2__bases_orig);
tmp_Number$class_container$class_creation_2__bases_orig = NULL;
Py_XDECREF(tmp_Number$class_container$class_creation_2__bases);
tmp_Number$class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_Number$class_container$class_creation_2__class_decl_dict);
tmp_Number$class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_Number$class_container$class_creation_2__metaclass);
tmp_Number$class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_Number$class_container$class_creation_2__prepared);
tmp_Number$class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto frame_exception_exit_6;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_Number$class_container$class_creation_2__bases_orig);
tmp_Number$class_container$class_creation_2__bases_orig = NULL;
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__bases);
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__bases);
Py_DECREF(tmp_Number$class_container$class_creation_2__bases);
tmp_Number$class_container$class_creation_2__bases = NULL;
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_Number$class_container$class_creation_2__class_decl_dict);
tmp_Number$class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__metaclass);
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__metaclass);
Py_DECREF(tmp_Number$class_container$class_creation_2__metaclass);
tmp_Number$class_container$class_creation_2__metaclass = NULL;
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_Number$class_container$class_creation_2__prepared);
Py_DECREF(tmp_Number$class_container$class_creation_2__prepared);
tmp_Number$class_container$class_creation_2__prepared = NULL;
tmp_outline_return_value_8 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_8);
goto outline_result_15;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_15:;
CHECK_OBJECT(tmp_outline_return_value_8);
Py_DECREF(tmp_outline_return_value_8);
}
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_98ffed80e59f5fb575806dc2bd70961d);

tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__17_validate(tstate, tmp_annotations_17);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__6_Number_268, mod_consts.const_str_plain_validate, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_cc1d275bdf3fd44eacedf2dfcce806d6);

tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__18__validate_range(tstate, tmp_annotations_18);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__6_Number_268, mod_consts.const_str_plain__validate_range, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_af0a7ee4eda1bf396268a812c0a8ac6b);

tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__19_describe_failure(tstate, tmp_annotations_19);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__6_Number_268, mod_consts.const_str_plain_describe_failure, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$class__6_Number_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$class__6_Number_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$class__6_Number_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$class__6_Number_6,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_textual$validation$$$class__6_Number_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_21;
skip_nested_handling_5:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_minimum_str_plain_maximum_tuple;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__6_Number_268, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_21;
}
{
nuitka_bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_6 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_21;
}
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__6_Number_268, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_21;
}
branch_no_18:;
{
PyObject *tmp_assign_source_71;
PyObject *tmp_called_value_20;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_26;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_20 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_26 = mod_consts.const_str_plain_Number;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_26 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_26);
tmp_tuple_element_26 = locals_textual$validation$$$class__6_Number_268;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_textual$validation->m_frame.f_lineno = 268;
tmp_assign_source_71 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_21;
}
assert(Nuitka_Cell_GET(outline_5_var___class__) == NULL);
Nuitka_Cell_SET(outline_5_var___class__, tmp_assign_source_71);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_5_var___class__));
tmp_assign_source_56 = Nuitka_Cell_GET(outline_5_var___class__);
Py_INCREF(tmp_assign_source_56);
goto try_return_handler_21;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
Py_DECREF(locals_textual$validation$$$class__6_Number_268);
locals_textual$validation$$$class__6_Number_268 = NULL;
goto try_return_handler_20;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$validation$$$class__6_Number_268);
locals_textual$validation$$$class__6_Number_268 = NULL;
// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto try_except_handler_20;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 268;
goto try_except_handler_19;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Number, tmp_assign_source_56);
}
goto try_end_11;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
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
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
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
PyObject *tmp_outline_return_value_9;
// Tried code:
{
PyObject *tmp_assign_source_72;
PyObject *tmp_tuple_element_27;
tmp_tuple_element_27 = module_var_accessor_textual$validation$Number(tstate);
if (unlikely(tmp_tuple_element_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Number);
}

if (tmp_tuple_element_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 342;

    goto try_except_handler_28;
}
tmp_assign_source_72 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_72, 0, tmp_tuple_element_27);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_72;
}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_73 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_73;
}
{
PyObject *tmp_assign_source_74;
tmp_assign_source_74 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_74;
}
{
PyObject *tmp_assign_source_75;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_28;
}
tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_37 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_7, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_28;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_28;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_75 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_75;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_38 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_28;
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
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_39;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_28;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_28;
}
tmp_tuple_element_28 = mod_consts.const_str_plain_Integer;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_28 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_textual$validation->m_frame.f_lineno = 342;
tmp_assign_source_76 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_76;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_40;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_40 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_28;
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
PyObject *tmp_tuple_element_29;
PyObject *tmp_expression_value_41;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_41 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_29 = BUILTIN_GETATTR(tstate, tmp_expression_value_41, tmp_name_value_13, tmp_default_value_7);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_28;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_42;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_42 == NULL));
tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_29);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_28;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_28;
}
frame_frame_textual$validation->m_frame.f_lineno = 342;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 342;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_28;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_77;
tmp_assign_source_77 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_77;
}
branch_end_19:;
{
PyObject *tmp_assign_source_78;
outline_8_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_6__prepared;
locals_textual$validation$$$class__9_Integer_342 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__9_Integer_342, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_str_digest_9a9530cbfcd669a55089995bb15bcfdb;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__9_Integer_342, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_str_plain_Integer;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__9_Integer_342, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_int_pos_342;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__9_Integer_342, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_30;
}
frame_frame_textual$validation$$$class__9_Integer_7 = MAKE_CLASS_FRAME(tstate, code_objects_4bd6d7e3a9fb263419a0c461c9cbff69, module_textual$validation, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$class__9_Integer_7);
assert(Py_REFCNT(frame_frame_textual$validation$$$class__9_Integer_7) == 2);

// Framed code:
{
PyObject *tmp_outline_return_value_10;
// Tried code:
{
PyObject *tmp_assign_source_79;
PyObject *tmp_tuple_element_30;
tmp_tuple_element_30 = PyObject_GetItem(locals_textual$validation$$$class__9_Integer_342, mod_consts.const_str_plain_Failure);

if (tmp_tuple_element_30 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_30 = module_var_accessor_textual$validation$Failure(tstate);
if (unlikely(tmp_tuple_element_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Failure);
}

if (tmp_tuple_element_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_31;
}
        Py_INCREF(tmp_tuple_element_30);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_31;
    }
}

tmp_assign_source_79 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_79, 0, tmp_tuple_element_30);
assert(tmp_Integer$class_container$class_creation_1__bases_orig == NULL);
tmp_Integer$class_container$class_creation_1__bases_orig = tmp_assign_source_79;
}
{
PyObject *tmp_assign_source_80;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_8 = tmp_Integer$class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_80 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_31;
}
assert(tmp_Integer$class_container$class_creation_1__bases == NULL);
tmp_Integer$class_container$class_creation_1__bases = tmp_assign_source_80;
}
{
PyObject *tmp_assign_source_81;
tmp_assign_source_81 = MAKE_DICT_EMPTY(tstate);
assert(tmp_Integer$class_container$class_creation_1__class_decl_dict == NULL);
tmp_Integer$class_container$class_creation_1__class_decl_dict = tmp_assign_source_81;
}
{
PyObject *tmp_assign_source_82;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_28;
int tmp_truth_name_8;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_Integer$class_container$class_creation_1__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_31;
}
tmp_condition_result_28 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__bases);
tmp_expression_value_43 = tmp_Integer$class_container$class_creation_1__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_8, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_31;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_31;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_8:;
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__bases);
tmp_bases_value_8 = tmp_Integer$class_container$class_creation_1__bases;
tmp_assign_source_82 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_31;
}
assert(tmp_Integer$class_container$class_creation_1__metaclass == NULL);
tmp_Integer$class_container$class_creation_1__metaclass = tmp_assign_source_82;
}
{
bool tmp_condition_result_29;
PyObject *tmp_expression_value_44;
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__metaclass);
tmp_expression_value_44 = tmp_Integer$class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_31;
}
tmp_condition_result_29 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_29 != false) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_assign_source_83;
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_45;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_31;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__metaclass);
tmp_expression_value_45 = tmp_Integer$class_container$class_creation_1__metaclass;
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_31;
}
tmp_tuple_element_31 = mod_consts.const_str_plain_NotAnInteger;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__bases);
tmp_tuple_element_31 = tmp_Integer$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_31);
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_16 = tmp_Integer$class_container$class_creation_1__class_decl_dict;
frame_frame_textual$validation$$$class__9_Integer_7->m_frame.f_lineno = 345;
tmp_assign_source_83 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_31;
}
assert(tmp_Integer$class_container$class_creation_1__prepared == NULL);
tmp_Integer$class_container$class_creation_1__prepared = tmp_assign_source_83;
}
{
bool tmp_condition_result_30;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_46;
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__prepared);
tmp_expression_value_46 = tmp_Integer$class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_31;
}
tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
assert(!(tmp_res == -1));
tmp_condition_result_30 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_30 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_raise_type_8;
PyObject *tmp_make_exception_arg_8;
PyObject *tmp_mod_expr_left_8;
PyObject *tmp_mod_expr_right_8;
PyObject *tmp_tuple_element_32;
PyObject *tmp_expression_value_47;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__metaclass);
tmp_expression_value_47 = tmp_Integer$class_container$class_creation_1__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_32 = BUILTIN_GETATTR(tstate, tmp_expression_value_47, tmp_name_value_14, tmp_default_value_8);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_31;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_48;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_32);
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__prepared);
tmp_type_arg_16 = tmp_Integer$class_container$class_creation_1__prepared;
tmp_expression_value_48 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_48 == NULL));
tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_48);
Py_DECREF(tmp_expression_value_48);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_32);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_31;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_31;
}
frame_frame_textual$validation$$$class__9_Integer_7->m_frame.f_lineno = 345;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 345;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "c";
goto try_except_handler_31;
}
branch_no_22:;
goto branch_end_21;
branch_no_21:;
{
PyObject *tmp_assign_source_84;
tmp_assign_source_84 = MAKE_DICT_EMPTY(tstate);
assert(tmp_Integer$class_container$class_creation_1__prepared == NULL);
tmp_Integer$class_container$class_creation_1__prepared = tmp_assign_source_84;
}
branch_end_21:;
{
PyObject *tmp_set_locals_10;
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__prepared);
tmp_set_locals_10 = tmp_Integer$class_container$class_creation_1__prepared;
locals_textual$validation$$$class__10_NotAnInteger_345 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__10_NotAnInteger_345, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_str_digest_185898f93c093b8f5613857e7496f71b;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__10_NotAnInteger_345, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_str_digest_c9d653641cd57ced5a2cf81d61768458;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__10_NotAnInteger_345, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_int_pos_345;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__10_NotAnInteger_345, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_33;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__10_NotAnInteger_345, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_33;
}
{
nuitka_bool tmp_condition_result_31;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__bases);
tmp_cmp_expr_left_7 = tmp_Integer$class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_7 = tmp_Integer$class_container$class_creation_1__bases_orig;
tmp_condition_result_31 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_31 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_33;
}
if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_Integer$class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__10_NotAnInteger_345, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_33;
}
branch_no_23:;
{
PyObject *tmp_assign_source_85;
PyObject *tmp_called_value_23;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_33;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__metaclass);
tmp_called_value_23 = tmp_Integer$class_container$class_creation_1__metaclass;
tmp_tuple_element_33 = mod_consts.const_str_plain_NotAnInteger;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_33);
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__bases);
tmp_tuple_element_33 = tmp_Integer$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_33);
tmp_tuple_element_33 = locals_textual$validation$$$class__10_NotAnInteger_345;
PyTuple_SET_ITEM0(tmp_args_value_17, 2, tmp_tuple_element_33);
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_17 = tmp_Integer$class_container$class_creation_1__class_decl_dict;
frame_frame_textual$validation$$$class__9_Integer_7->m_frame.f_lineno = 345;
tmp_assign_source_85 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_33;
}
assert(outline_9_var___class__ == NULL);
outline_9_var___class__ = tmp_assign_source_85;
}
CHECK_OBJECT(outline_9_var___class__);
tmp_dictset_value = outline_9_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_33;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_33:;
Py_DECREF(locals_textual$validation$$$class__10_NotAnInteger_345);
locals_textual$validation$$$class__10_NotAnInteger_345 = NULL;
goto try_return_handler_32;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$validation$$$class__10_NotAnInteger_345);
locals_textual$validation$$$class__10_NotAnInteger_345 = NULL;
// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto try_except_handler_32;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_32:;
CHECK_OBJECT(outline_9_var___class__);
CHECK_OBJECT(outline_9_var___class__);
Py_DECREF(outline_9_var___class__);
outline_9_var___class__ = NULL;
goto outline_result_20;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto outline_exception_10;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_10:;
exception_lineno = 345;
goto try_except_handler_31;
outline_result_20:;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__9_Integer_342, mod_consts.const_str_plain_NotAnInteger, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto try_except_handler_31;
}
goto try_end_12;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_Integer$class_container$class_creation_1__bases_orig);
tmp_Integer$class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_Integer$class_container$class_creation_1__bases);
tmp_Integer$class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_Integer$class_container$class_creation_1__class_decl_dict);
tmp_Integer$class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_Integer$class_container$class_creation_1__metaclass);
tmp_Integer$class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_Integer$class_container$class_creation_1__prepared);
tmp_Integer$class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto frame_exception_exit_7;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_Integer$class_container$class_creation_1__bases_orig);
tmp_Integer$class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__bases);
Py_DECREF(tmp_Integer$class_container$class_creation_1__bases);
tmp_Integer$class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_Integer$class_container$class_creation_1__class_decl_dict);
tmp_Integer$class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__metaclass);
Py_DECREF(tmp_Integer$class_container$class_creation_1__metaclass);
tmp_Integer$class_container$class_creation_1__metaclass = NULL;
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_Integer$class_container$class_creation_1__prepared);
Py_DECREF(tmp_Integer$class_container$class_creation_1__prepared);
tmp_Integer$class_container$class_creation_1__prepared = NULL;
tmp_outline_return_value_10 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_10);
goto outline_result_19;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_19:;
CHECK_OBJECT(tmp_outline_return_value_10);
Py_DECREF(tmp_outline_return_value_10);
}
{
PyObject *tmp_annotations_20;
struct Nuitka_CellObject *tmp_closure_3[1];
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_98ffed80e59f5fb575806dc2bd70961d);
tmp_closure_3[0] = outline_8_var___class__;
Py_INCREF(tmp_closure_3[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__20_validate(tstate, tmp_annotations_20, tmp_closure_3);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__9_Integer_342, mod_consts.const_str_plain_validate, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_af0a7ee4eda1bf396268a812c0a8ac6b);

tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__21_describe_failure(tstate, tmp_annotations_21);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__9_Integer_342, mod_consts.const_str_plain_describe_failure, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_7:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$class__9_Integer_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$class__9_Integer_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$class__9_Integer_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$class__9_Integer_7,
    type_description_2,
    outline_8_var___class__
);



assertFrameObject(frame_frame_textual$validation$$$class__9_Integer_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_30;
skip_nested_handling_6:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__9_Integer_342, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_30;
}
{
nuitka_bool tmp_condition_result_32;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_cmp_expr_left_8 = tmp_class_container$class_creation_6__bases;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_cmp_expr_right_8 = tmp_class_container$class_creation_6__bases_orig;
tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_30;
}
if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_6__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__9_Integer_342, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_30;
}
branch_no_24:;
{
PyObject *tmp_assign_source_86;
PyObject *tmp_called_value_24;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_34;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_24 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_34 = mod_consts.const_str_plain_Integer;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_34 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_34);
tmp_tuple_element_34 = locals_textual$validation$$$class__9_Integer_342;
PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_textual$validation->m_frame.f_lineno = 342;
tmp_assign_source_86 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_30;
}
assert(Nuitka_Cell_GET(outline_8_var___class__) == NULL);
Nuitka_Cell_SET(outline_8_var___class__, tmp_assign_source_86);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_8_var___class__));
tmp_assign_source_78 = Nuitka_Cell_GET(outline_8_var___class__);
Py_INCREF(tmp_assign_source_78);
goto try_return_handler_30;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_30:;
Py_DECREF(locals_textual$validation$$$class__9_Integer_342);
locals_textual$validation$$$class__9_Integer_342 = NULL;
goto try_return_handler_29;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$validation$$$class__9_Integer_342);
locals_textual$validation$$$class__9_Integer_342 = NULL;
// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto try_except_handler_29;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_29:;
CHECK_OBJECT(outline_8_var___class__);
CHECK_OBJECT(outline_8_var___class__);
Py_DECREF(outline_8_var___class__);
outline_8_var___class__ = NULL;
goto outline_result_18;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 342;
goto try_except_handler_28;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Integer, tmp_assign_source_78);
}
goto try_end_13;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_33 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_33 = exception_state;
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
exception_state = exception_keeper_name_33;
exception_lineno = exception_keeper_lineno_33;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
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
tmp_outline_return_value_9 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_9);
goto outline_result_17;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_17:;
CHECK_OBJECT(tmp_outline_return_value_9);
Py_DECREF(tmp_outline_return_value_9);
}
{
PyObject *tmp_outline_return_value_11;
// Tried code:
{
PyObject *tmp_assign_source_87;
PyObject *tmp_tuple_element_35;
tmp_tuple_element_35 = module_var_accessor_textual$validation$Validator(tstate);
if (unlikely(tmp_tuple_element_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Validator);
}

if (tmp_tuple_element_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 391;

    goto try_except_handler_34;
}
tmp_assign_source_87 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_87, 0, tmp_tuple_element_35);
assert(tmp_class_container$class_creation_7__bases_orig == NULL);
tmp_class_container$class_creation_7__bases_orig = tmp_assign_source_87;
}
{
PyObject *tmp_assign_source_88;
PyObject *tmp_direct_call_arg1_9;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_direct_call_arg1_9 = tmp_class_container$class_creation_7__bases_orig;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_88 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_34;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_88;
}
{
PyObject *tmp_assign_source_89;
tmp_assign_source_89 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_89;
}
{
PyObject *tmp_assign_source_90;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_33;
int tmp_truth_name_9;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_49;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_34;
}
tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_expression_value_49 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_49, tmp_subscript_value_9, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_34;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_34;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_90 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_34;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_90;
}
{
bool tmp_condition_result_34;
PyObject *tmp_expression_value_50;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_50 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_34;
}
tmp_condition_result_34 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_34 != false) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
{
PyObject *tmp_assign_source_91;
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_51;
PyObject *tmp_args_value_19;
PyObject *tmp_tuple_element_36;
PyObject *tmp_kwargs_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_51 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_34;
}
tmp_tuple_element_36 = mod_consts.const_str_plain_Length;
tmp_args_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_36 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_19 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_textual$validation->m_frame.f_lineno = 391;
tmp_assign_source_91 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_19, tmp_kwargs_value_19);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_value_19);
Py_DECREF(tmp_args_value_19);
if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_34;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_91;
}
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_52;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_52 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_34;
}
tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
assert(!(tmp_res == -1));
tmp_condition_result_35 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_35 != false) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
{
PyObject *tmp_raise_type_9;
PyObject *tmp_make_exception_arg_9;
PyObject *tmp_mod_expr_left_9;
PyObject *tmp_mod_expr_right_9;
PyObject *tmp_tuple_element_37;
PyObject *tmp_expression_value_53;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_53 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_37 = BUILTIN_GETATTR(tstate, tmp_expression_value_53, tmp_name_value_15, tmp_default_value_9);
if (tmp_tuple_element_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_34;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_54;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_54 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_54 == NULL));
tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_54);
Py_DECREF(tmp_expression_value_54);
if (tmp_tuple_element_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_37);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_34;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_34;
}
frame_frame_textual$validation->m_frame.f_lineno = 391;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 391;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_34;
}
branch_no_26:;
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_92;
tmp_assign_source_92 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_92;
}
branch_end_25:;
{
PyObject *tmp_assign_source_93;
outline_10_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_11;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_11 = tmp_class_container$class_creation_7__prepared;
locals_textual$validation$$$class__11_Length_391 = tmp_set_locals_11;
Py_INCREF(tmp_set_locals_11);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__11_Length_391, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_36;
}
tmp_dictset_value = mod_consts.const_str_digest_5e04bf4f4865d62fb8e7741681596813;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__11_Length_391, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_36;
}
tmp_dictset_value = mod_consts.const_str_plain_Length;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__11_Length_391, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_36;
}
tmp_dictset_value = mod_consts.const_int_pos_391;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__11_Length_391, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_36;
}
frame_frame_textual$validation$$$class__11_Length_8 = MAKE_CLASS_FRAME(tstate, code_objects_764f9d7d17ecde01118ac78a01cf70ce, module_textual$validation, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$class__11_Length_8);
assert(Py_REFCNT(frame_frame_textual$validation$$$class__11_Length_8) == 2);

// Framed code:
{
PyObject *tmp_defaults_5;
PyObject *tmp_annotations_22;
struct Nuitka_CellObject *tmp_closure_4[1];
tmp_defaults_5 = mod_consts.const_tuple_none_none_none_tuple;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_3b4b58b5e921989c40d659ef22153fca);
Py_INCREF(tmp_defaults_5);
tmp_closure_4[0] = outline_10_var___class__;
Py_INCREF(tmp_closure_4[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__22___init__(tstate, tmp_defaults_5, tmp_annotations_22, tmp_closure_4);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__11_Length_391, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_outline_return_value_12;
// Tried code:
{
PyObject *tmp_assign_source_94;
PyObject *tmp_tuple_element_38;
tmp_tuple_element_38 = PyObject_GetItem(locals_textual$validation$$$class__11_Length_391, mod_consts.const_str_plain_Failure);

if (tmp_tuple_element_38 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_38 = module_var_accessor_textual$validation$Failure(tstate);
if (unlikely(tmp_tuple_element_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Failure);
}

if (tmp_tuple_element_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_37;
}
        Py_INCREF(tmp_tuple_element_38);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_37;
    }
}

tmp_assign_source_94 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_94, 0, tmp_tuple_element_38);
assert(tmp_Length$class_container$class_creation_1__bases_orig == NULL);
tmp_Length$class_container$class_creation_1__bases_orig = tmp_assign_source_94;
}
{
PyObject *tmp_assign_source_95;
PyObject *tmp_direct_call_arg1_10;
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_10 = tmp_Length$class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_10);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_10};
    tmp_assign_source_95 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_37;
}
assert(tmp_Length$class_container$class_creation_1__bases == NULL);
tmp_Length$class_container$class_creation_1__bases = tmp_assign_source_95;
}
{
PyObject *tmp_assign_source_96;
tmp_assign_source_96 = MAKE_DICT_EMPTY(tstate);
assert(tmp_Length$class_container$class_creation_1__class_decl_dict == NULL);
tmp_Length$class_container$class_creation_1__class_decl_dict = tmp_assign_source_96;
}
{
PyObject *tmp_assign_source_97;
PyObject *tmp_metaclass_value_10;
nuitka_bool tmp_condition_result_36;
int tmp_truth_name_10;
PyObject *tmp_type_arg_19;
PyObject *tmp_expression_value_55;
PyObject *tmp_subscript_value_10;
PyObject *tmp_bases_value_10;
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__bases);
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_Length$class_container$class_creation_1__bases);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_37;
}
tmp_condition_result_36 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_10;
} else {
    goto condexpr_false_10;
}
condexpr_true_10:;
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__bases);
tmp_expression_value_55 = tmp_Length$class_container$class_creation_1__bases;
tmp_subscript_value_10 = const_int_0;
tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_55, tmp_subscript_value_10, 0);
if (tmp_type_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_37;
}
tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
CHECK_OBJECT(tmp_type_arg_19);
Py_DECREF(tmp_type_arg_19);
if (tmp_metaclass_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_37;
}
goto condexpr_end_10;
condexpr_false_10:;
tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_10);
condexpr_end_10:;
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__bases);
tmp_bases_value_10 = tmp_Length$class_container$class_creation_1__bases;
tmp_assign_source_97 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
CHECK_OBJECT(tmp_metaclass_value_10);
Py_DECREF(tmp_metaclass_value_10);
if (tmp_assign_source_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_37;
}
assert(tmp_Length$class_container$class_creation_1__metaclass == NULL);
tmp_Length$class_container$class_creation_1__metaclass = tmp_assign_source_97;
}
{
bool tmp_condition_result_37;
PyObject *tmp_expression_value_56;
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__metaclass);
tmp_expression_value_56 = tmp_Length$class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_56, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_37;
}
tmp_condition_result_37 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_37 != false) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
{
PyObject *tmp_assign_source_98;
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_57;
PyObject *tmp_args_value_20;
PyObject *tmp_tuple_element_39;
PyObject *tmp_kwargs_value_20;
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__metaclass);
tmp_expression_value_57 = tmp_Length$class_container$class_creation_1__metaclass;
tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_37;
}
tmp_tuple_element_39 = mod_consts.const_str_plain_Incorrect;
tmp_args_value_20 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_39);
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__bases);
tmp_tuple_element_39 = tmp_Length$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_39);
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_20 = tmp_Length$class_container$class_creation_1__class_decl_dict;
frame_frame_textual$validation$$$class__11_Length_8->m_frame.f_lineno = 406;
tmp_assign_source_98 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_20, tmp_kwargs_value_20);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_value_20);
Py_DECREF(tmp_args_value_20);
if (tmp_assign_source_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_37;
}
assert(tmp_Length$class_container$class_creation_1__prepared == NULL);
tmp_Length$class_container$class_creation_1__prepared = tmp_assign_source_98;
}
{
bool tmp_condition_result_38;
PyObject *tmp_operand_value_10;
PyObject *tmp_expression_value_58;
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__prepared);
tmp_expression_value_58 = tmp_Length$class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_58, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_37;
}
tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
assert(!(tmp_res == -1));
tmp_condition_result_38 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_38 != false) {
    goto branch_yes_28;
} else {
    goto branch_no_28;
}
}
branch_yes_28:;
{
PyObject *tmp_raise_type_10;
PyObject *tmp_make_exception_arg_10;
PyObject *tmp_mod_expr_left_10;
PyObject *tmp_mod_expr_right_10;
PyObject *tmp_tuple_element_40;
PyObject *tmp_expression_value_59;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__metaclass);
tmp_expression_value_59 = tmp_Length$class_container$class_creation_1__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_40 = BUILTIN_GETATTR(tstate, tmp_expression_value_59, tmp_name_value_16, tmp_default_value_10);
if (tmp_tuple_element_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_37;
}
tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_60;
PyObject *tmp_type_arg_20;
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_40);
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__prepared);
tmp_type_arg_20 = tmp_Length$class_container$class_creation_1__prepared;
tmp_expression_value_60 = BUILTIN_TYPE1(tmp_type_arg_20);
assert(!(tmp_expression_value_60 == NULL));
tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_60);
Py_DECREF(tmp_expression_value_60);
if (tmp_tuple_element_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_40);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_mod_expr_right_10);
goto try_except_handler_37;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_make_exception_arg_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
CHECK_OBJECT(tmp_mod_expr_right_10);
Py_DECREF(tmp_mod_expr_right_10);
if (tmp_make_exception_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_37;
}
frame_frame_textual$validation$$$class__11_Length_8->m_frame.f_lineno = 406;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 406;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "c";
goto try_except_handler_37;
}
branch_no_28:;
goto branch_end_27;
branch_no_27:;
{
PyObject *tmp_assign_source_99;
tmp_assign_source_99 = MAKE_DICT_EMPTY(tstate);
assert(tmp_Length$class_container$class_creation_1__prepared == NULL);
tmp_Length$class_container$class_creation_1__prepared = tmp_assign_source_99;
}
branch_end_27:;
{
PyObject *tmp_set_locals_12;
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__prepared);
tmp_set_locals_12 = tmp_Length$class_container$class_creation_1__prepared;
locals_textual$validation$$$class__12_Incorrect_406 = tmp_set_locals_12;
Py_INCREF(tmp_set_locals_12);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__12_Incorrect_406, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_39;
}
tmp_dictset_value = mod_consts.const_str_digest_249d2b5e707392f5c05b054dc5b6052f;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__12_Incorrect_406, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_39;
}
tmp_dictset_value = mod_consts.const_str_digest_ea0bc1a9b6adfd0156c886788693ef71;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__12_Incorrect_406, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_39;
}
tmp_dictset_value = mod_consts.const_int_pos_406;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__12_Incorrect_406, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_39;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__12_Incorrect_406, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_39;
}
{
nuitka_bool tmp_condition_result_39;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__bases);
tmp_cmp_expr_left_9 = tmp_Length$class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_9 = tmp_Length$class_container$class_creation_1__bases_orig;
tmp_condition_result_39 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_39 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_39;
}
if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
    goto branch_yes_29;
} else {
    goto branch_no_29;
}
}
branch_yes_29:;
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_Length$class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__12_Incorrect_406, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_39;
}
branch_no_29:;
{
PyObject *tmp_assign_source_100;
PyObject *tmp_called_value_27;
PyObject *tmp_args_value_21;
PyObject *tmp_tuple_element_41;
PyObject *tmp_kwargs_value_21;
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__metaclass);
tmp_called_value_27 = tmp_Length$class_container$class_creation_1__metaclass;
tmp_tuple_element_41 = mod_consts.const_str_plain_Incorrect;
tmp_args_value_21 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_41);
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__bases);
tmp_tuple_element_41 = tmp_Length$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_41);
tmp_tuple_element_41 = locals_textual$validation$$$class__12_Incorrect_406;
PyTuple_SET_ITEM0(tmp_args_value_21, 2, tmp_tuple_element_41);
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_21 = tmp_Length$class_container$class_creation_1__class_decl_dict;
frame_frame_textual$validation$$$class__11_Length_8->m_frame.f_lineno = 406;
tmp_assign_source_100 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_21, tmp_kwargs_value_21);
CHECK_OBJECT(tmp_args_value_21);
Py_DECREF(tmp_args_value_21);
if (tmp_assign_source_100 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_39;
}
assert(outline_11_var___class__ == NULL);
outline_11_var___class__ = tmp_assign_source_100;
}
CHECK_OBJECT(outline_11_var___class__);
tmp_dictset_value = outline_11_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_39;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_39:;
Py_DECREF(locals_textual$validation$$$class__12_Incorrect_406);
locals_textual$validation$$$class__12_Incorrect_406 = NULL;
goto try_return_handler_38;
// Exception handler code:
try_except_handler_39:;
exception_keeper_lineno_34 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_34 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$validation$$$class__12_Incorrect_406);
locals_textual$validation$$$class__12_Incorrect_406 = NULL;
// Re-raise.
exception_state = exception_keeper_name_34;
exception_lineno = exception_keeper_lineno_34;

goto try_except_handler_38;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_38:;
CHECK_OBJECT(outline_11_var___class__);
CHECK_OBJECT(outline_11_var___class__);
Py_DECREF(outline_11_var___class__);
outline_11_var___class__ = NULL;
goto outline_result_24;
// Exception handler code:
try_except_handler_38:;
exception_keeper_lineno_35 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_35 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_35;
exception_lineno = exception_keeper_lineno_35;

goto outline_exception_12;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_12:;
exception_lineno = 406;
goto try_except_handler_37;
outline_result_24:;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__11_Length_391, mod_consts.const_str_plain_Incorrect, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "c";
    goto try_except_handler_37;
}
goto try_end_14;
// Exception handler code:
try_except_handler_37:;
exception_keeper_lineno_36 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_36 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_Length$class_container$class_creation_1__bases_orig);
tmp_Length$class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_Length$class_container$class_creation_1__bases);
tmp_Length$class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_Length$class_container$class_creation_1__class_decl_dict);
tmp_Length$class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_Length$class_container$class_creation_1__metaclass);
tmp_Length$class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_Length$class_container$class_creation_1__prepared);
tmp_Length$class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_36;
exception_lineno = exception_keeper_lineno_36;

goto frame_exception_exit_8;
// End of try:
try_end_14:;
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_Length$class_container$class_creation_1__bases_orig);
tmp_Length$class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__bases);
Py_DECREF(tmp_Length$class_container$class_creation_1__bases);
tmp_Length$class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_Length$class_container$class_creation_1__class_decl_dict);
tmp_Length$class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__metaclass);
Py_DECREF(tmp_Length$class_container$class_creation_1__metaclass);
tmp_Length$class_container$class_creation_1__metaclass = NULL;
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_Length$class_container$class_creation_1__prepared);
Py_DECREF(tmp_Length$class_container$class_creation_1__prepared);
tmp_Length$class_container$class_creation_1__prepared = NULL;
tmp_outline_return_value_12 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_12);
goto outline_result_23;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_23:;
CHECK_OBJECT(tmp_outline_return_value_12);
Py_DECREF(tmp_outline_return_value_12);
}
{
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_98ffed80e59f5fb575806dc2bd70961d);

tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__23_validate(tstate, tmp_annotations_23);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__11_Length_391, mod_consts.const_str_plain_validate, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_annotations_24;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_af0a7ee4eda1bf396268a812c0a8ac6b);

tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__24_describe_failure(tstate, tmp_annotations_24);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__11_Length_391, mod_consts.const_str_plain_describe_failure, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_7;
frame_exception_exit_8:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$class__11_Length_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$class__11_Length_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$class__11_Length_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$class__11_Length_8,
    type_description_2,
    outline_10_var___class__
);



assertFrameObject(frame_frame_textual$validation$$$class__11_Length_8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_36;
skip_nested_handling_7:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_minimum_str_plain_maximum_tuple;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__11_Length_391, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_36;
}
{
nuitka_bool tmp_condition_result_40;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_cmp_expr_left_10 = tmp_class_container$class_creation_7__bases;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_cmp_expr_right_10 = tmp_class_container$class_creation_7__bases_orig;
tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_36;
}
if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
    goto branch_yes_30;
} else {
    goto branch_no_30;
}
}
branch_yes_30:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_7__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__11_Length_391, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_36;
}
branch_no_30:;
{
PyObject *tmp_assign_source_101;
PyObject *tmp_called_value_28;
PyObject *tmp_args_value_22;
PyObject *tmp_tuple_element_42;
PyObject *tmp_kwargs_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_28 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_42 = mod_consts.const_str_plain_Length;
tmp_args_value_22 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_42 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_42);
tmp_tuple_element_42 = locals_textual$validation$$$class__11_Length_391;
PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_22 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_textual$validation->m_frame.f_lineno = 391;
tmp_assign_source_101 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_22, tmp_kwargs_value_22);
CHECK_OBJECT(tmp_args_value_22);
Py_DECREF(tmp_args_value_22);
if (tmp_assign_source_101 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto try_except_handler_36;
}
assert(Nuitka_Cell_GET(outline_10_var___class__) == NULL);
Nuitka_Cell_SET(outline_10_var___class__, tmp_assign_source_101);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_10_var___class__));
tmp_assign_source_93 = Nuitka_Cell_GET(outline_10_var___class__);
Py_INCREF(tmp_assign_source_93);
goto try_return_handler_36;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_36:;
Py_DECREF(locals_textual$validation$$$class__11_Length_391);
locals_textual$validation$$$class__11_Length_391 = NULL;
goto try_return_handler_35;
// Exception handler code:
try_except_handler_36:;
exception_keeper_lineno_37 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_37 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$validation$$$class__11_Length_391);
locals_textual$validation$$$class__11_Length_391 = NULL;
// Re-raise.
exception_state = exception_keeper_name_37;
exception_lineno = exception_keeper_lineno_37;

goto try_except_handler_35;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_35:;
CHECK_OBJECT(outline_10_var___class__);
CHECK_OBJECT(outline_10_var___class__);
Py_DECREF(outline_10_var___class__);
outline_10_var___class__ = NULL;
goto outline_result_22;
// Exception handler code:
try_except_handler_35:;
exception_keeper_lineno_38 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_38 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_38;
exception_lineno = exception_keeper_lineno_38;

goto outline_exception_11;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_11:;
exception_lineno = 391;
goto try_except_handler_34;
outline_result_22:;
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Length, tmp_assign_source_93);
}
goto try_end_15;
// Exception handler code:
try_except_handler_34:;
exception_keeper_lineno_39 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_39 = exception_state;
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
exception_state = exception_keeper_name_39;
exception_lineno = exception_keeper_lineno_39;

goto frame_exception_exit_1;
// End of try:
try_end_15:;
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
tmp_outline_return_value_11 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_11);
goto outline_result_21;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_21:;
CHECK_OBJECT(tmp_outline_return_value_11);
Py_DECREF(tmp_outline_return_value_11);
}
{
PyObject *tmp_outline_return_value_13;
// Tried code:
{
PyObject *tmp_assign_source_102;
PyObject *tmp_tuple_element_43;
tmp_tuple_element_43 = module_var_accessor_textual$validation$Validator(tstate);
if (unlikely(tmp_tuple_element_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Validator);
}

if (tmp_tuple_element_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 443;

    goto try_except_handler_40;
}
tmp_assign_source_102 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_102, 0, tmp_tuple_element_43);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_102;
}
{
PyObject *tmp_assign_source_103;
PyObject *tmp_direct_call_arg1_11;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_11 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_11);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_11};
    tmp_assign_source_103 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_40;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_103;
}
{
PyObject *tmp_assign_source_104;
tmp_assign_source_104 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_104;
}
{
PyObject *tmp_assign_source_105;
PyObject *tmp_metaclass_value_11;
nuitka_bool tmp_condition_result_41;
int tmp_truth_name_11;
PyObject *tmp_type_arg_21;
PyObject *tmp_expression_value_61;
PyObject *tmp_subscript_value_11;
PyObject *tmp_bases_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_40;
}
tmp_condition_result_41 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_11;
} else {
    goto condexpr_false_11;
}
condexpr_true_11:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_61 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_11 = const_int_0;
tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_61, tmp_subscript_value_11, 0);
if (tmp_type_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_40;
}
tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
CHECK_OBJECT(tmp_type_arg_21);
Py_DECREF(tmp_type_arg_21);
if (tmp_metaclass_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_40;
}
goto condexpr_end_11;
condexpr_false_11:;
tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_11);
condexpr_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_11 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_105 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
CHECK_OBJECT(tmp_metaclass_value_11);
Py_DECREF(tmp_metaclass_value_11);
if (tmp_assign_source_105 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_40;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_105;
}
{
bool tmp_condition_result_42;
PyObject *tmp_expression_value_62;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_62 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_62, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_40;
}
tmp_condition_result_42 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_42 != false) {
    goto branch_yes_31;
} else {
    goto branch_no_31;
}
}
branch_yes_31:;
{
PyObject *tmp_assign_source_106;
PyObject *tmp_called_value_29;
PyObject *tmp_expression_value_63;
PyObject *tmp_args_value_23;
PyObject *tmp_tuple_element_44;
PyObject *tmp_kwargs_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_63 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_40;
}
tmp_tuple_element_44 = mod_consts.const_str_plain_Function;
tmp_args_value_23 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_44 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_23 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_textual$validation->m_frame.f_lineno = 443;
tmp_assign_source_106 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_23, tmp_kwargs_value_23);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_value_23);
Py_DECREF(tmp_args_value_23);
if (tmp_assign_source_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_40;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_106;
}
{
bool tmp_condition_result_43;
PyObject *tmp_operand_value_11;
PyObject *tmp_expression_value_64;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_64 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_64, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_40;
}
tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
assert(!(tmp_res == -1));
tmp_condition_result_43 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_43 != false) {
    goto branch_yes_32;
} else {
    goto branch_no_32;
}
}
branch_yes_32:;
{
PyObject *tmp_raise_type_11;
PyObject *tmp_make_exception_arg_11;
PyObject *tmp_mod_expr_left_11;
PyObject *tmp_mod_expr_right_11;
PyObject *tmp_tuple_element_45;
PyObject *tmp_expression_value_65;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_11;
tmp_mod_expr_left_11 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_65 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_11 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_45 = BUILTIN_GETATTR(tstate, tmp_expression_value_65, tmp_name_value_17, tmp_default_value_11);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_40;
}
tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_66;
PyObject *tmp_type_arg_22;
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_22 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_66 = BUILTIN_TYPE1(tmp_type_arg_22);
assert(!(tmp_expression_value_66 == NULL));
tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_66);
Py_DECREF(tmp_expression_value_66);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_45);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_11);
goto try_except_handler_40;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
CHECK_OBJECT(tmp_mod_expr_right_11);
Py_DECREF(tmp_mod_expr_right_11);
if (tmp_make_exception_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_40;
}
frame_frame_textual$validation->m_frame.f_lineno = 443;
tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_11);
CHECK_OBJECT(tmp_make_exception_arg_11);
Py_DECREF(tmp_make_exception_arg_11);
assert(!(tmp_raise_type_11 == NULL));
exception_state.exception_value = tmp_raise_type_11;
exception_lineno = 443;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_40;
}
branch_no_32:;
goto branch_end_31;
branch_no_31:;
{
PyObject *tmp_assign_source_107;
tmp_assign_source_107 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_107;
}
branch_end_31:;
{
PyObject *tmp_assign_source_108;
outline_12_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_13;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_13 = tmp_class_container$class_creation_8__prepared;
locals_textual$validation$$$class__13_Function_443 = tmp_set_locals_13;
Py_INCREF(tmp_set_locals_13);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__13_Function_443, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_42;
}
tmp_dictset_value = mod_consts.const_str_digest_214e9bdd47fbd7a302758956ff6107db;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__13_Function_443, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_42;
}
tmp_dictset_value = mod_consts.const_str_plain_Function;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__13_Function_443, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_42;
}
tmp_dictset_value = mod_consts.const_int_pos_443;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__13_Function_443, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_42;
}
frame_frame_textual$validation$$$class__13_Function_9 = MAKE_CLASS_FRAME(tstate, code_objects_6f61db7ee215d62a739976b718e54268, module_textual$validation, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$class__13_Function_9);
assert(Py_REFCNT(frame_frame_textual$validation$$$class__13_Function_9) == 2);

// Framed code:
{
PyObject *tmp_defaults_6;
PyObject *tmp_annotations_25;
struct Nuitka_CellObject *tmp_closure_5[1];
tmp_defaults_6 = mod_consts.const_tuple_none_tuple;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_a335a1c8b691c9369d1a727457cc2910);
Py_INCREF(tmp_defaults_6);
tmp_closure_5[0] = outline_12_var___class__;
Py_INCREF(tmp_closure_5[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__25___init__(tstate, tmp_defaults_6, tmp_annotations_25, tmp_closure_5);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__13_Function_443, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_2 = "c";
    goto frame_exception_exit_9;
}
}
{
PyObject *tmp_outline_return_value_14;
// Tried code:
{
PyObject *tmp_assign_source_109;
PyObject *tmp_tuple_element_46;
tmp_tuple_element_46 = PyObject_GetItem(locals_textual$validation$$$class__13_Function_443, mod_consts.const_str_plain_Failure);

if (tmp_tuple_element_46 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_46 = module_var_accessor_textual$validation$Failure(tstate);
if (unlikely(tmp_tuple_element_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Failure);
}

if (tmp_tuple_element_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_43;
}
        Py_INCREF(tmp_tuple_element_46);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_43;
    }
}

tmp_assign_source_109 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_109, 0, tmp_tuple_element_46);
assert(tmp_Function$class_container$class_creation_1__bases_orig == NULL);
tmp_Function$class_container$class_creation_1__bases_orig = tmp_assign_source_109;
}
{
PyObject *tmp_assign_source_110;
PyObject *tmp_direct_call_arg1_12;
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_12 = tmp_Function$class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_12);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_12};
    tmp_assign_source_110 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_43;
}
assert(tmp_Function$class_container$class_creation_1__bases == NULL);
tmp_Function$class_container$class_creation_1__bases = tmp_assign_source_110;
}
{
PyObject *tmp_assign_source_111;
tmp_assign_source_111 = MAKE_DICT_EMPTY(tstate);
assert(tmp_Function$class_container$class_creation_1__class_decl_dict == NULL);
tmp_Function$class_container$class_creation_1__class_decl_dict = tmp_assign_source_111;
}
{
PyObject *tmp_assign_source_112;
PyObject *tmp_metaclass_value_12;
nuitka_bool tmp_condition_result_44;
int tmp_truth_name_12;
PyObject *tmp_type_arg_23;
PyObject *tmp_expression_value_67;
PyObject *tmp_subscript_value_12;
PyObject *tmp_bases_value_12;
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__bases);
tmp_truth_name_12 = CHECK_IF_TRUE(tmp_Function$class_container$class_creation_1__bases);
if (tmp_truth_name_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_43;
}
tmp_condition_result_44 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_12;
} else {
    goto condexpr_false_12;
}
condexpr_true_12:;
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__bases);
tmp_expression_value_67 = tmp_Function$class_container$class_creation_1__bases;
tmp_subscript_value_12 = const_int_0;
tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_67, tmp_subscript_value_12, 0);
if (tmp_type_arg_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_43;
}
tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
CHECK_OBJECT(tmp_type_arg_23);
Py_DECREF(tmp_type_arg_23);
if (tmp_metaclass_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_43;
}
goto condexpr_end_12;
condexpr_false_12:;
tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_12);
condexpr_end_12:;
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__bases);
tmp_bases_value_12 = tmp_Function$class_container$class_creation_1__bases;
tmp_assign_source_112 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
CHECK_OBJECT(tmp_metaclass_value_12);
Py_DECREF(tmp_metaclass_value_12);
if (tmp_assign_source_112 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_43;
}
assert(tmp_Function$class_container$class_creation_1__metaclass == NULL);
tmp_Function$class_container$class_creation_1__metaclass = tmp_assign_source_112;
}
{
bool tmp_condition_result_45;
PyObject *tmp_expression_value_68;
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__metaclass);
tmp_expression_value_68 = tmp_Function$class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_68, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_43;
}
tmp_condition_result_45 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_45 != false) {
    goto branch_yes_33;
} else {
    goto branch_no_33;
}
}
branch_yes_33:;
{
PyObject *tmp_assign_source_113;
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_69;
PyObject *tmp_args_value_24;
PyObject *tmp_tuple_element_47;
PyObject *tmp_kwargs_value_24;
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__metaclass);
tmp_expression_value_69 = tmp_Function$class_container$class_creation_1__metaclass;
tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_43;
}
tmp_tuple_element_47 = mod_consts.const_str_plain_ReturnedFalse;
tmp_args_value_24 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_47);
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__bases);
tmp_tuple_element_47 = tmp_Function$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_47);
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_24 = tmp_Function$class_container$class_creation_1__class_decl_dict;
frame_frame_textual$validation$$$class__13_Function_9->m_frame.f_lineno = 455;
tmp_assign_source_113 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_24, tmp_kwargs_value_24);
CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
CHECK_OBJECT(tmp_args_value_24);
Py_DECREF(tmp_args_value_24);
if (tmp_assign_source_113 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_43;
}
assert(tmp_Function$class_container$class_creation_1__prepared == NULL);
tmp_Function$class_container$class_creation_1__prepared = tmp_assign_source_113;
}
{
bool tmp_condition_result_46;
PyObject *tmp_operand_value_12;
PyObject *tmp_expression_value_70;
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__prepared);
tmp_expression_value_70 = tmp_Function$class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_70, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_43;
}
tmp_operand_value_12 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
assert(!(tmp_res == -1));
tmp_condition_result_46 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_46 != false) {
    goto branch_yes_34;
} else {
    goto branch_no_34;
}
}
branch_yes_34:;
{
PyObject *tmp_raise_type_12;
PyObject *tmp_make_exception_arg_12;
PyObject *tmp_mod_expr_left_12;
PyObject *tmp_mod_expr_right_12;
PyObject *tmp_tuple_element_48;
PyObject *tmp_expression_value_71;
PyObject *tmp_name_value_18;
PyObject *tmp_default_value_12;
tmp_mod_expr_left_12 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__metaclass);
tmp_expression_value_71 = tmp_Function$class_container$class_creation_1__metaclass;
tmp_name_value_18 = const_str_plain___name__;
tmp_default_value_12 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_48 = BUILTIN_GETATTR(tstate, tmp_expression_value_71, tmp_name_value_18, tmp_default_value_12);
if (tmp_tuple_element_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_43;
}
tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_72;
PyObject *tmp_type_arg_24;
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_48);
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__prepared);
tmp_type_arg_24 = tmp_Function$class_container$class_creation_1__prepared;
tmp_expression_value_72 = BUILTIN_TYPE1(tmp_type_arg_24);
assert(!(tmp_expression_value_72 == NULL));
tmp_tuple_element_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_72);
Py_DECREF(tmp_expression_value_72);
if (tmp_tuple_element_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_48);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_mod_expr_right_12);
goto try_except_handler_43;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_make_exception_arg_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
CHECK_OBJECT(tmp_mod_expr_right_12);
Py_DECREF(tmp_mod_expr_right_12);
if (tmp_make_exception_arg_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_43;
}
frame_frame_textual$validation$$$class__13_Function_9->m_frame.f_lineno = 455;
tmp_raise_type_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_12);
CHECK_OBJECT(tmp_make_exception_arg_12);
Py_DECREF(tmp_make_exception_arg_12);
assert(!(tmp_raise_type_12 == NULL));
exception_state.exception_value = tmp_raise_type_12;
exception_lineno = 455;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "c";
goto try_except_handler_43;
}
branch_no_34:;
goto branch_end_33;
branch_no_33:;
{
PyObject *tmp_assign_source_114;
tmp_assign_source_114 = MAKE_DICT_EMPTY(tstate);
assert(tmp_Function$class_container$class_creation_1__prepared == NULL);
tmp_Function$class_container$class_creation_1__prepared = tmp_assign_source_114;
}
branch_end_33:;
{
PyObject *tmp_set_locals_14;
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__prepared);
tmp_set_locals_14 = tmp_Function$class_container$class_creation_1__prepared;
locals_textual$validation$$$class__14_ReturnedFalse_455 = tmp_set_locals_14;
Py_INCREF(tmp_set_locals_14);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__14_ReturnedFalse_455, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_45;
}
tmp_dictset_value = mod_consts.const_str_digest_c933c7da3a2520030ef8aa56fb6949f7;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__14_ReturnedFalse_455, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_45;
}
tmp_dictset_value = mod_consts.const_str_digest_f4c08eb2ccba920f2d3af130dcda10e8;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__14_ReturnedFalse_455, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_45;
}
tmp_dictset_value = mod_consts.const_int_pos_455;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__14_ReturnedFalse_455, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_45;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__14_ReturnedFalse_455, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_45;
}
{
nuitka_bool tmp_condition_result_47;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__bases);
tmp_cmp_expr_left_11 = tmp_Function$class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_11 = tmp_Function$class_container$class_creation_1__bases_orig;
tmp_condition_result_47 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_47 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_45;
}
if (tmp_condition_result_47 == NUITKA_BOOL_TRUE) {
    goto branch_yes_35;
} else {
    goto branch_no_35;
}
}
branch_yes_35:;
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_Function$class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__14_ReturnedFalse_455, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_45;
}
branch_no_35:;
{
PyObject *tmp_assign_source_115;
PyObject *tmp_called_value_31;
PyObject *tmp_args_value_25;
PyObject *tmp_tuple_element_49;
PyObject *tmp_kwargs_value_25;
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__metaclass);
tmp_called_value_31 = tmp_Function$class_container$class_creation_1__metaclass;
tmp_tuple_element_49 = mod_consts.const_str_plain_ReturnedFalse;
tmp_args_value_25 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_49);
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__bases);
tmp_tuple_element_49 = tmp_Function$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_49);
tmp_tuple_element_49 = locals_textual$validation$$$class__14_ReturnedFalse_455;
PyTuple_SET_ITEM0(tmp_args_value_25, 2, tmp_tuple_element_49);
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_25 = tmp_Function$class_container$class_creation_1__class_decl_dict;
frame_frame_textual$validation$$$class__13_Function_9->m_frame.f_lineno = 455;
tmp_assign_source_115 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_25, tmp_kwargs_value_25);
CHECK_OBJECT(tmp_args_value_25);
Py_DECREF(tmp_args_value_25);
if (tmp_assign_source_115 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_45;
}
assert(outline_13_var___class__ == NULL);
outline_13_var___class__ = tmp_assign_source_115;
}
CHECK_OBJECT(outline_13_var___class__);
tmp_dictset_value = outline_13_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_45;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_45:;
Py_DECREF(locals_textual$validation$$$class__14_ReturnedFalse_455);
locals_textual$validation$$$class__14_ReturnedFalse_455 = NULL;
goto try_return_handler_44;
// Exception handler code:
try_except_handler_45:;
exception_keeper_lineno_40 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_40 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$validation$$$class__14_ReturnedFalse_455);
locals_textual$validation$$$class__14_ReturnedFalse_455 = NULL;
// Re-raise.
exception_state = exception_keeper_name_40;
exception_lineno = exception_keeper_lineno_40;

goto try_except_handler_44;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_44:;
CHECK_OBJECT(outline_13_var___class__);
CHECK_OBJECT(outline_13_var___class__);
Py_DECREF(outline_13_var___class__);
outline_13_var___class__ = NULL;
goto outline_result_28;
// Exception handler code:
try_except_handler_44:;
exception_keeper_lineno_41 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_41 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_41;
exception_lineno = exception_keeper_lineno_41;

goto outline_exception_14;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_14:;
exception_lineno = 455;
goto try_except_handler_43;
outline_result_28:;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__13_Function_443, mod_consts.const_str_plain_ReturnedFalse, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto try_except_handler_43;
}
goto try_end_16;
// Exception handler code:
try_except_handler_43:;
exception_keeper_lineno_42 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_42 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_Function$class_container$class_creation_1__bases_orig);
tmp_Function$class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_Function$class_container$class_creation_1__bases);
tmp_Function$class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_Function$class_container$class_creation_1__class_decl_dict);
tmp_Function$class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_Function$class_container$class_creation_1__metaclass);
tmp_Function$class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_Function$class_container$class_creation_1__prepared);
tmp_Function$class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_42;
exception_lineno = exception_keeper_lineno_42;

goto frame_exception_exit_9;
// End of try:
try_end_16:;
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_Function$class_container$class_creation_1__bases_orig);
tmp_Function$class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__bases);
Py_DECREF(tmp_Function$class_container$class_creation_1__bases);
tmp_Function$class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_Function$class_container$class_creation_1__class_decl_dict);
tmp_Function$class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__metaclass);
Py_DECREF(tmp_Function$class_container$class_creation_1__metaclass);
tmp_Function$class_container$class_creation_1__metaclass = NULL;
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_Function$class_container$class_creation_1__prepared);
Py_DECREF(tmp_Function$class_container$class_creation_1__prepared);
tmp_Function$class_container$class_creation_1__prepared = NULL;
tmp_outline_return_value_14 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_14);
goto outline_result_27;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_27:;
CHECK_OBJECT(tmp_outline_return_value_14);
Py_DECREF(tmp_outline_return_value_14);
}
{
PyObject *tmp_annotations_26;
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_98ffed80e59f5fb575806dc2bd70961d);

tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__26_validate(tstate, tmp_annotations_26);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__13_Function_443, mod_consts.const_str_plain_validate, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_2 = "c";
    goto frame_exception_exit_9;
}
}
{
PyObject *tmp_annotations_27;
tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_af0a7ee4eda1bf396268a812c0a8ac6b);

tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__27_describe_failure(tstate, tmp_annotations_27);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__13_Function_443, mod_consts.const_str_plain_describe_failure, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_2 = "c";
    goto frame_exception_exit_9;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_8;
frame_exception_exit_9:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$class__13_Function_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$class__13_Function_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$class__13_Function_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$class__13_Function_9,
    type_description_2,
    outline_12_var___class__
);



assertFrameObject(frame_frame_textual$validation$$$class__13_Function_9);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_8;
frame_no_exception_8:;
goto skip_nested_handling_8;
nested_frame_exit_8:;

goto try_except_handler_42;
skip_nested_handling_8:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_function_tuple;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__13_Function_443, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_42;
}
{
nuitka_bool tmp_condition_result_48;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_cmp_expr_left_12 = tmp_class_container$class_creation_8__bases;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_cmp_expr_right_12 = tmp_class_container$class_creation_8__bases_orig;
tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_42;
}
if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
    goto branch_yes_36;
} else {
    goto branch_no_36;
}
}
branch_yes_36:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_8__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__13_Function_443, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_42;
}
branch_no_36:;
{
PyObject *tmp_assign_source_116;
PyObject *tmp_called_value_32;
PyObject *tmp_args_value_26;
PyObject *tmp_tuple_element_50;
PyObject *tmp_kwargs_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_32 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_50 = mod_consts.const_str_plain_Function;
tmp_args_value_26 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_50);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_50 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_50);
tmp_tuple_element_50 = locals_textual$validation$$$class__13_Function_443;
PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_50);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_26 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_textual$validation->m_frame.f_lineno = 443;
tmp_assign_source_116 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_26, tmp_kwargs_value_26);
CHECK_OBJECT(tmp_args_value_26);
Py_DECREF(tmp_args_value_26);
if (tmp_assign_source_116 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_42;
}
assert(Nuitka_Cell_GET(outline_12_var___class__) == NULL);
Nuitka_Cell_SET(outline_12_var___class__, tmp_assign_source_116);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_12_var___class__));
tmp_assign_source_108 = Nuitka_Cell_GET(outline_12_var___class__);
Py_INCREF(tmp_assign_source_108);
goto try_return_handler_42;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_42:;
Py_DECREF(locals_textual$validation$$$class__13_Function_443);
locals_textual$validation$$$class__13_Function_443 = NULL;
goto try_return_handler_41;
// Exception handler code:
try_except_handler_42:;
exception_keeper_lineno_43 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_43 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$validation$$$class__13_Function_443);
locals_textual$validation$$$class__13_Function_443 = NULL;
// Re-raise.
exception_state = exception_keeper_name_43;
exception_lineno = exception_keeper_lineno_43;

goto try_except_handler_41;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_41:;
CHECK_OBJECT(outline_12_var___class__);
CHECK_OBJECT(outline_12_var___class__);
Py_DECREF(outline_12_var___class__);
outline_12_var___class__ = NULL;
goto outline_result_26;
// Exception handler code:
try_except_handler_41:;
exception_keeper_lineno_44 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_44 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_44;
exception_lineno = exception_keeper_lineno_44;

goto outline_exception_13;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_13:;
exception_lineno = 443;
goto try_except_handler_40;
outline_result_26:;
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_Function, tmp_assign_source_108);
}
goto try_end_17;
// Exception handler code:
try_except_handler_40:;
exception_keeper_lineno_45 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_45 = exception_state;
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
exception_state = exception_keeper_name_45;
exception_lineno = exception_keeper_lineno_45;

goto frame_exception_exit_1;
// End of try:
try_end_17:;
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
tmp_outline_return_value_13 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_13);
goto outline_result_25;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_25:;
CHECK_OBJECT(tmp_outline_return_value_13);
Py_DECREF(tmp_outline_return_value_13);
}
{
PyObject *tmp_outline_return_value_15;
// Tried code:
{
PyObject *tmp_assign_source_117;
PyObject *tmp_tuple_element_51;
tmp_tuple_element_51 = module_var_accessor_textual$validation$Validator(tstate);
if (unlikely(tmp_tuple_element_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Validator);
}

if (tmp_tuple_element_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 485;

    goto try_except_handler_46;
}
tmp_assign_source_117 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_117, 0, tmp_tuple_element_51);
assert(tmp_class_container$class_creation_9__bases_orig == NULL);
tmp_class_container$class_creation_9__bases_orig = tmp_assign_source_117;
}
{
PyObject *tmp_assign_source_118;
PyObject *tmp_direct_call_arg1_13;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_direct_call_arg1_13 = tmp_class_container$class_creation_9__bases_orig;
Py_INCREF(tmp_direct_call_arg1_13);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_13};
    tmp_assign_source_118 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_118 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_46;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_118;
}
{
PyObject *tmp_assign_source_119;
tmp_assign_source_119 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_119;
}
{
PyObject *tmp_assign_source_120;
PyObject *tmp_metaclass_value_13;
nuitka_bool tmp_condition_result_49;
int tmp_truth_name_13;
PyObject *tmp_type_arg_25;
PyObject *tmp_expression_value_73;
PyObject *tmp_subscript_value_13;
PyObject *tmp_bases_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_13 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_46;
}
tmp_condition_result_49 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_13;
} else {
    goto condexpr_false_13;
}
condexpr_true_13:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_expression_value_73 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_13 = const_int_0;
tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_73, tmp_subscript_value_13, 0);
if (tmp_type_arg_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_46;
}
tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
CHECK_OBJECT(tmp_type_arg_25);
Py_DECREF(tmp_type_arg_25);
if (tmp_metaclass_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_46;
}
goto condexpr_end_13;
condexpr_false_13:;
tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_13);
condexpr_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_13 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_120 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
CHECK_OBJECT(tmp_metaclass_value_13);
Py_DECREF(tmp_metaclass_value_13);
if (tmp_assign_source_120 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_46;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_120;
}
{
bool tmp_condition_result_50;
PyObject *tmp_expression_value_74;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_74 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_74, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_46;
}
tmp_condition_result_50 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_50 != false) {
    goto branch_yes_37;
} else {
    goto branch_no_37;
}
}
branch_yes_37:;
{
PyObject *tmp_assign_source_121;
PyObject *tmp_called_value_33;
PyObject *tmp_expression_value_75;
PyObject *tmp_args_value_27;
PyObject *tmp_tuple_element_52;
PyObject *tmp_kwargs_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_75 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_46;
}
tmp_tuple_element_52 = mod_consts.const_str_plain_URL;
tmp_args_value_27 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_52);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_52 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_52);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_27 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_textual$validation->m_frame.f_lineno = 485;
tmp_assign_source_121 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_27, tmp_kwargs_value_27);
CHECK_OBJECT(tmp_called_value_33);
Py_DECREF(tmp_called_value_33);
CHECK_OBJECT(tmp_args_value_27);
Py_DECREF(tmp_args_value_27);
if (tmp_assign_source_121 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_46;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_121;
}
{
bool tmp_condition_result_51;
PyObject *tmp_operand_value_13;
PyObject *tmp_expression_value_76;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_76 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_76, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_46;
}
tmp_operand_value_13 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
assert(!(tmp_res == -1));
tmp_condition_result_51 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_51 != false) {
    goto branch_yes_38;
} else {
    goto branch_no_38;
}
}
branch_yes_38:;
{
PyObject *tmp_raise_type_13;
PyObject *tmp_make_exception_arg_13;
PyObject *tmp_mod_expr_left_13;
PyObject *tmp_mod_expr_right_13;
PyObject *tmp_tuple_element_53;
PyObject *tmp_expression_value_77;
PyObject *tmp_name_value_19;
PyObject *tmp_default_value_13;
tmp_mod_expr_left_13 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_77 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_19 = const_str_plain___name__;
tmp_default_value_13 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_53 = BUILTIN_GETATTR(tstate, tmp_expression_value_77, tmp_name_value_19, tmp_default_value_13);
if (tmp_tuple_element_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_46;
}
tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_78;
PyObject *tmp_type_arg_26;
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_53);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_26 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_78 = BUILTIN_TYPE1(tmp_type_arg_26);
assert(!(tmp_expression_value_78 == NULL));
tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_78);
Py_DECREF(tmp_expression_value_78);
if (tmp_tuple_element_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_53);
}
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_mod_expr_right_13);
goto try_except_handler_46;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_make_exception_arg_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
CHECK_OBJECT(tmp_mod_expr_right_13);
Py_DECREF(tmp_mod_expr_right_13);
if (tmp_make_exception_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_46;
}
frame_frame_textual$validation->m_frame.f_lineno = 485;
tmp_raise_type_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_13);
CHECK_OBJECT(tmp_make_exception_arg_13);
Py_DECREF(tmp_make_exception_arg_13);
assert(!(tmp_raise_type_13 == NULL));
exception_state.exception_value = tmp_raise_type_13;
exception_lineno = 485;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_46;
}
branch_no_38:;
goto branch_end_37;
branch_no_37:;
{
PyObject *tmp_assign_source_122;
tmp_assign_source_122 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_122;
}
branch_end_37:;
{
PyObject *tmp_assign_source_123;
{
PyObject *tmp_set_locals_15;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_15 = tmp_class_container$class_creation_9__prepared;
locals_textual$validation$$$class__15_URL_485 = tmp_set_locals_15;
Py_INCREF(tmp_set_locals_15);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__15_URL_485, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_48;
}
tmp_dictset_value = mod_consts.const_str_digest_494d6e52a3ea00ae5ccb605cdcc73d35;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__15_URL_485, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_48;
}
tmp_dictset_value = mod_consts.const_str_plain_URL;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__15_URL_485, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_48;
}
tmp_dictset_value = mod_consts.const_int_pos_485;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__15_URL_485, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_48;
}
frame_frame_textual$validation$$$class__15_URL_10 = MAKE_CLASS_FRAME(tstate, code_objects_7a101ef8a367e1ca0513b5232ce23ad9, module_textual$validation, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$validation$$$class__15_URL_10);
assert(Py_REFCNT(frame_frame_textual$validation$$$class__15_URL_10) == 2);

// Framed code:
{
PyObject *tmp_outline_return_value_16;
// Tried code:
{
PyObject *tmp_assign_source_124;
PyObject *tmp_tuple_element_54;
tmp_tuple_element_54 = PyObject_GetItem(locals_textual$validation$$$class__15_URL_485, mod_consts.const_str_plain_Failure);

if (tmp_tuple_element_54 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_54 = module_var_accessor_textual$validation$Failure(tstate);
if (unlikely(tmp_tuple_element_54 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Failure);
}

if (tmp_tuple_element_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_49;
}
        Py_INCREF(tmp_tuple_element_54);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_49;
    }
}

tmp_assign_source_124 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_124, 0, tmp_tuple_element_54);
assert(tmp_URL$class_container$class_creation_1__bases_orig == NULL);
tmp_URL$class_container$class_creation_1__bases_orig = tmp_assign_source_124;
}
{
PyObject *tmp_assign_source_125;
PyObject *tmp_direct_call_arg1_14;
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_14 = tmp_URL$class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_14);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_14};
    tmp_assign_source_125 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_125 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_49;
}
assert(tmp_URL$class_container$class_creation_1__bases == NULL);
tmp_URL$class_container$class_creation_1__bases = tmp_assign_source_125;
}
{
PyObject *tmp_assign_source_126;
tmp_assign_source_126 = MAKE_DICT_EMPTY(tstate);
assert(tmp_URL$class_container$class_creation_1__class_decl_dict == NULL);
tmp_URL$class_container$class_creation_1__class_decl_dict = tmp_assign_source_126;
}
{
PyObject *tmp_assign_source_127;
PyObject *tmp_metaclass_value_14;
nuitka_bool tmp_condition_result_52;
int tmp_truth_name_14;
PyObject *tmp_type_arg_27;
PyObject *tmp_expression_value_79;
PyObject *tmp_subscript_value_14;
PyObject *tmp_bases_value_14;
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__bases);
tmp_truth_name_14 = CHECK_IF_TRUE(tmp_URL$class_container$class_creation_1__bases);
if (tmp_truth_name_14 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_49;
}
tmp_condition_result_52 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_14;
} else {
    goto condexpr_false_14;
}
condexpr_true_14:;
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__bases);
tmp_expression_value_79 = tmp_URL$class_container$class_creation_1__bases;
tmp_subscript_value_14 = const_int_0;
tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_79, tmp_subscript_value_14, 0);
if (tmp_type_arg_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_49;
}
tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
CHECK_OBJECT(tmp_type_arg_27);
Py_DECREF(tmp_type_arg_27);
if (tmp_metaclass_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_49;
}
goto condexpr_end_14;
condexpr_false_14:;
tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_14);
condexpr_end_14:;
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__bases);
tmp_bases_value_14 = tmp_URL$class_container$class_creation_1__bases;
tmp_assign_source_127 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
CHECK_OBJECT(tmp_metaclass_value_14);
Py_DECREF(tmp_metaclass_value_14);
if (tmp_assign_source_127 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_49;
}
assert(tmp_URL$class_container$class_creation_1__metaclass == NULL);
tmp_URL$class_container$class_creation_1__metaclass = tmp_assign_source_127;
}
{
bool tmp_condition_result_53;
PyObject *tmp_expression_value_80;
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__metaclass);
tmp_expression_value_80 = tmp_URL$class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_80, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_49;
}
tmp_condition_result_53 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_53 != false) {
    goto branch_yes_39;
} else {
    goto branch_no_39;
}
}
branch_yes_39:;
{
PyObject *tmp_assign_source_128;
PyObject *tmp_called_value_34;
PyObject *tmp_expression_value_81;
PyObject *tmp_args_value_28;
PyObject *tmp_tuple_element_55;
PyObject *tmp_kwargs_value_28;
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__metaclass);
tmp_expression_value_81 = tmp_URL$class_container$class_creation_1__metaclass;
tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_49;
}
tmp_tuple_element_55 = mod_consts.const_str_plain_InvalidURL;
tmp_args_value_28 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_55);
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__bases);
tmp_tuple_element_55 = tmp_URL$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_55);
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_28 = tmp_URL$class_container$class_creation_1__class_decl_dict;
frame_frame_textual$validation$$$class__15_URL_10->m_frame.f_lineno = 488;
tmp_assign_source_128 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_28, tmp_kwargs_value_28);
CHECK_OBJECT(tmp_called_value_34);
Py_DECREF(tmp_called_value_34);
CHECK_OBJECT(tmp_args_value_28);
Py_DECREF(tmp_args_value_28);
if (tmp_assign_source_128 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_49;
}
assert(tmp_URL$class_container$class_creation_1__prepared == NULL);
tmp_URL$class_container$class_creation_1__prepared = tmp_assign_source_128;
}
{
bool tmp_condition_result_54;
PyObject *tmp_operand_value_14;
PyObject *tmp_expression_value_82;
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__prepared);
tmp_expression_value_82 = tmp_URL$class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_82, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_49;
}
tmp_operand_value_14 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
assert(!(tmp_res == -1));
tmp_condition_result_54 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_54 != false) {
    goto branch_yes_40;
} else {
    goto branch_no_40;
}
}
branch_yes_40:;
{
PyObject *tmp_raise_type_14;
PyObject *tmp_make_exception_arg_14;
PyObject *tmp_mod_expr_left_14;
PyObject *tmp_mod_expr_right_14;
PyObject *tmp_tuple_element_56;
PyObject *tmp_expression_value_83;
PyObject *tmp_name_value_20;
PyObject *tmp_default_value_14;
tmp_mod_expr_left_14 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__metaclass);
tmp_expression_value_83 = tmp_URL$class_container$class_creation_1__metaclass;
tmp_name_value_20 = const_str_plain___name__;
tmp_default_value_14 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_56 = BUILTIN_GETATTR(tstate, tmp_expression_value_83, tmp_name_value_20, tmp_default_value_14);
if (tmp_tuple_element_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_49;
}
tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_84;
PyObject *tmp_type_arg_28;
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_56);
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__prepared);
tmp_type_arg_28 = tmp_URL$class_container$class_creation_1__prepared;
tmp_expression_value_84 = BUILTIN_TYPE1(tmp_type_arg_28);
assert(!(tmp_expression_value_84 == NULL));
tmp_tuple_element_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_84);
Py_DECREF(tmp_expression_value_84);
if (tmp_tuple_element_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_56);
}
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_mod_expr_right_14);
goto try_except_handler_49;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_make_exception_arg_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
CHECK_OBJECT(tmp_mod_expr_right_14);
Py_DECREF(tmp_mod_expr_right_14);
if (tmp_make_exception_arg_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_49;
}
frame_frame_textual$validation$$$class__15_URL_10->m_frame.f_lineno = 488;
tmp_raise_type_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_14);
CHECK_OBJECT(tmp_make_exception_arg_14);
Py_DECREF(tmp_make_exception_arg_14);
assert(!(tmp_raise_type_14 == NULL));
exception_state.exception_value = tmp_raise_type_14;
exception_lineno = 488;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "o";
goto try_except_handler_49;
}
branch_no_40:;
goto branch_end_39;
branch_no_39:;
{
PyObject *tmp_assign_source_129;
tmp_assign_source_129 = MAKE_DICT_EMPTY(tstate);
assert(tmp_URL$class_container$class_creation_1__prepared == NULL);
tmp_URL$class_container$class_creation_1__prepared = tmp_assign_source_129;
}
branch_end_39:;
{
PyObject *tmp_set_locals_16;
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__prepared);
tmp_set_locals_16 = tmp_URL$class_container$class_creation_1__prepared;
locals_textual$validation$$$class__16_InvalidURL_488 = tmp_set_locals_16;
Py_INCREF(tmp_set_locals_16);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fa0c17a47f15604424647e05bb834ee5;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__16_InvalidURL_488, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_51;
}
tmp_dictset_value = mod_consts.const_str_digest_8b863347c298e9cdb926cbf2e1ecaaf5;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__16_InvalidURL_488, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_51;
}
tmp_dictset_value = mod_consts.const_str_digest_66d27ac7bd552877bdaf7318cfea7020;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__16_InvalidURL_488, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_51;
}
tmp_dictset_value = mod_consts.const_int_pos_488;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__16_InvalidURL_488, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_51;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__16_InvalidURL_488, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_51;
}
{
nuitka_bool tmp_condition_result_55;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__bases);
tmp_cmp_expr_left_13 = tmp_URL$class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_13 = tmp_URL$class_container$class_creation_1__bases_orig;
tmp_condition_result_55 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
if (tmp_condition_result_55 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_51;
}
if (tmp_condition_result_55 == NUITKA_BOOL_TRUE) {
    goto branch_yes_41;
} else {
    goto branch_no_41;
}
}
branch_yes_41:;
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_URL$class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__16_InvalidURL_488, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_51;
}
branch_no_41:;
{
PyObject *tmp_assign_source_130;
PyObject *tmp_called_value_35;
PyObject *tmp_args_value_29;
PyObject *tmp_tuple_element_57;
PyObject *tmp_kwargs_value_29;
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__metaclass);
tmp_called_value_35 = tmp_URL$class_container$class_creation_1__metaclass;
tmp_tuple_element_57 = mod_consts.const_str_plain_InvalidURL;
tmp_args_value_29 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_57);
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__bases);
tmp_tuple_element_57 = tmp_URL$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_57);
tmp_tuple_element_57 = locals_textual$validation$$$class__16_InvalidURL_488;
PyTuple_SET_ITEM0(tmp_args_value_29, 2, tmp_tuple_element_57);
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_29 = tmp_URL$class_container$class_creation_1__class_decl_dict;
frame_frame_textual$validation$$$class__15_URL_10->m_frame.f_lineno = 488;
tmp_assign_source_130 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_29, tmp_kwargs_value_29);
CHECK_OBJECT(tmp_args_value_29);
Py_DECREF(tmp_args_value_29);
if (tmp_assign_source_130 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_51;
}
assert(outline_15_var___class__ == NULL);
outline_15_var___class__ = tmp_assign_source_130;
}
CHECK_OBJECT(outline_15_var___class__);
tmp_dictset_value = outline_15_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_51;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_51:;
Py_DECREF(locals_textual$validation$$$class__16_InvalidURL_488);
locals_textual$validation$$$class__16_InvalidURL_488 = NULL;
goto try_return_handler_50;
// Exception handler code:
try_except_handler_51:;
exception_keeper_lineno_46 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_46 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$validation$$$class__16_InvalidURL_488);
locals_textual$validation$$$class__16_InvalidURL_488 = NULL;
// Re-raise.
exception_state = exception_keeper_name_46;
exception_lineno = exception_keeper_lineno_46;

goto try_except_handler_50;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_50:;
CHECK_OBJECT(outline_15_var___class__);
CHECK_OBJECT(outline_15_var___class__);
Py_DECREF(outline_15_var___class__);
outline_15_var___class__ = NULL;
goto outline_result_32;
// Exception handler code:
try_except_handler_50:;
exception_keeper_lineno_47 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_47 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_47;
exception_lineno = exception_keeper_lineno_47;

goto outline_exception_16;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_16:;
exception_lineno = 488;
goto try_except_handler_49;
outline_result_32:;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__15_URL_485, mod_consts.const_str_plain_InvalidURL, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto try_except_handler_49;
}
goto try_end_18;
// Exception handler code:
try_except_handler_49:;
exception_keeper_lineno_48 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_48 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_URL$class_container$class_creation_1__bases_orig);
tmp_URL$class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_URL$class_container$class_creation_1__bases);
tmp_URL$class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_URL$class_container$class_creation_1__class_decl_dict);
tmp_URL$class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_URL$class_container$class_creation_1__metaclass);
tmp_URL$class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_URL$class_container$class_creation_1__prepared);
tmp_URL$class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_48;
exception_lineno = exception_keeper_lineno_48;

goto frame_exception_exit_10;
// End of try:
try_end_18:;
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_URL$class_container$class_creation_1__bases_orig);
tmp_URL$class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__bases);
Py_DECREF(tmp_URL$class_container$class_creation_1__bases);
tmp_URL$class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_URL$class_container$class_creation_1__class_decl_dict);
tmp_URL$class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__metaclass);
Py_DECREF(tmp_URL$class_container$class_creation_1__metaclass);
tmp_URL$class_container$class_creation_1__metaclass = NULL;
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_URL$class_container$class_creation_1__prepared);
Py_DECREF(tmp_URL$class_container$class_creation_1__prepared);
tmp_URL$class_container$class_creation_1__prepared = NULL;
tmp_outline_return_value_16 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_16);
goto outline_result_31;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_31:;
CHECK_OBJECT(tmp_outline_return_value_16);
Py_DECREF(tmp_outline_return_value_16);
}
{
PyObject *tmp_annotations_28;
tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_98ffed80e59f5fb575806dc2bd70961d);

tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__28_validate(tstate, tmp_annotations_28);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__15_URL_485, mod_consts.const_str_plain_validate, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_annotations_29;
tmp_annotations_29 = DICT_COPY(tstate, mod_consts.const_dict_af0a7ee4eda1bf396268a812c0a8ac6b);

tmp_dictset_value = MAKE_FUNCTION_textual$validation$$$function__29_describe_failure(tstate, tmp_annotations_29);

tmp_res = PyObject_SetItem(locals_textual$validation$$$class__15_URL_485, mod_consts.const_str_plain_describe_failure, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_9;
frame_exception_exit_10:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation$$$class__15_URL_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation$$$class__15_URL_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation$$$class__15_URL_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$validation$$$class__15_URL_10,
    type_description_2,
    outline_14_var___class__
);



assertFrameObject(frame_frame_textual$validation$$$class__15_URL_10);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_9;
frame_no_exception_9:;
goto skip_nested_handling_9;
nested_frame_exit_9:;

goto try_except_handler_48;
skip_nested_handling_9:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__15_URL_485, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_48;
}
{
nuitka_bool tmp_condition_result_56;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_cmp_expr_left_14 = tmp_class_container$class_creation_9__bases;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_cmp_expr_right_14 = tmp_class_container$class_creation_9__bases_orig;
tmp_condition_result_56 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_condition_result_56 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_48;
}
if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
    goto branch_yes_42;
} else {
    goto branch_no_42;
}
}
branch_yes_42:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_9__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$validation$$$class__15_URL_485, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_48;
}
branch_no_42:;
{
PyObject *tmp_assign_source_131;
PyObject *tmp_called_value_36;
PyObject *tmp_args_value_30;
PyObject *tmp_tuple_element_58;
PyObject *tmp_kwargs_value_30;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_called_value_36 = tmp_class_container$class_creation_9__metaclass;
tmp_tuple_element_58 = mod_consts.const_str_plain_URL;
tmp_args_value_30 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_58);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_58 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_58);
tmp_tuple_element_58 = locals_textual$validation$$$class__15_URL_485;
PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_58);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_30 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_textual$validation->m_frame.f_lineno = 485;
tmp_assign_source_131 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_30, tmp_kwargs_value_30);
CHECK_OBJECT(tmp_args_value_30);
Py_DECREF(tmp_args_value_30);
if (tmp_assign_source_131 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_48;
}
assert(outline_14_var___class__ == NULL);
outline_14_var___class__ = tmp_assign_source_131;
}
CHECK_OBJECT(outline_14_var___class__);
tmp_assign_source_123 = outline_14_var___class__;
Py_INCREF(tmp_assign_source_123);
goto try_return_handler_48;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_48:;
Py_DECREF(locals_textual$validation$$$class__15_URL_485);
locals_textual$validation$$$class__15_URL_485 = NULL;
goto try_return_handler_47;
// Exception handler code:
try_except_handler_48:;
exception_keeper_lineno_49 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_49 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$validation$$$class__15_URL_485);
locals_textual$validation$$$class__15_URL_485 = NULL;
// Re-raise.
exception_state = exception_keeper_name_49;
exception_lineno = exception_keeper_lineno_49;

goto try_except_handler_47;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_47:;
CHECK_OBJECT(outline_14_var___class__);
CHECK_OBJECT(outline_14_var___class__);
Py_DECREF(outline_14_var___class__);
outline_14_var___class__ = NULL;
goto outline_result_30;
// Exception handler code:
try_except_handler_47:;
exception_keeper_lineno_50 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_50 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_50;
exception_lineno = exception_keeper_lineno_50;

goto outline_exception_15;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_15:;
exception_lineno = 485;
goto try_except_handler_46;
outline_result_30:;
UPDATE_STRING_DICT1(moduledict_textual$validation, (Nuitka_StringObject *)mod_consts.const_str_plain_URL, tmp_assign_source_123);
}
goto try_end_19;
// Exception handler code:
try_except_handler_46:;
exception_keeper_lineno_51 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_51 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_9__bases_orig);
tmp_class_container$class_creation_9__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__bases);
tmp_class_container$class_creation_9__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_51;
exception_lineno = exception_keeper_lineno_51;

goto frame_exception_exit_1;
// End of try:
try_end_19:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
Py_DECREF(tmp_class_container$class_creation_9__bases_orig);
tmp_class_container$class_creation_9__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
Py_DECREF(tmp_class_container$class_creation_9__bases);
tmp_class_container$class_creation_9__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
Py_DECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
Py_DECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
tmp_outline_return_value_15 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_15);
goto outline_result_29;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_29:;
CHECK_OBJECT(tmp_outline_return_value_15);
Py_DECREF(tmp_outline_return_value_15);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_10;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$validation, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$validation->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$validation, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$validation);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_10:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$validation", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.validation" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$validation);
    return module_textual$validation;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$validation, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$validation", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

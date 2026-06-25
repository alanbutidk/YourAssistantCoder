/* Generated code for Python module 'pydantic$v1$dataclasses'
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



/* The "module_pydantic$v1$dataclasses" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pydantic$v1$dataclasses;
PyDictObject *moduledict_pydantic$v1$dataclasses;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_get_config;
PyObject *const_str_plain_cls;
PyObject *const_str_plain_Type;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_return;
PyObject *const_str_plain_DataclassClassOrWrapper;
PyObject *const_str_plain_wrap;
PyObject *const_str_digest_dcd14b04086e09c4db30be0c137a7b64;
PyObject *const_str_digest_883a1afb21707e9eb1c898153a802214;
PyObject *const_str_plain_use_proxy;
PyObject *const_str_plain_is_builtin_dataclass;
PyObject *const_str_plain___bases__;
PyObject *const_str_plain_DataclassProxy;
PyObject *const_str_plain_dataclasses;
PyObject *const_str_plain_dataclass;
PyObject *const_str_plain_init;
PyObject *const_str_plain_eq;
PyObject *const_str_plain_order;
PyObject *const_str_plain_unsafe_hash;
PyObject *const_str_plain_frozen;
PyObject *const_str_plain_kw_only;
PyObject *const_tuple_c2ee26b539fae8f402691667af7ed36c_tuple;
PyObject *const_str_plain_validate_on_init;
PyObject *const_str_plain__add_pydantic_validation_attributes;
PyObject *const_str_plain_the_config;
PyObject *const_str_plain___pydantic_model__;
PyObject *const_str_plain___try_update_forward_refs__;
PyObject *const_str_plain___pydantic_run_validation__;
PyObject *const_str_plain_value;
PyObject *const_str_plain_set_validation;
PyObject *const_str_plain___setattr__;
PyObject *const_str_plain___dataclass__;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_deepcopy;
PyObject *const_str_plain_wraps;
PyObject *const_str_plain_self;
PyObject *const_str_plain_Dataclass;
PyObject *const_str_plain_kwargs;
PyObject *const_str_plain_handle_extra_init;
PyObject *const_str_digest_2138fd1b80abb73d176d64e2ef60eb33;
PyObject *const_str_plain___post_init__;
PyObject *const_str_plain___wrapped__;
PyObject *const_str_plain_new_post_init;
PyObject *const_str_digest_ac16f4d47e336f55a677e9d349c822fc;
PyObject *const_str_plain_new_init;
PyObject *const_str_digest_5d0351e21ca2f9f54a88f2caa3d80356;
PyObject *const_str_plain_ClassAttribute;
PyObject *const_str_plain___pydantic_initialised__;
PyObject *const_str_plain_create_pydantic_model_from_dataclass;
PyObject *const_str_plain___pydantic_validate_values__;
PyObject *const_str_plain__dataclass_validate_values;
PyObject *const_str_plain___validate__;
PyObject *const_str_plain__validate_dataclass;
PyObject *const_str_plain___get_validators__;
PyObject *const_str_plain__get_validators;
PyObject *const_str_plain___config__;
PyObject *const_str_plain_validate_assignment;
PyObject *const_str_plain___dataclass_params__;
PyObject *const_str_plain__dataclass_validate_assignment_setattr;
PyObject *const_str_digest_a97ce25ebcecd4648cb8cc44b3261a5a;
PyObject *const_str_plain_config;
PyObject *const_str_plain_extra;
PyObject *const_str_plain_Extra;
PyObject *const_str_plain_ignore;
PyObject *const_str_plain___dataclass_fields__;
PyObject *const_str_plain_allow;
PyObject *const_str_plain_setdefault;
PyObject *const_str_plain_post_init_call;
PyObject *const_str_plain_before_validation;
PyObject *const_str_plain_post_init;
PyObject *const_str_plain___post_init_post_parse__;
PyObject *const_str_plain_after_validation;
PyObject *const_str_plain_values;
PyObject *const_str_plain__field_type;
PyObject *const_str_plain__FIELD_INITVAR;
PyObject *const_str_plain_initvars_and_values;
PyObject *const_str_plain_default;
PyObject *const_tuple_type_list_type_tuple_tuple;
PyObject *const_str_plain_DataclassTypeError;
PyObject *const_tuple_str_plain_class_name_tuple;
PyObject *const_str_plain_fields;
PyObject *const_str_plain_Undefined;
PyObject *const_str_plain_MISSING;
PyObject *const_str_plain_default_factory;
PyObject *const_str_plain_Required;
PyObject *const_str_plain_FieldInfo;
PyObject *const_str_plain_dc_cls;
PyObject *const_str_plain___pydantic_has_field_info_default__;
PyObject *const_str_plain_Field;
PyObject *const_str_plain_metadata;
PyObject *const_str_plain_field_definitions;
PyObject *const_str_plain_gather_all_validators;
PyObject *const_str_plain_create_model;
PyObject *const_str_plain___validators__;
PyObject *const_str_plain___cls_kwargs__;
PyObject *const_dict_514575297805cab24632b7681352a396;
PyObject *const_str_plain_cached_property;
PyObject *const_str_plain_items;
PyObject *const_str_plain__is_field_cached_property;
PyObject *const_str_plain_validate_model;
PyObject *const_tuple_str_plain_cls_tuple;
PyObject *const_str_plain_update;
PyObject *const_str_plain___fields__;
PyObject *const_str_plain_validate;
PyObject *const_tuple_str_plain_loc_str_plain_cls_tuple;
PyObject *const_str_plain_ValidationError;
PyObject *const_str_plain_is_dataclass;
PyObject *const_str_plain_issuperset;
PyObject *const_str_digest_5862d361bd1a776741f80014a058426f;
PyObject *const_str_digest_5a0023f2956770b5f42df6f3e1a80362;
PyObject *const_tuple_str_plain_config_str_plain_use_proxy_tuple;
PyObject *const_str_plain_make_dataclass_validator;
PyObject *const_str_digest_501427f9a246e1b290e0566a0f9d632d;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_contextlib;
PyObject *const_tuple_str_plain_contextmanager_tuple;
PyObject *const_str_plain_contextmanager;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_ClassVar;
PyObject *const_str_plain_Dict;
PyObject *const_str_plain_Generator;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_overload;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_dataclass_transform_tuple;
PyObject *const_str_plain_dataclass_transform;
PyObject *const_str_digest_0f8c2ee241e87e084b7b6c832589a787;
PyObject *const_tuple_str_plain_gather_all_validators_tuple;
PyObject *const_str_digest_f1d85b689dd18bc52efba82018384910;
PyObject *const_tuple_6cbdcd5692f4b9d2e42ce04141c64cdc_tuple;
PyObject *const_str_plain_BaseConfig;
PyObject *const_str_plain_ConfigDict;
PyObject *const_str_digest_7e976bd39ec5cd0a7fabe6ea37cf887d;
PyObject *const_tuple_str_plain_ValidationError_tuple;
PyObject *const_str_digest_06f23725d5bfbad1658425da14f8e1d3;
PyObject *const_tuple_str_plain_DataclassTypeError_tuple;
PyObject *const_str_digest_9cffe454a97af811292f85406e2c37ba;
PyObject *const_tuple_c986b759ef84db1b10e29d63d78de14e_tuple;
PyObject *const_str_digest_89e6398e41cddc4e38dd68cd9e9b179a;
PyObject *const_tuple_str_plain_create_model_str_plain_validate_model_tuple;
PyObject *const_str_digest_aeb95cf63d7533fb267591ffeae61316;
PyObject *const_tuple_str_plain_ClassAttribute_tuple;
PyObject *const_list_7ea0aa55e62d8c0c6ac6e473d690ea2d_list;
PyObject *const_tuple_str_plain__T_tuple;
PyObject *const_str_plain__T;
PyObject *const_str_plain_field;
PyObject *const_tuple_str_plain_field_specifiers_tuple;
PyObject *const_dict_4d1fe41632ef0d7973d19a2324187fc1;
PyObject *const_str_plain__cls;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_5f140d5cd0e21bf4d2291e4bfadc8e55;
PyObject *const_str_plain_DataclassT;
PyObject *const_str_digest_5753e8f7997db33dc88395566f120daa;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_251;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain___slots__;
PyObject *const_str_digest_a24902a46515d4d6b7a929847653ea06;
PyObject *const_str_plain___call__;
PyObject *const_str_digest_8bc5cd184688095d6d438ae4f3e05f2d;
PyObject *const_str_plain___getattr__;
PyObject *const_str_digest_ce0031cc921a2d8a760eb4e839270d1f;
PyObject *const_str_plain__DataclassProxy__name;
PyObject *const_str_plain__DataclassProxy__value;
PyObject *const_str_digest_3f710551596c27b60a953b3876634ed0;
PyObject *const_str_plain_instance;
PyObject *const_str_plain___instancecheck__;
PyObject *const_str_digest_afb0f485c2e6b24bb1b2fe16a00724b6;
PyObject *const_dict_0b86453c098f501d5492319ca19cbc87;
PyObject *const_str_plain___copy__;
PyObject *const_str_digest_86ef2ad0a0153ec10a1cb43cb3027b84;
PyObject *const_str_plain_memo;
PyObject *const_str_plain___deepcopy__;
PyObject *const_str_digest_5f5711f2eac1fd34c1d609292613b49e;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain_dc_cls_doc;
PyObject *const_dict_cbf4330f508fa02043635b855d8f7e66;
PyObject *const_str_plain_v;
PyObject *const_str_plain_BaseModel;
PyObject *const_dict_465f687b4e58870a62e0cd81dcb02736;
PyObject *const_dict_0ef9e8e33f598be120afd17f5b8afafa;
PyObject *const_str_plain_CallableGenerator;
PyObject *const_str_digest_ca1d6f0a08dc5b6a602654b222f128d1;
PyObject *const_str_digest_26101d87331685fad574566154b93dd3;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_memo_tuple;
PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
PyObject *const_tuple_str_plain_self_str_plain_dc_cls_tuple;
PyObject *const_tuple_str_plain_self_str_plain_instance_tuple;
PyObject *const_tuple_30f60e1834e73bde961fe4d734d72c46_tuple;
PyObject *const_tuple_c5d705ef088fac3f7e7b1b689532b78e_tuple;
PyObject *const_tuple_a77533cc5432570bd3246731f565931c_tuple;
PyObject *const_tuple_dd46cdf9c4ed6297e8d9d7fb76149262_tuple;
PyObject *const_tuple_str_plain_obj_str_plain_k_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_v_tuple;
PyObject *const_tuple_ec9666e5f80948e5024bcd6fc7577035_tuple;
PyObject *const_tuple_6d6e78abfbcc664e91f72bb8ee891f0e_tuple;
PyObject *const_tuple_d801d81e9def013de44750e6a7c75b84_tuple;
PyObject *const_tuple_8832648be33018cef4bce56e91914232_tuple;
PyObject *const_tuple_785d12a3cf3903fd7d956ff818ec189b_tuple;
PyObject *const_tuple_str_plain_config_str_plain_init_tuple;
PyObject *const_tuple_str_plain__cls_tuple;
PyObject *const_tuple_str_plain_dc_cls_str_plain_config_tuple;
PyObject *const_tuple_703fe9c79b2b0e85a48a4f4a30fd44ea_tuple;
PyObject *const_tuple_str_plain_handle_extra_init_tuple;
PyObject *const_tuple_04f2a5562b45f646766f0d947b40bbdc_tuple;
PyObject *const_tuple_str_plain_config_str_plain_post_init_tuple;
PyObject *const_tuple_26dd761b0d1de80b720035b3f5df8fdb_tuple;
PyObject *const_tuple_29951b359b522a06609a2eb029994968_tuple;
PyObject *const_tuple_60db6dea664b591176261430047299e3_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[218];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pydantic.v1.dataclasses"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_config);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_cls);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_Type);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataclassClassOrWrapper);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcd14b04086e09c4db30be0c137a7b64);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_883a1afb21707e9eb1c898153a802214);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_use_proxy);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_builtin_dataclass);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain___bases__);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataclassProxy);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_init);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_eq);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_order);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_unsafe_hash);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_frozen);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_kw_only);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_c2ee26b539fae8f402691667af7ed36c_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_on_init);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__add_pydantic_validation_attributes);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_the_config);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_model__);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain___try_update_forward_refs__);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_run_validation__);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_validation);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain___setattr__);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain___dataclass__);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_deepcopy);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_wraps);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_Dataclass);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_handle_extra_init);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_2138fd1b80abb73d176d64e2ef60eb33);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain___post_init__);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain___wrapped__);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_new_post_init);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac16f4d47e336f55a677e9d349c822fc);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_new_init);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d0351e21ca2f9f54a88f2caa3d80356);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClassAttribute);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_initialised__);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_pydantic_model_from_dataclass);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_validate_values__);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__dataclass_validate_values);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain___validate__);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_dataclass);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain___get_validators__);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_validators);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain___config__);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_assignment);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain___dataclass_params__);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain__dataclass_validate_assignment_setattr);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_a97ce25ebcecd4648cb8cc44b3261a5a);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_config);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_Extra);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_ignore);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain___dataclass_fields__);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_allow);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_setdefault);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_post_init_call);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_before_validation);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_post_init);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain___post_init_post_parse__);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_after_validation);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain__field_type);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain__FIELD_INITVAR);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_initvars_and_values);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_default);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_type_list_type_tuple_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataclassTypeError);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_class_name_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_fields);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_Undefined);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_MISSING);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_default_factory);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_Required);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_FieldInfo);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_dc_cls);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_has_field_info_default__);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_Field);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_metadata);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_field_definitions);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_gather_all_validators);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_model);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain___validators__);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain___cls_kwargs__);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_dict_514575297805cab24632b7681352a396);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_cached_property);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_field_cached_property);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_model);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain___fields__);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_loc_str_plain_cls_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_ValidationError);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_dataclass);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_issuperset);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_5862d361bd1a776741f80014a058426f);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a0023f2956770b5f42df6f3e1a80362);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_str_plain_use_proxy_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_make_dataclass_validator);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_501427f9a246e1b290e0566a0f9d632d);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_contextmanager_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClassVar);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_Dict);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generator);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_transform_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass_transform);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_0f8c2ee241e87e084b7b6c832589a787);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_gather_all_validators_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_f1d85b689dd18bc52efba82018384910);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_6cbdcd5692f4b9d2e42ce04141c64cdc_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseConfig);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConfigDict);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_7e976bd39ec5cd0a7fabe6ea37cf887d);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ValidationError_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_06f23725d5bfbad1658425da14f8e1d3);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DataclassTypeError_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_9cffe454a97af811292f85406e2c37ba);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_c986b759ef84db1b10e29d63d78de14e_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_89e6398e41cddc4e38dd68cd9e9b179a);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_create_model_str_plain_validate_model_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_aeb95cf63d7533fb267591ffeae61316);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ClassAttribute_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_list_7ea0aa55e62d8c0c6ac6e473d690ea2d_list);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__T_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain__T);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_field);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_field_specifiers_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_dict_4d1fe41632ef0d7973d19a2324187fc1);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain__cls);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_dict_5f140d5cd0e21bf4d2291e4bfadc8e55);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataclassT);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_5753e8f7997db33dc88395566f120daa);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_int_pos_251);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain___slots__);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_a24902a46515d4d6b7a929847653ea06);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain___call__);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_8bc5cd184688095d6d438ae4f3e05f2d);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain___getattr__);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_ce0031cc921a2d8a760eb4e839270d1f);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain__DataclassProxy__name);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain__DataclassProxy__value);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f710551596c27b60a953b3876634ed0);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_instance);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain___instancecheck__);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_afb0f485c2e6b24bb1b2fe16a00724b6);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_dict_0b86453c098f501d5492319ca19cbc87);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain___copy__);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_86ef2ad0a0153ec10a1cb43cb3027b84);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_memo);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain___deepcopy__);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f5711f2eac1fd34c1d609292613b49e);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_dc_cls_doc);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_dict_cbf4330f508fa02043635b855d8f7e66);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_v);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_dict_465f687b4e58870a62e0cd81dcb02736);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_dict_0ef9e8e33f598be120afd17f5b8afafa);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_CallableGenerator);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca1d6f0a08dc5b6a602654b222f128d1);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_26101d87331685fad574566154b93dd3);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_dc_cls_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_instance_tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_30f60e1834e73bde961fe4d734d72c46_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_c5d705ef088fac3f7e7b1b689532b78e_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_a77533cc5432570bd3246731f565931c_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_dd46cdf9c4ed6297e8d9d7fb76149262_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_obj_str_plain_k_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_v_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_ec9666e5f80948e5024bcd6fc7577035_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_6d6e78abfbcc664e91f72bb8ee891f0e_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_d801d81e9def013de44750e6a7c75b84_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_8832648be33018cef4bce56e91914232_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_785d12a3cf3903fd7d956ff818ec189b_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_str_plain_init_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__cls_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dc_cls_str_plain_config_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_703fe9c79b2b0e85a48a4f4a30fd44ea_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_handle_extra_init_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_04f2a5562b45f646766f0d947b40bbdc_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_str_plain_post_init_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_26dd761b0d1de80b720035b3f5df8fdb_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_29951b359b522a06609a2eb029994968_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_60db6dea664b591176261430047299e3_tuple);
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
void checkModuleConstants_pydantic$v1$dataclasses(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_config);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cls);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_Type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Type);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataclassClassOrWrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DataclassClassOrWrapper);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcd14b04086e09c4db30be0c137a7b64));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcd14b04086e09c4db30be0c137a7b64);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_883a1afb21707e9eb1c898153a802214));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_883a1afb21707e9eb1c898153a802214);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_use_proxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_use_proxy);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_builtin_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_builtin_dataclass);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain___bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___bases__);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataclassProxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DataclassProxy);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclasses);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclass);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_init));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_init);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_eq));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eq);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_order));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_order);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_unsafe_hash));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unsafe_hash);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_frozen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_frozen);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_kw_only));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kw_only);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_c2ee26b539fae8f402691667af7ed36c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c2ee26b539fae8f402691667af7ed36c_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_on_init));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_on_init);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__add_pydantic_validation_attributes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__add_pydantic_validation_attributes);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_the_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_the_config);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_model__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_model__);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain___try_update_forward_refs__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___try_update_forward_refs__);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_run_validation__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_run_validation__);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_validation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_validation);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain___setattr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___setattr__);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain___dataclass__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___dataclass__);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_deepcopy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deepcopy);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_wraps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wraps);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_Dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Dataclass);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kwargs);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_handle_extra_init));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handle_extra_init);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_2138fd1b80abb73d176d64e2ef60eb33));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2138fd1b80abb73d176d64e2ef60eb33);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain___post_init__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___post_init__);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain___wrapped__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___wrapped__);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_new_post_init));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_new_post_init);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac16f4d47e336f55a677e9d349c822fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac16f4d47e336f55a677e9d349c822fc);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_new_init));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_new_init);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d0351e21ca2f9f54a88f2caa3d80356));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5d0351e21ca2f9f54a88f2caa3d80356);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClassAttribute));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClassAttribute);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_initialised__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_initialised__);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_pydantic_model_from_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_pydantic_model_from_dataclass);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_validate_values__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_validate_values__);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__dataclass_validate_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dataclass_validate_values);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain___validate__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___validate__);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__validate_dataclass);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain___get_validators__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___get_validators__);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_validators));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_validators);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain___config__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___config__);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_assignment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_assignment);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain___dataclass_params__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___dataclass_params__);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain__dataclass_validate_assignment_setattr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dataclass_validate_assignment_setattr);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_a97ce25ebcecd4648cb8cc44b3261a5a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a97ce25ebcecd4648cb8cc44b3261a5a);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_config);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_Extra));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Extra);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_ignore));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ignore);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain___dataclass_fields__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___dataclass_fields__);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_allow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_allow);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_setdefault));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setdefault);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_post_init_call));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_post_init_call);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_before_validation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_before_validation);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_post_init));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_post_init);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain___post_init_post_parse__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___post_init_post_parse__);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_after_validation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_after_validation);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain__field_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__field_type);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain__FIELD_INITVAR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FIELD_INITVAR);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_initvars_and_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_initvars_and_values);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_default));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_type_list_type_tuple_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_list_type_tuple_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataclassTypeError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DataclassTypeError);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_class_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_class_name_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_fields));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fields);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_Undefined));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Undefined);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_MISSING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MISSING);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_default_factory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default_factory);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_Required));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Required);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_FieldInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FieldInfo);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_dc_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dc_cls);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_has_field_info_default__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_has_field_info_default__);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_Field));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Field);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metadata);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_field_definitions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field_definitions);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_gather_all_validators));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gather_all_validators);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_model);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain___validators__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___validators__);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain___cls_kwargs__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___cls_kwargs__);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_dict_514575297805cab24632b7681352a396));
CHECK_OBJECT_DEEP(mod_consts.const_dict_514575297805cab24632b7681352a396);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_cached_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cached_property);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_field_cached_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_field_cached_property);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_model);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain___fields__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___fields__);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_loc_str_plain_cls_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_loc_str_plain_cls_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_ValidationError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ValidationError);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_dataclass);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_issuperset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_issuperset);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_5862d361bd1a776741f80014a058426f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5862d361bd1a776741f80014a058426f);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a0023f2956770b5f42df6f3e1a80362));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a0023f2956770b5f42df6f3e1a80362);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_str_plain_use_proxy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_config_str_plain_use_proxy_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_make_dataclass_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_make_dataclass_validator);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_501427f9a246e1b290e0566a0f9d632d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_501427f9a246e1b290e0566a0f9d632d);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_contextmanager_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_contextmanager_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextmanager);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClassVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClassVar);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_Dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Dict);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generator);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overload);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_transform_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dataclass_transform_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass_transform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclass_transform);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_0f8c2ee241e87e084b7b6c832589a787));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0f8c2ee241e87e084b7b6c832589a787);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_gather_all_validators_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_gather_all_validators_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_f1d85b689dd18bc52efba82018384910));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f1d85b689dd18bc52efba82018384910);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_6cbdcd5692f4b9d2e42ce04141c64cdc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6cbdcd5692f4b9d2e42ce04141c64cdc_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseConfig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseConfig);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConfigDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConfigDict);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_7e976bd39ec5cd0a7fabe6ea37cf887d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7e976bd39ec5cd0a7fabe6ea37cf887d);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ValidationError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ValidationError_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_06f23725d5bfbad1658425da14f8e1d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_06f23725d5bfbad1658425da14f8e1d3);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DataclassTypeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DataclassTypeError_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_9cffe454a97af811292f85406e2c37ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9cffe454a97af811292f85406e2c37ba);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_c986b759ef84db1b10e29d63d78de14e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c986b759ef84db1b10e29d63d78de14e_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_89e6398e41cddc4e38dd68cd9e9b179a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89e6398e41cddc4e38dd68cd9e9b179a);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_create_model_str_plain_validate_model_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_create_model_str_plain_validate_model_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_aeb95cf63d7533fb267591ffeae61316));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aeb95cf63d7533fb267591ffeae61316);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ClassAttribute_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ClassAttribute_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_list_7ea0aa55e62d8c0c6ac6e473d690ea2d_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_7ea0aa55e62d8c0c6ac6e473d690ea2d_list);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__T_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__T_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain__T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__T);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_field));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_field_specifiers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_field_specifiers_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_dict_4d1fe41632ef0d7973d19a2324187fc1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4d1fe41632ef0d7973d19a2324187fc1);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain__cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cls);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_dict_5f140d5cd0e21bf4d2291e4bfadc8e55));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5f140d5cd0e21bf4d2291e4bfadc8e55);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataclassT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DataclassT);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_5753e8f7997db33dc88395566f120daa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5753e8f7997db33dc88395566f120daa);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_int_pos_251));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_251);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain___slots__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___slots__);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_a24902a46515d4d6b7a929847653ea06));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a24902a46515d4d6b7a929847653ea06);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain___call__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___call__);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_8bc5cd184688095d6d438ae4f3e05f2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8bc5cd184688095d6d438ae4f3e05f2d);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain___getattr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getattr__);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_ce0031cc921a2d8a760eb4e839270d1f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ce0031cc921a2d8a760eb4e839270d1f);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain__DataclassProxy__name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DataclassProxy__name);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain__DataclassProxy__value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DataclassProxy__value);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f710551596c27b60a953b3876634ed0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f710551596c27b60a953b3876634ed0);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_instance));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_instance);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain___instancecheck__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___instancecheck__);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_afb0f485c2e6b24bb1b2fe16a00724b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_afb0f485c2e6b24bb1b2fe16a00724b6);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_dict_0b86453c098f501d5492319ca19cbc87));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0b86453c098f501d5492319ca19cbc87);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain___copy__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___copy__);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_86ef2ad0a0153ec10a1cb43cb3027b84));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86ef2ad0a0153ec10a1cb43cb3027b84);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_memo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_memo);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain___deepcopy__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___deepcopy__);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f5711f2eac1fd34c1d609292613b49e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f5711f2eac1fd34c1d609292613b49e);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_dc_cls_doc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dc_cls_doc);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_dict_cbf4330f508fa02043635b855d8f7e66));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cbf4330f508fa02043635b855d8f7e66);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_v));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_v);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseModel);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_dict_465f687b4e58870a62e0cd81dcb02736));
CHECK_OBJECT_DEEP(mod_consts.const_dict_465f687b4e58870a62e0cd81dcb02736);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_dict_0ef9e8e33f598be120afd17f5b8afafa));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0ef9e8e33f598be120afd17f5b8afafa);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_CallableGenerator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CallableGenerator);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca1d6f0a08dc5b6a602654b222f128d1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca1d6f0a08dc5b6a602654b222f128d1);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_26101d87331685fad574566154b93dd3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_26101d87331685fad574566154b93dd3);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_name_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_dc_cls_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_dc_cls_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_instance_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_instance_tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_30f60e1834e73bde961fe4d734d72c46_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_30f60e1834e73bde961fe4d734d72c46_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_c5d705ef088fac3f7e7b1b689532b78e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c5d705ef088fac3f7e7b1b689532b78e_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_a77533cc5432570bd3246731f565931c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a77533cc5432570bd3246731f565931c_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_dd46cdf9c4ed6297e8d9d7fb76149262_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dd46cdf9c4ed6297e8d9d7fb76149262_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_obj_str_plain_k_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_obj_str_plain_k_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_v_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_v_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_ec9666e5f80948e5024bcd6fc7577035_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ec9666e5f80948e5024bcd6fc7577035_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_6d6e78abfbcc664e91f72bb8ee891f0e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6d6e78abfbcc664e91f72bb8ee891f0e_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_d801d81e9def013de44750e6a7c75b84_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d801d81e9def013de44750e6a7c75b84_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_8832648be33018cef4bce56e91914232_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8832648be33018cef4bce56e91914232_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_785d12a3cf3903fd7d956ff818ec189b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_785d12a3cf3903fd7d956ff818ec189b_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_str_plain_init_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_config_str_plain_init_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__cls_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__cls_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dc_cls_str_plain_config_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dc_cls_str_plain_config_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_703fe9c79b2b0e85a48a4f4a30fd44ea_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_703fe9c79b2b0e85a48a4f4a30fd44ea_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_handle_extra_init_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_handle_extra_init_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_04f2a5562b45f646766f0d947b40bbdc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_04f2a5562b45f646766f0d947b40bbdc_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_str_plain_post_init_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_config_str_plain_post_init_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_26dd761b0d1de80b720035b3f5df8fdb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_26dd761b0d1de80b720035b3f5df8fdb_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_29951b359b522a06609a2eb029994968_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_29951b359b522a06609a2eb029994968_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_60db6dea664b591176261430047299e3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_60db6dea664b591176261430047299e3_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 41
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
static PyObject *module_var_accessor_pydantic$v1$dataclasses$Any(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$BaseConfig(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseConfig);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseConfig);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseConfig, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseConfig);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseConfig, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseConfig);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseConfig);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseConfig);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$Callable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$ClassAttribute(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_ClassAttribute);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ClassAttribute);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ClassAttribute, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ClassAttribute);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ClassAttribute, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_ClassAttribute);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_ClassAttribute);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ClassAttribute);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$ConfigDict(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_ConfigDict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConfigDict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConfigDict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConfigDict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConfigDict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_ConfigDict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_ConfigDict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConfigDict);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$DataclassProxy(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_DataclassProxy);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataclassProxy);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataclassProxy, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataclassProxy);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataclassProxy, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_DataclassProxy);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_DataclassProxy);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DataclassProxy);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$DataclassTypeError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_DataclassTypeError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataclassTypeError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataclassTypeError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataclassTypeError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataclassTypeError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_DataclassTypeError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_DataclassTypeError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DataclassTypeError);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$Extra(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Extra);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Extra);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Extra, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Extra);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Extra, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Extra);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Extra);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Extra);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$Field(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Field);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Field);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Field, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Field);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Field, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Field);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Field);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Field);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$FieldInfo(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_FieldInfo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FieldInfo);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FieldInfo, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FieldInfo);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FieldInfo, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_FieldInfo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_FieldInfo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FieldInfo);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$Generator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Generator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Generator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Generator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Generator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Generator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Generator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Generator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Generator);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$Optional(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$Required(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Required);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Required);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Required, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Required);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Required, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Required);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Required);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Required);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$Type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$Undefined(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Undefined);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Undefined);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Undefined, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Undefined);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Undefined, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Undefined);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Undefined);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Undefined);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$ValidationError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_ValidationError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ValidationError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ValidationError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ValidationError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ValidationError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_ValidationError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_ValidationError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ValidationError);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$_T(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__T);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__T);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__T, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__T);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__T, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__T);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__T);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__T);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$_add_pydantic_validation_attributes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__add_pydantic_validation_attributes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__add_pydantic_validation_attributes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__add_pydantic_validation_attributes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__add_pydantic_validation_attributes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__add_pydantic_validation_attributes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__add_pydantic_validation_attributes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__add_pydantic_validation_attributes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__add_pydantic_validation_attributes);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$_dataclass_validate_assignment_setattr(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__dataclass_validate_assignment_setattr);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dataclass_validate_assignment_setattr);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dataclass_validate_assignment_setattr, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dataclass_validate_assignment_setattr);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dataclass_validate_assignment_setattr, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__dataclass_validate_assignment_setattr);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__dataclass_validate_assignment_setattr);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__dataclass_validate_assignment_setattr);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$_dataclass_validate_values(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__dataclass_validate_values);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dataclass_validate_values);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dataclass_validate_values, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dataclass_validate_values);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dataclass_validate_values, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__dataclass_validate_values);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__dataclass_validate_values);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__dataclass_validate_values);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$_get_validators(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__get_validators);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_validators);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_validators, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_validators);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_validators, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__get_validators);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__get_validators);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_validators);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$_is_field_cached_property(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__is_field_cached_property);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_field_cached_property);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_field_cached_property, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_field_cached_property);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_field_cached_property, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__is_field_cached_property);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__is_field_cached_property);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__is_field_cached_property);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$_validate_dataclass(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_dataclass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__validate_dataclass);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__validate_dataclass, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__validate_dataclass);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__validate_dataclass, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_dataclass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_dataclass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_dataclass);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$cached_property(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cached_property);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cached_property, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cached_property);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cached_property, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$contextmanager(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextmanager);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextmanager, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextmanager);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextmanager, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$copy(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_copy);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_copy, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_copy);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_copy, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$create_model(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_create_model);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_model);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_model, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_model);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_model, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_create_model);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_create_model);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_create_model);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$create_pydantic_model_from_dataclass(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_create_pydantic_model_from_dataclass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_pydantic_model_from_dataclass);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_pydantic_model_from_dataclass, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_pydantic_model_from_dataclass);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_pydantic_model_from_dataclass, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_create_pydantic_model_from_dataclass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_create_pydantic_model_from_dataclass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_create_pydantic_model_from_dataclass);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$dataclass(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$dataclass_transform(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass_transform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclass_transform);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclass_transform, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclass_transform);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclass_transform, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass_transform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass_transform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass_transform);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$dataclasses(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclasses);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclasses, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclasses);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclasses, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$gather_all_validators(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_gather_all_validators);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_gather_all_validators);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_gather_all_validators, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_gather_all_validators);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_gather_all_validators, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_gather_all_validators);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_gather_all_validators);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_gather_all_validators);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$get_config(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_get_config);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_config);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_config, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_config);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_config, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_get_config);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_get_config);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_config);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$is_builtin_dataclass(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_is_builtin_dataclass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_builtin_dataclass);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_builtin_dataclass, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_builtin_dataclass);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_builtin_dataclass, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_is_builtin_dataclass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_is_builtin_dataclass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_builtin_dataclass);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$overload(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overload);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overload, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overload);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overload, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$set_validation(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_set_validation);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_validation);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_validation, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_validation);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_validation, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_set_validation);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_set_validation);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_set_validation);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$validate_model(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_validate_model);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_validate_model);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_validate_model, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_validate_model);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_validate_model, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_validate_model);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_validate_model);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_validate_model);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$dataclasses$wraps(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_wraps);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_wraps);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_wraps, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_wraps);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_wraps, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_wraps);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_wraps);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_wraps);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_e095054b2a6576e71330637a93b445df;
static PyCodeObject *code_objects_0365b9740d8a9ffb49f38a69349d885e;
static PyCodeObject *code_objects_061f1de1513c808609a204871181addc;
static PyCodeObject *code_objects_79e5587402a58446eb04456bf75d30fd;
static PyCodeObject *code_objects_84ee9d1cf181965390c59d4c35200fbb;
static PyCodeObject *code_objects_b24b1af80a32748cbbf3a1daa6afdc35;
static PyCodeObject *code_objects_94cc98df1f1a2bee7faaa34cfe70cbe2;
static PyCodeObject *code_objects_b3946ece19b6bd649c047413dfcfde14;
static PyCodeObject *code_objects_1d2fac22622dffa6e759c9451d47d515;
static PyCodeObject *code_objects_7684093cab70301826af79c57970506a;
static PyCodeObject *code_objects_c7f6885869ef62c110612734f8b653a4;
static PyCodeObject *code_objects_5e3c31276f005f9eb96500ae6e217a2f;
static PyCodeObject *code_objects_f378daa76dc2835a22ca695893ac589d;
static PyCodeObject *code_objects_fe955296385bc2d9265a51aadfae3cbd;
static PyCodeObject *code_objects_69d7b87d40bfa382c7cbc068946ee275;
static PyCodeObject *code_objects_1c655dd0ae17e6acd9030e0c2dc4b512;
static PyCodeObject *code_objects_9c9bd5cc1555960012185d890fb7eba7;
static PyCodeObject *code_objects_33a80ff10056d08642812644bb3e4f4d;
static PyCodeObject *code_objects_644f0d4eb08a110ed17f8fe54af21a01;
static PyCodeObject *code_objects_478350b822d2a3be1eda6e8b775b27a4;
static PyCodeObject *code_objects_84a074e7bdd2d9243c0f0ba0c3e8f014;
static PyCodeObject *code_objects_79fc289285ce5a39459a43b5c1519c5f;
static PyCodeObject *code_objects_525bfba1eec4ce64cd99259b0c5aff45;
static PyCodeObject *code_objects_6078347260af7decaee6f7acbe8e1b54;
static PyCodeObject *code_objects_0f6a31da72aa5c0c932529678d892eb2;
static PyCodeObject *code_objects_1edccf12d9c1145b03b7392946ae29de;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_ca1d6f0a08dc5b6a602654b222f128d1); CHECK_OBJECT(module_filename_obj);
code_objects_e095054b2a6576e71330637a93b445df = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_26101d87331685fad574566154b93dd3, mod_consts.const_str_digest_26101d87331685fad574566154b93dd3, NULL, NULL, 0, 0, 0);
code_objects_0365b9740d8a9ffb49f38a69349d885e = MAKE_CODE_OBJECT(module_filename_obj, 251, 0, mod_consts.const_str_plain_DataclassProxy, mod_consts.const_str_plain_DataclassProxy, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_061f1de1513c808609a204871181addc = MAKE_CODE_OBJECT(module_filename_obj, 257, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_8bc5cd184688095d6d438ae4f3e05f2d, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple, NULL, 1, 0, 0);
code_objects_79e5587402a58446eb04456bf75d30fd = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___copy__, mod_consts.const_str_digest_86ef2ad0a0153ec10a1cb43cb3027b84, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_84ee9d1cf181965390c59d4c35200fbb = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___deepcopy__, mod_consts.const_str_digest_5f5711f2eac1fd34c1d609292613b49e, mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple, NULL, 2, 0, 0);
code_objects_b24b1af80a32748cbbf3a1daa6afdc35 = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getattr__, mod_consts.const_str_digest_ce0031cc921a2d8a760eb4e839270d1f, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple, NULL, 2, 0, 0);
code_objects_94cc98df1f1a2bee7faaa34cfe70cbe2 = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_a24902a46515d4d6b7a929847653ea06, mod_consts.const_tuple_str_plain_self_str_plain_dc_cls_tuple, NULL, 2, 0, 0);
code_objects_b3946ece19b6bd649c047413dfcfde14 = MAKE_CODE_OBJECT(module_filename_obj, 267, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___instancecheck__, mod_consts.const_str_digest_afb0f485c2e6b24bb1b2fe16a00724b6, mod_consts.const_tuple_str_plain_self_str_plain_instance_tuple, NULL, 2, 0, 0);
code_objects_1d2fac22622dffa6e759c9451d47d515 = MAKE_CODE_OBJECT(module_filename_obj, 264, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___setattr__, mod_consts.const_str_digest_3f710551596c27b60a953b3876634ed0, mod_consts.const_tuple_30f60e1834e73bde961fe4d734d72c46_tuple, NULL, 3, 0, 0);
code_objects_7684093cab70301826af79c57970506a = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__add_pydantic_validation_attributes, mod_consts.const_str_plain__add_pydantic_validation_attributes, mod_consts.const_tuple_c5d705ef088fac3f7e7b1b689532b78e_tuple, NULL, 4, 0, 0);
code_objects_c7f6885869ef62c110612734f8b653a4 = MAKE_CODE_OBJECT(module_filename_obj, 452, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__dataclass_validate_assignment_setattr, mod_consts.const_str_plain__dataclass_validate_assignment_setattr, mod_consts.const_tuple_a77533cc5432570bd3246731f565931c_tuple, NULL, 3, 0, 0);
code_objects_5e3c31276f005f9eb96500ae6e217a2f = MAKE_CODE_OBJECT(module_filename_obj, 430, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__dataclass_validate_values, mod_consts.const_str_plain__dataclass_validate_values, mod_consts.const_tuple_dd46cdf9c4ed6297e8d9d7fb76149262_tuple, NULL, 1, 0, 0);
code_objects_f378daa76dc2835a22ca695893ac589d = MAKE_CODE_OBJECT(module_filename_obj, 363, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_validators, mod_consts.const_str_plain__get_validators, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_fe955296385bc2d9265a51aadfae3cbd = MAKE_CODE_OBJECT(module_filename_obj, 421, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__is_field_cached_property, mod_consts.const_str_plain__is_field_cached_property, mod_consts.const_tuple_str_plain_obj_str_plain_k_tuple, NULL, 2, 0, 0);
code_objects_69d7b87d40bfa382c7cbc068946ee275 = MAKE_CODE_OBJECT(module_filename_obj, 367, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__validate_dataclass, mod_consts.const_str_plain__validate_dataclass, mod_consts.const_tuple_str_plain_cls_str_plain_v_tuple, NULL, 2, 0, 0);
code_objects_1c655dd0ae17e6acd9030e0c2dc4b512 = MAKE_CODE_OBJECT(module_filename_obj, 380, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_create_pydantic_model_from_dataclass, mod_consts.const_str_plain_create_pydantic_model_from_dataclass, mod_consts.const_tuple_ec9666e5f80948e5024bcd6fc7577035_tuple, NULL, 3, 0, 0);
code_objects_9c9bd5cc1555960012185d890fb7eba7 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_dataclass, mod_consts.const_str_plain_dataclass, mod_consts.const_tuple_6d6e78abfbcc664e91f72bb8ee891f0e_tuple, NULL, 1, 10, 0);
code_objects_33a80ff10056d08642812644bb3e4f4d = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_dataclass, mod_consts.const_str_plain_dataclass, mod_consts.const_tuple_d801d81e9def013de44750e6a7c75b84_tuple, NULL, 1, 10, 0);
code_objects_644f0d4eb08a110ed17f8fe54af21a01 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_dataclass, mod_consts.const_str_plain_dataclass, mod_consts.const_tuple_8832648be33018cef4bce56e91914232_tuple, NULL, 0, 10, 0);
code_objects_478350b822d2a3be1eda6e8b775b27a4 = MAKE_CODE_OBJECT(module_filename_obj, 291, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts.const_str_plain_handle_extra_init, mod_consts.const_str_digest_2138fd1b80abb73d176d64e2ef60eb33, mod_consts.const_tuple_785d12a3cf3903fd7d956ff818ec189b_tuple, mod_consts.const_tuple_str_plain_config_str_plain_init_tuple, 1, 0, 0);
code_objects_84a074e7bdd2d9243c0f0ba0c3e8f014 = MAKE_CODE_OBJECT(module_filename_obj, 465, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_is_builtin_dataclass, mod_consts.const_str_plain_is_builtin_dataclass, mod_consts.const_tuple_str_plain__cls_tuple, NULL, 1, 0, 0);
code_objects_79fc289285ce5a39459a43b5c1519c5f = MAKE_CODE_OBJECT(module_filename_obj, 494, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_make_dataclass_validator, mod_consts.const_str_plain_make_dataclass_validator, mod_consts.const_tuple_str_plain_dc_cls_str_plain_config_tuple, NULL, 2, 0, 0);
code_objects_525bfba1eec4ce64cd99259b0c5aff45 = MAKE_CODE_OBJECT(module_filename_obj, 328, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts.const_str_plain_new_init, mod_consts.const_str_digest_5d0351e21ca2f9f54a88f2caa3d80356, mod_consts.const_tuple_703fe9c79b2b0e85a48a4f4a30fd44ea_tuple, mod_consts.const_tuple_str_plain_handle_extra_init_tuple, 1, 0, 0);
code_objects_6078347260af7decaee6f7acbe8e1b54 = MAKE_CODE_OBJECT(module_filename_obj, 310, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts.const_str_plain_new_post_init, mod_consts.const_str_digest_ac16f4d47e336f55a677e9d349c822fc, mod_consts.const_tuple_04f2a5562b45f646766f0d947b40bbdc_tuple, mod_consts.const_tuple_str_plain_config_str_plain_post_init_tuple, 1, 0, 0);
code_objects_0f6a31da72aa5c0c932529678d892eb2 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_set_validation, mod_consts.const_str_plain_set_validation, mod_consts.const_tuple_26dd761b0d1de80b720035b3f5df8fdb_tuple, NULL, 2, 0, 0);
code_objects_1edccf12d9c1145b03b7392946ae29de = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_wrap, mod_consts.const_str_digest_dcd14b04086e09c4db30be0c137a7b64, mod_consts.const_tuple_29951b359b522a06609a2eb029994968_tuple, mod_consts.const_tuple_60db6dea664b591176261430047299e3_tuple, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_pydantic$v1$dataclasses$$$function__9_set_validation$$$genobj__1_set_validation(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_pydantic$v1$dataclasses$$$function__18__get_validators$$$genobj__1__get_validators(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_pydantic$v1$dataclasses$$$function__26_make_dataclass_validator$$$genobj__1_make_dataclass_validator(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__10___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__11___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__12___getattr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__13___setattr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__14___instancecheck__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__15___copy__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__16___deepcopy__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__18__get_validators(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__19__validate_dataclass(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__21__is_field_cached_property(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__26_make_dataclass_validator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__4_dataclass(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__5_dataclass(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__8_dataclass(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__9_set_validation(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_pydantic$v1$dataclasses$$$function__8_dataclass(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par__cls = python_pars[0];
struct Nuitka_CellObject *par_init = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_repr = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_eq = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_order = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_unsafe_hash = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_frozen = Nuitka_Cell_New1(python_pars[6]);
PyObject *par_config = python_pars[7];
struct Nuitka_CellObject *par_validate_on_init = Nuitka_Cell_New1(python_pars[8]);
struct Nuitka_CellObject *par_use_proxy = Nuitka_Cell_New1(python_pars[9]);
struct Nuitka_CellObject *par_kw_only = Nuitka_Cell_New1(python_pars[10]);
struct Nuitka_CellObject *var_the_config = Nuitka_Cell_NewEmpty();
PyObject *var_wrap = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass = MAKE_FUNCTION_FRAME(tstate, code_objects_33a80ff10056d08642812644bb3e4f4d, module_pydantic$v1$dataclasses, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass = cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$v1$dataclasses$get_config(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_config);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 196;
type_description_1 = "occccccocccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_config);
tmp_args_element_value_1 = par_config;
frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass->m_frame.f_lineno = 196;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "occccccocccco";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_the_config) == NULL);
Nuitka_Cell_SET(var_the_config, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
struct Nuitka_CellObject *tmp_closure_1[10];
tmp_dict_key_1 = mod_consts.const_str_plain_cls;
tmp_expression_value_1 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 198;
type_description_1 = "occccccocccco";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = module_var_accessor_pydantic$v1$dataclasses$Any(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 198;
type_description_1 = "occccccocccco";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "occccccocccco";
    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = mod_consts.const_str_plain_DataclassClassOrWrapper;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_closure_1[0] = par_eq;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_frozen;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_init;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_kw_only;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_order;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_repr;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = var_the_config;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_unsafe_hash;
Py_INCREF(tmp_closure_1[7]);
tmp_closure_1[8] = par_use_proxy;
Py_INCREF(tmp_closure_1[8]);
tmp_closure_1[9] = par_validate_on_init;
Py_INCREF(tmp_closure_1[9]);
tmp_assign_source_2 = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap(tstate, tmp_annotations_1, tmp_closure_1);

assert(var_wrap == NULL);
var_wrap = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par__cls);
tmp_cmp_expr_left_1 = par__cls;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(var_wrap);
tmp_return_value = var_wrap;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_wrap);
tmp_called_value_2 = var_wrap;
CHECK_OBJECT(par__cls);
tmp_args_element_value_2 = par__cls;
frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass->m_frame.f_lineno = 238;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "occccccocccco";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass,
    type_description_1,
    par__cls,
    par_init,
    par_repr,
    par_eq,
    par_order,
    par_unsafe_hash,
    par_frozen,
    par_config,
    par_validate_on_init,
    par_use_proxy,
    par_kw_only,
    var_the_config,
    var_wrap
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass == cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_init);
CHECK_OBJECT(par_init);
Py_DECREF(par_init);
par_init = NULL;
CHECK_OBJECT(par_repr);
CHECK_OBJECT(par_repr);
Py_DECREF(par_repr);
par_repr = NULL;
CHECK_OBJECT(par_eq);
CHECK_OBJECT(par_eq);
Py_DECREF(par_eq);
par_eq = NULL;
CHECK_OBJECT(par_order);
CHECK_OBJECT(par_order);
Py_DECREF(par_order);
par_order = NULL;
CHECK_OBJECT(par_unsafe_hash);
CHECK_OBJECT(par_unsafe_hash);
Py_DECREF(par_unsafe_hash);
par_unsafe_hash = NULL;
CHECK_OBJECT(par_frozen);
CHECK_OBJECT(par_frozen);
Py_DECREF(par_frozen);
par_frozen = NULL;
CHECK_OBJECT(par_validate_on_init);
CHECK_OBJECT(par_validate_on_init);
Py_DECREF(par_validate_on_init);
par_validate_on_init = NULL;
CHECK_OBJECT(par_use_proxy);
CHECK_OBJECT(par_use_proxy);
Py_DECREF(par_use_proxy);
par_use_proxy = NULL;
CHECK_OBJECT(par_kw_only);
CHECK_OBJECT(par_kw_only);
Py_DECREF(par_kw_only);
par_kw_only = NULL;
CHECK_OBJECT(var_the_config);
CHECK_OBJECT(var_the_config);
Py_DECREF(var_the_config);
var_the_config = NULL;
CHECK_OBJECT(var_wrap);
CHECK_OBJECT(var_wrap);
Py_DECREF(var_wrap);
var_wrap = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_init);
CHECK_OBJECT(par_init);
Py_DECREF(par_init);
par_init = NULL;
CHECK_OBJECT(par_repr);
CHECK_OBJECT(par_repr);
Py_DECREF(par_repr);
par_repr = NULL;
CHECK_OBJECT(par_eq);
CHECK_OBJECT(par_eq);
Py_DECREF(par_eq);
par_eq = NULL;
CHECK_OBJECT(par_order);
CHECK_OBJECT(par_order);
Py_DECREF(par_order);
par_order = NULL;
CHECK_OBJECT(par_unsafe_hash);
CHECK_OBJECT(par_unsafe_hash);
Py_DECREF(par_unsafe_hash);
par_unsafe_hash = NULL;
CHECK_OBJECT(par_frozen);
CHECK_OBJECT(par_frozen);
Py_DECREF(par_frozen);
par_frozen = NULL;
CHECK_OBJECT(par_validate_on_init);
CHECK_OBJECT(par_validate_on_init);
Py_DECREF(par_validate_on_init);
par_validate_on_init = NULL;
CHECK_OBJECT(par_use_proxy);
CHECK_OBJECT(par_use_proxy);
Py_DECREF(par_use_proxy);
par_use_proxy = NULL;
CHECK_OBJECT(par_kw_only);
CHECK_OBJECT(par_kw_only);
Py_DECREF(par_kw_only);
par_kw_only = NULL;
CHECK_OBJECT(var_the_config);
CHECK_OBJECT(var_the_config);
Py_DECREF(var_the_config);
var_the_config = NULL;
Py_XDECREF(var_wrap);
var_wrap = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par__cls);
Py_DECREF(par__cls);
CHECK_OBJECT(par_config);
Py_DECREF(par_config);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par__cls);
Py_DECREF(par__cls);
CHECK_OBJECT(par_config);
Py_DECREF(par_config);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *var_should_use_proxy = NULL;
PyObject *var_dc_cls_doc = NULL;
PyObject *var_dc_cls = NULL;
nuitka_bool var_default_validate_on_init = NUITKA_BOOL_UNASSIGNED;
PyObject *var_should_validate_on_init = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap = MAKE_FUNCTION_FRAME(tstate, code_objects_1edccf12d9c1145b03b7392946ae29de, module_pydantic$v1$dataclasses, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap = cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_set_arg_1;
PyObject *tmp_dir_arg_1;
PyObject *tmp_set_arg_2;
PyObject *tmp_dir_arg_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
if (Nuitka_Cell_GET(self->m_closure[8]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_use_proxy);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 201;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(self->m_closure[8]);
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
if (Nuitka_Cell_GET(self->m_closure[8]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_use_proxy);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 200;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}

tmp_assign_source_1 = Nuitka_Cell_GET(self->m_closure[8]);
Py_INCREF(tmp_assign_source_1);
goto condexpr_end_1;
condexpr_false_1:;
tmp_called_value_1 = module_var_accessor_pydantic$v1$dataclasses$is_builtin_dataclass(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_builtin_dataclass);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 203;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_args_element_value_1 = par_cls;
frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap->m_frame.f_lineno = 203;
tmp_and_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 203;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(par_cls);
tmp_expression_value_2 = par_cls;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___bases__);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = (PyObject *)&PyBaseObject_Type;
tmp_or_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_cls);
tmp_dir_arg_1 = par_cls;
tmp_set_arg_1 = PyObject_Dir(tmp_dir_arg_1);
if (tmp_set_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_3 = PySet_New(tmp_set_arg_1);
CHECK_OBJECT(tmp_set_arg_1);
Py_DECREF(tmp_set_arg_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_expression_value_4 = par_cls;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___bases__);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 204;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_0;
tmp_dir_arg_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 0);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_dir_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 204;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
tmp_set_arg_2 = PyObject_Dir(tmp_dir_arg_2);
CHECK_OBJECT(tmp_dir_arg_2);
Py_DECREF(tmp_dir_arg_2);
if (tmp_set_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 204;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = PySet_New(tmp_set_arg_2);
CHECK_OBJECT(tmp_set_arg_2);
Py_DECREF(tmp_set_arg_2);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 204;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_and_right_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_assign_source_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_assign_source_1 = tmp_and_left_value_1;
and_end_1:;
condexpr_end_1:;
assert(var_should_use_proxy == NULL);
var_should_use_proxy = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_should_use_proxy);
tmp_truth_name_1 = CHECK_IF_TRUE(var_should_use_proxy);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = const_str_empty;
assert(var_dc_cls_doc == NULL);
Py_INCREF(tmp_assign_source_2);
var_dc_cls_doc = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_pydantic$v1$dataclasses$DataclassProxy(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataclassProxy);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_args_element_value_2 = par_cls;
frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap->m_frame.f_lineno = 209;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
assert(var_dc_cls == NULL);
var_dc_cls = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_FALSE;
var_default_validate_on_init = tmp_assign_source_4;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_5;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_cls);
tmp_expression_value_5 = par_cls;
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain___doc__);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 212;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
tmp_or_right_value_2 = const_str_empty;
Py_INCREF(tmp_or_right_value_2);
tmp_assign_source_5 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_assign_source_5 = tmp_or_left_value_2;
or_end_2:;
assert(var_dc_cls_doc == NULL);
var_dc_cls_doc = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
tmp_expression_value_6 = module_var_accessor_pydantic$v1$dataclasses$dataclasses(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclasses);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_dataclass);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_kw_call_arg_value_0_1 = par_cls;
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_init);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 216;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(self->m_closure[2]);
if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain_repr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 217;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(self->m_closure[5]);
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_eq);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 218;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_2_1 = Nuitka_Cell_GET(self->m_closure[0]);
if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_order);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 219;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_3_1 = Nuitka_Cell_GET(self->m_closure[4]);
if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unsafe_hash);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 220;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_4_1 = Nuitka_Cell_GET(self->m_closure[7]);
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frozen);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 221;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_5_1 = Nuitka_Cell_GET(self->m_closure[1]);
if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw_only);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 222;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_6_1 = Nuitka_Cell_GET(self->m_closure[3]);
frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap->m_frame.f_lineno = 214;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[7] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_c2ee26b539fae8f402691667af7ed36c_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
assert(var_dc_cls == NULL);
var_dc_cls = tmp_assign_source_6;
}
{
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_TRUE;
var_default_validate_on_init = tmp_assign_source_7;
}
branch_end_1:;
{
PyObject *tmp_assign_source_8;
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
if (Nuitka_Cell_GET(self->m_closure[9]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_validate_on_init);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 230;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_4 = Nuitka_Cell_GET(self->m_closure[9]);
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_3 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
assert(var_default_validate_on_init != NUITKA_BOOL_UNASSIGNED);
tmp_assign_source_8 = (var_default_validate_on_init == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
goto condexpr_end_2;
condexpr_false_2:;
if (Nuitka_Cell_GET(self->m_closure[9]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_validate_on_init);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 230;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}

tmp_assign_source_8 = Nuitka_Cell_GET(self->m_closure[9]);
condexpr_end_2:;
assert(var_should_validate_on_init == NULL);
Py_INCREF(tmp_assign_source_8);
var_should_validate_on_init = tmp_assign_source_8;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_4 = module_var_accessor_pydantic$v1$dataclasses$_add_pydantic_validation_attributes(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__add_pydantic_validation_attributes);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_args_element_value_3 = par_cls;
if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_the_config);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 231;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[6]);
CHECK_OBJECT(var_should_validate_on_init);
tmp_args_element_value_5 = var_should_validate_on_init;
CHECK_OBJECT(var_dc_cls_doc);
tmp_args_element_value_6 = var_dc_cls_doc;
frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap->m_frame.f_lineno = 231;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_4, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var_dc_cls);
tmp_expression_value_8 = var_dc_cls;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain___pydantic_model__);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain___try_update_forward_refs__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_expression_value_9 = par_cls;
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain___name__);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 232;
type_description_1 = "oooobocccccccccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_dict_value_1 = par_cls;
tmp_direct_call_arg2_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooobocccccccccc";
    goto dict_build_exception_1;
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_call_result_2 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooobocccccccccc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap,
    type_description_1,
    par_cls,
    var_should_use_proxy,
    var_dc_cls_doc,
    var_dc_cls,
    (int)var_default_validate_on_init,
    var_should_validate_on_init,
    self->m_closure[8],
    self->m_closure[2],
    self->m_closure[5],
    self->m_closure[0],
    self->m_closure[4],
    self->m_closure[7],
    self->m_closure[1],
    self->m_closure[3],
    self->m_closure[9],
    self->m_closure[6]
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap == cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_dc_cls);
tmp_return_value = var_dc_cls;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_should_use_proxy);
CHECK_OBJECT(var_should_use_proxy);
Py_DECREF(var_should_use_proxy);
var_should_use_proxy = NULL;
CHECK_OBJECT(var_dc_cls_doc);
CHECK_OBJECT(var_dc_cls_doc);
Py_DECREF(var_dc_cls_doc);
var_dc_cls_doc = NULL;
CHECK_OBJECT(var_dc_cls);
CHECK_OBJECT(var_dc_cls);
Py_DECREF(var_dc_cls);
var_dc_cls = NULL;
assert(var_default_validate_on_init != NUITKA_BOOL_UNASSIGNED);
var_default_validate_on_init = NUITKA_BOOL_UNASSIGNED;
CHECK_OBJECT(var_should_validate_on_init);
CHECK_OBJECT(var_should_validate_on_init);
Py_DECREF(var_should_validate_on_init);
var_should_validate_on_init = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_should_use_proxy);
var_should_use_proxy = NULL;
Py_XDECREF(var_dc_cls_doc);
var_dc_cls_doc = NULL;
Py_XDECREF(var_dc_cls);
var_dc_cls = NULL;
var_default_validate_on_init = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_should_validate_on_init);
var_should_validate_on_init = NULL;
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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__9_set_validation(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_cls = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_value = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_cls;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_value;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_pydantic$v1$dataclasses$$$function__9_set_validation$$$genobj__1_set_validation(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_value);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
par_value = NULL;
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
struct pydantic$v1$dataclasses$$$function__9_set_validation$$$genobj__1_set_validation_locals {
PyObject *var_original_run_validation;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *pydantic$v1$dataclasses$$$function__9_set_validation$$$genobj__1_set_validation_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct pydantic$v1$dataclasses$$$function__9_set_validation$$$genobj__1_set_validation_locals *generator_heap = (struct pydantic$v1$dataclasses$$$function__9_set_validation$$$genobj__1_set_validation_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_original_run_validation = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_0f6a31da72aa5c0c932529678d892eb2, module_pydantic$v1$dataclasses, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 243;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___pydantic_run_validation__);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 243;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_original_run_validation == NULL);
generator_heap->var_original_run_validation = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 245;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_assattr_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 245;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain___pydantic_run_validation__, tmp_assattr_value_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 245;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 246;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
Py_INCREF(tmp_expression_value_2);
generator->m_yield_return_index = 1;
return tmp_expression_value_2;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 246;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
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
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(generator_heap->var_original_run_validation);
tmp_assattr_value_2 = generator_heap->var_original_run_validation;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 248;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}

tmp_assattr_target_2 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain___pydantic_run_validation__, tmp_assattr_value_2);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 248;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}
}
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 244;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cco";
goto try_except_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(generator_heap->var_original_run_validation);
tmp_assattr_value_3 = generator_heap->var_original_run_validation;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 248;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_assattr_target_3 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain___pydantic_run_validation__, tmp_assattr_value_3);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 248;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
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
    generator->m_closure[0],
    generator->m_closure[1],
    generator_heap->var_original_run_validation
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
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_original_run_validation);
generator_heap->var_original_run_validation = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->var_original_run_validation);
CHECK_OBJECT(generator_heap->var_original_run_validation);
Py_DECREF(generator_heap->var_original_run_validation);
generator_heap->var_original_run_validation = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pydantic$v1$dataclasses$$$function__9_set_validation$$$genobj__1_set_validation(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pydantic$v1$dataclasses$$$function__9_set_validation$$$genobj__1_set_validation_context,
        module_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_set_validation,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_0f6a31da72aa5c0c932529678d892eb2,
        closure,
        2,
#if 1
        sizeof(struct pydantic$v1$dataclasses$$$function__9_set_validation$$$genobj__1_set_validation_locals)
#else
        0
#endif
    );
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__10___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_dc_cls = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__10___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__10___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__10___init__)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__10___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__10___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__10___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_94cc98df1f1a2bee7faaa34cfe70cbe2, module_pydantic$v1$dataclasses, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__10___init__->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__10___init__ = cache_frame_frame_pydantic$v1$dataclasses$$$function__10___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__10___init__);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__10___init__) == 2);

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
tmp_args_element_value_2 = mod_consts.const_str_plain___dataclass__;
CHECK_OBJECT(par_dc_cls);
tmp_args_element_value_3 = par_dc_cls;
frame_frame_pydantic$v1$dataclasses$$$function__10___init__->m_frame.f_lineno = 255;
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


exception_lineno = 255;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__10___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__10___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__10___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__10___init__,
    type_description_1,
    par_self,
    par_dc_cls
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__10___init__ == cache_frame_frame_pydantic$v1$dataclasses$$$function__10___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__10___init__);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__10___init__ = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__10___init__);

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
CHECK_OBJECT(par_dc_cls);
Py_DECREF(par_dc_cls);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_dc_cls);
Py_DECREF(par_dc_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__11___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__11___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__11___call__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__11___call__)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__11___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__11___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__11___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_061f1de1513c808609a204871181addc, module_pydantic$v1$dataclasses, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__11___call__->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__11___call__ = cache_frame_frame_pydantic$v1$dataclasses$$$function__11___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__11___call__);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__11___call__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_pydantic$v1$dataclasses$set_validation(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_validation);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___dataclass__);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
tmp_args_element_value_2 = Py_True;
frame_frame_pydantic$v1$dataclasses$$$function__11___call__->m_frame.f_lineno = 258;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
frame_frame_pydantic$v1$dataclasses$$$function__11___call__->m_frame.f_lineno = 258;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooo";
    goto try_except_handler_1;
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


exception_lineno = 258;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___dataclass__);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__11___call__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__11___call__, exception_keeper_lineno_1);
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
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_3 = EXC_TYPE(tstate);
tmp_args_element_value_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_4); 
tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_5 == NULL) {
    tmp_args_element_value_5 = Py_None;
}
frame_frame_pydantic$v1$dataclasses$$$function__11___call__->m_frame.f_lineno = 258;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooo";
    goto try_except_handler_4;
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
    exception_lineno = 258;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$v1$dataclasses$$$function__11___call__->m_frame)) {
        frame_frame_pydantic$v1$dataclasses$$$function__11___call__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_4;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 258;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$v1$dataclasses$$$function__11___call__->m_frame)) {
        frame_frame_pydantic$v1$dataclasses$$$function__11___call__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_4;
branch_end_1:;
goto try_end_1;
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
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_pydantic$v1$dataclasses$$$function__11___call__->m_frame.f_lineno = 258;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
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
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_pydantic$v1$dataclasses$$$function__11___call__->m_frame.f_lineno = 258;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 258;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_1:;
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
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__11___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__11___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__11___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__11___call__,
    type_description_1,
    par_self,
    par_args,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__11___call__ == cache_frame_frame_pydantic$v1$dataclasses$$$function__11___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__11___call__);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__11___call__ = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__11___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__12___getattr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b24b1af80a32748cbbf3a1daa6afdc35, module_pydantic$v1$dataclasses, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__ = cache_frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___dataclass__);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_name_value_1 = par_name;
tmp_return_value = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, NULL);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__,
    type_description_1,
    par_self,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__ == cache_frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__ = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__12___getattr__);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__13___setattr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par__DataclassProxy__name = python_pars[1];
PyObject *par__DataclassProxy__value = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1d2fac22622dffa6e759c9451d47d515, module_pydantic$v1$dataclasses, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__ = cache_frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
PyObject *tmp_value_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___dataclass__);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par__DataclassProxy__name);
tmp_name_value_1 = par__DataclassProxy__name;
CHECK_OBJECT(par__DataclassProxy__value);
tmp_value_value_1 = par__DataclassProxy__value;
tmp_return_value = BUILTIN_SETATTR(tmp_expression_value_1, tmp_name_value_1, tmp_value_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__,
    type_description_1,
    par_self,
    par__DataclassProxy__name,
    par__DataclassProxy__value
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__ == cache_frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__ = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__13___setattr__);

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
CHECK_OBJECT(par__DataclassProxy__name);
Py_DECREF(par__DataclassProxy__name);
CHECK_OBJECT(par__DataclassProxy__value);
Py_DECREF(par__DataclassProxy__value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par__DataclassProxy__name);
Py_DECREF(par__DataclassProxy__name);
CHECK_OBJECT(par__DataclassProxy__value);
Py_DECREF(par__DataclassProxy__value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__14___instancecheck__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_instance = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b3946ece19b6bd649c047413dfcfde14, module_pydantic$v1$dataclasses, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__ = cache_frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__) == 2);

// Framed code:
{
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_instance);
tmp_isinstance_inst_1 = par_instance;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___dataclass__);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__,
    type_description_1,
    par_self,
    par_instance
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__ == cache_frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__ = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__14___instancecheck__);

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
CHECK_OBJECT(par_instance);
Py_DECREF(par_instance);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_instance);
Py_DECREF(par_instance);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__15___copy__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__15___copy__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__15___copy__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__15___copy__)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__15___copy__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__15___copy__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__15___copy__ = MAKE_FUNCTION_FRAME(tstate, code_objects_79e5587402a58446eb04456bf75d30fd, module_pydantic$v1$dataclasses, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__15___copy__->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__15___copy__ = cache_frame_frame_pydantic$v1$dataclasses$$$function__15___copy__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__15___copy__);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__15___copy__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_pydantic$v1$dataclasses$DataclassProxy(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataclassProxy);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = module_var_accessor_pydantic$v1$dataclasses$copy(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___dataclass__);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 271;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$v1$dataclasses$$$function__15___copy__->m_frame.f_lineno = 271;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$v1$dataclasses$$$function__15___copy__->m_frame.f_lineno = 271;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__15___copy__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__15___copy__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__15___copy__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__15___copy__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__15___copy__ == cache_frame_frame_pydantic$v1$dataclasses$$$function__15___copy__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__15___copy__);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__15___copy__ = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__15___copy__);

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


static PyObject *impl_pydantic$v1$dataclasses$$$function__16___deepcopy__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_memo = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__ = MAKE_FUNCTION_FRAME(tstate, code_objects_84ee9d1cf181965390c59d4c35200fbb, module_pydantic$v1$dataclasses, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__ = cache_frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_pydantic$v1$dataclasses$DataclassProxy(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataclassProxy);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = module_var_accessor_pydantic$v1$dataclasses$copy(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_deepcopy);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___dataclass__);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 274;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_memo);
tmp_args_element_value_3 = par_memo;
frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__->m_frame.f_lineno = 274;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__->m_frame.f_lineno = 274;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__,
    type_description_1,
    par_self,
    par_memo
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__ == cache_frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__ = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__16___deepcopy__);

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
CHECK_OBJECT(par_memo);
Py_DECREF(par_memo);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_memo);
Py_DECREF(par_memo);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_dc_cls = python_pars[0];
struct Nuitka_CellObject *par_config = Nuitka_Cell_New1(python_pars[1]);
PyObject *par_validate_on_init = python_pars[2];
PyObject *par_dc_cls_doc = python_pars[3];
struct Nuitka_CellObject *var_init = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_handle_extra_init = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_post_init = Nuitka_Cell_NewEmpty();
PyObject *var_new_post_init = NULL;
PyObject *var_new_init = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes = MAKE_FUNCTION_FRAME(tstate, code_objects_7684093cab70301826af79c57970506a, module_pydantic$v1$dataclasses, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes = cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_dc_cls);
tmp_expression_value_1 = par_dc_cls;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_init) == NULL);
Nuitka_Cell_SET(var_init, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_called_value_2 = module_var_accessor_pydantic$v1$dataclasses$wraps(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wraps);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_init));
tmp_args_element_value_1 = Nuitka_Cell_GET(var_init);
frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes->m_frame.f_lineno = 290;
tmp_called_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_self;
tmp_dict_value_1 = mod_consts.const_str_plain_Dataclass;
tmp_annotations_1 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_args;
tmp_dict_value_1 = module_var_accessor_pydantic$v1$dataclasses$Any(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "ocoocccoo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_kwargs;
tmp_dict_value_1 = module_var_accessor_pydantic$v1$dataclasses$Any(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "ocoocccoo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_closure_1[0] = par_config;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = var_init;
Py_INCREF(tmp_closure_1[1]);
tmp_args_element_value_2 = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init(tstate, tmp_annotations_1, tmp_closure_1);

frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes->m_frame.f_lineno = 290;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_handle_extra_init) == NULL);
Nuitka_Cell_SET(var_handle_extra_init, tmp_assign_source_2);

}
{
bool tmp_condition_result_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_dc_cls);
tmp_expression_value_2 = par_dc_cls;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___post_init__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_dc_cls);
tmp_expression_value_4 = par_dc_cls;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___post_init__);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ocoocccoo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___wrapped__);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ocoocccoo";
    goto try_except_handler_2;
}
assert(Nuitka_Cell_GET(var_post_init) == NULL);
Nuitka_Cell_SET(var_post_init, tmp_assign_source_3);

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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_dc_cls);
tmp_expression_value_5 = par_dc_cls;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___post_init__);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "ocoocccoo";
    goto try_except_handler_3;
}
assert(Nuitka_Cell_GET(var_post_init) == NULL);
Nuitka_Cell_SET(var_post_init, tmp_assign_source_4);

}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 304;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes->m_frame)) {
        frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ocoocccoo";
goto try_except_handler_3;
branch_end_2:;
goto try_end_2;
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
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
struct Nuitka_CellObject *tmp_closure_2[2];
tmp_called_value_4 = module_var_accessor_pydantic$v1$dataclasses$wraps(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wraps);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_post_init));
tmp_args_element_value_3 = Nuitka_Cell_GET(var_post_init);
frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes->m_frame.f_lineno = 309;
tmp_called_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_dict_key_2 = mod_consts.const_str_plain_self;
tmp_dict_value_2 = mod_consts.const_str_plain_Dataclass;
tmp_annotations_2 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = const_str_plain_args;
tmp_dict_value_2 = module_var_accessor_pydantic$v1$dataclasses$Any(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 310;
type_description_1 = "ocoocccoo";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_kwargs;
tmp_dict_value_2 = module_var_accessor_pydantic$v1$dataclasses$Any(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 310;
type_description_1 = "ocoocccoo";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
tmp_closure_2[0] = par_config;
Py_INCREF(tmp_closure_2[0]);
tmp_closure_2[1] = var_post_init;
Py_INCREF(tmp_closure_2[1]);
tmp_args_element_value_4 = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init(tstate, tmp_annotations_2, tmp_closure_2);

frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes->m_frame.f_lineno = 309;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
assert(var_new_post_init == NULL);
var_new_post_init = tmp_assign_source_5;
}
{
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_1;
PyObject *tmp_value_value_1;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(par_dc_cls);
tmp_expression_value_6 = par_dc_cls;
tmp_name_value_1 = const_str_plain___init__;
CHECK_OBJECT(Nuitka_Cell_GET(var_handle_extra_init));
tmp_value_value_1 = Nuitka_Cell_GET(var_handle_extra_init);
tmp_capi_result_1 = BUILTIN_SETATTR(tmp_expression_value_6, tmp_name_value_1, tmp_value_value_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_2;
PyObject *tmp_value_value_2;
PyObject *tmp_capi_result_2;
CHECK_OBJECT(par_dc_cls);
tmp_expression_value_7 = par_dc_cls;
tmp_name_value_2 = mod_consts.const_str_plain___post_init__;
CHECK_OBJECT(var_new_post_init);
tmp_value_value_2 = var_new_post_init;
tmp_capi_result_2 = BUILTIN_SETATTR(tmp_expression_value_7, tmp_name_value_2, tmp_value_value_2);
if (tmp_capi_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_5;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
struct Nuitka_CellObject *tmp_closure_3[1];
tmp_called_value_6 = module_var_accessor_pydantic$v1$dataclasses$wraps(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wraps);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 327;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_init));
tmp_args_element_value_5 = Nuitka_Cell_GET(var_init);
frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes->m_frame.f_lineno = 327;
tmp_called_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_dict_key_3 = mod_consts.const_str_plain_self;
tmp_dict_value_3 = mod_consts.const_str_plain_Dataclass;
tmp_annotations_3 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = const_str_plain_args;
tmp_dict_value_3 = module_var_accessor_pydantic$v1$dataclasses$Any(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 328;
type_description_1 = "ocoocccoo";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_kwargs;
tmp_dict_value_3 = module_var_accessor_pydantic$v1$dataclasses$Any(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 328;
type_description_1 = "ocoocccoo";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_annotations_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
tmp_closure_3[0] = var_handle_extra_init;
Py_INCREF(tmp_closure_3[0]);
tmp_args_element_value_6 = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init(tstate, tmp_annotations_3, tmp_closure_3);

frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes->m_frame.f_lineno = 327;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
assert(var_new_init == NULL);
var_new_init = tmp_assign_source_6;
}
{
PyObject *tmp_expression_value_8;
PyObject *tmp_name_value_3;
PyObject *tmp_value_value_3;
PyObject *tmp_capi_result_3;
CHECK_OBJECT(par_dc_cls);
tmp_expression_value_8 = par_dc_cls;
tmp_name_value_3 = const_str_plain___init__;
CHECK_OBJECT(var_new_init);
tmp_value_value_3 = var_new_init;
tmp_capi_result_3 = BUILTIN_SETATTR(tmp_expression_value_8, tmp_name_value_3, tmp_value_value_3);
if (tmp_capi_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
}
branch_end_1:;
{
PyObject *tmp_expression_value_9;
PyObject *tmp_name_value_4;
PyObject *tmp_value_value_4;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_capi_result_4;
CHECK_OBJECT(par_dc_cls);
tmp_expression_value_9 = par_dc_cls;
tmp_name_value_4 = mod_consts.const_str_plain___pydantic_run_validation__;
tmp_called_value_7 = module_var_accessor_pydantic$v1$dataclasses$ClassAttribute(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ClassAttribute);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = mod_consts.const_str_plain___pydantic_run_validation__;
CHECK_OBJECT(par_validate_on_init);
tmp_args_element_value_8 = par_validate_on_init;
frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes->m_frame.f_lineno = 352;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_value_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

if (tmp_value_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_capi_result_4 = BUILTIN_SETATTR(tmp_expression_value_9, tmp_name_value_4, tmp_value_value_4);
CHECK_OBJECT(tmp_value_value_4);
Py_DECREF(tmp_value_value_4);
if (tmp_capi_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_expression_value_10;
PyObject *tmp_name_value_5;
PyObject *tmp_value_value_5;
PyObject *tmp_capi_result_5;
CHECK_OBJECT(par_dc_cls);
tmp_expression_value_10 = par_dc_cls;
tmp_name_value_5 = mod_consts.const_str_plain___pydantic_initialised__;
tmp_value_value_5 = Py_False;
tmp_capi_result_5 = BUILTIN_SETATTR(tmp_expression_value_10, tmp_name_value_5, tmp_value_value_5);
if (tmp_capi_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_6;
PyObject *tmp_value_value_6;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_capi_result_6;
CHECK_OBJECT(par_dc_cls);
tmp_expression_value_11 = par_dc_cls;
tmp_name_value_6 = mod_consts.const_str_plain___pydantic_model__;
tmp_called_value_8 = module_var_accessor_pydantic$v1$dataclasses$create_pydantic_model_from_dataclass(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_pydantic_model_from_dataclass);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 354;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_dc_cls);
tmp_args_element_value_9 = par_dc_cls;
CHECK_OBJECT(Nuitka_Cell_GET(par_config));
tmp_args_element_value_10 = Nuitka_Cell_GET(par_config);
CHECK_OBJECT(par_dc_cls_doc);
tmp_args_element_value_11 = par_dc_cls_doc;
frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes->m_frame.f_lineno = 354;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_value_value_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

if (tmp_value_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_capi_result_6 = BUILTIN_SETATTR(tmp_expression_value_11, tmp_name_value_6, tmp_value_value_6);
CHECK_OBJECT(tmp_value_value_6);
Py_DECREF(tmp_value_value_6);
if (tmp_capi_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_7;
PyObject *tmp_value_value_7;
PyObject *tmp_capi_result_7;
CHECK_OBJECT(par_dc_cls);
tmp_expression_value_12 = par_dc_cls;
tmp_name_value_7 = mod_consts.const_str_plain___pydantic_validate_values__;
tmp_value_value_7 = module_var_accessor_pydantic$v1$dataclasses$_dataclass_validate_values(tstate);
if (unlikely(tmp_value_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__dataclass_validate_values);
}

if (tmp_value_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 355;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_capi_result_7 = BUILTIN_SETATTR(tmp_expression_value_12, tmp_name_value_7, tmp_value_value_7);
if (tmp_capi_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_expression_value_13;
PyObject *tmp_name_value_8;
PyObject *tmp_value_value_8;
PyObject *tmp_classmethod_arg_1;
PyObject *tmp_capi_result_8;
CHECK_OBJECT(par_dc_cls);
tmp_expression_value_13 = par_dc_cls;
tmp_name_value_8 = mod_consts.const_str_plain___validate__;
tmp_classmethod_arg_1 = module_var_accessor_pydantic$v1$dataclasses$_validate_dataclass(tstate);
if (unlikely(tmp_classmethod_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__validate_dataclass);
}

if (tmp_classmethod_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 356;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_value_value_8 = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
if (tmp_value_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_capi_result_8 = BUILTIN_SETATTR(tmp_expression_value_13, tmp_name_value_8, tmp_value_value_8);
CHECK_OBJECT(tmp_value_value_8);
Py_DECREF(tmp_value_value_8);
if (tmp_capi_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_expression_value_14;
PyObject *tmp_name_value_9;
PyObject *tmp_value_value_9;
PyObject *tmp_classmethod_arg_2;
PyObject *tmp_capi_result_9;
CHECK_OBJECT(par_dc_cls);
tmp_expression_value_14 = par_dc_cls;
tmp_name_value_9 = mod_consts.const_str_plain___get_validators__;
tmp_classmethod_arg_2 = module_var_accessor_pydantic$v1$dataclasses$_get_validators(tstate);
if (unlikely(tmp_classmethod_arg_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_validators);
}

if (tmp_classmethod_arg_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 357;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_value_value_9 = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_2);
if (tmp_value_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_capi_result_9 = BUILTIN_SETATTR(tmp_expression_value_14, tmp_name_value_9, tmp_value_value_9);
CHECK_OBJECT(tmp_value_value_9);
Py_DECREF(tmp_value_value_9);
if (tmp_capi_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(par_dc_cls);
tmp_expression_value_17 = par_dc_cls;
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain___pydantic_model__);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain___config__);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_validate_assignment);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 359;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_dc_cls);
tmp_expression_value_19 = par_dc_cls;
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain___dataclass_params__);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_frozen);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_expression_value_20;
PyObject *tmp_name_value_10;
PyObject *tmp_value_value_10;
PyObject *tmp_capi_result_10;
CHECK_OBJECT(par_dc_cls);
tmp_expression_value_20 = par_dc_cls;
tmp_name_value_10 = mod_consts.const_str_plain___setattr__;
tmp_value_value_10 = module_var_accessor_pydantic$v1$dataclasses$_dataclass_validate_assignment_setattr(tstate);
if (unlikely(tmp_value_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__dataclass_validate_assignment_setattr);
}

if (tmp_value_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 360;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
tmp_capi_result_10 = BUILTIN_SETATTR(tmp_expression_value_20, tmp_name_value_10, tmp_value_value_10);
if (tmp_capi_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "ocoocccoo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes,
    type_description_1,
    par_dc_cls,
    par_config,
    par_validate_on_init,
    par_dc_cls_doc,
    var_init,
    var_handle_extra_init,
    var_post_init,
    var_new_post_init,
    var_new_init
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes == cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes);

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
CHECK_OBJECT(par_config);
CHECK_OBJECT(par_config);
Py_DECREF(par_config);
par_config = NULL;
CHECK_OBJECT(var_init);
CHECK_OBJECT(var_init);
Py_DECREF(var_init);
var_init = NULL;
CHECK_OBJECT(var_handle_extra_init);
CHECK_OBJECT(var_handle_extra_init);
Py_DECREF(var_handle_extra_init);
var_handle_extra_init = NULL;
CHECK_OBJECT(var_post_init);
CHECK_OBJECT(var_post_init);
Py_DECREF(var_post_init);
var_post_init = NULL;
Py_XDECREF(var_new_post_init);
var_new_post_init = NULL;
Py_XDECREF(var_new_init);
var_new_init = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_config);
CHECK_OBJECT(par_config);
Py_DECREF(par_config);
par_config = NULL;
CHECK_OBJECT(var_init);
CHECK_OBJECT(var_init);
Py_DECREF(var_init);
var_init = NULL;
CHECK_OBJECT(var_handle_extra_init);
CHECK_OBJECT(var_handle_extra_init);
Py_DECREF(var_handle_extra_init);
var_handle_extra_init = NULL;
CHECK_OBJECT(var_post_init);
CHECK_OBJECT(var_post_init);
Py_DECREF(var_post_init);
var_post_init = NULL;
Py_XDECREF(var_new_post_init);
var_new_post_init = NULL;
Py_XDECREF(var_new_init);
var_new_init = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_dc_cls);
Py_DECREF(par_dc_cls);
CHECK_OBJECT(par_validate_on_init);
Py_DECREF(par_validate_on_init);
CHECK_OBJECT(par_dc_cls_doc);
Py_DECREF(par_dc_cls_doc);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_dc_cls);
Py_DECREF(par_dc_cls);
CHECK_OBJECT(par_validate_on_init);
Py_DECREF(par_validate_on_init);
CHECK_OBJECT(par_dc_cls_doc);
Py_DECREF(par_dc_cls_doc);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_k = NULL;
PyObject *var_v = NULL;
PyObject *outline_0_var_k = NULL;
PyObject *outline_0_var_v = NULL;
PyObject *outline_1_var_k = NULL;
PyObject *outline_1_var_v = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_dictcontraction_2__$0 = NULL;
PyObject *tmp_dictcontraction_2__contraction = NULL;
PyObject *tmp_dictcontraction_2__iter_value_0 = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init = MAKE_FUNCTION_FRAME(tstate, code_objects_478350b822d2a3be1eda6e8b775b27a4, module_pydantic$v1$dataclasses, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init = cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_config);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 292;
type_description_1 = "ooooocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_extra);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooocc";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_pydantic$v1$dataclasses$Extra(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Extra);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 292;
type_description_1 = "ooooocc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ignore);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 292;
type_description_1 = "ooooocc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooocc";
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
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_direct_call_arg4_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_init);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 293;
type_description_1 = "ooooocc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_args);
tmp_direct_call_arg3_1 = par_args;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_dict_arg_1;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_1 = par_kwargs;
tmp_iter_arg_1 = DICT_ITERITEMS(tstate, tmp_dict_arg_1);
assert(!(tmp_iter_arg_1 == NULL));
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooocc";
    goto try_except_handler_2;
}
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooocc";
exception_lineno = 293;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooocc";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_1 = "ooooocc";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_1 = "ooooocc";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_1 = "ooooocc";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_k;
    outline_0_var_k = tmp_assign_source_7;
    Py_INCREF(outline_0_var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_v;
    outline_0_var_v = tmp_assign_source_8;
    Py_INCREF(outline_0_var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(outline_0_var_k);
tmp_cmp_expr_left_2 = outline_0_var_k;
if (par_self == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 293;
type_description_1 = "ooooocc";
    goto try_except_handler_3;
}

tmp_expression_value_3 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___dataclass_fields__);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooocc";
    goto try_except_handler_3;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooocc";
    goto try_except_handler_3;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_k);
tmp_dictset38_key_1 = outline_0_var_k;
CHECK_OBJECT(outline_0_var_v);
tmp_dictset38_value_1 = outline_0_var_v;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooocc";
    goto try_except_handler_3;
}
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooocc";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_direct_call_arg4_1 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_direct_call_arg4_1);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_k);
outline_0_var_k = NULL;
Py_XDECREF(outline_0_var_v);
outline_0_var_v = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_k);
outline_0_var_k = NULL;
Py_XDECREF(outline_0_var_v);
outline_0_var_v = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 293;
goto frame_exception_exit_1;
outline_result_1:;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_config);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 295;
type_description_1 = "ooooocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_extra);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooocc";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_pydantic$v1$dataclasses$Extra(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Extra);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 295;
type_description_1 = "ooooocc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_allow);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 295;
type_description_1 = "ooooocc";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooocc";
    goto frame_exception_exit_1;
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
PyObject *tmp_iter_arg_3;
PyObject *tmp_dict_arg_2;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_2 = par_kwargs;
tmp_iter_arg_3 = DICT_ITERITEMS(tstate, tmp_dict_arg_2);
assert(!(tmp_iter_arg_3 == NULL));
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooocc";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_9;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_2 = tmp_for_loop_1__for_iterator;
tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooocc";
exception_lineno = 296;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_4 = tmp_for_loop_1__iter_value;
tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooocc";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_1 = "ooooocc";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_1 = "ooooocc";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_1 = "ooooocc";
    goto try_except_handler_8;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_7;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_6;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_k;
    var_k = tmp_assign_source_14;
    Py_INCREF(var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_15 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_15;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 297;
type_description_1 = "ooooocc";
    goto try_except_handler_6;
}

tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooocc";
    goto try_except_handler_6;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_setdefault);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooocc";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_k);
tmp_args_element_value_1 = var_k;
CHECK_OBJECT(var_v);
tmp_args_element_value_2 = var_v;
frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init->m_frame.f_lineno = 297;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooocc";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooocc";
    goto try_except_handler_6;
}
goto loop_start_2;
loop_end_2:;
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
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
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg3_2;
PyObject *tmp_direct_call_arg4_2;
PyObject *tmp_call_result_3;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_init);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 298;
type_description_1 = "ooooocc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg1_2 = Nuitka_Cell_GET(self->m_closure[1]);
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 298;
type_description_1 = "ooooocc";
    goto frame_exception_exit_1;
}

tmp_tuple_element_2 = par_self;
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_args);
tmp_direct_call_arg3_2 = par_args;
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_5;
PyObject *tmp_dict_arg_3;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_3 = par_kwargs;
tmp_iter_arg_5 = DICT_ITERITEMS(tstate, tmp_dict_arg_3);
assert(!(tmp_iter_arg_5 == NULL));
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooocc";
    goto try_except_handler_9;
}
assert(tmp_dictcontraction_2__$0 == NULL);
tmp_dictcontraction_2__$0 = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_2__contraction == NULL);
tmp_dictcontraction_2__contraction = tmp_assign_source_17;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_dictcontraction_2__$0);
tmp_next_source_3 = tmp_dictcontraction_2__$0;
tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_18 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooocc";
exception_lineno = 298;
        goto try_except_handler_10;
    }
}

{
    PyObject *old = tmp_dictcontraction_2__iter_value_0;
    tmp_dictcontraction_2__iter_value_0 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_iter_arg_6;
CHECK_OBJECT(tmp_dictcontraction_2__iter_value_0);
tmp_iter_arg_6 = tmp_dictcontraction_2__iter_value_0;
tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooocc";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_2__source_iter;
    tmp_dictcontraction$tuple_unpack_2__source_iter = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_dictcontraction$tuple_unpack_2__source_iter;
tmp_assign_source_20 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;
type_description_1 = "ooooocc";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_2__element_1;
    tmp_dictcontraction$tuple_unpack_2__element_1 = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
tmp_unpack_6 = tmp_dictcontraction$tuple_unpack_2__source_iter;
tmp_assign_source_21 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;
type_description_1 = "ooooocc";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_2__element_2;
    tmp_dictcontraction$tuple_unpack_2__element_2 = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
tmp_iterator_name_3 = tmp_dictcontraction$tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;
type_description_1 = "ooooocc";
    goto try_except_handler_12;
}
}
goto try_end_6;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_2__source_iter);
tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_11;
// End of try:
try_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_1);
tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_2);
tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_2__source_iter);
tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__element_1);
tmp_assign_source_22 = tmp_dictcontraction$tuple_unpack_2__element_1;
{
    PyObject *old = outline_1_var_k;
    outline_1_var_k = tmp_assign_source_22;
    Py_INCREF(outline_1_var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_1);
tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__element_2);
tmp_assign_source_23 = tmp_dictcontraction$tuple_unpack_2__element_2;
{
    PyObject *old = outline_1_var_v;
    outline_1_var_v = tmp_assign_source_23;
    Py_INCREF(outline_1_var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_2);
tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;

{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(outline_1_var_k);
tmp_cmp_expr_left_4 = outline_1_var_k;
if (par_self == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 298;
type_description_1 = "ooooocc";
    goto try_except_handler_10;
}

tmp_expression_value_8 = par_self;
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain___dataclass_fields__);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooocc";
    goto try_except_handler_10;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooocc";
    goto try_except_handler_10;
}
tmp_condition_result_4 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_dictset38_key_2;
PyObject *tmp_dictset38_value_2;
PyObject *tmp_dictset38_dict_2;
CHECK_OBJECT(outline_1_var_k);
tmp_dictset38_key_2 = outline_1_var_k;
CHECK_OBJECT(outline_1_var_v);
tmp_dictset38_value_2 = outline_1_var_v;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
tmp_dictset38_dict_2 = tmp_dictcontraction_2__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_2));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_2, tmp_dictset38_key_2, tmp_dictset38_value_2);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooocc";
    goto try_except_handler_10;
}
}
branch_no_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooocc";
    goto try_except_handler_10;
}
goto loop_start_3;
loop_end_3:;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
tmp_direct_call_arg4_2 = tmp_dictcontraction_2__contraction;
Py_INCREF(tmp_direct_call_arg4_2);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(tmp_dictcontraction_2__$0);
CHECK_OBJECT(tmp_dictcontraction_2__$0);
Py_DECREF(tmp_dictcontraction_2__$0);
tmp_dictcontraction_2__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
Py_DECREF(tmp_dictcontraction_2__contraction);
tmp_dictcontraction_2__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
tmp_dictcontraction_2__iter_value_0 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_2__$0);
CHECK_OBJECT(tmp_dictcontraction_2__$0);
Py_DECREF(tmp_dictcontraction_2__$0);
tmp_dictcontraction_2__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
Py_DECREF(tmp_dictcontraction_2__contraction);
tmp_dictcontraction_2__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
tmp_dictcontraction_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_XDECREF(outline_1_var_k);
outline_1_var_k = NULL;
Py_XDECREF(outline_1_var_v);
outline_1_var_v = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_k);
outline_1_var_k = NULL;
Py_XDECREF(outline_1_var_v);
outline_1_var_v = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 298;
goto frame_exception_exit_1;
outline_result_2:;
Py_INCREF(tmp_direct_call_arg1_2);
Py_INCREF(tmp_direct_call_arg3_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2, tmp_direct_call_arg4_2};
    tmp_call_result_3 = impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_direct_call_arg1_3;
PyObject *tmp_direct_call_arg2_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_direct_call_arg3_3;
PyObject *tmp_direct_call_arg4_3;
PyObject *tmp_call_result_4;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_init);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 301;
type_description_1 = "ooooocc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg1_3 = Nuitka_Cell_GET(self->m_closure[1]);
CHECK_OBJECT(par_self);
tmp_tuple_element_3 = par_self;
tmp_direct_call_arg2_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_args);
tmp_direct_call_arg3_3 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_3 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_3);
Py_INCREF(tmp_direct_call_arg3_3);
Py_INCREF(tmp_direct_call_arg4_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3, tmp_direct_call_arg2_3, tmp_direct_call_arg3_3, tmp_direct_call_arg4_3};
    tmp_call_result_4 = impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init,
    type_description_1,
    par_self,
    par_args,
    par_kwargs,
    var_k,
    var_v,
    self->m_closure[0],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init == cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init);

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
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init = MAKE_FUNCTION_FRAME(tstate, code_objects_6078347260af7decaee6f7acbe8e1b54, module_pydantic$v1$dataclasses, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init = cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_config);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 311;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_post_init_call);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_before_validation;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooocc";
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
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_direct_call_arg4_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_post_init);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 312;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_args);
tmp_direct_call_arg3_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___pydantic_run_validation__);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 314;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init->m_frame.f_lineno = 315;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain___pydantic_validate_values__);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___post_init_post_parse__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
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
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_direct_call_arg3_2;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_direct_call_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___post_init_post_parse__);
if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_2 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_2 = par_kwargs;
Py_INCREF(tmp_direct_call_arg2_2);
Py_INCREF(tmp_direct_call_arg3_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2};
    tmp_call_result_3 = impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_3:;
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_6;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_config);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 319;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_post_init_call);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_after_validation;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_direct_call_arg1_3;
PyObject *tmp_direct_call_arg2_3;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg3_3;
PyObject *tmp_direct_call_arg4_2;
PyObject *tmp_call_result_4;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_post_init);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 320;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg1_3 = Nuitka_Cell_GET(self->m_closure[1]);
CHECK_OBJECT(par_self);
tmp_tuple_element_2 = par_self;
tmp_direct_call_arg2_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_3, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_args);
tmp_direct_call_arg3_3 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_2 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_3);
Py_INCREF(tmp_direct_call_arg3_3);
Py_INCREF(tmp_direct_call_arg4_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3, tmp_direct_call_arg2_3, tmp_direct_call_arg3_3, tmp_direct_call_arg4_2};
    tmp_call_result_4 = impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init,
    type_description_1,
    par_self,
    par_args,
    par_kwargs,
    self->m_closure[0],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init == cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init);

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
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_initvars_and_values = NULL;
PyObject *var_i = NULL;
PyObject *var_f = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init;
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
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init = MAKE_FUNCTION_FRAME(tstate, code_objects_525bfba1eec4ce64cd99259b0c5aff45, module_pydantic$v1$dataclasses, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init = cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_direct_call_arg4_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_handle_extra_init);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 329;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg1_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_args);
tmp_direct_call_arg3_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___pydantic_run_validation__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 331;
type_description_1 = "ooooooc";
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
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init->m_frame.f_lineno = 332;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain___pydantic_validate_values__);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___post_init_post_parse__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_initvars_and_values == NULL);
var_initvars_and_values = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
tmp_called_value_1 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___dataclass_fields__);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_values);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init->m_frame.f_lineno = 340;
tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init->m_frame.f_lineno = 340;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooooc";
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
type_description_1 = "ooooooc";
exception_lineno = 340;
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


exception_lineno = 340;
type_description_1 = "ooooooc";
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



exception_lineno = 340;
type_description_1 = "ooooooc";
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



exception_lineno = 340;
type_description_1 = "ooooooc";
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



exception_lineno = 340;
type_description_1 = "ooooooc";
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
    PyObject *old = var_i;
    var_i = tmp_assign_source_7;
    Py_INCREF(var_i);
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
    PyObject *old = var_f;
    var_f = tmp_assign_source_8;
    Py_INCREF(var_f);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_f);
tmp_expression_value_7 = var_f;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__field_type);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "ooooooc";
    goto try_except_handler_2;
}
tmp_expression_value_8 = module_var_accessor_pydantic$v1$dataclasses$dataclasses(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclasses);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 341;
type_description_1 = "ooooooc";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__FIELD_INITVAR);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 341;
type_description_1 = "ooooooc";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_args);
tmp_expression_value_9 = par_args;
CHECK_OBJECT(var_i);
tmp_subscript_value_1 = var_i;
tmp_dictset_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "ooooooc";
    goto try_except_handler_5;
}
if (var_initvars_and_values == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_initvars_and_values);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 344;
type_description_1 = "ooooooc";
    goto try_except_handler_5;
}

tmp_dictset_dict = var_initvars_and_values;
CHECK_OBJECT(var_f);
tmp_expression_value_10 = var_f;
tmp_dictset_key = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_name);
if (tmp_dictset_key == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dictset_value);

exception_lineno = 344;
type_description_1 = "ooooooc";
    goto try_except_handler_5;
}
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_key);
Py_DECREF(tmp_dictset_key);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "ooooooc";
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

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_IndexError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_default_value_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
CHECK_OBJECT(var_f);
tmp_expression_value_11 = var_f;
tmp_key_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_name);
if (tmp_key_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooooooc";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_f);
tmp_expression_value_12 = var_f;
tmp_default_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_default);
if (tmp_default_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_key_value_1);

exception_lineno = 346;
type_description_1 = "ooooooc";
    goto try_except_handler_6;
}
tmp_dictset_value = DICT_GET_ITEM_WITH_HASH_ERROR1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_dictset_value == NULL && !HAS_ERROR_OCCURRED(tstate)) {
    tmp_dictset_value = tmp_default_value_1;
    Py_INCREF(tmp_dictset_value);
}
CHECK_OBJECT(tmp_key_value_1);
Py_DECREF(tmp_key_value_1);
CHECK_OBJECT(tmp_default_value_1);
Py_DECREF(tmp_default_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooooooc";
    goto try_except_handler_6;
}
if (var_initvars_and_values == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_initvars_and_values);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 346;
type_description_1 = "ooooooc";
    goto try_except_handler_6;
}

tmp_dictset_dict = var_initvars_and_values;
CHECK_OBJECT(var_f);
tmp_expression_value_13 = var_f;
tmp_dictset_key = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_name);
if (tmp_dictset_key == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dictset_value);

exception_lineno = 346;
type_description_1 = "ooooooc";
    goto try_except_handler_6;
}
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_key);
Py_DECREF(tmp_dictset_key);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooooooc";
    goto try_except_handler_6;
}
}
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 342;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init->m_frame)) {
        frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooc";
goto try_except_handler_6;
branch_end_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooooc";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_direct_call_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain___post_init_post_parse__);
if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
if (var_initvars_and_values == NULL) {
Py_DECREF(tmp_direct_call_arg1_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_initvars_and_values);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 348;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg2_2 = var_initvars_and_values;
Py_INCREF(tmp_direct_call_arg2_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2};
    tmp_call_result_3 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init,
    type_description_1,
    par_self,
    par_args,
    par_kwargs,
    var_initvars_and_values,
    var_i,
    var_f,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init == cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init);

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
Py_XDECREF(var_initvars_and_values);
var_initvars_and_values = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_f);
var_f = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_initvars_and_values);
var_initvars_and_values = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_f);
var_f = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__18__get_validators(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_cls = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_cls;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_pydantic$v1$dataclasses$$$function__18__get_validators$$$genobj__1__get_validators(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
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
struct pydantic$v1$dataclasses$$$function__18__get_validators$$$genobj__1__get_validators_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *pydantic$v1$dataclasses$$$function__18__get_validators$$$genobj__1__get_validators_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct pydantic$v1$dataclasses$$$function__18__get_validators$$$genobj__1__get_validators_locals *generator_heap = (struct pydantic$v1$dataclasses$$$function__18__get_validators$$$genobj__1__get_validators_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f378daa76dc2835a22ca695893ac589d, module_pydantic$v1$dataclasses, sizeof(void *));
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

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 364;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___validate__);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 364;
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


generator_heap->exception_lineno = 364;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
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

static PyObject *MAKE_GENERATOR_pydantic$v1$dataclasses$$$function__18__get_validators$$$genobj__1__get_validators(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pydantic$v1$dataclasses$$$function__18__get_validators$$$genobj__1__get_validators_context,
        module_pydantic$v1$dataclasses,
        mod_consts.const_str_plain__get_validators,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_f378daa76dc2835a22ca695893ac589d,
        closure,
        1,
#if 1
        sizeof(struct pydantic$v1$dataclasses$$$function__18__get_validators$$$genobj__1__get_validators_locals)
#else
        0
#endif
    );
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__19__validate_dataclass(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_v = python_pars[1];
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass = MAKE_FUNCTION_FRAME(tstate, code_objects_69d7b87d40bfa382c7cbc068946ee275, module_pydantic$v1$dataclasses, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass = cache_frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_pydantic$v1$dataclasses$set_validation(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_validation);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 368;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_cls);
tmp_args_element_value_1 = par_cls;
tmp_args_element_value_2 = Py_True;
frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass->m_frame.f_lineno = 368;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oo";
    goto try_except_handler_1;
}
frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass->m_frame.f_lineno = 368;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_v);
tmp_isinstance_inst_1 = par_v;
CHECK_OBJECT(par_cls);
tmp_isinstance_cls_1 = par_cls;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oo";
    goto try_except_handler_3;
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
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_v);
tmp_called_instance_1 = par_v;
frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass->m_frame.f_lineno = 370;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain___pydantic_validate_values__);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
CHECK_OBJECT(par_v);
tmp_return_value = par_v;
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_v);
tmp_isinstance_inst_2 = par_v;
tmp_isinstance_cls_2 = mod_consts.const_tuple_type_list_type_tuple_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "oo";
    goto try_except_handler_3;
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
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
CHECK_OBJECT(par_cls);
tmp_direct_call_arg1_1 = par_cls;
CHECK_OBJECT(par_v);
tmp_direct_call_arg2_1 = par_v;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "oo";
    goto try_except_handler_3;
}
goto try_return_handler_2;
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
CHECK_OBJECT(par_v);
tmp_isinstance_inst_3 = par_v;
tmp_isinstance_cls_3 = (PyObject *)&PyDict_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oo";
    goto try_except_handler_3;
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
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_direct_call_arg2_2;
CHECK_OBJECT(par_cls);
tmp_direct_call_arg1_2 = par_cls;
CHECK_OBJECT(par_v);
tmp_direct_call_arg2_2 = par_v;
Py_INCREF(tmp_direct_call_arg1_2);
Py_INCREF(tmp_direct_call_arg2_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oo";
    goto try_except_handler_3;
}
goto try_return_handler_2;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_3;
tmp_called_value_3 = module_var_accessor_pydantic$v1$dataclasses$DataclassTypeError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataclassTypeError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 377;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_cls);
tmp_expression_value_3 = par_cls;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___name__);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oo";
    goto try_except_handler_3;
}
frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass->m_frame.f_lineno = 377;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_class_name_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oo";
    goto try_except_handler_3;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 377;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_3;
}
branch_end_3:;
branch_end_2:;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
tmp_args_element_value_3 = EXC_TYPE(tstate);
tmp_args_element_value_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_4); 
tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_5 == NULL) {
    tmp_args_element_value_5 = Py_None;
}
frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass->m_frame.f_lineno = 368;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oo";
    goto try_except_handler_4;
}
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
    exception_lineno = 368;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass->m_frame)) {
        frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_4;
branch_no_5:;
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 368;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass->m_frame)) {
        frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_4;
branch_end_4:;
goto try_end_1;
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
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass->m_frame.f_lineno = 368;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass->m_frame.f_lineno = 368;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 368;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_6:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_1:;
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
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass,
    type_description_1,
    par_cls,
    par_v
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass == cache_frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__19__validate_dataclass);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_v);
Py_DECREF(par_v);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_v);
Py_DECREF(par_v);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_dc_cls = python_pars[0];
PyObject *par_config = python_pars[1];
PyObject *par_dc_cls_doc = python_pars[2];
PyObject *var_field_definitions = NULL;
PyObject *var_default = NULL;
PyObject *var_default_factory = NULL;
PyObject *var_field_info = NULL;
PyObject *var_model = NULL;
PyObject *var_field = NULL;
PyObject *var_validators = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_field_definitions == NULL);
var_field_definitions = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass = MAKE_FUNCTION_FRAME(tstate, code_objects_1c655dd0ae17e6acd9030e0c2dc4b512, module_pydantic$v1$dataclasses, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass = cache_frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_pydantic$v1$dataclasses$dataclasses(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclasses);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 386;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_dc_cls);
tmp_args_element_value_1 = par_dc_cls;
frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass->m_frame.f_lineno = 386;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_fields, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oooooooooo";
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
type_description_1 = "oooooooooo";
exception_lineno = 386;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_4 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_field;
    var_field = tmp_assign_source_4;
    Py_INCREF(var_field);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = module_var_accessor_pydantic$v1$dataclasses$Undefined(tstate);
if (unlikely(tmp_assign_source_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Undefined);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 387;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_default;
    var_default = tmp_assign_source_5;
    Py_INCREF(var_default);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = Py_None;
{
    PyObject *old = var_default_factory;
    var_default_factory = tmp_assign_source_6;
    Py_INCREF(var_default_factory);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_field);
tmp_expression_value_1 = var_field;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_default);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_2 = module_var_accessor_pydantic$v1$dataclasses$dataclasses(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclasses);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 391;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_MISSING);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 391;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_field);
tmp_expression_value_3 = var_field;
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_default);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_default;
    assert(old != NULL);
    var_default = tmp_assign_source_7;
    Py_DECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_field);
tmp_expression_value_4 = var_field;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_default_factory);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_5 = module_var_accessor_pydantic$v1$dataclasses$dataclasses(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclasses);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 393;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_MISSING);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 393;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_field);
tmp_expression_value_6 = var_field;
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_default_factory);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_default_factory;
    assert(old != NULL);
    var_default_factory = tmp_assign_source_8;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = module_var_accessor_pydantic$v1$dataclasses$Required(tstate);
if (unlikely(tmp_assign_source_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Required);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 396;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_default;
    assert(old != NULL);
    var_default = tmp_assign_source_9;
    Py_INCREF(var_default);
    Py_DECREF(old);
}

}
branch_end_2:;
branch_end_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_default);
tmp_isinstance_inst_1 = var_default;
tmp_isinstance_cls_1 = module_var_accessor_pydantic$v1$dataclasses$FieldInfo(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FieldInfo);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 398;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_10;
CHECK_OBJECT(var_default);
tmp_assign_source_10 = var_default;
{
    PyObject *old = var_field_info;
    var_field_info = tmp_assign_source_10;
    Py_INCREF(var_field_info);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
if (par_dc_cls == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dc_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 400;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_assattr_target_1 = par_dc_cls;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain___pydantic_has_field_info_default__, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_expression_value_7;
tmp_direct_call_arg1_1 = module_var_accessor_pydantic$v1$dataclasses$Field(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Field);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 402;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_dict_key_1 = mod_consts.const_str_plain_default;
CHECK_OBJECT(var_default);
tmp_dict_value_1 = var_default;
tmp_direct_call_arg2_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_default_factory;
CHECK_OBJECT(var_default_factory);
tmp_dict_value_1 = var_default_factory;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(var_field);
tmp_expression_value_7 = var_field;
tmp_direct_call_arg3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_metadata);
if (tmp_direct_call_arg3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg2_1);

exception_lineno = 402;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assign_source_11 = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_field_info;
    var_field_info = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
branch_end_3:;
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_field);
tmp_expression_value_8 = var_field;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_type);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_dictset_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_field_info);
tmp_tuple_element_1 = var_field_info;
PyTuple_SET_ITEM0(tmp_dictset_value, 1, tmp_tuple_element_1);
if (var_field_definitions == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_field_definitions);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 404;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_dictset_dict = var_field_definitions;
CHECK_OBJECT(var_field);
tmp_expression_value_9 = var_field;
tmp_dictset_key = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_name);
if (tmp_dictset_key == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dictset_value);

exception_lineno = 404;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_key);
Py_DECREF(tmp_dictset_key);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oooooooooo";
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
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_pydantic$v1$dataclasses$gather_all_validators(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_gather_all_validators);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 406;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (par_dc_cls == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dc_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 406;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = par_dc_cls;
frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass->m_frame.f_lineno = 406;
tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_validators == NULL);
var_validators = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_direct_call_arg3_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_direct_call_arg4_1;
tmp_direct_call_arg1_2 = module_var_accessor_pydantic$v1$dataclasses$create_model(tstate);
if (unlikely(tmp_direct_call_arg1_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_model);
}

if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 407;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (par_dc_cls == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dc_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 408;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = par_dc_cls;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain___name__);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_direct_call_arg2_2, 0, tmp_tuple_element_2);
tmp_dict_key_2 = mod_consts.const_str_plain___config__;
CHECK_OBJECT(par_config);
tmp_dict_value_2 = par_config;
tmp_direct_call_arg3_2 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_11;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = const_str_plain___module__;
if (par_dc_cls == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dc_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 410;
type_description_1 = "oooooooooo";
    goto dict_build_exception_1;
}

tmp_expression_value_11 = par_dc_cls;
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain___module__);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "oooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain___validators__;
CHECK_OBJECT(var_validators);
tmp_dict_value_2 = var_validators;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain___cls_kwargs__;
tmp_dict_value_2 = DICT_COPY(tstate, mod_consts.const_dict_514575297805cab24632b7681352a396);
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_direct_call_arg2_2);
Py_DECREF(tmp_direct_call_arg3_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
if (var_field_definitions == NULL) {
Py_DECREF(tmp_direct_call_arg2_2);
Py_DECREF(tmp_direct_call_arg3_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_field_definitions);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 413;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg4_1 = var_field_definitions;
Py_INCREF(tmp_direct_call_arg1_2);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2, tmp_direct_call_arg4_1};
    tmp_assign_source_13 = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_model == NULL);
var_model = tmp_assign_source_13;
}
{
PyObject *tmp_assattr_value_2;
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_dc_cls_doc);
tmp_cmp_expr_left_3 = par_dc_cls_doc;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_dc_cls_doc);
tmp_assattr_value_2 = par_dc_cls_doc;
Py_INCREF(tmp_assattr_value_2);
goto condexpr_end_1;
condexpr_false_1:;
if (par_dc_cls == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dc_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 415;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = par_dc_cls;
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___doc__);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 415;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
tmp_or_right_value_1 = const_str_empty;
Py_INCREF(tmp_or_right_value_1);
tmp_assattr_value_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assattr_value_2 = tmp_or_left_value_1;
or_end_1:;
condexpr_end_1:;
CHECK_OBJECT(var_model);
tmp_assattr_target_2 = var_model;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, const_str_plain___doc__, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass,
    type_description_1,
    par_dc_cls,
    par_config,
    par_dc_cls_doc,
    var_field_definitions,
    var_default,
    var_default_factory,
    var_field_info,
    var_model,
    var_field,
    var_validators
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass == cache_frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_model);
tmp_return_value = var_model;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_field_definitions);
var_field_definitions = NULL;
Py_XDECREF(var_default);
var_default = NULL;
Py_XDECREF(var_default_factory);
var_default_factory = NULL;
Py_XDECREF(var_field_info);
var_field_info = NULL;
CHECK_OBJECT(var_model);
CHECK_OBJECT(var_model);
Py_DECREF(var_model);
var_model = NULL;
Py_XDECREF(var_field);
var_field = NULL;
CHECK_OBJECT(var_validators);
CHECK_OBJECT(var_validators);
Py_DECREF(var_validators);
var_validators = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_field_definitions);
var_field_definitions = NULL;
Py_XDECREF(var_default);
var_default = NULL;
Py_XDECREF(var_default_factory);
var_default_factory = NULL;
Py_XDECREF(var_field_info);
var_field_info = NULL;
Py_XDECREF(var_model);
var_model = NULL;
Py_XDECREF(var_field);
var_field = NULL;
Py_XDECREF(var_validators);
var_validators = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_dc_cls);
Py_DECREF(par_dc_cls);
CHECK_OBJECT(par_config);
Py_DECREF(par_config);
CHECK_OBJECT(par_dc_cls_doc);
Py_DECREF(par_dc_cls_doc);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_dc_cls);
Py_DECREF(par_dc_cls);
CHECK_OBJECT(par_config);
Py_DECREF(par_config);
CHECK_OBJECT(par_dc_cls_doc);
Py_DECREF(par_dc_cls_doc);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__21__is_field_cached_property(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_obj = python_pars[0];
PyObject *par_k = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property = MAKE_FUNCTION_FRAME(tstate, code_objects_fe955296385bc2d9265a51aadfae3cbd, module_pydantic$v1$dataclasses, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property = cache_frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property) == 2);

// Framed code:
{
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_obj);
tmp_type_arg_1 = par_obj;
tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_expression_value_1 == NULL));
CHECK_OBJECT(par_k);
tmp_name_value_1 = par_k;
tmp_default_value_1 = Py_None;
tmp_isinstance_inst_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = module_var_accessor_pydantic$v1$dataclasses$cached_property(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 422;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property,
    type_description_1,
    par_obj,
    par_k
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property == cache_frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__21__is_field_cached_property);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
CHECK_OBJECT(par_k);
Py_DECREF(par_k);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
CHECK_OBJECT(par_k);
Py_DECREF(par_k);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_input_data = NULL;
PyObject *var_d = NULL;
PyObject *var__ = NULL;
PyObject *var_validation_error = NULL;
PyObject *outline_0_var_k = NULL;
PyObject *outline_0_var_v = NULL;
PyObject *outline_1_var_k = NULL;
PyObject *outline_1_var_v = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_dictcontraction_2__$0 = NULL;
PyObject *tmp_dictcontraction_2__contraction = NULL;
PyObject *tmp_dictcontraction_2__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values = MAKE_FUNCTION_FRAME(tstate, code_objects_5e3c31276f005f9eb96500ae6e217a2f, module_pydantic$v1$dataclasses, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values = cache_frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_capi_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_name_value_1 = mod_consts.const_str_plain___pydantic_initialised__;
tmp_capi_result_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, NULL);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_capi_result_1);

exception_lineno = 433;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_1;
PyObject *tmp_capi_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_name_value_2 = mod_consts.const_str_plain___pydantic_has_field_info_default__;
tmp_default_value_1 = Py_False;
tmp_capi_result_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_2, tmp_default_value_1);
if (tmp_capi_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_capi_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_capi_result_2);

exception_lineno = 435;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_2);
Py_DECREF(tmp_capi_result_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values->m_frame.f_lineno = 440;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 438;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 440;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 440;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 440;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_8 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_k;
    outline_0_var_k = tmp_assign_source_8;
    Py_INCREF(outline_0_var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_9 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_v;
    outline_0_var_v = tmp_assign_source_9;
    Py_INCREF(outline_0_var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(outline_0_var_v);
tmp_isinstance_inst_1 = outline_0_var_v;
tmp_isinstance_cls_1 = module_var_accessor_pydantic$v1$dataclasses$FieldInfo(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FieldInfo);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_or_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_called_value_2 = module_var_accessor_pydantic$v1$dataclasses$_is_field_cached_property(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_field_cached_property);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
if (par_self == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 441;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_1 = par_self;
CHECK_OBJECT(outline_0_var_k);
tmp_args_element_value_2 = outline_0_var_k;
frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values->m_frame.f_lineno = 441;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_or_right_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_operand_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_operand_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "ooooo";
    goto try_except_handler_3;
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
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_k);
tmp_dictset38_key_1 = outline_0_var_k;
CHECK_OBJECT(outline_0_var_v);
tmp_dictset38_value_1 = outline_0_var_v;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_assign_source_1 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_assign_source_1);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_k);
outline_0_var_k = NULL;
Py_XDECREF(outline_0_var_v);
outline_0_var_v = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_k);
outline_0_var_k = NULL;
Py_XDECREF(outline_0_var_v);
outline_0_var_v = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 438;
goto frame_exception_exit_1;
outline_result_1:;
assert(var_input_data == NULL);
var_input_data = tmp_assign_source_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_10;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values->m_frame.f_lineno = 444;
tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
assert(tmp_dictcontraction_2__$0 == NULL);
tmp_dictcontraction_2__$0 = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_2__contraction == NULL);
tmp_dictcontraction_2__contraction = tmp_assign_source_12;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_dictcontraction_2__$0);
tmp_next_source_2 = tmp_dictcontraction_2__$0;
tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 444;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_dictcontraction_2__iter_value_0;
    tmp_dictcontraction_2__iter_value_0 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(tmp_dictcontraction_2__iter_value_0);
tmp_iter_arg_4 = tmp_dictcontraction_2__iter_value_0;
tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_2__source_iter;
    tmp_dictcontraction$tuple_unpack_2__source_iter = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_dictcontraction$tuple_unpack_2__source_iter;
tmp_assign_source_15 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 444;
type_description_1 = "ooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_2__element_1;
    tmp_dictcontraction$tuple_unpack_2__element_1 = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_dictcontraction$tuple_unpack_2__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 444;
type_description_1 = "ooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_2__element_2;
    tmp_dictcontraction$tuple_unpack_2__element_2 = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_dictcontraction$tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 444;
type_description_1 = "ooooo";
    goto try_except_handler_9;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_2__source_iter);
tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_8;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_1);
tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_2);
tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_2__source_iter);
tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__element_1);
tmp_assign_source_17 = tmp_dictcontraction$tuple_unpack_2__element_1;
{
    PyObject *old = outline_1_var_k;
    outline_1_var_k = tmp_assign_source_17;
    Py_INCREF(outline_1_var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_1);
tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__element_2);
tmp_assign_source_18 = tmp_dictcontraction$tuple_unpack_2__element_2;
{
    PyObject *old = outline_1_var_v;
    outline_1_var_v = tmp_assign_source_18;
    Py_INCREF(outline_1_var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_2);
tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;

{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_4 = module_var_accessor_pydantic$v1$dataclasses$_is_field_cached_property(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_field_cached_property);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 444;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
if (par_self == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 444;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}

tmp_args_element_value_3 = par_self;
CHECK_OBJECT(outline_1_var_k);
tmp_args_element_value_4 = outline_1_var_k;
frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values->m_frame.f_lineno = 444;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooooo";
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
{
PyObject *tmp_dictset38_key_2;
PyObject *tmp_dictset38_value_2;
PyObject *tmp_dictset38_dict_2;
CHECK_OBJECT(outline_1_var_k);
tmp_dictset38_key_2 = outline_1_var_k;
CHECK_OBJECT(outline_1_var_v);
tmp_dictset38_value_2 = outline_1_var_v;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
tmp_dictset38_dict_2 = tmp_dictcontraction_2__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_2));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_2, tmp_dictset38_key_2, tmp_dictset38_value_2);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
}
branch_no_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
tmp_assign_source_10 = tmp_dictcontraction_2__contraction;
Py_INCREF(tmp_assign_source_10);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_dictcontraction_2__$0);
CHECK_OBJECT(tmp_dictcontraction_2__$0);
Py_DECREF(tmp_dictcontraction_2__$0);
tmp_dictcontraction_2__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
Py_DECREF(tmp_dictcontraction_2__contraction);
tmp_dictcontraction_2__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
tmp_dictcontraction_2__iter_value_0 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_2__$0);
CHECK_OBJECT(tmp_dictcontraction_2__$0);
Py_DECREF(tmp_dictcontraction_2__$0);
tmp_dictcontraction_2__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
Py_DECREF(tmp_dictcontraction_2__contraction);
tmp_dictcontraction_2__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
tmp_dictcontraction_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_XDECREF(outline_1_var_k);
outline_1_var_k = NULL;
Py_XDECREF(outline_1_var_v);
outline_1_var_v = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_k);
outline_1_var_k = NULL;
Py_XDECREF(outline_1_var_v);
outline_1_var_v = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 444;
goto frame_exception_exit_1;
outline_result_2:;
assert(var_input_data == NULL);
var_input_data = tmp_assign_source_10;
}
branch_end_2:;
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_iter_arg_5;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_8;
tmp_called_value_5 = module_var_accessor_pydantic$v1$dataclasses$validate_model(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_validate_model);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 445;
type_description_1 = "ooooo";
    goto try_except_handler_10;
}
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 445;
type_description_1 = "ooooo";
    goto try_except_handler_10;
}

tmp_expression_value_7 = par_self;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain___pydantic_model__);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "ooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(var_input_data);
tmp_kw_call_arg_value_1_1 = var_input_data;
if (par_self == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 445;
type_description_1 = "ooooo";
    goto try_except_handler_10;
}

tmp_expression_value_8 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_8);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 445;
type_description_1 = "ooooo";
    goto try_except_handler_10;
}
frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values->m_frame.f_lineno = 445;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_cls_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "ooooo";
    goto try_except_handler_10;
}
tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "ooooo";
    goto try_except_handler_10;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_20 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 445;
type_description_1 = "ooooo";
    goto try_except_handler_11;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_21 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 3);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 445;
type_description_1 = "ooooo";
    goto try_except_handler_11;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_22 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 2, 3);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 445;
type_description_1 = "ooooo";
    goto try_except_handler_11;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_22;
}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 445;
type_description_1 = "ooooo";
    goto try_except_handler_11;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_23 = tmp_tuple_unpack_1__element_1;
assert(var_d == NULL);
Py_INCREF(tmp_assign_source_23);
var_d = tmp_assign_source_23;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_24;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_24 = tmp_tuple_unpack_1__element_2;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_24);
var__ = tmp_assign_source_24;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_25 = tmp_tuple_unpack_1__element_3;
assert(var_validation_error == NULL);
Py_INCREF(tmp_assign_source_25);
var_validation_error = tmp_assign_source_25;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_3;
CHECK_OBJECT(var_validation_error);
tmp_truth_name_3 = CHECK_IF_TRUE(var_validation_error);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
CHECK_OBJECT(var_validation_error);
tmp_raise_type_input_1 = var_validation_error;
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 447;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 447;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 448;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = par_self;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_10);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_update);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_d);
tmp_args_element_value_5 = var_d;
frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values->m_frame.f_lineno = 448;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_expression_value_11 = (PyObject *)&PyBaseObject_Type;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain___setattr__);
assert(!(tmp_called_value_7 == NULL));
if (par_self == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 449;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = par_self;
tmp_args_element_value_7 = mod_consts.const_str_plain___pydantic_initialised__;
tmp_args_element_value_8 = Py_True;
frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values->m_frame.f_lineno = 449;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values,
    type_description_1,
    par_self,
    var_input_data,
    var_d,
    var__,
    var_validation_error
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values == cache_frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values);

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
Py_XDECREF(var_input_data);
var_input_data = NULL;
Py_XDECREF(var_d);
var_d = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_validation_error);
var_validation_error = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_input_data);
var_input_data = NULL;
Py_XDECREF(var_d);
var_d = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_validation_error);
var_validation_error = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

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


static PyObject *impl_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_value = python_pars[2];
PyObject *var_d = NULL;
PyObject *var_known_field = NULL;
PyObject *var_error_ = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr = MAKE_FUNCTION_FRAME(tstate, code_objects_c7f6885869ef62c110612734f8b653a4, module_pydantic$v1$dataclasses, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr = cache_frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___pydantic_initialised__);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 453;
type_description_1 = "oooooo";
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_seq_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_dict_seq_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_2);
if (tmp_dict_seq_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
CHECK_OBJECT(tmp_dict_seq_1);
Py_DECREF(tmp_dict_seq_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_d == NULL);
var_d = tmp_assign_source_1;
}
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(var_d);
tmp_dict_arg_value_1 = var_d;
CHECK_OBJECT(par_name);
tmp_key_value_1 = par_name;
tmp_default_value_1 = Py_None;
tmp_capi_result_1 = DICT_POP3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___pydantic_model__);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___fields__);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
tmp_args_element_value_2 = Py_None;
frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr->m_frame.f_lineno = 456;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_known_field == NULL);
var_known_field = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(var_known_field);
tmp_truth_name_2 = CHECK_IF_TRUE(var_known_field);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 457;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_known_field);
tmp_expression_value_6 = var_known_field;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_validate);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_value);
tmp_kw_call_arg_value_0_1 = par_value;
CHECK_OBJECT(var_d);
tmp_kw_call_arg_value_1_1 = var_d;
CHECK_OBJECT(par_name);
tmp_kw_call_dict_value_0_1 = par_name;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_7);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 458;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr->m_frame.f_lineno = 458;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_loc_str_plain_cls_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 458;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 458;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 458;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = par_value;
    assert(old != NULL);
    par_value = tmp_assign_source_6;
    Py_INCREF(par_value);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
assert(var_error_ == NULL);
Py_INCREF(tmp_assign_source_7);
var_error_ = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_3;
CHECK_OBJECT(var_error_);
tmp_truth_name_3 = CHECK_IF_TRUE(var_error_);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_list_element_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_8;
tmp_called_value_3 = module_var_accessor_pydantic$v1$dataclasses$ValidationError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ValidationError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 460;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_error_);
tmp_list_element_1 = var_error_;
tmp_args_element_value_3 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_3, 0, tmp_list_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_8);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 460;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr->m_frame.f_lineno = 460;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 460;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
branch_no_2:;
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_instance_1 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_self);
tmp_args_element_value_5 = par_self;
CHECK_OBJECT(par_name);
tmp_args_element_value_6 = par_name;
CHECK_OBJECT(par_value);
tmp_args_element_value_7 = par_value;
frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr->m_frame.f_lineno = 462;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
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


exception_lineno = 462;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr,
    type_description_1,
    par_self,
    par_name,
    par_value,
    var_d,
    var_known_field,
    var_error_
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr == cache_frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr);

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
CHECK_OBJECT(par_value);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
par_value = NULL;
Py_XDECREF(var_d);
var_d = NULL;
Py_XDECREF(var_known_field);
var_known_field = NULL;
Py_XDECREF(var_error_);
var_error_ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_value);
par_value = NULL;
Py_XDECREF(var_d);
var_d = NULL;
Py_XDECREF(var_known_field);
var_known_field = NULL;
Py_XDECREF(var_error_);
var_error_ = NULL;
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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par__cls = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass = MAKE_FUNCTION_FRAME(tstate, code_objects_84a074e7bdd2d9243c0f0ba0c3e8f014, module_pydantic$v1$dataclasses, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass->m_type_description == NULL);
frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass = cache_frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass) == 2);

// Framed code:
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_set_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_set_arg_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
tmp_called_instance_1 = module_var_accessor_pydantic$v1$dataclasses$dataclasses(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclasses);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 488;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par__cls);
tmp_args_element_value_1 = par__cls;
frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass->m_frame.f_lineno = 488;
tmp_and_left_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_dataclass, tmp_args_element_value_1);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 488;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(par__cls);
tmp_expression_value_1 = par__cls;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain___pydantic_model__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_and_left_value_2 = (tmp_res == 0) ? Py_True : Py_False;
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par__cls);
tmp_expression_value_3 = par__cls;
tmp_set_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___dataclass_fields__);
if (tmp_set_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = PySet_New(tmp_set_arg_1);
CHECK_OBJECT(tmp_set_arg_1);
Py_DECREF(tmp_set_arg_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_issuperset);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
assert(!(tmp_called_value_1 == NULL));
CHECK_OBJECT(par__cls);
tmp_expression_value_4 = par__cls;
tmp_name_value_1 = const_str_plain___annotations__;
tmp_default_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_set_arg_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_4, tmp_name_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_default_value_1);
Py_DECREF(tmp_default_value_1);
if (tmp_set_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 490;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = PySet_New(tmp_set_arg_2);
CHECK_OBJECT(tmp_set_arg_2);
Py_DECREF(tmp_set_arg_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 490;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass->m_frame.f_lineno = 490;
tmp_and_right_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_and_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
Py_INCREF(tmp_and_left_value_2);
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass,
    type_description_1,
    par__cls
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass == cache_frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass);
    cache_frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par__cls);
Py_DECREF(par__cls);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par__cls);
Py_DECREF(par__cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$dataclasses$$$function__26_make_dataclass_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_dc_cls = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_config = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_config;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_dc_cls;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_pydantic$v1$dataclasses$$$function__26_make_dataclass_validator$$$genobj__1_make_dataclass_validator(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_dc_cls);
CHECK_OBJECT(par_dc_cls);
Py_DECREF(par_dc_cls);
par_dc_cls = NULL;
CHECK_OBJECT(par_config);
CHECK_OBJECT(par_config);
Py_DECREF(par_config);
par_config = NULL;
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
struct pydantic$v1$dataclasses$$$function__26_make_dataclass_validator$$$genobj__1_make_dataclass_validator_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *pydantic$v1$dataclasses$$$function__26_make_dataclass_validator$$$genobj__1_make_dataclass_validator_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct pydantic$v1$dataclasses$$$function__26_make_dataclass_validator$$$genobj__1_make_dataclass_validator_locals *generator_heap = (struct pydantic$v1$dataclasses$$$function__26_make_dataclass_validator$$$genobj__1_make_dataclass_validator_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_79fc289285ce5a39459a43b5c1519c5f, module_pydantic$v1$dataclasses, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_yieldfrom_result_1;
tmp_called_value_1 = module_var_accessor_pydantic$v1$dataclasses$_get_validators(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__get_validators);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 500;
generator_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_pydantic$v1$dataclasses$dataclass(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 500;
generator_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_dc_cls);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 500;
generator_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(generator->m_closure[1]);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_config);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 500;
generator_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_kw_call_dict_value_1_1 = Py_True;
generator->m_frame->m_frame.f_lineno = 500;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_config_str_plain_use_proxy_tuple);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 500;
generator_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 500;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 500;
generator_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
generator->m_yield_from = tmp_expression_value_1;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 500;
generator_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_yieldfrom_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yieldfrom_result_1);
Py_DECREF(tmp_yieldfrom_result_1);
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
    generator->m_closure[1],
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

static PyObject *MAKE_GENERATOR_pydantic$v1$dataclasses$$$function__26_make_dataclass_validator$$$genobj__1_make_dataclass_validator(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pydantic$v1$dataclasses$$$function__26_make_dataclass_validator$$$genobj__1_make_dataclass_validator_context,
        module_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_make_dataclass_validator,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_79fc289285ce5a39459a43b5c1519c5f,
        closure,
        2,
#if 1
        sizeof(struct pydantic$v1$dataclasses$$$function__26_make_dataclass_validator$$$genobj__1_make_dataclass_validator_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__10___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a24902a46515d4d6b7a929847653ea06,
#endif
        code_objects_94cc98df1f1a2bee7faaa34cfe70cbe2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__11___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__11___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8bc5cd184688095d6d438ae4f3e05f2d,
#endif
        code_objects_061f1de1513c808609a204871181addc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__12___getattr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__12___getattr__,
        mod_consts.const_str_plain___getattr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ce0031cc921a2d8a760eb4e839270d1f,
#endif
        code_objects_b24b1af80a32748cbbf3a1daa6afdc35,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__13___setattr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__13___setattr__,
        mod_consts.const_str_plain___setattr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3f710551596c27b60a953b3876634ed0,
#endif
        code_objects_1d2fac22622dffa6e759c9451d47d515,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__14___instancecheck__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__14___instancecheck__,
        mod_consts.const_str_plain___instancecheck__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_afb0f485c2e6b24bb1b2fe16a00724b6,
#endif
        code_objects_b3946ece19b6bd649c047413dfcfde14,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__15___copy__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__15___copy__,
        mod_consts.const_str_plain___copy__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_86ef2ad0a0153ec10a1cb43cb3027b84,
#endif
        code_objects_79e5587402a58446eb04456bf75d30fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__16___deepcopy__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__16___deepcopy__,
        mod_consts.const_str_plain___deepcopy__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5f5711f2eac1fd34c1d609292613b49e,
#endif
        code_objects_84ee9d1cf181965390c59d4c35200fbb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes,
        mod_consts.const_str_plain__add_pydantic_validation_attributes,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7684093cab70301826af79c57970506a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        mod_consts.const_str_digest_a97ce25ebcecd4648cb8cc44b3261a5a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init,
        mod_consts.const_str_plain_handle_extra_init,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2138fd1b80abb73d176d64e2ef60eb33,
#endif
        code_objects_478350b822d2a3be1eda6e8b775b27a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init,
        mod_consts.const_str_plain_new_post_init,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ac16f4d47e336f55a677e9d349c822fc,
#endif
        code_objects_6078347260af7decaee6f7acbe8e1b54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init,
        mod_consts.const_str_plain_new_init,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5d0351e21ca2f9f54a88f2caa3d80356,
#endif
        code_objects_525bfba1eec4ce64cd99259b0c5aff45,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__18__get_validators(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__18__get_validators,
        mod_consts.const_str_plain__get_validators,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f378daa76dc2835a22ca695893ac589d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__19__validate_dataclass(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__19__validate_dataclass,
        mod_consts.const_str_plain__validate_dataclass,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_69d7b87d40bfa382c7cbc068946ee275,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass,
        mod_consts.const_str_plain_create_pydantic_model_from_dataclass,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1c655dd0ae17e6acd9030e0c2dc4b512,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__21__is_field_cached_property(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__21__is_field_cached_property,
        mod_consts.const_str_plain__is_field_cached_property,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fe955296385bc2d9265a51aadfae3cbd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values,
        mod_consts.const_str_plain__dataclass_validate_values,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5e3c31276f005f9eb96500ae6e217a2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr,
        mod_consts.const_str_plain__dataclass_validate_assignment_setattr,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c7f6885869ef62c110612734f8b653a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass,
        mod_consts.const_str_plain_is_builtin_dataclass,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_84a074e7bdd2d9243c0f0ba0c3e8f014,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        mod_consts.const_str_digest_5862d361bd1a776741f80014a058426f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__26_make_dataclass_validator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__26_make_dataclass_validator,
        mod_consts.const_str_plain_make_dataclass_validator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_79fc289285ce5a39459a43b5c1519c5f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        mod_consts.const_str_digest_5a0023f2956770b5f42df6f3e1a80362,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__4_dataclass(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_dataclass,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_644f0d4eb08a110ed17f8fe54af21a01,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__5_dataclass(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_dataclass,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9c9bd5cc1555960012185d890fb7eba7,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__8_dataclass(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__8_dataclass,
        mod_consts.const_str_plain_dataclass,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_33a80ff10056d08642812644bb3e4f4d,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        mod_consts.const_str_digest_883a1afb21707e9eb1c898153a802214,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap,
        mod_consts.const_str_plain_wrap,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dcd14b04086e09c4db30be0c137a7b64,
#endif
        code_objects_1edccf12d9c1145b03b7392946ae29de,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
        NULL,
        closure,
        10
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__9_set_validation(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$dataclasses$$$function__9_set_validation,
        mod_consts.const_str_plain_set_validation,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0f6a31da72aa5c0c932529678d892eb2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$dataclasses,
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

static function_impl_code const function_table_pydantic$v1$dataclasses[] = {
impl_pydantic$v1$dataclasses$$$function__8_dataclass$$$function__1_wrap,
impl_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__1_handle_extra_init,
impl_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__2_new_post_init,
impl_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes$$$function__3_new_init,
impl_pydantic$v1$dataclasses$$$function__8_dataclass,
impl_pydantic$v1$dataclasses$$$function__9_set_validation,
impl_pydantic$v1$dataclasses$$$function__10___init__,
impl_pydantic$v1$dataclasses$$$function__11___call__,
impl_pydantic$v1$dataclasses$$$function__12___getattr__,
impl_pydantic$v1$dataclasses$$$function__13___setattr__,
impl_pydantic$v1$dataclasses$$$function__14___instancecheck__,
impl_pydantic$v1$dataclasses$$$function__15___copy__,
impl_pydantic$v1$dataclasses$$$function__16___deepcopy__,
impl_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes,
impl_pydantic$v1$dataclasses$$$function__18__get_validators,
impl_pydantic$v1$dataclasses$$$function__19__validate_dataclass,
impl_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass,
impl_pydantic$v1$dataclasses$$$function__21__is_field_cached_property,
impl_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values,
impl_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr,
impl_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass,
impl_pydantic$v1$dataclasses$$$function__26_make_dataclass_validator,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pydantic$v1$dataclasses);
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
        module_pydantic$v1$dataclasses,
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
        function_table_pydantic$v1$dataclasses,
        sizeof(function_table_pydantic$v1$dataclasses) / sizeof(function_impl_code)
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
static char const *module_full_name = "pydantic.v1.dataclasses";
#endif

// Internal entry point for module code.
PyObject *module_code_pydantic$v1$dataclasses(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pydantic$v1$dataclasses");

    // Store the module for future use.
    module_pydantic$v1$dataclasses = module;

    moduledict_pydantic$v1$dataclasses = MODULE_DICT(module_pydantic$v1$dataclasses);

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
        PRINT_STRING("pydantic$v1$dataclasses: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pydantic$v1$dataclasses: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pydantic$v1$dataclasses: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic.v1.dataclasses" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpydantic$v1$dataclasses\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pydantic$v1$dataclasses,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pydantic$v1$dataclasses,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pydantic$v1$dataclasses,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$v1$dataclasses,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$v1$dataclasses,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pydantic$v1$dataclasses);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pydantic$v1$dataclasses);
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

        UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$dataclasses$$$class__2_DataclassProxy_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_501427f9a246e1b290e0566a0f9d632d;
UPDATE_STRING_DICT0(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pydantic$v1$dataclasses = MAKE_MODULE_FRAME(code_objects_e095054b2a6576e71330637a93b445df, module_pydantic$v1$dataclasses);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_pydantic$v1$dataclasses$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_pydantic$v1$dataclasses$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_copy;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pydantic$v1$dataclasses;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 34;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_copy, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_dataclasses;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pydantic$v1$dataclasses;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 35;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_3 = (PyObject *)moduledict_pydantic$v1$dataclasses;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_contextmanager_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 37;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_contextmanager,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_contextmanager);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
tmp_import_name_from_2 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_import_name_from_2 == NULL));
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_wraps,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_wraps);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_wraps, tmp_assign_source_8);
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
tmp_import_name_from_3 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_import_name_from_3 == NULL));
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_cached_property,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_cached_property);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property, tmp_assign_source_9);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses, exception_keeper_lineno_1);
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
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 40;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$v1$dataclasses->m_frame)) {
        frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_no_1:;
goto try_end_2;
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
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_10 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_10);
tmp_import_from_1__module = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = Py_False;
UPDATE_STRING_DICT0(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_11);
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_ClassVar,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_ClassVar);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_ClassVar, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_Dict,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Dict);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_Generator,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Generator);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Generator, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_10 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_Type,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Type);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Type, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_11 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_12 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_13 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_overload,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_overload);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_overload, tmp_assign_source_21);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_4 = (PyObject *)moduledict_pydantic$v1$dataclasses;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_dataclass_transform_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 48;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_dataclass_transform,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_dataclass_transform);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass_transform, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_0f8c2ee241e87e084b7b6c832589a787;
tmp_globals_arg_value_5 = (PyObject *)moduledict_pydantic$v1$dataclasses;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_gather_all_validators_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 50;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_gather_all_validators,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_gather_all_validators);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_gather_all_validators, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_f1d85b689dd18bc52efba82018384910;
tmp_globals_arg_value_6 = (PyObject *)moduledict_pydantic$v1$dataclasses;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_6cbdcd5692f4b9d2e42ce04141c64cdc_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 51;
tmp_assign_source_24 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_24;
}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_16 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_BaseConfig,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_BaseConfig);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseConfig, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_17 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_ConfigDict,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_ConfigDict);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_ConfigDict, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_18 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_Extra,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_Extra);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Extra, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_19 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_get_config,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_get_config);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_get_config, tmp_assign_source_28);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_20;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_7e976bd39ec5cd0a7fabe6ea37cf887d;
tmp_globals_arg_value_7 = (PyObject *)moduledict_pydantic$v1$dataclasses;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_ValidationError_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 52;
tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_ValidationError,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_ValidationError);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_ValidationError, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_06f23725d5bfbad1658425da14f8e1d3;
tmp_globals_arg_value_8 = (PyObject *)moduledict_pydantic$v1$dataclasses;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_DataclassTypeError_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 53;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_DataclassTypeError,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_DataclassTypeError);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_DataclassTypeError, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_9cffe454a97af811292f85406e2c37ba;
tmp_globals_arg_value_9 = (PyObject *)moduledict_pydantic$v1$dataclasses;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_c986b759ef84db1b10e29d63d78de14e_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 54;
tmp_assign_source_31 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_31;
}
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_22 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_Field,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_Field);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Field, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_23 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_FieldInfo,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_FieldInfo);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_FieldInfo, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_24 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_Required,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_Required);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Required, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_25 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_Undefined,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_Undefined);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Undefined, tmp_assign_source_35);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_89e6398e41cddc4e38dd68cd9e9b179a;
tmp_globals_arg_value_10 = (PyObject *)moduledict_pydantic$v1$dataclasses;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_create_model_str_plain_validate_model_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 55;
tmp_assign_source_36 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_36;
}
// Tried code:
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_26 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_create_model,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_create_model);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_create_model, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_27 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_validate_model,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_validate_model);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_validate_model, tmp_assign_source_38);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_28;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_aeb95cf63d7533fb267591ffeae61316;
tmp_globals_arg_value_11 = (PyObject *)moduledict_pydantic$v1$dataclasses;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_ClassAttribute_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 56;
tmp_import_name_from_28 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_pydantic$v1$dataclasses,
        mod_consts.const_str_plain_ClassAttribute,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_ClassAttribute);
}

CHECK_OBJECT(tmp_import_name_from_28);
Py_DECREF(tmp_import_name_from_28);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_ClassAttribute, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_LIST5(tstate, mod_consts.const_list_7ea0aa55e62d8c0c6ac6e473d690ea2d_list);
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$v1$dataclasses$TypeVar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;

    goto frame_exception_exit_1;
}
frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 100;
tmp_assign_source_41 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain__T_tuple);

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__T, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_called_value_3 = module_var_accessor_pydantic$v1$dataclasses$dataclass_transform(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass_transform);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;

    goto frame_exception_exit_1;
}
tmp_expression_value_1 = module_var_accessor_pydantic$v1$dataclasses$dataclasses(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclasses);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_field);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_kw_call_value_0_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_pydantic$v1$dataclasses$Field(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Field);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_kw_call_value_0_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_kw_call_value_0_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 104;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_called_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_field_specifiers_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_pydantic$v1$dataclasses$overload(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 105;

    goto frame_exception_exit_1;
}
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_4d1fe41632ef0d7973d19a2324187fc1);
tmp_dict_key_1 = mod_consts.const_str_plain_init;
tmp_dict_value_1 = (PyObject *)&PyBool_Type;
tmp_annotations_1 = _PyDict_NewPresized( 11 );
{
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_5;
PyObject *tmp_tuple_element_3;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_6;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_repr;
tmp_dict_value_1 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_eq;
tmp_dict_value_1 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_order;
tmp_dict_value_1 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_unsafe_hash;
tmp_dict_value_1 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_frozen;
tmp_dict_value_1 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_config;
tmp_expression_value_2 = module_var_accessor_pydantic$v1$dataclasses$Union(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;

    goto dict_build_exception_1;
}
tmp_tuple_element_2 = module_var_accessor_pydantic$v1$dataclasses$ConfigDict(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConfigDict);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;

    goto dict_build_exception_1;
}
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_2);
tmp_expression_value_3 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;

    goto tuple_build_exception_2;
}
tmp_subscript_value_2 = (PyObject *)&PyBaseObject_Type;
tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_None;
PyTuple_SET_ITEM0(tmp_subscript_value_1, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_1);
goto dict_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_validate_on_init;
tmp_expression_value_4 = module_var_accessor_pydantic$v1$dataclasses$Optional(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;

    goto dict_build_exception_1;
}
tmp_subscript_value_3 = (PyObject *)&PyBool_Type;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_use_proxy;
tmp_expression_value_5 = module_var_accessor_pydantic$v1$dataclasses$Optional(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;

    goto dict_build_exception_1;
}
tmp_subscript_value_4 = (PyObject *)&PyBool_Type;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_4);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_kw_only;
tmp_dict_value_1 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_expression_value_6 = module_var_accessor_pydantic$v1$dataclasses$Callable(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;

    goto dict_build_exception_1;
}
tmp_expression_value_7 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;

    goto dict_build_exception_1;
}
tmp_subscript_value_6 = module_var_accessor_pydantic$v1$dataclasses$_T(tstate);
if (unlikely(tmp_subscript_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__T);
}

if (tmp_subscript_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;

    goto dict_build_exception_1;
}
tmp_list_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_6);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto dict_build_exception_1;
}
tmp_tuple_element_3 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_tuple_element_3, 0, tmp_list_element_1);
tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_5, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_plain_DataclassClassOrWrapper;
PyTuple_SET_ITEM0(tmp_subscript_value_5, 1, tmp_tuple_element_3);
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_defaults_1);
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_args_element_value_2 = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__4_dataclass(tstate, tmp_kw_defaults_1, tmp_annotations_1);

frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 105;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 105;

    goto frame_exception_exit_1;
}
frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 104;
tmp_assign_source_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_5;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_7;
tmp_called_value_6 = module_var_accessor_pydantic$v1$dataclasses$dataclass_transform(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass_transform);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;

    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_pydantic$v1$dataclasses$dataclasses(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclasses);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;

    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_field);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_kw_call_value_0_2, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_pydantic$v1$dataclasses$Field(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Field);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_kw_call_value_0_2, 1, tmp_tuple_element_4);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_kw_call_value_0_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 121;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_called_value_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_str_plain_field_specifiers_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto frame_exception_exit_1;
}
tmp_called_value_7 = module_var_accessor_pydantic$v1$dataclasses$overload(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 122;

    goto frame_exception_exit_1;
}
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_4d1fe41632ef0d7973d19a2324187fc1);
tmp_dict_key_2 = mod_consts.const_str_plain__cls;
tmp_expression_value_9 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_defaults_2);

exception_lineno = 124;

    goto frame_exception_exit_1;
}
tmp_subscript_value_7 = module_var_accessor_pydantic$v1$dataclasses$_T(tstate);
if (unlikely(tmp_subscript_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__T);
}

if (tmp_subscript_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_defaults_2);

exception_lineno = 124;

    goto frame_exception_exit_1;
}
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_7);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_defaults_2);

exception_lineno = 124;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = _PyDict_NewPresized( 12 );
{
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_8;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_10;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_11;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_init;
tmp_dict_value_2 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = const_str_plain_repr;
tmp_dict_value_2 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_eq;
tmp_dict_value_2 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_order;
tmp_dict_value_2 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_unsafe_hash;
tmp_dict_value_2 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_frozen;
tmp_dict_value_2 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_config;
tmp_expression_value_10 = module_var_accessor_pydantic$v1$dataclasses$Union(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto dict_build_exception_2;
}
tmp_tuple_element_5 = module_var_accessor_pydantic$v1$dataclasses$ConfigDict(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConfigDict);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto dict_build_exception_2;
}
tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_9;
PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_5);
tmp_expression_value_11 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto tuple_build_exception_4;
}
tmp_subscript_value_9 = (PyObject *)&PyBaseObject_Type;
tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_9);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = Py_None;
PyTuple_SET_ITEM0(tmp_subscript_value_8, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_subscript_value_8);
goto dict_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_8);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_validate_on_init;
tmp_expression_value_12 = module_var_accessor_pydantic$v1$dataclasses$Optional(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;

    goto dict_build_exception_2;
}
tmp_subscript_value_10 = (PyObject *)&PyBool_Type;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_10);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_use_proxy;
tmp_expression_value_13 = module_var_accessor_pydantic$v1$dataclasses$Optional(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;

    goto dict_build_exception_2;
}
tmp_subscript_value_11 = (PyObject *)&PyBool_Type;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_11);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_kw_only;
tmp_dict_value_2 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = mod_consts.const_str_plain_DataclassClassOrWrapper;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_defaults_2);
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;

tmp_args_element_value_4 = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__5_dataclass(tstate, tmp_kw_defaults_2, tmp_annotations_2);

frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 122;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 122;

    goto frame_exception_exit_1;
}
frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 121;
tmp_assign_source_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_5;
PyObject *tmp_defaults_1;
PyObject *tmp_kw_defaults_3;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_12;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_13;
tmp_called_value_9 = module_var_accessor_pydantic$v1$dataclasses$dataclass_transform(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass_transform);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 175;

    goto frame_exception_exit_1;
}
tmp_expression_value_14 = module_var_accessor_pydantic$v1$dataclasses$dataclasses(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclasses);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 175;

    goto frame_exception_exit_1;
}
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_field);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_kw_call_value_0_3, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = module_var_accessor_pydantic$v1$dataclasses$Field(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Field);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 175;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM0(tmp_kw_call_value_0_3, 1, tmp_tuple_element_6);
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_kw_call_value_0_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 175;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

    tmp_called_value_8 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_9, kw_values, mod_consts.const_tuple_str_plain_field_specifiers_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_0_3);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto frame_exception_exit_1;
}
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_kw_defaults_3 = DICT_COPY(tstate, mod_consts.const_dict_5f140d5cd0e21bf4d2291e4bfadc8e55);
tmp_dict_key_3 = mod_consts.const_str_plain__cls;
tmp_expression_value_15 = module_var_accessor_pydantic$v1$dataclasses$Optional(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_kw_defaults_3);

exception_lineno = 177;

    goto frame_exception_exit_1;
}
tmp_expression_value_16 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_kw_defaults_3);

exception_lineno = 177;

    goto frame_exception_exit_1;
}
tmp_subscript_value_13 = module_var_accessor_pydantic$v1$dataclasses$_T(tstate);
if (unlikely(tmp_subscript_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__T);
}

if (tmp_subscript_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_kw_defaults_3);

exception_lineno = 177;

    goto frame_exception_exit_1;
}
tmp_subscript_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_13);
if (tmp_subscript_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_kw_defaults_3);

exception_lineno = 177;

    goto frame_exception_exit_1;
}
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_12);
CHECK_OBJECT(tmp_subscript_value_12);
Py_DECREF(tmp_subscript_value_12);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_kw_defaults_3);

exception_lineno = 177;

    goto frame_exception_exit_1;
}
tmp_annotations_3 = _PyDict_NewPresized( 12 );
{
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_14;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_16;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_17;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_18;
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_19;
PyObject *tmp_tuple_element_9;
PyObject *tmp_list_element_2;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_20;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_init;
tmp_dict_value_3 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = const_str_plain_repr;
tmp_dict_value_3 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_eq;
tmp_dict_value_3 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_order;
tmp_dict_value_3 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_unsafe_hash;
tmp_dict_value_3 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_frozen;
tmp_dict_value_3 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_config;
tmp_expression_value_17 = module_var_accessor_pydantic$v1$dataclasses$Union(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;

    goto dict_build_exception_3;
}
tmp_tuple_element_7 = module_var_accessor_pydantic$v1$dataclasses$ConfigDict(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConfigDict);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;

    goto dict_build_exception_3;
}
tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_15;
PyTuple_SET_ITEM0(tmp_subscript_value_14, 0, tmp_tuple_element_7);
tmp_expression_value_18 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;

    goto tuple_build_exception_6;
}
tmp_subscript_value_15 = (PyObject *)&PyBaseObject_Type;
tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_15);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_subscript_value_14, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = Py_None;
PyTuple_SET_ITEM0(tmp_subscript_value_14, 2, tmp_tuple_element_7);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_subscript_value_14);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_14);
CHECK_OBJECT(tmp_subscript_value_14);
Py_DECREF(tmp_subscript_value_14);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_validate_on_init;
tmp_expression_value_19 = module_var_accessor_pydantic$v1$dataclasses$Optional(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;

    goto dict_build_exception_3;
}
tmp_subscript_value_16 = (PyObject *)&PyBool_Type;
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_16);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;

    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_use_proxy;
tmp_expression_value_20 = module_var_accessor_pydantic$v1$dataclasses$Optional(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;

    goto dict_build_exception_3;
}
tmp_subscript_value_17 = (PyObject *)&PyBool_Type;
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_17);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_kw_only;
tmp_dict_value_3 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_expression_value_21 = module_var_accessor_pydantic$v1$dataclasses$Union(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto dict_build_exception_3;
}
tmp_expression_value_22 = module_var_accessor_pydantic$v1$dataclasses$Callable(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto dict_build_exception_3;
}
tmp_expression_value_23 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto dict_build_exception_3;
}
tmp_subscript_value_20 = module_var_accessor_pydantic$v1$dataclasses$_T(tstate);
if (unlikely(tmp_subscript_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__T);
}

if (tmp_subscript_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto dict_build_exception_3;
}
tmp_list_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_20);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto dict_build_exception_3;
}
tmp_tuple_element_9 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_tuple_element_9, 0, tmp_list_element_2);
tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_19, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = mod_consts.const_str_plain_DataclassClassOrWrapper;
PyTuple_SET_ITEM0(tmp_subscript_value_19, 1, tmp_tuple_element_9);
tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_19);
CHECK_OBJECT(tmp_subscript_value_19);
Py_DECREF(tmp_subscript_value_19);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto dict_build_exception_3;
}
tmp_subscript_value_18 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_18, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = mod_consts.const_str_plain_DataclassClassOrWrapper;
PyTuple_SET_ITEM0(tmp_subscript_value_18, 1, tmp_tuple_element_8);
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_18);
CHECK_OBJECT(tmp_subscript_value_18);
Py_DECREF(tmp_subscript_value_18);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_kw_defaults_3);
Py_DECREF(tmp_annotations_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
Py_INCREF(tmp_defaults_1);

tmp_args_element_value_5 = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__8_dataclass(tstate, tmp_defaults_1, tmp_kw_defaults_3, tmp_annotations_3);

frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 175;
tmp_assign_source_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_21;
tmp_called_value_10 = module_var_accessor_pydantic$v1$dataclasses$contextmanager(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextmanager);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;

    goto frame_exception_exit_1;
}
tmp_dict_key_4 = mod_consts.const_str_plain_cls;
tmp_expression_value_24 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;

    goto frame_exception_exit_1;
}
tmp_subscript_value_21 = mod_consts.const_str_plain_DataclassT;
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_21);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto frame_exception_exit_1;
}
tmp_annotations_4 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_22;
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_23;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_value;
tmp_dict_value_4 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_expression_value_25 = module_var_accessor_pydantic$v1$dataclasses$Generator(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Generator);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;

    goto dict_build_exception_4;
}
tmp_expression_value_26 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;

    goto dict_build_exception_4;
}
tmp_subscript_value_23 = mod_consts.const_str_plain_DataclassT;
tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_23);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto dict_build_exception_4;
}
tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_subscript_value_22, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = Py_None;
PyTuple_SET_ITEM0(tmp_subscript_value_22, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = Py_None;
PyTuple_SET_ITEM0(tmp_subscript_value_22, 2, tmp_tuple_element_10);
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_22);
CHECK_OBJECT(tmp_subscript_value_22);
Py_DECREF(tmp_subscript_value_22);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_annotations_4);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;

tmp_args_element_value_6 = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__9_set_validation(tstate, tmp_annotations_4);

frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 241;
tmp_assign_source_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_set_validation, tmp_assign_source_45);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_47;
}
// Tried code:
{
PyObject *tmp_assign_source_48;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_2__prepared;
locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_5753e8f7997db33dc88395566f120daa;
tmp_result = DICT_SET_ITEM(locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_DataclassProxy;
tmp_result = DICT_SET_ITEM(locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_251;
tmp_result = DICT_SET_ITEM(locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain___dataclass__;
tmp_result = DICT_SET_ITEM(locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251, mod_consts.const_str_plain___slots__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_pydantic$v1$dataclasses$$$class__2_DataclassProxy_2 = MAKE_CLASS_FRAME(tstate, code_objects_0365b9740d8a9ffb49f38a69349d885e, module_pydantic$v1$dataclasses, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$dataclasses$$$class__2_DataclassProxy_2);
assert(Py_REFCNT(frame_frame_pydantic$v1$dataclasses$$$class__2_DataclassProxy_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_5;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_24;
tmp_dict_key_5 = mod_consts.const_str_plain_dc_cls;
tmp_expression_value_27 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_24 = mod_consts.const_str_plain_Dataclass;
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_24);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_5 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__10___init__(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
tmp_dict_key_6 = const_str_plain_args;
tmp_dict_value_6 = module_var_accessor_pydantic$v1$dataclasses$Any(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_6 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_kwargs;
tmp_dict_value_6 = module_var_accessor_pydantic$v1$dataclasses$Any(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_return;
tmp_dict_value_6 = module_var_accessor_pydantic$v1$dataclasses$Any(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
goto dict_build_no_exception_5;
// Exception handling pass through code for dict_build:
dict_build_exception_5:;
Py_DECREF(tmp_annotations_6);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_5:;

tmp_dictset_value = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__11___call__(tstate, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_7;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
tmp_dict_key_7 = const_str_plain_name;
tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
tmp_annotations_7 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_return;
tmp_dict_value_7 = module_var_accessor_pydantic$v1$dataclasses$Any(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_2 = "o";
    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
goto dict_build_no_exception_6;
// Exception handling pass through code for dict_build:
dict_build_exception_6:;
Py_DECREF(tmp_annotations_7);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_6:;

tmp_dictset_value = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__12___getattr__(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251, mod_consts.const_str_plain___getattr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_8;
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
tmp_dict_key_8 = mod_consts.const_str_plain__DataclassProxy__name;
tmp_dict_value_8 = (PyObject *)&PyUnicode_Type;
tmp_annotations_8 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain__DataclassProxy__value;
tmp_dict_value_8 = module_var_accessor_pydantic$v1$dataclasses$Any(tstate);
if (unlikely(tmp_dict_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;
type_description_2 = "o";
    goto dict_build_exception_7;
}
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_return;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
goto dict_build_no_exception_7;
// Exception handling pass through code for dict_build:
dict_build_exception_7:;
Py_DECREF(tmp_annotations_8);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_7:;

tmp_dictset_value = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__13___setattr__(tstate, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251, mod_consts.const_str_plain___setattr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_9;
PyObject *tmp_dict_key_9;
PyObject *tmp_dict_value_9;
tmp_dict_key_9 = mod_consts.const_str_plain_instance;
tmp_dict_value_9 = module_var_accessor_pydantic$v1$dataclasses$Any(tstate);
if (unlikely(tmp_dict_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_9 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_return;
tmp_dict_value_9 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__14___instancecheck__(tstate, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251, mod_consts.const_str_plain___instancecheck__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_0b86453c098f501d5492319ca19cbc87);

tmp_dictset_value = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__15___copy__(tstate, tmp_annotations_10);

tmp_result = DICT_SET_ITEM(locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251, mod_consts.const_str_plain___copy__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_11;
PyObject *tmp_dict_key_10;
PyObject *tmp_dict_value_10;
tmp_dict_key_10 = mod_consts.const_str_plain_memo;
tmp_dict_value_10 = module_var_accessor_pydantic$v1$dataclasses$Any(tstate);
if (unlikely(tmp_dict_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 273;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_11 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_return;
tmp_dict_value_10 = mod_consts.const_str_plain_DataclassProxy;
tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__16___deepcopy__(tstate, tmp_annotations_11);

tmp_result = DICT_SET_ITEM(locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251, mod_consts.const_str_plain___deepcopy__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses$$$class__2_DataclassProxy_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses$$$class__2_DataclassProxy_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses$$$class__2_DataclassProxy_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$dataclasses$$$class__2_DataclassProxy_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_pydantic$v1$dataclasses$$$class__2_DataclassProxy_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_9;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_49;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_1;
tmp_called_value_11 = (PyObject *)&PyType_Type;
tmp_tuple_element_11 = mod_consts.const_str_plain_DataclassProxy;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_pydantic$v1$dataclasses->m_frame.f_lineno = 251;
tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;

    goto try_except_handler_9;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_49;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_48 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_48);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251);
locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251);
locals_pydantic$v1$dataclasses$$$class__2_DataclassProxy_251 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 251;
goto try_except_handler_7;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_DataclassProxy, tmp_assign_source_48);
}
goto try_end_7;
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
try_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
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
PyObject *tmp_assign_source_50;
PyObject *tmp_annotations_12;
PyObject *tmp_dict_key_11;
PyObject *tmp_dict_value_11;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_25;
tmp_dict_key_11 = mod_consts.const_str_plain_dc_cls;
tmp_expression_value_28 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 278;

    goto frame_exception_exit_1;
}
tmp_subscript_value_25 = mod_consts.const_str_plain_Dataclass;
tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_25);
if (tmp_dict_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;

    goto frame_exception_exit_1;
}
tmp_annotations_12 = _PyDict_NewPresized( 5 );
{
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_26;
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
Py_DECREF(tmp_dict_value_11);
assert(!(tmp_res != 0));
tmp_dict_key_11 = mod_consts.const_str_plain_config;
tmp_expression_value_29 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 279;

    goto dict_build_exception_8;
}
tmp_subscript_value_26 = module_var_accessor_pydantic$v1$dataclasses$BaseConfig(tstate);
if (unlikely(tmp_subscript_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseConfig);
}

if (tmp_subscript_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 279;

    goto dict_build_exception_8;
}
tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_26);
if (tmp_dict_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto dict_build_exception_8;
}
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
Py_DECREF(tmp_dict_value_11);
assert(!(tmp_res != 0));
tmp_dict_key_11 = mod_consts.const_str_plain_validate_on_init;
tmp_dict_value_11 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
assert(!(tmp_res != 0));
tmp_dict_key_11 = mod_consts.const_str_plain_dc_cls_doc;
tmp_dict_value_11 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
assert(!(tmp_res != 0));
tmp_dict_key_11 = mod_consts.const_str_plain_return;
tmp_dict_value_11 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_8;
// Exception handling pass through code for dict_build:
dict_build_exception_8:;
Py_DECREF(tmp_annotations_12);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_8:;

tmp_assign_source_50 = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__17__add_pydantic_validation_attributes(tstate, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__add_pydantic_validation_attributes, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_cbf4330f508fa02043635b855d8f7e66);

tmp_assign_source_51 = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__18__get_validators(tstate, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__get_validators, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_annotations_14;
PyObject *tmp_dict_key_12;
PyObject *tmp_dict_value_12;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_27;
tmp_dict_key_12 = mod_consts.const_str_plain_cls;
tmp_expression_value_30 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 367;

    goto frame_exception_exit_1;
}
tmp_subscript_value_27 = mod_consts.const_str_plain_DataclassT;
tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_27);
if (tmp_dict_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto frame_exception_exit_1;
}
tmp_annotations_14 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_value_12);
assert(!(tmp_res != 0));
tmp_dict_key_12 = mod_consts.const_str_plain_v;
tmp_dict_value_12 = module_var_accessor_pydantic$v1$dataclasses$Any(tstate);
if (unlikely(tmp_dict_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 367;

    goto dict_build_exception_9;
}
tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_12, tmp_dict_value_12);
assert(!(tmp_res != 0));
tmp_dict_key_12 = mod_consts.const_str_plain_return;
tmp_dict_value_12 = mod_consts.const_str_plain_DataclassT;
tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_12, tmp_dict_value_12);
assert(!(tmp_res != 0));
goto dict_build_no_exception_9;
// Exception handling pass through code for dict_build:
dict_build_exception_9:;
Py_DECREF(tmp_annotations_14);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_9:;

tmp_assign_source_52 = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__19__validate_dataclass(tstate, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_dataclass, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_defaults_2;
PyObject *tmp_tuple_element_12;
PyObject *tmp_annotations_15;
PyObject *tmp_dict_key_13;
PyObject *tmp_dict_value_13;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_28;
tmp_tuple_element_12 = module_var_accessor_pydantic$v1$dataclasses$BaseConfig(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseConfig);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 382;

    goto frame_exception_exit_1;
}
tmp_defaults_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_12);
tmp_dict_key_13 = mod_consts.const_str_plain_dc_cls;
tmp_expression_value_31 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_defaults_2);

exception_lineno = 381;

    goto frame_exception_exit_1;
}
tmp_subscript_value_28 = mod_consts.const_str_plain_Dataclass;
tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_28);
if (tmp_dict_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_defaults_2);

exception_lineno = 381;

    goto frame_exception_exit_1;
}
tmp_annotations_15 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_29;
PyObject *tmp_expression_value_33;
PyObject *tmp_subscript_value_30;
PyObject *tmp_expression_value_34;
PyObject *tmp_subscript_value_31;
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
Py_DECREF(tmp_dict_value_13);
assert(!(tmp_res != 0));
tmp_dict_key_13 = mod_consts.const_str_plain_config;
tmp_expression_value_32 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 382;

    goto dict_build_exception_10;
}
tmp_subscript_value_29 = module_var_accessor_pydantic$v1$dataclasses$Any(tstate);
if (unlikely(tmp_subscript_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_subscript_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 382;

    goto dict_build_exception_10;
}
tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_29);
if (tmp_dict_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto dict_build_exception_10;
}
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
Py_DECREF(tmp_dict_value_13);
assert(!(tmp_res != 0));
tmp_dict_key_13 = mod_consts.const_str_plain_dc_cls_doc;
tmp_expression_value_33 = module_var_accessor_pydantic$v1$dataclasses$Optional(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 383;

    goto dict_build_exception_10;
}
tmp_subscript_value_30 = (PyObject *)&PyUnicode_Type;
tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_30);
if (tmp_dict_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto dict_build_exception_10;
}
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
Py_DECREF(tmp_dict_value_13);
assert(!(tmp_res != 0));
tmp_dict_key_13 = mod_consts.const_str_plain_return;
tmp_expression_value_34 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 384;

    goto dict_build_exception_10;
}
tmp_subscript_value_31 = mod_consts.const_str_plain_BaseModel;
tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_31);
if (tmp_dict_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;

    goto dict_build_exception_10;
}
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
Py_DECREF(tmp_dict_value_13);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_10;
// Exception handling pass through code for dict_build:
dict_build_exception_10:;
Py_DECREF(tmp_defaults_2);
Py_DECREF(tmp_annotations_15);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_10:;

tmp_assign_source_53 = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__20_create_pydantic_model_from_dataclass(tstate, tmp_defaults_2, tmp_annotations_15);

UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_create_pydantic_model_from_dataclass, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_465f687b4e58870a62e0cd81dcb02736);

tmp_assign_source_54 = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__21__is_field_cached_property(tstate, tmp_annotations_16);

UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__is_field_cached_property, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_0ef9e8e33f598be120afd17f5b8afafa);

tmp_assign_source_55 = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__23__dataclass_validate_values(tstate, tmp_annotations_17);

UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__dataclass_validate_values, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_annotations_18;
PyObject *tmp_dict_key_14;
PyObject *tmp_dict_value_14;
tmp_dict_key_14 = mod_consts.const_str_plain_self;
tmp_dict_value_14 = mod_consts.const_str_plain_Dataclass;
tmp_annotations_18 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
assert(!(tmp_res != 0));
tmp_dict_key_14 = const_str_plain_name;
tmp_dict_value_14 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
assert(!(tmp_res != 0));
tmp_dict_key_14 = mod_consts.const_str_plain_value;
tmp_dict_value_14 = module_var_accessor_pydantic$v1$dataclasses$Any(tstate);
if (unlikely(tmp_dict_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 452;

    goto dict_build_exception_11;
}
tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
assert(!(tmp_res != 0));
tmp_dict_key_14 = mod_consts.const_str_plain_return;
tmp_dict_value_14 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
assert(!(tmp_res != 0));
goto dict_build_no_exception_11;
// Exception handling pass through code for dict_build:
dict_build_exception_11:;
Py_DECREF(tmp_annotations_18);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_11:;

tmp_assign_source_56 = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__24__dataclass_validate_assignment_setattr(tstate, tmp_annotations_18);

UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__dataclass_validate_assignment_setattr, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_annotations_19;
PyObject *tmp_dict_key_15;
PyObject *tmp_dict_value_15;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_32;
tmp_dict_key_15 = mod_consts.const_str_plain__cls;
tmp_expression_value_35 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 465;

    goto frame_exception_exit_1;
}
tmp_subscript_value_32 = module_var_accessor_pydantic$v1$dataclasses$Any(tstate);
if (unlikely(tmp_subscript_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_subscript_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 465;

    goto frame_exception_exit_1;
}
tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_32);
if (tmp_dict_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;

    goto frame_exception_exit_1;
}
tmp_annotations_19 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_15, tmp_dict_value_15);
Py_DECREF(tmp_dict_value_15);
assert(!(tmp_res != 0));
tmp_dict_key_15 = mod_consts.const_str_plain_return;
tmp_dict_value_15 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_15, tmp_dict_value_15);
assert(!(tmp_res != 0));

tmp_assign_source_57 = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__25_is_builtin_dataclass(tstate, tmp_annotations_19);

UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_is_builtin_dataclass, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_annotations_20;
PyObject *tmp_dict_key_16;
PyObject *tmp_dict_value_16;
PyObject *tmp_expression_value_36;
PyObject *tmp_subscript_value_33;
tmp_dict_key_16 = mod_consts.const_str_plain_dc_cls;
tmp_expression_value_36 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 494;

    goto frame_exception_exit_1;
}
tmp_subscript_value_33 = mod_consts.const_str_plain_Dataclass;
tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_33);
if (tmp_dict_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 494;

    goto frame_exception_exit_1;
}
tmp_annotations_20 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_34;
tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_16, tmp_dict_value_16);
Py_DECREF(tmp_dict_value_16);
assert(!(tmp_res != 0));
tmp_dict_key_16 = mod_consts.const_str_plain_config;
tmp_expression_value_37 = module_var_accessor_pydantic$v1$dataclasses$Type(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 494;

    goto dict_build_exception_12;
}
tmp_subscript_value_34 = module_var_accessor_pydantic$v1$dataclasses$BaseConfig(tstate);
if (unlikely(tmp_subscript_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseConfig);
}

if (tmp_subscript_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 494;

    goto dict_build_exception_12;
}
tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_34);
if (tmp_dict_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 494;

    goto dict_build_exception_12;
}
tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_16, tmp_dict_value_16);
Py_DECREF(tmp_dict_value_16);
assert(!(tmp_res != 0));
tmp_dict_key_16 = mod_consts.const_str_plain_return;
tmp_dict_value_16 = mod_consts.const_str_plain_CallableGenerator;
tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_16, tmp_dict_value_16);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_12;
// Exception handling pass through code for dict_build:
dict_build_exception_12:;
Py_DECREF(tmp_annotations_20);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_12:;

tmp_assign_source_58 = MAKE_FUNCTION_pydantic$v1$dataclasses$$$function__26_make_dataclass_validator(tstate, tmp_annotations_20);

UPDATE_STRING_DICT1(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_make_dataclass_validator, tmp_assign_source_58);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$dataclasses, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$dataclasses->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$dataclasses, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pydantic$v1$dataclasses);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pydantic$v1$dataclasses", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic.v1.dataclasses" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pydantic$v1$dataclasses);
    return module_pydantic$v1$dataclasses;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$dataclasses, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pydantic$v1$dataclasses", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

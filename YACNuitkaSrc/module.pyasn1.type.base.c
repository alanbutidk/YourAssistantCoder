/* Generated code for Python module 'pyasn1$type$base'
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



/* The "module_pyasn1$type$base" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyasn1$type$base;
PyDictObject *moduledict_pyasn1$type$base;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Asn1Item;
PyObject *const_str_plain__typeCounter;
PyObject *const_str_plain_tagSet;
PyObject *const_str_plain_subtypeSpec;
PyObject *const_str_plain_update;
PyObject *const_str_plain__readOnly;
PyObject *const_str_plain_error;
PyObject *const_str_plain_PyAsn1Error;
PyObject *const_str_digest_784da984eb22c9d21eeac473fe911429;
PyObject *const_str_plain_prettyPrint;
PyObject *const_str_digest_d7ffcbf8c581aa79fd1a6e603083769b;
PyObject *const_str_plain_tagmap;
PyObject *const_str_plain_TagMap;
PyObject *const_str_digest_993e78b2909c3a130413926bf1e1b7fc;
PyObject *const_str_digest_1bf805aa0ed33abb736eb92a430f3a11;
PyObject *const_str_plain_isSuperTagSetOf;
PyObject *const_str_plain_isSuperTypeOf;
PyObject *const_str_digest_707b8f3b29a30c1b7d6c31442b24e956;
PyObject *const_str_plain_noValue;
PyObject *const_str_plain_effectiveTagSet;
PyObject *const_str_plain_tagMap;
PyObject *const_str_plain_isValue;
PyObject *const_str_plain__instance;
PyObject *const_str_plain_getPlug;
PyObject *const_str_digest_30957f33f252f0de89086f74557ea638;
PyObject *const_tuple_type_str_type_int_type_list_type_dict_tuple;
PyObject *const_str_plain_cls;
PyObject *const_str_plain_skipMethods;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_plain____tuple;
PyObject *const_str_plain_endswith;
PyObject *const_str_plain_callable;
PyObject *const_str_plain___new__;
PyObject *const_str_plain_plug;
PyObject *const_str_digest_8f2ceb00ecd45cd57aff3166c0dbf7e9;
PyObject *const_str_digest_0ea995f27834b1376e270219420a70e3;
PyObject *const_str_digest_4469790547d3189f6bf577bc7e488247;
PyObject *const_str_digest_895e1eb82702aaa88873687bac2ae57b;
PyObject *const_str_plain_Asn1Type;
PyObject *const_str_plain_defaultValue;
PyObject *const_str_plain_prettyIn;
PyObject *const_str_digest_c164e1a704c146913b0fff1d8dc25c6a;
PyObject *const_str_plain_value;
PyObject *const_str_plain__value;
PyObject *const_str_digest_30bd7cdcf0da35bee29279a3edd78ce8;
PyObject *const_str_plain_schema;
PyObject *const_str_plain_readOnly;
PyObject *const_str_plain_items;
PyObject *const_str_plain_representation;
PyObject *const_str_digest_bcd1b2cd4be44f046a8a03bffb98945a;
PyObject *const_slice_none_int_pos_16_none;
PyObject *const_str_digest_3501979af1b70861f5e9d6a0f04129bf;
PyObject *const_slice_int_neg_16_none_none;
PyObject *const_str_digest_e500aa9724f7db5e366c4651e2a1174f;
PyObject *const_str_digest_c0c3759da123e387798315e75d2fed70;
PyObject *const_str_digest_68bc778b283de03054654d1c054726ef;
PyObject *const_str_plain_copy;
PyObject *const_str_digest_e4f85a65d1f764faa5d97521b803e11c;
PyObject *const_str_plain_implicitTag;
PyObject *const_str_plain_tagImplicitly;
PyObject *const_str_plain_pop;
PyObject *const_tuple_str_plain_explicitTag_none_tuple;
PyObject *const_str_plain_tagExplicitly;
PyObject *const_str_plain_initializers;
PyObject *const_str_digest_9f1aed26cd817db1dc177d91f0dfb283;
PyObject *const_str_plain_prettyOut;
PyObject *const_str_digest_63157320d44ca37a434ab51866da0845;
PyObject *const_str_plain_componentType;
PyObject *const_str_plain_sizeSpec;
PyObject *const_str_plain__moveSizeSpec;
PyObject *const_str_digest_4f3e47c3a8c847d230643dcfceec9be1;
PyObject *const_str_plain_components;
PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyObject *const_tuple_str_digest_912f25fd6aba67f848e283f306029958_tuple;
PyObject *const_str_plain_cloneValueFlag;
PyObject *const_str_plain__cloneComponentValues;
PyObject *const_str_digest_a72080dfab0326c34281f62539c49802;
PyObject *const_tuple_str_plain_implicitTag_none_tuple;
PyObject *const_str_digest_670fb5ce85bf4117ec044fc06488a941;
PyObject *const_str_plain_self;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_pyasn1;
PyObject *const_tuple_str_plain_error_tuple;
PyObject *const_str_digest_7c8c58049edd248f8b1cb370445e702c;
PyObject *const_tuple_str_plain_constraint_tuple;
PyObject *const_str_plain_constraint;
PyObject *const_tuple_str_plain_tag_tuple;
PyObject *const_str_plain_tag;
PyObject *const_tuple_str_plain_tagmap_tuple;
PyObject *const_list_1b471c5b1be76fede456fcb114a6c3cd_list;
PyObject *const_tuple_type_object_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_2ecce58f9742a3991bee3244156d0cb2;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_18;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_str_plain_getTypeId;
PyObject *const_str_digest_d2ffbca1cfac700d8b376f75a1d09cd8;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_3f0b6c89013617f21d45794221f3853b;
PyObject *const_int_pos_28;
PyObject *const_str_plain_TagSet;
PyObject *const_str_plain_ConstraintsIntersection;
PyObject *const_str_plain_typeId;
PyObject *const_str_digest_b7397b06ee6871c5f1e8c503e66f01a9;
PyObject *const_str_plain___setattr__;
PyObject *const_str_digest_bf5c112b4238b31e27e208baafe58e43;
PyObject *const_str_plain___str__;
PyObject *const_str_digest_479af466ccf6c568166b0be40bb97d3e;
PyObject *const_str_plain_property;
PyObject *const_str_digest_b711a4dfa6c9e91369500776a246e70c;
PyObject *const_str_digest_67cfcff118166bc2fd1130b14440f4fd;
PyObject *const_str_digest_90a99d8ac8006e67cca2f9efb62f0186;
PyObject *const_tuple_true_true_tuple;
PyObject *const_str_plain_isSameTypeWith;
PyObject *const_str_digest_8917c152b0f7b058f95c511af9d3f57d;
PyObject *const_str_digest_8af92183ab6cced5c7e537ab6024c743;
PyObject *const_str_plain_isNoValue;
PyObject *const_str_digest_3fd3b74c0c60339ddeba8fbe78b14094;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_digest_28e92030f38ede8dc04137e8149156fc;
PyObject *const_str_plain_getTagSet;
PyObject *const_str_digest_c4bfdfb6b620afc0706808999fcc80dd;
PyObject *const_str_plain_getEffectiveTagSet;
PyObject *const_str_digest_56d87c8e82628a68f812ffc594c3b86e;
PyObject *const_str_plain_getTagMap;
PyObject *const_str_digest_e9515d68978008d1d8a08571c1e90c8e;
PyObject *const_str_plain_getSubtypeSpec;
PyObject *const_str_digest_0cb75a91d03754e279bf746a87669293;
PyObject *const_str_plain_hasValue;
PyObject *const_str_digest_562c034c364b6bc38db81d1c73ef0b75;
PyObject *const_tuple_str_plain__readOnly_tuple;
PyObject *const_str_plain_Asn1ItemBase;
PyObject *const_str_plain_NoValue;
PyObject *const_str_digest_d5012e5860ff8005843d3554f9591225;
PyObject *const_int_pos_167;
PyObject *const_set_d4df30f26710a79d80b33ce4792aeafc;
PyObject *const_str_digest_2bcc3713f84ac1872285603998784447;
PyObject *const_str_plain___getattr__;
PyObject *const_str_digest_afee2d7ad719eb343c22ebfdef2229d0;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_69e2554ddd05178c2e380adb452d03d2;
PyObject *const_str_plain_SimpleAsn1Type;
PyObject *const_str_digest_f2dc5bf74063cbcecaadef0d09435db0;
PyObject *const_int_pos_244;
PyObject *const_str_digest_13e8b070de5860164d29de9ff1f8da29;
PyObject *const_str_digest_21a29b971ad90d87bf918c4ca3615b3e;
PyObject *const_str_plain___eq__;
PyObject *const_str_digest_b6141dfa210a6fce5b72ac8fa7f05244;
PyObject *const_str_plain___ne__;
PyObject *const_str_digest_22b763c4459c5492df33f5752ba36398;
PyObject *const_str_plain___lt__;
PyObject *const_str_digest_8d565a5a716f2628d3dc3ac8c7e4d8e1;
PyObject *const_str_plain___le__;
PyObject *const_str_digest_74f22bfaee1d472f61ec90db4b1caf63;
PyObject *const_str_plain___gt__;
PyObject *const_str_digest_b00ff013e887d89d69f3fb6bb6571c9a;
PyObject *const_str_plain___ge__;
PyObject *const_str_digest_01bf47cd25063307b75d4a44774048bf;
PyObject *const_str_plain___bool__;
PyObject *const_str_digest_5636dcefc3c18e1ea2f5406511c1648a;
PyObject *const_str_plain___hash__;
PyObject *const_str_digest_db5a8b782c296a88c7c662e60e29f9b1;
PyObject *const_str_digest_da26e09915bf4b7a6ee09d9c4704dbf0;
PyObject *const_str_plain_clone;
PyObject *const_str_digest_caa76983be6269b6306d29a53d8efaad;
PyObject *const_str_plain_subtype;
PyObject *const_str_digest_b8b942d8a9a7c75fe5855f55e0394142;
PyObject *const_str_digest_8130ca846a6eebb70d968ff6b815c77f;
PyObject *const_str_digest_d3243cb0900bd84d32a601d13b6e37e1;
PyObject *const_str_digest_f30138e8a578a0813b1b0b4794aa0434;
PyObject *const_str_plain_prettyPrintType;
PyObject *const_str_digest_2961c9280852cf4249253049624efde5;
PyObject *const_tuple_str_plain__value_tuple;
PyObject *const_str_plain_AbstractSimpleAsn1Item;
PyObject *const_str_plain_ConstructedAsn1Type;
PyObject *const_str_digest_9a02d9698268e7ee0fbec1914af59c69;
PyObject *const_int_pos_477;
PyObject *const_str_plain_strictConstraints;
PyObject *const_str_digest_8037e9c3bf77694dd92ee116ed23db5c;
PyObject *const_str_digest_38a65c5a064da0b8e779952dd5b9a257;
PyObject *const_str_digest_3902df23ba424fa915d6f858bb0b971e;
PyObject *const_str_digest_c177a0197b46badff79b847c4f69c6a1;
PyObject *const_str_digest_006879b6eadb54790648c51d7439a4c7;
PyObject *const_str_digest_b6af15069dead1af45c201089a5f3a9a;
PyObject *const_str_digest_4e064f04759c5d264ee6414218df9295;
PyObject *const_str_digest_e02ae3a28158189e89e5b6509c998a83;
PyObject *const_str_digest_7684a6b663f5bade1eab7395edb91cb2;
PyObject *const_str_digest_702b314938d751deda54641e9fee897a;
PyObject *const_str_digest_65a537976c9f497883af6e044ec36825;
PyObject *const_str_digest_87ed86ecf0bc5818b2e00fe6e937e5ff;
PyObject *const_str_digest_ee75ed76cc525ed54a4b42a1cd2a02aa;
PyObject *const_str_digest_2a5a9334a48532d42aa195840856ac5f;
PyObject *const_str_plain_getComponentByPosition;
PyObject *const_str_digest_f797838e5677c79e8443b501ef63a41a;
PyObject *const_tuple_true_tuple;
PyObject *const_str_plain_setComponentByPosition;
PyObject *const_str_digest_27ed57b208946e6338d235baeab1c235;
PyObject *const_str_plain_setComponents;
PyObject *const_str_digest_74a85122ea6d44c5b5518c2c89c27768;
PyObject *const_str_plain_setDefaultComponents;
PyObject *const_str_digest_c8036242d389b1b583b160c94a9860f9;
PyObject *const_str_plain_getComponentType;
PyObject *const_str_digest_0799f1404ff839a6a8afa01b4d6c74b9;
PyObject *const_str_plain_verifySizeSpec;
PyObject *const_str_digest_3e959df39279298218f708728d4bf01d;
PyObject *const_str_plain_AbstractConstructedAsn1Item;
PyObject *const_str_digest_6b47abe1502036aca82c635d8f91f3b7;
PyObject *const_str_digest_ac51163f73391990bd5e100cd6b9c40a;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
PyObject *const_tuple_str_plain_self_str_plain_attr_tuple;
PyObject *const_tuple_str_plain_self_str_plain_kwargs_str_plain_readOnly_tuple;
PyObject *const_tuple_1888c2da44b3d91f6f6455f02ad7de9f_tuple;
PyObject *const_tuple_bf387821a1eeb4ed977b6288b4a081c6_tuple;
PyObject *const_tuple_b50308619ebcd999735117c6ea13d4f0_tuple;
PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple;
PyObject *const_tuple_str_plain_self_str_plain_myClone_str_plain_cloneValueFlag_tuple;
PyObject *const_tuple_08e3a2971e18702b20e2b5170677c38a_tuple;
PyObject *const_tuple_08b897ec18306ce776df8469e41ba54d_tuple;
PyObject *const_tuple_2e8089ba91480ad1fbb22697f6c2d202_tuple;
PyObject *const_tuple_str_plain_self_str_plain_idx_tuple;
PyObject *const_tuple_str_plain_name_str_plain_plug_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_increment_tuple;
PyObject *const_tuple_str_plain_values_str_plain_value_tuple;
PyObject *const_tuple_20526ca6d682a147261673593c4c2c71_tuple;
PyObject *const_tuple_str_plain_self_str_plain_args_str_plain_kw_str_plain_name_tuple;
PyObject *const_tuple_str_plain_name_tuple;
PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
PyObject *const_tuple_str_plain_self_str_plain_scope_tuple;
PyObject *const_tuple_5e81636998c1462d0b876406ed514f7f_tuple;
PyObject *const_tuple_a028772083041b8a4fb4b2f2dff24947_tuple;
PyObject *const_tuple_66e45333736850da46dcd548b220277b_tuple;
PyObject *const_tuple_abc43eba28c9f5bb5ae3ac6cd8ae6731_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[242];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pyasn1.type.base"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Asn1Item);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__typeCounter);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_tagSet);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_subtypeSpec);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__readOnly);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_PyAsn1Error);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_784da984eb22c9d21eeac473fe911429);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_prettyPrint);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_d7ffcbf8c581aa79fd1a6e603083769b);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_tagmap);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_TagMap);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_993e78b2909c3a130413926bf1e1b7fc);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_1bf805aa0ed33abb736eb92a430f3a11);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_isSuperTagSetOf);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_isSuperTypeOf);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_707b8f3b29a30c1b7d6c31442b24e956);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_noValue);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_effectiveTagSet);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_tagMap);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_isValue);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__instance);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_getPlug);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_30957f33f252f0de89086f74557ea638);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_int_type_list_type_dict_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_cls);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_skipMethods);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain____tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_endswith);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_callable);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain___new__);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_plug);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f2ceb00ecd45cd57aff3166c0dbf7e9);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_0ea995f27834b1376e270219420a70e3);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_4469790547d3189f6bf577bc7e488247);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_895e1eb82702aaa88873687bac2ae57b);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_Asn1Type);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_defaultValue);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_prettyIn);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_c164e1a704c146913b0fff1d8dc25c6a);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain__value);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_30bd7cdcf0da35bee29279a3edd78ce8);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_readOnly);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_representation);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_bcd1b2cd4be44f046a8a03bffb98945a);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_16_none);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_3501979af1b70861f5e9d6a0f04129bf);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_slice_int_neg_16_none_none);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_e500aa9724f7db5e366c4651e2a1174f);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_c0c3759da123e387798315e75d2fed70);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_68bc778b283de03054654d1c054726ef);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_e4f85a65d1f764faa5d97521b803e11c);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_implicitTag);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_tagImplicitly);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_pop);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_explicitTag_none_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_tagExplicitly);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_initializers);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_9f1aed26cd817db1dc177d91f0dfb283);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_prettyOut);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_63157320d44ca37a434ab51866da0845);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_componentType);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_sizeSpec);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain__moveSizeSpec);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f3e47c3a8c847d230643dcfceec9be1);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_components);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_912f25fd6aba67f848e283f306029958_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_cloneValueFlag);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain__cloneComponentValues);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_a72080dfab0326c34281f62539c49802);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_implicitTag_none_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_670fb5ce85bf4117ec044fc06488a941);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_pyasn1);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c8c58049edd248f8b1cb370445e702c);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_constraint_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_constraint);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tag_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_tag);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tagmap_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_list_1b471c5b1be76fede456fcb114a6c3cd_list);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ecce58f9742a3991bee3244156d0cb2);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_int_pos_18);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_getTypeId);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_d2ffbca1cfac700d8b376f75a1d09cd8);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f0b6c89013617f21d45794221f3853b);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_int_pos_28);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_TagSet);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConstraintsIntersection);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_typeId);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7397b06ee6871c5f1e8c503e66f01a9);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain___setattr__);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_bf5c112b4238b31e27e208baafe58e43);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain___str__);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_479af466ccf6c568166b0be40bb97d3e);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_b711a4dfa6c9e91369500776a246e70c);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_67cfcff118166bc2fd1130b14440f4fd);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_90a99d8ac8006e67cca2f9efb62f0186);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_true_true_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_isSameTypeWith);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_8917c152b0f7b058f95c511af9d3f57d);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_8af92183ab6cced5c7e537ab6024c743);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_isNoValue);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_3fd3b74c0c60339ddeba8fbe78b14094);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_28e92030f38ede8dc04137e8149156fc);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_getTagSet);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4bfdfb6b620afc0706808999fcc80dd);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_getEffectiveTagSet);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_56d87c8e82628a68f812ffc594c3b86e);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_getTagMap);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_e9515d68978008d1d8a08571c1e90c8e);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_getSubtypeSpec);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_0cb75a91d03754e279bf746a87669293);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_hasValue);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_562c034c364b6bc38db81d1c73ef0b75);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__readOnly_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_Asn1ItemBase);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoValue);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5012e5860ff8005843d3554f9591225);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_int_pos_167);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_set_d4df30f26710a79d80b33ce4792aeafc);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_2bcc3713f84ac1872285603998784447);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain___getattr__);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_afee2d7ad719eb343c22ebfdef2229d0);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_69e2554ddd05178c2e380adb452d03d2);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_SimpleAsn1Type);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2dc5bf74063cbcecaadef0d09435db0);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_int_pos_244);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_13e8b070de5860164d29de9ff1f8da29);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_21a29b971ad90d87bf918c4ca3615b3e);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain___eq__);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6141dfa210a6fce5b72ac8fa7f05244);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain___ne__);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_22b763c4459c5492df33f5752ba36398);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain___lt__);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_8d565a5a716f2628d3dc3ac8c7e4d8e1);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain___le__);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_74f22bfaee1d472f61ec90db4b1caf63);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain___gt__);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_b00ff013e887d89d69f3fb6bb6571c9a);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain___ge__);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_01bf47cd25063307b75d4a44774048bf);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain___bool__);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_5636dcefc3c18e1ea2f5406511c1648a);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain___hash__);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_db5a8b782c296a88c7c662e60e29f9b1);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_da26e09915bf4b7a6ee09d9c4704dbf0);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_clone);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_caa76983be6269b6306d29a53d8efaad);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_subtype);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8b942d8a9a7c75fe5855f55e0394142);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_8130ca846a6eebb70d968ff6b815c77f);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3243cb0900bd84d32a601d13b6e37e1);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_f30138e8a578a0813b1b0b4794aa0434);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_prettyPrintType);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_2961c9280852cf4249253049624efde5);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__value_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractSimpleAsn1Item);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConstructedAsn1Type);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_9a02d9698268e7ee0fbec1914af59c69);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_int_pos_477);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_strictConstraints);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_8037e9c3bf77694dd92ee116ed23db5c);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_38a65c5a064da0b8e779952dd5b9a257);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_3902df23ba424fa915d6f858bb0b971e);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_c177a0197b46badff79b847c4f69c6a1);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_006879b6eadb54790648c51d7439a4c7);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6af15069dead1af45c201089a5f3a9a);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e064f04759c5d264ee6414218df9295);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_e02ae3a28158189e89e5b6509c998a83);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_digest_7684a6b663f5bade1eab7395edb91cb2);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_702b314938d751deda54641e9fee897a);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_65a537976c9f497883af6e044ec36825);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_digest_87ed86ecf0bc5818b2e00fe6e937e5ff);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee75ed76cc525ed54a4b42a1cd2a02aa);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a5a9334a48532d42aa195840856ac5f);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_getComponentByPosition);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_f797838e5677c79e8443b501ef63a41a);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_plain_setComponentByPosition);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_27ed57b208946e6338d235baeab1c235);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_setComponents);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_digest_74a85122ea6d44c5b5518c2c89c27768);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_plain_setDefaultComponents);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_digest_c8036242d389b1b583b160c94a9860f9);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_plain_getComponentType);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_digest_0799f1404ff839a6a8afa01b4d6c74b9);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_plain_verifySizeSpec);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_digest_3e959df39279298218f708728d4bf01d);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractConstructedAsn1Item);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_digest_6b47abe1502036aca82c635d8f91f3b7);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac51163f73391990bd5e100cd6b9c40a);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_attr_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_kwargs_str_plain_readOnly_tuple);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_1888c2da44b3d91f6f6455f02ad7de9f_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_bf387821a1eeb4ed977b6288b4a081c6_tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_tuple_b50308619ebcd999735117c6ea13d4f0_tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_myClone_str_plain_cloneValueFlag_tuple);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_tuple_08e3a2971e18702b20e2b5170677c38a_tuple);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_tuple_08b897ec18306ce776df8469e41ba54d_tuple);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_2e8089ba91480ad1fbb22697f6c2d202_tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_idx_tuple);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_str_plain_plug_tuple);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_increment_tuple);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_values_str_plain_value_tuple);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_tuple_20526ca6d682a147261673593c4c2c71_tuple);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kw_str_plain_name_tuple);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_tuple);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_scope_tuple);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_tuple_5e81636998c1462d0b876406ed514f7f_tuple);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_tuple_a028772083041b8a4fb4b2f2dff24947_tuple);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_tuple_66e45333736850da46dcd548b220277b_tuple);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_tuple_abc43eba28c9f5bb5ae3ac6cd8ae6731_tuple);
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
void checkModuleConstants_pyasn1$type$base(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Asn1Item));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Asn1Item);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__typeCounter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__typeCounter);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_tagSet));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tagSet);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_subtypeSpec));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subtypeSpec);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__readOnly));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__readOnly);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_PyAsn1Error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PyAsn1Error);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_784da984eb22c9d21eeac473fe911429));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_784da984eb22c9d21eeac473fe911429);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_prettyPrint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prettyPrint);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_d7ffcbf8c581aa79fd1a6e603083769b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d7ffcbf8c581aa79fd1a6e603083769b);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_tagmap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tagmap);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_TagMap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TagMap);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_993e78b2909c3a130413926bf1e1b7fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_993e78b2909c3a130413926bf1e1b7fc);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_1bf805aa0ed33abb736eb92a430f3a11));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1bf805aa0ed33abb736eb92a430f3a11);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_isSuperTagSetOf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isSuperTagSetOf);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_isSuperTypeOf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isSuperTypeOf);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_707b8f3b29a30c1b7d6c31442b24e956));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_707b8f3b29a30c1b7d6c31442b24e956);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_noValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_noValue);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_effectiveTagSet));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_effectiveTagSet);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_tagMap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tagMap);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_isValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isValue);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__instance));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__instance);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_getPlug));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getPlug);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_30957f33f252f0de89086f74557ea638));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_30957f33f252f0de89086f74557ea638);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_int_type_list_type_dict_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_str_type_int_type_list_type_dict_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cls);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_skipMethods));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_skipMethods);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain____tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain____tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_endswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_endswith);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_callable);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain___new__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___new__);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_plug));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_plug);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f2ceb00ecd45cd57aff3166c0dbf7e9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8f2ceb00ecd45cd57aff3166c0dbf7e9);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_0ea995f27834b1376e270219420a70e3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0ea995f27834b1376e270219420a70e3);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_4469790547d3189f6bf577bc7e488247));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4469790547d3189f6bf577bc7e488247);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_895e1eb82702aaa88873687bac2ae57b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_895e1eb82702aaa88873687bac2ae57b);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_Asn1Type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Asn1Type);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_defaultValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_defaultValue);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_prettyIn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prettyIn);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_c164e1a704c146913b0fff1d8dc25c6a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c164e1a704c146913b0fff1d8dc25c6a);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain__value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__value);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_30bd7cdcf0da35bee29279a3edd78ce8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_30bd7cdcf0da35bee29279a3edd78ce8);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_readOnly));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_readOnly);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_representation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_representation);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_bcd1b2cd4be44f046a8a03bffb98945a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bcd1b2cd4be44f046a8a03bffb98945a);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_16_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_16_none);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_3501979af1b70861f5e9d6a0f04129bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3501979af1b70861f5e9d6a0f04129bf);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_slice_int_neg_16_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_neg_16_none_none);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_e500aa9724f7db5e366c4651e2a1174f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e500aa9724f7db5e366c4651e2a1174f);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_c0c3759da123e387798315e75d2fed70));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c0c3759da123e387798315e75d2fed70);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_68bc778b283de03054654d1c054726ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_68bc778b283de03054654d1c054726ef);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_e4f85a65d1f764faa5d97521b803e11c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e4f85a65d1f764faa5d97521b803e11c);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_implicitTag));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_implicitTag);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_tagImplicitly));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tagImplicitly);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_pop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pop);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_explicitTag_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_explicitTag_none_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_tagExplicitly));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tagExplicitly);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_initializers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_initializers);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_9f1aed26cd817db1dc177d91f0dfb283));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9f1aed26cd817db1dc177d91f0dfb283);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_prettyOut));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prettyOut);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_63157320d44ca37a434ab51866da0845));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_63157320d44ca37a434ab51866da0845);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_componentType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_componentType);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_sizeSpec));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sizeSpec);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain__moveSizeSpec));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__moveSizeSpec);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f3e47c3a8c847d230643dcfceec9be1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f3e47c3a8c847d230643dcfceec9be1);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_components));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_components);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_912f25fd6aba67f848e283f306029958_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_912f25fd6aba67f848e283f306029958_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_cloneValueFlag));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cloneValueFlag);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain__cloneComponentValues));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cloneComponentValues);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_a72080dfab0326c34281f62539c49802));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a72080dfab0326c34281f62539c49802);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_implicitTag_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_implicitTag_none_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_670fb5ce85bf4117ec044fc06488a941));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_670fb5ce85bf4117ec044fc06488a941);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_pyasn1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pyasn1);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_error_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c8c58049edd248f8b1cb370445e702c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c8c58049edd248f8b1cb370445e702c);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_constraint_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_constraint_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_constraint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_constraint);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tag_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_tag_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_tag));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tag);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tagmap_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_tagmap_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_list_1b471c5b1be76fede456fcb114a6c3cd_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_1b471c5b1be76fede456fcb114a6c3cd_list);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_object_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ecce58f9742a3991bee3244156d0cb2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2ecce58f9742a3991bee3244156d0cb2);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_int_pos_18));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_18);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_getTypeId));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getTypeId);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_d2ffbca1cfac700d8b376f75a1d09cd8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d2ffbca1cfac700d8b376f75a1d09cd8);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f0b6c89013617f21d45794221f3853b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f0b6c89013617f21d45794221f3853b);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_int_pos_28));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_28);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_TagSet));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TagSet);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConstraintsIntersection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConstraintsIntersection);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_typeId));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typeId);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7397b06ee6871c5f1e8c503e66f01a9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b7397b06ee6871c5f1e8c503e66f01a9);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain___setattr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___setattr__);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_bf5c112b4238b31e27e208baafe58e43));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bf5c112b4238b31e27e208baafe58e43);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain___str__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___str__);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_479af466ccf6c568166b0be40bb97d3e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_479af466ccf6c568166b0be40bb97d3e);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_b711a4dfa6c9e91369500776a246e70c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b711a4dfa6c9e91369500776a246e70c);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_67cfcff118166bc2fd1130b14440f4fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_67cfcff118166bc2fd1130b14440f4fd);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_90a99d8ac8006e67cca2f9efb62f0186));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_90a99d8ac8006e67cca2f9efb62f0186);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_true_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_true_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_isSameTypeWith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isSameTypeWith);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_8917c152b0f7b058f95c511af9d3f57d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8917c152b0f7b058f95c511af9d3f57d);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_8af92183ab6cced5c7e537ab6024c743));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8af92183ab6cced5c7e537ab6024c743);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_isNoValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isNoValue);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_3fd3b74c0c60339ddeba8fbe78b14094));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3fd3b74c0c60339ddeba8fbe78b14094);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_28e92030f38ede8dc04137e8149156fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_28e92030f38ede8dc04137e8149156fc);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_getTagSet));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getTagSet);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4bfdfb6b620afc0706808999fcc80dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4bfdfb6b620afc0706808999fcc80dd);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_getEffectiveTagSet));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getEffectiveTagSet);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_56d87c8e82628a68f812ffc594c3b86e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_56d87c8e82628a68f812ffc594c3b86e);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_getTagMap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getTagMap);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_e9515d68978008d1d8a08571c1e90c8e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e9515d68978008d1d8a08571c1e90c8e);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_getSubtypeSpec));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getSubtypeSpec);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_0cb75a91d03754e279bf746a87669293));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0cb75a91d03754e279bf746a87669293);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_hasValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hasValue);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_562c034c364b6bc38db81d1c73ef0b75));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_562c034c364b6bc38db81d1c73ef0b75);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__readOnly_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__readOnly_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_Asn1ItemBase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Asn1ItemBase);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoValue);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5012e5860ff8005843d3554f9591225));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5012e5860ff8005843d3554f9591225);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_int_pos_167));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_167);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_set_d4df30f26710a79d80b33ce4792aeafc));
CHECK_OBJECT_DEEP(mod_consts.const_set_d4df30f26710a79d80b33ce4792aeafc);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_2bcc3713f84ac1872285603998784447));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2bcc3713f84ac1872285603998784447);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain___getattr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getattr__);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_afee2d7ad719eb343c22ebfdef2229d0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_afee2d7ad719eb343c22ebfdef2229d0);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_69e2554ddd05178c2e380adb452d03d2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_69e2554ddd05178c2e380adb452d03d2);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_SimpleAsn1Type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SimpleAsn1Type);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2dc5bf74063cbcecaadef0d09435db0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f2dc5bf74063cbcecaadef0d09435db0);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_int_pos_244));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_244);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_13e8b070de5860164d29de9ff1f8da29));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_13e8b070de5860164d29de9ff1f8da29);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_21a29b971ad90d87bf918c4ca3615b3e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_21a29b971ad90d87bf918c4ca3615b3e);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain___eq__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___eq__);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6141dfa210a6fce5b72ac8fa7f05244));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6141dfa210a6fce5b72ac8fa7f05244);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain___ne__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ne__);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_22b763c4459c5492df33f5752ba36398));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_22b763c4459c5492df33f5752ba36398);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain___lt__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___lt__);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_8d565a5a716f2628d3dc3ac8c7e4d8e1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8d565a5a716f2628d3dc3ac8c7e4d8e1);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain___le__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___le__);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_74f22bfaee1d472f61ec90db4b1caf63));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_74f22bfaee1d472f61ec90db4b1caf63);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain___gt__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___gt__);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_b00ff013e887d89d69f3fb6bb6571c9a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b00ff013e887d89d69f3fb6bb6571c9a);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain___ge__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ge__);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_01bf47cd25063307b75d4a44774048bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_01bf47cd25063307b75d4a44774048bf);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain___bool__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___bool__);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_5636dcefc3c18e1ea2f5406511c1648a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5636dcefc3c18e1ea2f5406511c1648a);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain___hash__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___hash__);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_db5a8b782c296a88c7c662e60e29f9b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db5a8b782c296a88c7c662e60e29f9b1);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_da26e09915bf4b7a6ee09d9c4704dbf0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da26e09915bf4b7a6ee09d9c4704dbf0);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_clone));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clone);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_caa76983be6269b6306d29a53d8efaad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_caa76983be6269b6306d29a53d8efaad);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_subtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subtype);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8b942d8a9a7c75fe5855f55e0394142));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8b942d8a9a7c75fe5855f55e0394142);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_8130ca846a6eebb70d968ff6b815c77f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8130ca846a6eebb70d968ff6b815c77f);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3243cb0900bd84d32a601d13b6e37e1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d3243cb0900bd84d32a601d13b6e37e1);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_f30138e8a578a0813b1b0b4794aa0434));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f30138e8a578a0813b1b0b4794aa0434);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_prettyPrintType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prettyPrintType);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_2961c9280852cf4249253049624efde5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2961c9280852cf4249253049624efde5);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__value_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractSimpleAsn1Item));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AbstractSimpleAsn1Item);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConstructedAsn1Type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConstructedAsn1Type);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_9a02d9698268e7ee0fbec1914af59c69));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9a02d9698268e7ee0fbec1914af59c69);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_int_pos_477));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_477);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_strictConstraints));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strictConstraints);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_8037e9c3bf77694dd92ee116ed23db5c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8037e9c3bf77694dd92ee116ed23db5c);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_38a65c5a064da0b8e779952dd5b9a257));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_38a65c5a064da0b8e779952dd5b9a257);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_3902df23ba424fa915d6f858bb0b971e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3902df23ba424fa915d6f858bb0b971e);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_c177a0197b46badff79b847c4f69c6a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c177a0197b46badff79b847c4f69c6a1);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_006879b6eadb54790648c51d7439a4c7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_006879b6eadb54790648c51d7439a4c7);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6af15069dead1af45c201089a5f3a9a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6af15069dead1af45c201089a5f3a9a);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e064f04759c5d264ee6414218df9295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4e064f04759c5d264ee6414218df9295);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_e02ae3a28158189e89e5b6509c998a83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e02ae3a28158189e89e5b6509c998a83);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_digest_7684a6b663f5bade1eab7395edb91cb2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7684a6b663f5bade1eab7395edb91cb2);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_702b314938d751deda54641e9fee897a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_702b314938d751deda54641e9fee897a);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_65a537976c9f497883af6e044ec36825));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_65a537976c9f497883af6e044ec36825);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_digest_87ed86ecf0bc5818b2e00fe6e937e5ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_87ed86ecf0bc5818b2e00fe6e937e5ff);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee75ed76cc525ed54a4b42a1cd2a02aa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee75ed76cc525ed54a4b42a1cd2a02aa);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a5a9334a48532d42aa195840856ac5f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2a5a9334a48532d42aa195840856ac5f);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_getComponentByPosition));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getComponentByPosition);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_f797838e5677c79e8443b501ef63a41a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f797838e5677c79e8443b501ef63a41a);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_plain_setComponentByPosition));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setComponentByPosition);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_27ed57b208946e6338d235baeab1c235));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_27ed57b208946e6338d235baeab1c235);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_setComponents));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setComponents);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_digest_74a85122ea6d44c5b5518c2c89c27768));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_74a85122ea6d44c5b5518c2c89c27768);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_plain_setDefaultComponents));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setDefaultComponents);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_digest_c8036242d389b1b583b160c94a9860f9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c8036242d389b1b583b160c94a9860f9);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_plain_getComponentType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getComponentType);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_digest_0799f1404ff839a6a8afa01b4d6c74b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0799f1404ff839a6a8afa01b4d6c74b9);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_plain_verifySizeSpec));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_verifySizeSpec);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_digest_3e959df39279298218f708728d4bf01d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3e959df39279298218f708728d4bf01d);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractConstructedAsn1Item));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AbstractConstructedAsn1Item);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_digest_6b47abe1502036aca82c635d8f91f3b7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6b47abe1502036aca82c635d8f91f3b7);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac51163f73391990bd5e100cd6b9c40a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac51163f73391990bd5e100cd6b9c40a);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_attr_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_attr_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_kwargs_str_plain_readOnly_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_kwargs_str_plain_readOnly_tuple);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_1888c2da44b3d91f6f6455f02ad7de9f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1888c2da44b3d91f6f6455f02ad7de9f_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_bf387821a1eeb4ed977b6288b4a081c6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bf387821a1eeb4ed977b6288b4a081c6_tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_tuple_b50308619ebcd999735117c6ea13d4f0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b50308619ebcd999735117c6ea13d4f0_tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_myClone_str_plain_cloneValueFlag_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_myClone_str_plain_cloneValueFlag_tuple);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_tuple_08e3a2971e18702b20e2b5170677c38a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_08e3a2971e18702b20e2b5170677c38a_tuple);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_tuple_08b897ec18306ce776df8469e41ba54d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_08b897ec18306ce776df8469e41ba54d_tuple);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_2e8089ba91480ad1fbb22697f6c2d202_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2e8089ba91480ad1fbb22697f6c2d202_tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_idx_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_idx_tuple);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_str_plain_plug_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_name_str_plain_plug_tuple);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_increment_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_increment_tuple);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_values_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_values_str_plain_value_tuple);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_tuple_20526ca6d682a147261673593c4c2c71_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_20526ca6d682a147261673593c4c2c71_tuple);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kw_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kw_str_plain_name_tuple);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_name_tuple);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_scope_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_scope_tuple);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_tuple_5e81636998c1462d0b876406ed514f7f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5e81636998c1462d0b876406ed514f7f_tuple);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_tuple_a028772083041b8a4fb4b2f2dff24947_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a028772083041b8a4fb4b2f2dff24947_tuple);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_tuple_66e45333736850da46dcd548b220277b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_66e45333736850da46dcd548b220277b_tuple);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_tuple_abc43eba28c9f5bb5ae3ac6cd8ae6731_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_abc43eba28c9f5bb5ae3ac6cd8ae6731_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 11
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
static PyObject *module_var_accessor_pyasn1$type$base$Asn1Item(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$type$base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$type$base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_Asn1Item);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$type$base->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Asn1Item);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Asn1Item, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Asn1Item);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Asn1Item, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_Asn1Item);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_Asn1Item);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Asn1Item);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$type$base$Asn1Type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$type$base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$type$base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_Asn1Type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$type$base->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Asn1Type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Asn1Type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Asn1Type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Asn1Type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_Asn1Type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_Asn1Type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Asn1Type);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$type$base$ConstructedAsn1Type(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$type$base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$type$base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_ConstructedAsn1Type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$type$base->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConstructedAsn1Type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConstructedAsn1Type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConstructedAsn1Type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConstructedAsn1Type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_ConstructedAsn1Type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_ConstructedAsn1Type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConstructedAsn1Type);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$type$base$NoValue(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$type$base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$type$base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_NoValue);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$type$base->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NoValue);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NoValue, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NoValue);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NoValue, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_NoValue);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_NoValue);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NoValue);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$type$base$SimpleAsn1Type(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$type$base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$type$base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_SimpleAsn1Type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$type$base->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SimpleAsn1Type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SimpleAsn1Type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SimpleAsn1Type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SimpleAsn1Type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_SimpleAsn1Type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_SimpleAsn1Type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SimpleAsn1Type);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$type$base$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$type$base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$type$base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$type$base->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$type$base$constraint(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$type$base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$type$base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_constraint);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$type$base->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_constraint);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_constraint, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_constraint);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_constraint, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_constraint);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_constraint);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_constraint);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$type$base$error(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$type$base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$type$base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_error);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$type$base->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_error);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_error, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_error);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_error, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_error);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_error);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_error);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$type$base$noValue(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$type$base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$type$base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_noValue);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$type$base->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_noValue);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_noValue, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_noValue);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_noValue, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_noValue);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_noValue);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_noValue);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$type$base$tag(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$type$base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$type$base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_tag);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$type$base->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tag);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tag, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tag);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tag, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_tag);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_tag);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_tag);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$type$base$tagmap(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$type$base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$type$base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_tagmap);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$type$base->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tagmap);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tagmap, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tagmap);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tagmap, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_tagmap);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_tagmap);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_tagmap);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_4ade62603eb1e11a68b75b2bab96371e;
static PyCodeObject *code_objects_4308c942c1bbd0f80f67f0934557ffbf;
static PyCodeObject *code_objects_de54629965e043decfd4746e792f5ca9;
static PyCodeObject *code_objects_a614c72334a6b82772a2c04a19c097ed;
static PyCodeObject *code_objects_ebbe4d3fc37c94ab2ff79be693f2d2e9;
static PyCodeObject *code_objects_54045af1db8beaaf164b4a237e295eb5;
static PyCodeObject *code_objects_25c56f0f250f49683cb8b523eebab8f6;
static PyCodeObject *code_objects_7d86c8954d9df28f36913f5be47ee01b;
static PyCodeObject *code_objects_16297c4de5de4f7a4eb437426747fa83;
static PyCodeObject *code_objects_74a07b5f5c88ff3e7064b14ca0e8c741;
static PyCodeObject *code_objects_57d459dbaa8b19d6d3793955d65f5558;
static PyCodeObject *code_objects_cda026c2afbd44a824f366c6af996a39;
static PyCodeObject *code_objects_127508891550a3695c53768ff986668b;
static PyCodeObject *code_objects_60c63bd478cf1be8d7f0b1c1082f5e52;
static PyCodeObject *code_objects_380700bb51f154366374055813b12d46;
static PyCodeObject *code_objects_cfd002f2896327bff06991e0459489c2;
static PyCodeObject *code_objects_2dbde14c451f72ed5fec539f6aeb5c55;
static PyCodeObject *code_objects_c6927230c1e0eb65ae30c4e8d863b312;
static PyCodeObject *code_objects_bc79ada1fcaa178fa68a04cd4d95a450;
static PyCodeObject *code_objects_26e8fe3c31978af94f59302abd92a924;
static PyCodeObject *code_objects_4580e974a8473ec27bdf1aacec06ff48;
static PyCodeObject *code_objects_bfbb874ddf59b6bd2fdb2aff12b462aa;
static PyCodeObject *code_objects_bc92b65d9d282b893b288aa4e01fc044;
static PyCodeObject *code_objects_587f72cdc075e73a6b1e3e0b8b4c11e9;
static PyCodeObject *code_objects_4fc9c2738f1e852ff07e22b0fee16438;
static PyCodeObject *code_objects_07dd8ae02177c60661154f9d877c8f98;
static PyCodeObject *code_objects_b17ec7eae80a5adcd88f5fc71b6112f6;
static PyCodeObject *code_objects_5b1691298c999fd62a313017917df736;
static PyCodeObject *code_objects_3706d24a19904e115826fc8fbeb3909c;
static PyCodeObject *code_objects_25855176615b9143131d5d2f7c76f443;
static PyCodeObject *code_objects_d975ef6256c1d4d85fd000a2dc39d820;
static PyCodeObject *code_objects_aedf29feee4723c4f9e35551c226390a;
static PyCodeObject *code_objects_2f2f86f0e2efe2b04a84418a77a83875;
static PyCodeObject *code_objects_7ddb0fb68125f19bff641e8b89386b9a;
static PyCodeObject *code_objects_5b0c91f5a776e2619e383a32f0a0b71e;
static PyCodeObject *code_objects_323b81b15009f45d670ccd98bf10fe23;
static PyCodeObject *code_objects_aac742308f93edb7c409eb46b2d16738;
static PyCodeObject *code_objects_d52080ceef24178c6c2666d4aaa30a6d;
static PyCodeObject *code_objects_dae908074619fd61a818035777478d47;
static PyCodeObject *code_objects_2b3f5943605b53a6068aec19f1078143;
static PyCodeObject *code_objects_76e325bcf793c63e7da104c1c7f8f3d5;
static PyCodeObject *code_objects_1bef87dc94f6bb6eb0962e12c865df4d;
static PyCodeObject *code_objects_7f6f266626fb56a55c73133d724e96ab;
static PyCodeObject *code_objects_a93825bc9f69cd37a78c30f491281ea3;
static PyCodeObject *code_objects_65de7d0f85363113f62d80a923a1dc28;
static PyCodeObject *code_objects_613680add9ae4dc93fcceea7c99e0237;
static PyCodeObject *code_objects_cc066492b352784f7cad50302798d9ee;
static PyCodeObject *code_objects_cbfe98247f117abecb07c53d2dac8bcc;
static PyCodeObject *code_objects_9f01e962f3fc25c3c1e1e67ca839adb3;
static PyCodeObject *code_objects_44f78e75f8d3d36006d4086b4e6bd14c;
static PyCodeObject *code_objects_5100151c054e75a9a4455b53a555d974;
static PyCodeObject *code_objects_d4e95d41bd94b13dc4bd80d37979326f;
static PyCodeObject *code_objects_de7b2e4eaf8e8324e5fce58aabcb59a4;
static PyCodeObject *code_objects_297fcaa8fee1bddc48dbc53efe1aa801;
static PyCodeObject *code_objects_96cd4874911cf4013c9e794bd02fe2f3;
static PyCodeObject *code_objects_2445b67d392d9956e489e1126492e764;
static PyCodeObject *code_objects_8f9d2ff42336af0ff368a93ebc827425;
static PyCodeObject *code_objects_c2827e864228e9e810b7fd32b70ec430;
static PyCodeObject *code_objects_e97f48a133ab4df3450617b67c3dbadd;
static PyCodeObject *code_objects_6eead527713938223f3efc0803cf7d29;
static PyCodeObject *code_objects_c4351365c7c95eed4d994d1d5e677a67;
static PyCodeObject *code_objects_b3322e4d946c76dab061f29eea36395d;
static PyCodeObject *code_objects_a46b4c85caa26307a1a902ac7d0b29ef;
static PyCodeObject *code_objects_8d1e7538b330e9d0f538b6b4b91b1d5a;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_6b47abe1502036aca82c635d8f91f3b7); CHECK_OBJECT(module_filename_obj);
code_objects_4ade62603eb1e11a68b75b2bab96371e = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_ac51163f73391990bd5e100cd6b9c40a, mod_consts.const_str_digest_ac51163f73391990bd5e100cd6b9c40a, NULL, NULL, 0, 0, 0);
code_objects_4308c942c1bbd0f80f67f0934557ffbf = MAKE_CODE_OBJECT(module_filename_obj, 18, 0, mod_consts.const_str_plain_Asn1Item, mod_consts.const_str_plain_Asn1Item, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_de54629965e043decfd4746e792f5ca9 = MAKE_CODE_OBJECT(module_filename_obj, 28, 0, mod_consts.const_str_plain_Asn1Type, mod_consts.const_str_plain_Asn1Type, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a614c72334a6b82772a2c04a19c097ed = MAKE_CODE_OBJECT(module_filename_obj, 477, 0, mod_consts.const_str_plain_ConstructedAsn1Type, mod_consts.const_str_plain_ConstructedAsn1Type, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ebbe4d3fc37c94ab2ff79be693f2d2e9 = MAKE_CODE_OBJECT(module_filename_obj, 167, 0, mod_consts.const_str_plain_NoValue, mod_consts.const_str_plain_NoValue, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_54045af1db8beaaf164b4a237e295eb5 = MAKE_CODE_OBJECT(module_filename_obj, 244, 0, mod_consts.const_str_plain_SimpleAsn1Type, mod_consts.const_str_plain_SimpleAsn1Type, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_25c56f0f250f49683cb8b523eebab8f6 = MAKE_CODE_OBJECT(module_filename_obj, 563, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___bool__, mod_consts.const_str_digest_702b314938d751deda54641e9fee897a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7d86c8954d9df28f36913f5be47ee01b = MAKE_CODE_OBJECT(module_filename_obj, 311, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___bool__, mod_consts.const_str_digest_5636dcefc3c18e1ea2f5406511c1648a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_16297c4de5de4f7a4eb437426747fa83 = MAKE_CODE_OBJECT(module_filename_obj, 545, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___eq__, mod_consts.const_str_digest_c177a0197b46badff79b847c4f69c6a1, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_74a07b5f5c88ff3e7064b14ca0e8c741 = MAKE_CODE_OBJECT(module_filename_obj, 291, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___eq__, mod_consts.const_str_digest_b6141dfa210a6fce5b72ac8fa7f05244, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_57d459dbaa8b19d6d3793955d65f5558 = MAKE_CODE_OBJECT(module_filename_obj, 560, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___ge__, mod_consts.const_str_digest_7684a6b663f5bade1eab7395edb91cb2, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_cda026c2afbd44a824f366c6af996a39 = MAKE_CODE_OBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___ge__, mod_consts.const_str_digest_01bf47cd25063307b75d4a44774048bf, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_127508891550a3695c53768ff986668b = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getattr__, mod_consts.const_str_digest_afee2d7ad719eb343c22ebfdef2229d0, mod_consts.const_tuple_str_plain_self_str_plain_attr_tuple, NULL, 2, 0, 0);
code_objects_60c63bd478cf1be8d7f0b1c1082f5e52 = MAKE_CODE_OBJECT(module_filename_obj, 557, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___gt__, mod_consts.const_str_digest_e02ae3a28158189e89e5b6509c998a83, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_380700bb51f154366374055813b12d46 = MAKE_CODE_OBJECT(module_filename_obj, 305, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___gt__, mod_consts.const_str_digest_b00ff013e887d89d69f3fb6bb6571c9a, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_cfd002f2896327bff06991e0459489c2 = MAKE_CODE_OBJECT(module_filename_obj, 314, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___hash__, mod_consts.const_str_digest_db5a8b782c296a88c7c662e60e29f9b1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2dbde14c451f72ed5fec539f6aeb5c55 = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, const_str_plain___init__, mod_consts.const_str_digest_b7397b06ee6871c5f1e8c503e66f01a9, mod_consts.const_tuple_str_plain_self_str_plain_kwargs_str_plain_readOnly_tuple, NULL, 1, 0, 0);
code_objects_c6927230c1e0eb65ae30c4e8d863b312 = MAKE_CODE_OBJECT(module_filename_obj, 501, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, const_str_plain___init__, mod_consts.const_str_digest_8037e9c3bf77694dd92ee116ed23db5c, mod_consts.const_tuple_str_plain_self_str_plain_kwargs_str_plain_readOnly_tuple, NULL, 1, 0, 0);
code_objects_bc79ada1fcaa178fa68a04cd4d95a450 = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, const_str_plain___init__, mod_consts.const_str_digest_13e8b070de5860164d29de9ff1f8da29, mod_consts.const_tuple_1888c2da44b3d91f6f6455f02ad7de9f_tuple, NULL, 2, 0, 0);
code_objects_26e8fe3c31978af94f59302abd92a924 = MAKE_CODE_OBJECT(module_filename_obj, 554, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___le__, mod_consts.const_str_digest_4e064f04759c5d264ee6414218df9295, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_4580e974a8473ec27bdf1aacec06ff48 = MAKE_CODE_OBJECT(module_filename_obj, 302, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___le__, mod_consts.const_str_digest_74f22bfaee1d472f61ec90db4b1caf63, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_bfbb874ddf59b6bd2fdb2aff12b462aa = MAKE_CODE_OBJECT(module_filename_obj, 551, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___lt__, mod_consts.const_str_digest_b6af15069dead1af45c201089a5f3a9a, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_bc92b65d9d282b893b288aa4e01fc044 = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___lt__, mod_consts.const_str_digest_8d565a5a716f2628d3dc3ac8c7e4d8e1, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_587f72cdc075e73a6b1e3e0b8b4c11e9 = MAKE_CODE_OBJECT(module_filename_obj, 548, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___ne__, mod_consts.const_str_digest_006879b6eadb54790648c51d7439a4c7, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_4fc9c2738f1e852ff07e22b0fee16438 = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___ne__, mod_consts.const_str_digest_22b763c4459c5492df33f5752ba36398, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_07dd8ae02177c60661154f9d877c8f98 = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___new__, mod_consts.const_str_digest_2bcc3713f84ac1872285603998784447, mod_consts.const_tuple_bf387821a1eeb4ed977b6288b4a081c6_tuple, NULL, 1, 0, 0);
code_objects_b17ec7eae80a5adcd88f5fc71b6112f6 = MAKE_CODE_OBJECT(module_filename_obj, 530, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_3902df23ba424fa915d6f858bb0b971e, mod_consts.const_tuple_b50308619ebcd999735117c6ea13d4f0_tuple, NULL, 1, 0, 0);
code_objects_5b1691298c999fd62a313017917df736 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_69e2554ddd05178c2e380adb452d03d2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3706d24a19904e115826fc8fbeb3909c = MAKE_CODE_OBJECT(module_filename_obj, 275, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_21a29b971ad90d87bf918c4ca3615b3e, mod_consts.const_tuple_b50308619ebcd999735117c6ea13d4f0_tuple, NULL, 1, 0, 0);
code_objects_25855176615b9143131d5d2f7c76f443 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___setattr__, mod_consts.const_str_digest_bf5c112b4238b31e27e208baafe58e43, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple, NULL, 3, 0, 0);
code_objects_d975ef6256c1d4d85fd000a2dc39d820 = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_479af466ccf6c568166b0be40bb97d3e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_aedf29feee4723c4f9e35551c226390a = MAKE_CODE_OBJECT(module_filename_obj, 570, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__cloneComponentValues, mod_consts.const_str_digest_87ed86ecf0bc5818b2e00fe6e937e5ff, mod_consts.const_tuple_str_plain_self_str_plain_myClone_str_plain_cloneValueFlag_tuple, NULL, 3, 0, 0);
code_objects_2f2f86f0e2efe2b04a84418a77a83875 = MAKE_CODE_OBJECT(module_filename_obj, 515, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain__moveSizeSpec, mod_consts.const_str_digest_38a65c5a064da0b8e779952dd5b9a257, mod_consts.const_tuple_08e3a2971e18702b20e2b5170677c38a_tuple, NULL, 1, 0, 0);
code_objects_7ddb0fb68125f19bff641e8b89386b9a = MAKE_CODE_OBJECT(module_filename_obj, 573, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_clone, mod_consts.const_str_digest_ee75ed76cc525ed54a4b42a1cd2a02aa, mod_consts.const_tuple_08b897ec18306ce776df8469e41ba54d_tuple, NULL, 1, 0, 0);
code_objects_5b0c91f5a776e2619e383a32f0a0b71e = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_clone, mod_consts.const_str_digest_caa76983be6269b6306d29a53d8efaad, mod_consts.const_tuple_2e8089ba91480ad1fbb22697f6c2d202_tuple, NULL, 2, 0, 0);
code_objects_323b81b15009f45d670ccd98bf10fe23 = MAKE_CODE_OBJECT(module_filename_obj, 567, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_components, mod_consts.const_str_digest_65a537976c9f497883af6e044ec36825, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_aac742308f93edb7c409eb46b2d16738 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_effectiveTagSet, mod_consts.const_str_digest_67cfcff118166bc2fd1130b14440f4fd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d52080ceef24178c6c2666d4aaa30a6d = MAKE_CODE_OBJECT(module_filename_obj, 672, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getComponentByPosition, mod_consts.const_str_digest_f797838e5677c79e8443b501ef63a41a, mod_consts.const_tuple_str_plain_self_str_plain_idx_tuple, NULL, 2, 0, 0);
code_objects_dae908074619fd61a818035777478d47 = MAKE_CODE_OBJECT(module_filename_obj, 690, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getComponentType, mod_consts.const_str_digest_0799f1404ff839a6a8afa01b4d6c74b9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2b3f5943605b53a6068aec19f1078143 = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getEffectiveTagSet, mod_consts.const_str_digest_56d87c8e82628a68f812ffc594c3b86e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_76e325bcf793c63e7da104c1c7f8f3d5 = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getPlug, mod_consts.const_str_digest_30957f33f252f0de89086f74557ea638, mod_consts.const_tuple_str_plain_name_str_plain_plug_tuple, NULL, 1, 0, 0);
code_objects_1bef87dc94f6bb6eb0962e12c865df4d = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getSubtypeSpec, mod_consts.const_str_digest_0cb75a91d03754e279bf746a87669293, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7f6f266626fb56a55c73133d724e96ab = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getTagMap, mod_consts.const_str_digest_e9515d68978008d1d8a08571c1e90c8e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a93825bc9f69cd37a78c30f491281ea3 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getTagSet, mod_consts.const_str_digest_c4bfdfb6b620afc0706808999fcc80dd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_65de7d0f85363113f62d80a923a1dc28 = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getTypeId, mod_consts.const_str_digest_d2ffbca1cfac700d8b376f75a1d09cd8, mod_consts.const_tuple_str_plain_cls_str_plain_increment_tuple, NULL, 2, 0, 0);
code_objects_613680add9ae4dc93fcceea7c99e0237 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hasValue, mod_consts.const_str_digest_562c034c364b6bc38db81d1c73ef0b75, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_cc066492b352784f7cad50302798d9ee = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts.const_str_plain_isNoValue, mod_consts.const_str_digest_3fd3b74c0c60339ddeba8fbe78b14094, mod_consts.const_tuple_str_plain_values_str_plain_value_tuple, NULL, 0, 0, 0);
code_objects_cbfe98247f117abecb07c53d2dac8bcc = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_isSameTypeWith, mod_consts.const_str_digest_8917c152b0f7b058f95c511af9d3f57d, mod_consts.const_tuple_20526ca6d682a147261673593c4c2c71_tuple, NULL, 4, 0, 0);
code_objects_9f01e962f3fc25c3c1e1e67ca839adb3 = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_isSuperTypeOf, mod_consts.const_str_digest_8af92183ab6cced5c7e537ab6024c743, mod_consts.const_tuple_20526ca6d682a147261673593c4c2c71_tuple, NULL, 4, 0, 0);
code_objects_44f78e75f8d3d36006d4086b4e6bd14c = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_isValue, mod_consts.const_str_digest_da26e09915bf4b7a6ee09d9c4704dbf0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5100151c054e75a9a4455b53a555d974 = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts.const_str_plain_plug, mod_consts.const_str_digest_8f2ceb00ecd45cd57aff3166c0dbf7e9, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kw_str_plain_name_tuple, mod_consts.const_tuple_str_plain_name_tuple, 1, 0, 0);
code_objects_d4e95d41bd94b13dc4bd80d37979326f = MAKE_CODE_OBJECT(module_filename_obj, 442, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_prettyIn, mod_consts.const_str_digest_8130ca846a6eebb70d968ff6b815c77f, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_de7b2e4eaf8e8324e5fce58aabcb59a4 = MAKE_CODE_OBJECT(module_filename_obj, 445, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_prettyOut, mod_consts.const_str_digest_d3243cb0900bd84d32a601d13b6e37e1, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_297fcaa8fee1bddc48dbc53efe1aa801 = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_prettyPrint, mod_consts.const_str_digest_28e92030f38ede8dc04137e8149156fc, mod_consts.const_tuple_str_plain_self_str_plain_scope_tuple, NULL, 2, 0, 0);
code_objects_96cd4874911cf4013c9e794bd02fe2f3 = MAKE_CODE_OBJECT(module_filename_obj, 448, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_prettyPrint, mod_consts.const_str_digest_f30138e8a578a0813b1b0b4794aa0434, mod_consts.const_tuple_str_plain_self_str_plain_scope_tuple, NULL, 2, 0, 0);
code_objects_2445b67d392d9956e489e1126492e764 = MAKE_CODE_OBJECT(module_filename_obj, 451, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_prettyPrintType, mod_consts.const_str_digest_2961c9280852cf4249253049624efde5, mod_consts.const_tuple_str_plain_self_str_plain_scope_tuple, NULL, 2, 0, 0);
code_objects_8f9d2ff42336af0ff368a93ebc827425 = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_readOnly, mod_consts.const_str_digest_b711a4dfa6c9e91369500776a246e70c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c2827e864228e9e810b7fd32b70ec430 = MAKE_CODE_OBJECT(module_filename_obj, 675, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_setComponentByPosition, mod_consts.const_str_digest_27ed57b208946e6338d235baeab1c235, mod_consts.const_tuple_5e81636998c1462d0b876406ed514f7f_tuple, NULL, 4, 0, 0);
code_objects_e97f48a133ab4df3450617b67c3dbadd = MAKE_CODE_OBJECT(module_filename_obj, 678, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts.const_str_plain_setComponents, mod_consts.const_str_digest_74a85122ea6d44c5b5518c2c89c27768, mod_consts.const_tuple_a028772083041b8a4fb4b2f2dff24947_tuple, NULL, 1, 0, 0);
code_objects_6eead527713938223f3efc0803cf7d29 = MAKE_CODE_OBJECT(module_filename_obj, 687, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_setDefaultComponents, mod_consts.const_str_digest_c8036242d389b1b583b160c94a9860f9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c4351365c7c95eed4d994d1d5e677a67 = MAKE_CODE_OBJECT(module_filename_obj, 608, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_subtype, mod_consts.const_str_digest_2a5a9334a48532d42aa195840856ac5f, mod_consts.const_tuple_66e45333736850da46dcd548b220277b_tuple, NULL, 1, 0, 0);
code_objects_b3322e4d946c76dab061f29eea36395d = MAKE_CODE_OBJECT(module_filename_obj, 374, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_subtype, mod_consts.const_str_digest_b8b942d8a9a7c75fe5855f55e0394142, mod_consts.const_tuple_abc43eba28c9f5bb5ae3ac6cd8ae6731_tuple, NULL, 2, 0, 0);
code_objects_a46b4c85caa26307a1a902ac7d0b29ef = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_tagMap, mod_consts.const_str_digest_90a99d8ac8006e67cca2f9efb62f0186, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8d1e7538b330e9d0f538b6b4b91b1d5a = MAKE_CODE_OBJECT(module_filename_obj, 694, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_verifySizeSpec, mod_consts.const_str_digest_3e959df39279298218f708728d4bf01d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__10_isNoValue(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__11_prettyPrint(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__12_getTagSet(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__13_getEffectiveTagSet(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__14_getTagMap(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__15_getSubtypeSpec(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__16_hasValue(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__17___new__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__18___getattr__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__19___repr__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__1_getTypeId(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__20___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__21___repr__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__22___eq__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__23___ne__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__24___lt__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__25___le__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__26___gt__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__27___ge__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__28___bool__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__29___hash__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__2___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__30_isValue(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__31_clone(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__32_subtype(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__33_prettyIn(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__34_prettyOut(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__35_prettyPrint(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__36_prettyPrintType(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__37___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__38__moveSizeSpec(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__39___repr__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__3___setattr__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__40___eq__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__41___ne__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__42___lt__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__43___le__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__44___gt__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__45___ge__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__46___bool__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__47_components(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__48__cloneComponentValues(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__49_clone(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__4___str__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__50_subtype(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__51_getComponentByPosition(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__52_setComponentByPosition(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__53_setComponents(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__54_setDefaultComponents(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__55_getComponentType(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__56_verifySizeSpec(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__5_readOnly(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__6_effectiveTagSet(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__7_tagMap(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__8_isSameTypeWith(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__9_isSuperTypeOf(PyThreadState *tstate, PyObject *defaults);


// The module function definitions.
static PyObject *impl_pyasn1$type$base$$$function__1_getTypeId(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_increment = python_pars[1];
PyObject *tmp_inplace_assign_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__1_getTypeId;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__1_getTypeId = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__1_getTypeId)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__1_getTypeId);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__1_getTypeId == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__1_getTypeId = MAKE_FUNCTION_FRAME(tstate, code_objects_65de7d0f85363113f62d80a923a1dc28, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__1_getTypeId->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__1_getTypeId = cache_frame_frame_pyasn1$type$base$$$function__1_getTypeId;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__1_getTypeId);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__1_getTypeId) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_pyasn1$type$base$Asn1Item(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Asn1Item);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__typeCounter);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_inplace_assign_1__value == NULL);
tmp_inplace_assign_1__value = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_increment);
tmp_iadd_expr_right_1 = par_increment;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = tmp_iadd_expr_left_1;
tmp_inplace_assign_1__value = tmp_assign_source_2;

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_assattr_value_1 = tmp_inplace_assign_1__value;
tmp_assattr_target_1 = module_var_accessor_pyasn1$type$base$Asn1Item(tstate);
if (unlikely(tmp_assattr_target_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Asn1Item);
}

if (tmp_assattr_target_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__typeCounter, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "oo";
    goto try_except_handler_2;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__1_getTypeId, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__1_getTypeId, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_increment);
tmp_assattr_value_2 = par_increment;
tmp_assattr_target_2 = module_var_accessor_pyasn1$type$base$Asn1Item(tstate);
if (unlikely(tmp_assattr_target_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Asn1Item);
}

if (tmp_assattr_target_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__typeCounter, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "oo";
    goto try_except_handler_3;
}
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 21;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pyasn1$type$base$$$function__1_getTypeId->m_frame)) {
        frame_frame_pyasn1$type$base$$$function__1_getTypeId->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_3;
branch_end_1:;
goto try_end_3;
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
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
{
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_pyasn1$type$base$Asn1Item(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Asn1Item);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__typeCounter);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__1_getTypeId, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__1_getTypeId->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__1_getTypeId, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__1_getTypeId,
    type_description_1,
    par_cls,
    par_increment
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__1_getTypeId == cache_frame_frame_pyasn1$type$base$$$function__1_getTypeId) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__1_getTypeId);
    cache_frame_frame_pyasn1$type$base$$$function__1_getTypeId = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__1_getTypeId);

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
CHECK_OBJECT(par_increment);
Py_DECREF(par_increment);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_increment);
Py_DECREF(par_increment);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_kwargs = python_pars[1];
PyObject *var_readOnly = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2dbde14c451f72ed5fec539f6aeb5c55, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__2___init__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__2___init__ = cache_frame_frame_pyasn1$type$base$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__2___init__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_tagSet;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_tagSet);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_2;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_subtypeSpec;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_subtypeSpec);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_readOnly == NULL);
var_readOnly = tmp_assign_source_1;
}
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_iterable_value_1;
CHECK_OBJECT(var_readOnly);
tmp_dict_arg_value_1 = var_readOnly;
CHECK_OBJECT(par_kwargs);
tmp_iterable_value_1 = par_kwargs;
assert(PyDict_Check(tmp_dict_arg_value_1));
    tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_update);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_readOnly);
tmp_args_element_value_1 = var_readOnly;
frame_frame_pyasn1$type$base$$$function__2___init__->m_frame.f_lineno = 58;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_readOnly);
tmp_assattr_value_1 = var_readOnly;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__readOnly, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__2___init__,
    type_description_1,
    par_self,
    par_kwargs,
    var_readOnly
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__2___init__ == cache_frame_frame_pyasn1$type$base$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__2___init__);
    cache_frame_frame_pyasn1$type$base$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__2___init__);

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
CHECK_OBJECT(var_readOnly);
CHECK_OBJECT(var_readOnly);
Py_DECREF(var_readOnly);
var_readOnly = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_readOnly);
var_readOnly = NULL;
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
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__3___setattr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_value = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__3___setattr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__3___setattr__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__3___setattr__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__3___setattr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__3___setattr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__3___setattr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_25855176615b9143131d5d2f7c76f443, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__3___setattr__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__3___setattr__ = cache_frame_frame_pyasn1$type$base$$$function__3___setattr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__3___setattr__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__3___setattr__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_name);
tmp_expression_value_1 = par_name;
tmp_subscript_value_1 = const_int_0;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_str_underscore;
tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_2 = par_name;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__readOnly);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
tmp_expression_value_3 = module_var_accessor_pyasn1$type$base$error(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_PyAsn1Error);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_left_1 = mod_consts.const_str_digest_784da984eb22c9d21eeac473fe911429;
CHECK_OBJECT(par_name);
tmp_mod_expr_right_1 = par_name;
tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 64;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$type$base$$$function__3___setattr__->m_frame.f_lineno = 64;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 64;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_value);
tmp_ass_subvalue_1 = par_value;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_4);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_ass_subscript_1 = par_name;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__3___setattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__3___setattr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__3___setattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__3___setattr__,
    type_description_1,
    par_self,
    par_name,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__3___setattr__ == cache_frame_frame_pyasn1$type$base$$$function__3___setattr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__3___setattr__);
    cache_frame_frame_pyasn1$type$base$$$function__3___setattr__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__3___setattr__);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__4___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__4___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__4___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__4___str__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__4___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__4___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__4___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d975ef6256c1d4d85fd000a2dc39d820, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__4___str__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__4___str__ = cache_frame_frame_pyasn1$type$base$$$function__4___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__4___str__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__4___str__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_pyasn1$type$base$$$function__4___str__->m_frame.f_lineno = 69;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_prettyPrint);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__4___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__4___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__4___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__4___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__4___str__ == cache_frame_frame_pyasn1$type$base$$$function__4___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__4___str__);
    cache_frame_frame_pyasn1$type$base$$$function__4___str__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__4___str__);

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


static PyObject *impl_pyasn1$type$base$$$function__5_readOnly(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__5_readOnly;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__5_readOnly = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__5_readOnly)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__5_readOnly);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__5_readOnly == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__5_readOnly = MAKE_FUNCTION_FRAME(tstate, code_objects_8f9d2ff42336af0ff368a93ebc827425, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__5_readOnly->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__5_readOnly = cache_frame_frame_pyasn1$type$base$$$function__5_readOnly;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__5_readOnly);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__5_readOnly) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__readOnly);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__5_readOnly, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__5_readOnly->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__5_readOnly, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__5_readOnly,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__5_readOnly == cache_frame_frame_pyasn1$type$base$$$function__5_readOnly) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__5_readOnly);
    cache_frame_frame_pyasn1$type$base$$$function__5_readOnly = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__5_readOnly);

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


static PyObject *impl_pyasn1$type$base$$$function__6_effectiveTagSet(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet = MAKE_FUNCTION_FRAME(tstate, code_objects_aac742308f93edb7c409eb46b2d16738, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet = cache_frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_tagSet);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet == cache_frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet);
    cache_frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__6_effectiveTagSet);

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


static PyObject *impl_pyasn1$type$base$$$function__7_tagMap(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__7_tagMap;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__7_tagMap = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__7_tagMap)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__7_tagMap);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__7_tagMap == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__7_tagMap = MAKE_FUNCTION_FRAME(tstate, code_objects_a46b4c85caa26307a1a902ac7d0b29ef, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__7_tagMap->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__7_tagMap = cache_frame_frame_pyasn1$type$base$$$function__7_tagMap;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__7_tagMap);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__7_tagMap) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_pyasn1$type$base$tagmap(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tagmap);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_TagMap);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_tagSet);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 85;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_dict_value_1 = par_self;
tmp_args_element_value_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "o";
    goto dict_build_exception_1;
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
frame_frame_pyasn1$type$base$$$function__7_tagMap->m_frame.f_lineno = 85;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__7_tagMap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__7_tagMap->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__7_tagMap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__7_tagMap,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__7_tagMap == cache_frame_frame_pyasn1$type$base$$$function__7_tagMap) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__7_tagMap);
    cache_frame_frame_pyasn1$type$base$$$function__7_tagMap = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__7_tagMap);

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


static PyObject *impl_pyasn1$type$base$$$function__8_isSameTypeWith(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
PyObject *par_matchTags = python_pars[2];
PyObject *par_matchConstraints = python_pars[3];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith = MAKE_FUNCTION_FRAME(tstate, code_objects_cbfe98247f117abecb07c53d2dac8bcc, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith = cache_frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith) == 2);

// Framed code:
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_cmp_expr_left_1 = par_self;
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_1 = par_other;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_matchTags);
tmp_operand_value_1 = par_matchTags;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = (tmp_res == 0) ? Py_True : Py_False;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_tagSet);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_2 = par_other;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_tagSet);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 108;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_and_left_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 108;
type_description_1 = "oooo";
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
CHECK_OBJECT(par_matchConstraints);
tmp_operand_value_2 = par_matchConstraints;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_3 = (tmp_res == 0) ? Py_True : Py_False;
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_subtypeSpec);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_4 = par_other;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_subtypeSpec);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 109;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_or_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
Py_INCREF(tmp_or_left_value_3);
tmp_and_right_value_1 = tmp_or_left_value_3;
or_end_3:;
tmp_or_right_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_or_right_value_1 = tmp_and_left_value_1;
and_end_1:;
tmp_return_value = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_return_value = tmp_or_left_value_1;
or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith,
    type_description_1,
    par_self,
    par_other,
    par_matchTags,
    par_matchConstraints
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith == cache_frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith);
    cache_frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__8_isSameTypeWith);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
CHECK_OBJECT(par_matchTags);
Py_DECREF(par_matchTags);
CHECK_OBJECT(par_matchConstraints);
Py_DECREF(par_matchConstraints);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
CHECK_OBJECT(par_matchTags);
Py_DECREF(par_matchTags);
CHECK_OBJECT(par_matchConstraints);
Py_DECREF(par_matchConstraints);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__9_isSuperTypeOf(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
PyObject *par_matchTags = python_pars[2];
PyObject *par_matchConstraints = python_pars[3];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf = MAKE_FUNCTION_FRAME(tstate, code_objects_9f01e962f3fc25c3c1e1e67ca839adb3, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf = cache_frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf) == 2);

// Framed code:
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_matchTags);
tmp_operand_value_1 = par_matchTags;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 0) ? Py_True : Py_False;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_tagSet);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_isSuperTagSetOf);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_3 = par_other;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_tagSet);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 132;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf->m_frame.f_lineno = 132;
tmp_and_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 132;
type_description_1 = "oooo";
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
CHECK_OBJECT(par_matchConstraints);
tmp_operand_value_2 = par_matchConstraints;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = (tmp_res == 0) ? Py_True : Py_False;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_subtypeSpec);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_isSuperTypeOf);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_6 = par_other;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_subtypeSpec);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 133;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf->m_frame.f_lineno = 133;
tmp_or_right_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_and_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_or_right_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_or_right_value_1 = tmp_and_left_value_1;
and_end_1:;
tmp_return_value = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_return_value = tmp_or_left_value_1;
or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf,
    type_description_1,
    par_self,
    par_other,
    par_matchTags,
    par_matchConstraints
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf == cache_frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf);
    cache_frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__9_isSuperTypeOf);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
CHECK_OBJECT(par_matchTags);
Py_DECREF(par_matchTags);
CHECK_OBJECT(par_matchConstraints);
Py_DECREF(par_matchConstraints);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
CHECK_OBJECT(par_matchTags);
Py_DECREF(par_matchTags);
CHECK_OBJECT(par_matchConstraints);
Py_DECREF(par_matchConstraints);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__10_isNoValue(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_values = python_pars[0];
PyObject *var_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__10_isNoValue;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__10_isNoValue = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__10_isNoValue)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__10_isNoValue);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__10_isNoValue == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__10_isNoValue = MAKE_FUNCTION_FRAME(tstate, code_objects_cc066492b352784f7cad50302798d9ee, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__10_isNoValue->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__10_isNoValue = cache_frame_frame_pyasn1$type$base$$$function__10_isNoValue;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__10_isNoValue);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__10_isNoValue) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_values);
tmp_iter_arg_1 = par_values;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oo";
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
tmp_assign_source_2 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oo";
exception_lineno = 137;
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
    PyObject *old = var_value;
    var_value = tmp_assign_source_3;
    Py_INCREF(var_value);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_value);
tmp_cmp_expr_left_1 = var_value;
tmp_cmp_expr_right_1 = module_var_accessor_pyasn1$type$base$noValue(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_noValue);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_2;
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__10_isNoValue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__10_isNoValue->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__10_isNoValue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__10_isNoValue,
    type_description_1,
    par_values,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__10_isNoValue == cache_frame_frame_pyasn1$type$base$$$function__10_isNoValue) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__10_isNoValue);
    cache_frame_frame_pyasn1$type$base$$$function__10_isNoValue = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__10_isNoValue);

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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_value);
var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_values);
Py_DECREF(par_values);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_values);
Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__11_prettyPrint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_scope = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__11_prettyPrint;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__11_prettyPrint = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__11_prettyPrint)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__11_prettyPrint);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__11_prettyPrint == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__11_prettyPrint = MAKE_FUNCTION_FRAME(tstate, code_objects_297fcaa8fee1bddc48dbc53efe1aa801, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__11_prettyPrint->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__11_prettyPrint = cache_frame_frame_pyasn1$type$base$$$function__11_prettyPrint;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__11_prettyPrint);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__11_prettyPrint) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 143;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__11_prettyPrint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__11_prettyPrint->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__11_prettyPrint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__11_prettyPrint,
    type_description_1,
    par_self,
    par_scope
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__11_prettyPrint == cache_frame_frame_pyasn1$type$base$$$function__11_prettyPrint) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__11_prettyPrint);
    cache_frame_frame_pyasn1$type$base$$$function__11_prettyPrint = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__11_prettyPrint);

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
CHECK_OBJECT(par_scope);
Py_DECREF(par_scope);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_pyasn1$type$base$$$function__12_getTagSet(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__12_getTagSet;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__12_getTagSet = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__12_getTagSet)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__12_getTagSet);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__12_getTagSet == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__12_getTagSet = MAKE_FUNCTION_FRAME(tstate, code_objects_a93825bc9f69cd37a78c30f491281ea3, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__12_getTagSet->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__12_getTagSet = cache_frame_frame_pyasn1$type$base$$$function__12_getTagSet;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__12_getTagSet);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__12_getTagSet) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_tagSet);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__12_getTagSet, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__12_getTagSet->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__12_getTagSet, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__12_getTagSet,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__12_getTagSet == cache_frame_frame_pyasn1$type$base$$$function__12_getTagSet) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__12_getTagSet);
    cache_frame_frame_pyasn1$type$base$$$function__12_getTagSet = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__12_getTagSet);

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


static PyObject *impl_pyasn1$type$base$$$function__13_getEffectiveTagSet(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet = MAKE_FUNCTION_FRAME(tstate, code_objects_2b3f5943605b53a6068aec19f1078143, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet = cache_frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_effectiveTagSet);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet == cache_frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet);
    cache_frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__13_getEffectiveTagSet);

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


static PyObject *impl_pyasn1$type$base$$$function__14_getTagMap(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__14_getTagMap;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__14_getTagMap = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__14_getTagMap)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__14_getTagMap);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__14_getTagMap == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__14_getTagMap = MAKE_FUNCTION_FRAME(tstate, code_objects_7f6f266626fb56a55c73133d724e96ab, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__14_getTagMap->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__14_getTagMap = cache_frame_frame_pyasn1$type$base$$$function__14_getTagMap;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__14_getTagMap);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__14_getTagMap) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_tagMap);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__14_getTagMap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__14_getTagMap->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__14_getTagMap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__14_getTagMap,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__14_getTagMap == cache_frame_frame_pyasn1$type$base$$$function__14_getTagMap) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__14_getTagMap);
    cache_frame_frame_pyasn1$type$base$$$function__14_getTagMap = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__14_getTagMap);

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


static PyObject *impl_pyasn1$type$base$$$function__15_getSubtypeSpec(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec = MAKE_FUNCTION_FRAME(tstate, code_objects_1bef87dc94f6bb6eb0962e12c865df4d, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec = cache_frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_subtypeSpec);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec == cache_frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec);
    cache_frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__15_getSubtypeSpec);

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


static PyObject *impl_pyasn1$type$base$$$function__16_hasValue(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__16_hasValue;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__16_hasValue = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__16_hasValue)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__16_hasValue);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__16_hasValue == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__16_hasValue = MAKE_FUNCTION_FRAME(tstate, code_objects_613680add9ae4dc93fcceea7c99e0237, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__16_hasValue->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__16_hasValue = cache_frame_frame_pyasn1$type$base$$$function__16_hasValue;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__16_hasValue);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__16_hasValue) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_isValue);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__16_hasValue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__16_hasValue->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__16_hasValue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__16_hasValue,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__16_hasValue == cache_frame_frame_pyasn1$type$base$$$function__16_hasValue) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__16_hasValue);
    cache_frame_frame_pyasn1$type$base$$$function__16_hasValue = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__16_hasValue);

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


static PyObject *impl_pyasn1$type$base$$$function__17___new__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *var_getPlug = NULL;
PyObject *var_op_names = NULL;
PyObject *var_name = NULL;
PyObject *outline_0_var_typ = NULL;
PyObject *outline_0_var_name = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__contraction_iter_0 = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_1__iter_value_1 = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__17___new__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__17___new__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__17___new__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__17___new__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__17___new__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__17___new__ = MAKE_FUNCTION_FRAME(tstate, code_objects_07dd8ae02177c60661154f9d877c8f98, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__17___new__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__17___new__ = cache_frame_frame_pyasn1$type$base$$$function__17___new__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__17___new__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__17___new__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_cls);
tmp_expression_value_1 = par_cls;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__instance);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_1;

tmp_assign_source_1 = MAKE_FUNCTION_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug(tstate);

assert(var_getPlug == NULL);
var_getPlug = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_tuple_type_str_type_int_type_list_type_dict_tuple;
tmp_assign_source_3 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_3 == NULL));
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_4;
}
// Tried code:
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_5 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 216;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_1;
    tmp_listcomp_1__iter_value_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_listcomp_1__iter_value_1);
tmp_assign_source_6 = tmp_listcomp_1__iter_value_1;
{
    PyObject *old = outline_0_var_typ;
    outline_0_var_typ = tmp_assign_source_6;
    Py_INCREF(outline_0_var_typ);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
PyObject *tmp_dir_arg_1;
CHECK_OBJECT(outline_0_var_typ);
tmp_dir_arg_1 = outline_0_var_typ;
tmp_iter_arg_2 = PyObject_Dir(tmp_dir_arg_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_listcomp_1__contraction_iter_0;
    tmp_listcomp_1__contraction_iter_0 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
tmp_next_source_2 = tmp_listcomp_1__contraction_iter_0;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 216;
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
    PyObject *old = outline_0_var_name;
    outline_0_var_name = tmp_assign_source_9;
    Py_INCREF(outline_0_var_name);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
int tmp_truth_name_2;
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_1;
int tmp_truth_name_3;
CHECK_OBJECT(outline_0_var_name);
tmp_cmp_expr_left_2 = outline_0_var_name;
if (par_cls == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 219;
type_description_1 = "oooo";
    goto try_except_handler_3;
}

tmp_expression_value_2 = par_cls;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_skipMethods);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(outline_0_var_name);
tmp_expression_value_3 = outline_0_var_name;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_startswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
frame_frame_pyasn1$type$base$$$function__17___new__->m_frame.f_lineno = 220;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain____tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 220;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_and_left_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(outline_0_var_name);
tmp_expression_value_4 = outline_0_var_name;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_endswith);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
frame_frame_pyasn1$type$base$$$function__17___new__->m_frame.f_lineno = 221;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain____tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 221;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_and_left_value_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_callable);
assert(tmp_called_value_3 != NULL);
CHECK_OBJECT(outline_0_var_typ);
tmp_expression_value_5 = outline_0_var_typ;
CHECK_OBJECT(outline_0_var_name);
tmp_name_value_1 = outline_0_var_name;
tmp_args_element_value_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_1, NULL);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
frame_frame_pyasn1$type$base$$$function__17___new__->m_frame.f_lineno = 222;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 222;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_and_right_value_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
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
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_name);
tmp_append_value_1 = outline_0_var_name;
tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooo";
    goto try_except_handler_3;
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


exception_lineno = 216;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_2 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_2);
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
Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
tmp_listcomp_1__contraction_iter_0 = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_1);
tmp_listcomp_1__iter_value_1 = NULL;
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
Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
tmp_listcomp_1__contraction_iter_0 = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_1);
tmp_listcomp_1__iter_value_1 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_typ);
outline_0_var_typ = NULL;
Py_XDECREF(outline_0_var_name);
outline_0_var_name = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_typ);
outline_0_var_typ = NULL;
Py_XDECREF(outline_0_var_name);
outline_0_var_name = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 216;
goto frame_exception_exit_1;
outline_result_1:;
assert(var_op_names == NULL);
var_op_names = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_3;
PyObject *tmp_set_arg_1;
CHECK_OBJECT(var_op_names);
tmp_set_arg_1 = var_op_names;
tmp_iter_arg_3 = PySet_New(tmp_set_arg_1);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
assert(!(tmp_assign_source_10 == NULL));
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_10;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_3 = tmp_for_loop_1__for_iterator;
tmp_assign_source_11 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
if (tmp_assign_source_11 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 224;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_12 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_name;
    var_name = tmp_assign_source_12;
    Py_INCREF(var_name);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_2;
PyObject *tmp_value_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_capi_result_1;
if (par_cls == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 225;
type_description_1 = "oooo";
    goto try_except_handler_4;
}

tmp_expression_value_6 = par_cls;
CHECK_OBJECT(var_name);
tmp_name_value_2 = var_name;
if (var_getPlug == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getPlug);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 225;
type_description_1 = "oooo";
    goto try_except_handler_4;
}

tmp_called_value_4 = var_getPlug;
CHECK_OBJECT(var_name);
tmp_args_element_value_2 = var_name;
frame_frame_pyasn1$type$base$$$function__17___new__->m_frame.f_lineno = 225;
tmp_value_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_capi_result_1 = BUILTIN_SETATTR(tmp_expression_value_6, tmp_name_value_2, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
goto loop_start_3;
loop_end_3:;
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_assattr_target_1;
tmp_expression_value_7 = (PyObject *)&PyBaseObject_Type;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain___new__);
assert(!(tmp_called_value_5 == NULL));
if (par_cls == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 227;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = par_cls;
frame_frame_pyasn1$type$base$$$function__17___new__->m_frame.f_lineno = 227;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (par_cls == NULL) {
Py_DECREF(tmp_assattr_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 227;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = par_cls;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__instance, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_expression_value_8;
if (par_cls == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 229;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = par_cls;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__instance);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__17___new__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__17___new__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__17___new__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__17___new__,
    type_description_1,
    par_cls,
    var_getPlug,
    var_op_names,
    var_name
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__17___new__ == cache_frame_frame_pyasn1$type$base$$$function__17___new__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__17___new__);
    cache_frame_frame_pyasn1$type$base$$$function__17___new__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__17___new__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_getPlug);
var_getPlug = NULL;
Py_XDECREF(var_op_names);
var_op_names = NULL;
Py_XDECREF(var_name);
var_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_getPlug);
var_getPlug = NULL;
Py_XDECREF(var_op_names);
var_op_names = NULL;
Py_XDECREF(var_name);
var_name = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_name = Nuitka_Cell_New1(python_pars[0]);
PyObject *var_plug = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_name;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_1 = MAKE_FUNCTION_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug(tstate, tmp_closure_1);

assert(var_plug == NULL);
var_plug = tmp_assign_source_1;
}
// Tried code:
CHECK_OBJECT(var_plug);
tmp_return_value = var_plug;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_name);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
par_name = NULL;
CHECK_OBJECT(var_plug);
CHECK_OBJECT(var_plug);
Py_DECREF(var_plug);
var_plug = NULL;
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


static PyObject *impl_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kw = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug = MAKE_FUNCTION_FRAME(tstate, code_objects_5100151c054e75a9a4455b53a555d974, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug = cache_frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
tmp_expression_value_1 = module_var_accessor_pyasn1$type$base$error(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_PyAsn1Error);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_mod_expr_left_1 = mod_consts.const_str_digest_0ea995f27834b1376e270219420a70e3;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 213;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_mod_expr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 213;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug->m_frame.f_lineno = 213;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 213;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooc";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug,
    type_description_1,
    par_self,
    par_args,
    par_kw,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug == cache_frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug);
    cache_frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug);

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
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_pyasn1$type$base$$$function__18___getattr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_attr = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__18___getattr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__18___getattr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__18___getattr__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__18___getattr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__18___getattr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__18___getattr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_127508891550a3695c53768ff986668b, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__18___getattr__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__18___getattr__ = cache_frame_frame_pyasn1$type$base$$$function__18___getattr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__18___getattr__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__18___getattr__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_attr);
tmp_cmp_expr_left_1 = par_attr;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_skipMethods);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
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
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_4469790547d3189f6bf577bc7e488247;
CHECK_OBJECT(par_attr);
tmp_mod_expr_right_1 = par_attr;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$type$base$$$function__18___getattr__->m_frame.f_lineno = 233;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 233;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
tmp_expression_value_2 = module_var_accessor_pyasn1$type$base$error(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_PyAsn1Error);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_left_2 = mod_consts.const_str_digest_0ea995f27834b1376e270219420a70e3;
CHECK_OBJECT(par_attr);
tmp_mod_expr_right_2 = par_attr;
tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 235;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$type$base$$$function__18___getattr__->m_frame.f_lineno = 235;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 235;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__18___getattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__18___getattr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__18___getattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__18___getattr__,
    type_description_1,
    par_self,
    par_attr
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__18___getattr__ == cache_frame_frame_pyasn1$type$base$$$function__18___getattr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__18___getattr__);
    cache_frame_frame_pyasn1$type$base$$$function__18___getattr__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__18___getattr__);

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
CHECK_OBJECT(par_attr);
Py_DECREF(par_attr);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_pyasn1$type$base$$$function__19___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__19___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__19___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__19___repr__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__19___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__19___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__19___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5b1691298c999fd62a313017917df736, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__19___repr__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__19___repr__ = cache_frame_frame_pyasn1$type$base$$$function__19___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__19___repr__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__19___repr__) == 2);

// Framed code:
{
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_895e1eb82702aaa88873687bac2ae57b;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_mod_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__19___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__19___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__19___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__19___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__19___repr__ == cache_frame_frame_pyasn1$type$base$$$function__19___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__19___repr__);
    cache_frame_frame_pyasn1$type$base$$$function__19___repr__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__19___repr__);

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


static PyObject *impl_pyasn1$type$base$$$function__20___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_exValue = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__20___init__;
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
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__20___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__20___init__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__20___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__20___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__20___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_bc79ada1fcaa178fa68a04cd4d95a450, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__20___init__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__20___init__ = cache_frame_frame_pyasn1$type$base$$$function__20___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__20___init__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__20___init__) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_call_result_1;
tmp_expression_value_1 = module_var_accessor_pyasn1$type$base$Asn1Type(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Asn1Type);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 262;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_1 = par_value;
tmp_cmp_expr_right_1 = module_var_accessor_pyasn1$type$base$noValue(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_noValue);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 263;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_defaultValue);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_value;
    assert(old != NULL);
    par_value = tmp_assign_source_1;
    Py_DECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
frame_frame_pyasn1$type$base$$$function__20___init__->m_frame.f_lineno = 266;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_prettyIn, tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_value;
    assert(old != NULL);
    par_value = tmp_assign_source_2;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_value);
tmp_args_element_value_2 = par_value;
frame_frame_pyasn1$type$base$$$function__20___init__->m_frame.f_lineno = 268;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_subtypeSpec, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__20___init__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__20___init__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_expression_value_3 = module_var_accessor_pyasn1$type$base$error(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 270;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_PyAsn1Error);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oooo";
    goto try_except_handler_3;
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
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_3); 
assert(var_exValue == NULL);
Py_INCREF(tmp_assign_source_3);
var_exValue = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_exValue);
tmp_type_arg_1 = var_exValue;
tmp_called_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_called_value_1 == NULL));
tmp_mod_expr_left_1 = mod_consts.const_str_digest_c164e1a704c146913b0fff1d8dc25c6a;
CHECK_OBJECT(var_exValue);
tmp_tuple_element_2 = var_exValue;
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 271;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
frame_frame_pyasn1$type$base$$$function__20___init__->m_frame.f_lineno = 271;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 271;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
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

Py_XDECREF(var_exValue);
var_exValue = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 267;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pyasn1$type$base$$$function__20___init__->m_frame)) {
        frame_frame_pyasn1$type$base$$$function__20___init__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_2:;
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
try_end_1:;
branch_end_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
if (par_value == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 273;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_assattr_value_1 = par_value;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__value, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__20___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__20___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__20___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__20___init__,
    type_description_1,
    par_self,
    par_value,
    par_kwargs,
    var_exValue
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__20___init__ == cache_frame_frame_pyasn1$type$base$$$function__20___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__20___init__);
    cache_frame_frame_pyasn1$type$base$$$function__20___init__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__20___init__);

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
Py_XDECREF(par_value);
par_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_value);
par_value = NULL;
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
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__21___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_representation = NULL;
PyObject *var_attr = NULL;
PyObject *var_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__21___repr__;
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
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__21___repr__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__21___repr__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__21___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__21___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__21___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3706d24a19904e115826fc8fbeb3909c, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__21___repr__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__21___repr__ = cache_frame_frame_pyasn1$type$base$$$function__21___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__21___repr__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__21___repr__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_30bd7cdcf0da35bee29279a3edd78ce8;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_and_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_isValue);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 277;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
tmp_and_right_value_1 = mod_consts.const_str_plain_value;
Py_INCREF(tmp_and_right_value_1);
tmp_or_left_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_or_left_value_1 = tmp_and_left_value_1;
and_end_1:;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 277;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
tmp_or_right_value_1 = mod_consts.const_str_plain_schema;
Py_INCREF(tmp_or_right_value_1);
tmp_tuple_element_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_tuple_element_1 = tmp_or_left_value_1;
or_end_1:;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_representation == NULL);
var_representation = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_readOnly);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$type$base$$$function__21___repr__->m_frame.f_lineno = 279;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
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
exception_lineno = 279;
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


exception_lineno = 279;
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



exception_lineno = 279;
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



exception_lineno = 279;
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



exception_lineno = 279;
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
    PyObject *old = var_attr;
    var_attr = tmp_assign_source_7;
    Py_INCREF(var_attr);
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
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_value);
tmp_truth_name_1 = CHECK_IF_TRUE(var_value);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooo";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_9;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_2;
if (var_representation == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_representation);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 281;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_1 = var_representation;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_bcd1b2cd4be44f046a8a03bffb98945a;
CHECK_OBJECT(var_attr);
tmp_tuple_element_2 = var_attr;
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_value);
tmp_tuple_element_2 = var_value;
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
tmp_iadd_expr_right_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = tmp_iadd_expr_left_1;
var_representation = tmp_assign_source_9;

}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
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
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_isValue);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 283;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_pyasn1$type$base$$$function__21___repr__->m_frame.f_lineno = 284;
tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_prettyPrint);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_value;
    var_value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_value);
tmp_len_arg_1 = var_value;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 32;
tmp_condition_result_3 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_value);
tmp_expression_value_7 = var_value;
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_16_none;
tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_1);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = mod_consts.const_str_digest_3501979af1b70861f5e9d6a0f04129bf;
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_value);
tmp_expression_value_8 = var_value;
tmp_subscript_value_2 = mod_consts.const_slice_int_neg_16_none_none;
tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_2);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 286;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_value;
    assert(old != NULL);
    var_value = tmp_assign_source_11;
    Py_DECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
if (var_representation == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_representation);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 287;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_2 = var_representation;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_e500aa9724f7db5e366c4651e2a1174f;
if (var_value == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 287;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_mod_expr_right_3 = var_value;
tmp_iadd_expr_right_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = tmp_iadd_expr_left_2;
var_representation = tmp_assign_source_12;

}
branch_no_2:;
{
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_c0c3759da123e387798315e75d2fed70;
if (var_representation == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_representation);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 289;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_mod_expr_right_4 = var_representation;
tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__21___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__21___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__21___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__21___repr__,
    type_description_1,
    par_self,
    var_representation,
    var_attr,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__21___repr__ == cache_frame_frame_pyasn1$type$base$$$function__21___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__21___repr__);
    cache_frame_frame_pyasn1$type$base$$$function__21___repr__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__21___repr__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_representation);
var_representation = NULL;
Py_XDECREF(var_attr);
var_attr = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_representation);
var_representation = NULL;
Py_XDECREF(var_attr);
var_attr = NULL;
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


static PyObject *impl_pyasn1$type$base$$$function__22___eq__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
PyObject *tmp_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__22___eq__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__22___eq__ = NULL;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_self);
tmp_cmp_expr_left_1 = par_self;
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_1 = par_other;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;
branch_no_1:;
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__22___eq__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__22___eq__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__22___eq__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__22___eq__ = MAKE_FUNCTION_FRAME(tstate, code_objects_74a07b5f5c88ff3e7064b14ca0e8c741, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__22___eq__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__22___eq__ = cache_frame_frame_pyasn1$type$base$$$function__22___eq__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__22___eq__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__22___eq__) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__value);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_2 = par_other;
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__22___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__22___eq__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__22___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__22___eq__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__22___eq__ == cache_frame_frame_pyasn1$type$base$$$function__22___eq__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__22___eq__);
    cache_frame_frame_pyasn1$type$base$$$function__22___eq__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__22___eq__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__23___ne__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__23___ne__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__23___ne__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__23___ne__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__23___ne__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__23___ne__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__23___ne__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4fc9c2738f1e852ff07e22b0fee16438, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__23___ne__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__23___ne__ = cache_frame_frame_pyasn1$type$base$$$function__23___ne__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__23___ne__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__23___ne__) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__value);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_1 = par_other;
tmp_return_value = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__23___ne__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__23___ne__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__23___ne__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__23___ne__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__23___ne__ == cache_frame_frame_pyasn1$type$base$$$function__23___ne__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__23___ne__);
    cache_frame_frame_pyasn1$type$base$$$function__23___ne__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__23___ne__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__24___lt__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__24___lt__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__24___lt__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__24___lt__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__24___lt__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__24___lt__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__24___lt__ = MAKE_FUNCTION_FRAME(tstate, code_objects_bc92b65d9d282b893b288aa4e01fc044, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__24___lt__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__24___lt__ = cache_frame_frame_pyasn1$type$base$$$function__24___lt__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__24___lt__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__24___lt__) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__value);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_1 = par_other;
tmp_return_value = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__24___lt__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__24___lt__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__24___lt__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__24___lt__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__24___lt__ == cache_frame_frame_pyasn1$type$base$$$function__24___lt__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__24___lt__);
    cache_frame_frame_pyasn1$type$base$$$function__24___lt__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__24___lt__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__25___le__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__25___le__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__25___le__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__25___le__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__25___le__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__25___le__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__25___le__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4580e974a8473ec27bdf1aacec06ff48, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__25___le__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__25___le__ = cache_frame_frame_pyasn1$type$base$$$function__25___le__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__25___le__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__25___le__) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__value);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_1 = par_other;
tmp_return_value = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__25___le__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__25___le__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__25___le__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__25___le__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__25___le__ == cache_frame_frame_pyasn1$type$base$$$function__25___le__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__25___le__);
    cache_frame_frame_pyasn1$type$base$$$function__25___le__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__25___le__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__26___gt__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__26___gt__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__26___gt__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__26___gt__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__26___gt__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__26___gt__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__26___gt__ = MAKE_FUNCTION_FRAME(tstate, code_objects_380700bb51f154366374055813b12d46, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__26___gt__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__26___gt__ = cache_frame_frame_pyasn1$type$base$$$function__26___gt__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__26___gt__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__26___gt__) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__value);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_1 = par_other;
tmp_return_value = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__26___gt__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__26___gt__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__26___gt__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__26___gt__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__26___gt__ == cache_frame_frame_pyasn1$type$base$$$function__26___gt__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__26___gt__);
    cache_frame_frame_pyasn1$type$base$$$function__26___gt__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__26___gt__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__27___ge__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__27___ge__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__27___ge__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__27___ge__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__27___ge__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__27___ge__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__27___ge__ = MAKE_FUNCTION_FRAME(tstate, code_objects_cda026c2afbd44a824f366c6af996a39, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__27___ge__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__27___ge__ = cache_frame_frame_pyasn1$type$base$$$function__27___ge__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__27___ge__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__27___ge__) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__value);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_1 = par_other;
tmp_return_value = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__27___ge__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__27___ge__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__27___ge__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__27___ge__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__27___ge__ == cache_frame_frame_pyasn1$type$base$$$function__27___ge__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__27___ge__);
    cache_frame_frame_pyasn1$type$base$$$function__27___ge__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__27___ge__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__28___bool__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__28___bool__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__28___bool__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__28___bool__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__28___bool__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__28___bool__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__28___bool__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7d86c8954d9df28f36913f5be47ee01b, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__28___bool__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__28___bool__ = cache_frame_frame_pyasn1$type$base$$$function__28___bool__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__28___bool__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__28___bool__) == 2);

// Framed code:
{
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__value);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__28___bool__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__28___bool__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__28___bool__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__28___bool__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__28___bool__ == cache_frame_frame_pyasn1$type$base$$$function__28___bool__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__28___bool__);
    cache_frame_frame_pyasn1$type$base$$$function__28___bool__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__28___bool__);

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


static PyObject *impl_pyasn1$type$base$$$function__29___hash__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__29___hash__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__29___hash__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__29___hash__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__29___hash__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__29___hash__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__29___hash__ = MAKE_FUNCTION_FRAME(tstate, code_objects_cfd002f2896327bff06991e0459489c2, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__29___hash__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__29___hash__ = cache_frame_frame_pyasn1$type$base$$$function__29___hash__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__29___hash__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__29___hash__) == 2);

// Framed code:
{
PyObject *tmp_hash_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_hash_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__value);
if (tmp_hash_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_HASH(tstate, tmp_hash_arg_1);
CHECK_OBJECT(tmp_hash_arg_1);
Py_DECREF(tmp_hash_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__29___hash__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__29___hash__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__29___hash__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__29___hash__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__29___hash__ == cache_frame_frame_pyasn1$type$base$$$function__29___hash__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__29___hash__);
    cache_frame_frame_pyasn1$type$base$$$function__29___hash__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__29___hash__);

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


static PyObject *impl_pyasn1$type$base$$$function__30_isValue(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__30_isValue;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__30_isValue = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__30_isValue)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__30_isValue);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__30_isValue == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__30_isValue = MAKE_FUNCTION_FRAME(tstate, code_objects_44f78e75f8d3d36006d4086b4e6bd14c, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__30_isValue->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__30_isValue = cache_frame_frame_pyasn1$type$base$$$function__30_isValue;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__30_isValue);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__30_isValue) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__value);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_pyasn1$type$base$noValue(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_noValue);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 345;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__30_isValue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__30_isValue->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__30_isValue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__30_isValue,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__30_isValue == cache_frame_frame_pyasn1$type$base$$$function__30_isValue) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__30_isValue);
    cache_frame_frame_pyasn1$type$base$$$function__30_isValue = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__30_isValue);

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


static PyObject *impl_pyasn1$type$base$$$function__31_clone(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_initializers = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__31_clone;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__31_clone = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__31_clone)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__31_clone);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__31_clone == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__31_clone = MAKE_FUNCTION_FRAME(tstate, code_objects_5b0c91f5a776e2619e383a32f0a0b71e, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__31_clone->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__31_clone = cache_frame_frame_pyasn1$type$base$$$function__31_clone;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__31_clone);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__31_clone) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_1 = par_value;
tmp_cmp_expr_right_1 = module_var_accessor_pyasn1$type$base$noValue(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_noValue);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 363;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_kwargs);
tmp_operand_value_1 = par_kwargs;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__value);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_value;
    assert(old != NULL);
    par_value = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_readOnly);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$type$base$$$function__31_clone->m_frame.f_lineno = 369;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_initializers == NULL);
var_initializers = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_initializers);
tmp_expression_value_4 = var_initializers;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_update);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwargs);
tmp_args_element_value_1 = par_kwargs;
frame_frame_pyasn1$type$base$$$function__31_clone->m_frame.f_lineno = 370;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_5);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_tuple_element_1 = par_value;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_initializers);
tmp_direct_call_arg3_1 = var_initializers;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__31_clone, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__31_clone->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__31_clone, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__31_clone,
    type_description_1,
    par_self,
    par_value,
    par_kwargs,
    var_initializers
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__31_clone == cache_frame_frame_pyasn1$type$base$$$function__31_clone) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__31_clone);
    cache_frame_frame_pyasn1$type$base$$$function__31_clone = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__31_clone);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_value);
par_value = NULL;
Py_XDECREF(var_initializers);
var_initializers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_value);
par_value = NULL;
Py_XDECREF(var_initializers);
var_initializers = NULL;
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
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__32_subtype(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_initializers = NULL;
PyObject *var_implicitTag = NULL;
PyObject *var_explicitTag = NULL;
PyObject *var_arg = NULL;
PyObject *var_option = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_inplace_assign_subscript_1__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__32_subtype;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__32_subtype = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__32_subtype)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__32_subtype);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__32_subtype == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__32_subtype = MAKE_FUNCTION_FRAME(tstate, code_objects_b3322e4d946c76dab061f29eea36395d, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__32_subtype->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__32_subtype = cache_frame_frame_pyasn1$type$base$$$function__32_subtype;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__32_subtype);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__32_subtype) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_1 = par_value;
tmp_cmp_expr_right_1 = module_var_accessor_pyasn1$type$base$noValue(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_noValue);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 421;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_kwargs);
tmp_operand_value_1 = par_kwargs;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__value);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_value;
    assert(old != NULL);
    par_value = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_readOnly);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$type$base$$$function__32_subtype->m_frame.f_lineno = 427;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_initializers == NULL);
var_initializers = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_key_value_1 = mod_consts.const_str_plain_implicitTag;
tmp_default_value_1 = Py_None;
tmp_assign_source_3 = DICT_POP3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
assert(!(tmp_assign_source_3 == NULL));
assert(var_implicitTag == NULL);
var_implicitTag = tmp_assign_source_3;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_implicitTag);
tmp_cmp_expr_left_2 = var_implicitTag;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_tagSet);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_implicitTag);
tmp_args_element_value_1 = var_implicitTag;
frame_frame_pyasn1$type$base$$$function__32_subtype->m_frame.f_lineno = 431;
tmp_ass_subvalue_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_tagImplicitly, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_initializers);
tmp_ass_subscribed_1 = var_initializers;
tmp_ass_subscript_1 = mod_consts.const_str_plain_tagSet;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_5 = par_kwargs;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_pop);
assert(!(tmp_called_value_2 == NULL));
frame_frame_pyasn1$type$base$$$function__32_subtype->m_frame.f_lineno = 433;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_explicitTag_none_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_explicitTag == NULL);
var_explicitTag = tmp_assign_source_4;
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_explicitTag);
tmp_cmp_expr_left_3 = var_explicitTag;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_tagSet);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_explicitTag);
tmp_args_element_value_2 = var_explicitTag;
frame_frame_pyasn1$type$base$$$function__32_subtype->m_frame.f_lineno = 435;
tmp_ass_subvalue_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_tagExplicitly, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_initializers);
tmp_ass_subscribed_2 = var_initializers;
tmp_ass_subscript_2 = mod_consts.const_str_plain_tagSet;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_4:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_7 = par_kwargs;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_items);
assert(!(tmp_called_value_3 == NULL));
frame_frame_pyasn1$type$base$$$function__32_subtype->m_frame.f_lineno = 437;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "oooooooo";
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
type_description_1 = "oooooooo";
exception_lineno = 437;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 437;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 437;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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



exception_lineno = 437;
type_description_1 = "oooooooo";
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
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_arg;
    var_arg = tmp_assign_source_10;
    Py_INCREF(var_arg);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_option;
    var_option = tmp_assign_source_11;
    Py_INCREF(var_option);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_12;
if (var_initializers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_initializers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 438;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_assign_source_12 = var_initializers;
{
    PyObject *old = tmp_inplace_assign_subscript_1__target;
    tmp_inplace_assign_subscript_1__target = tmp_assign_source_12;
    Py_INCREF(tmp_inplace_assign_subscript_1__target);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(var_arg);
tmp_assign_source_13 = var_arg;
{
    PyObject *old = tmp_inplace_assign_subscript_1__subscript;
    tmp_inplace_assign_subscript_1__subscript = tmp_assign_source_13;
    Py_INCREF(tmp_inplace_assign_subscript_1__subscript);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_8 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_subscript_value_1 = tmp_inplace_assign_subscript_1__subscript;
tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__value;
    tmp_inplace_assign_subscript_1__value = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(var_option);
tmp_iadd_expr_right_1 = var_option;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_15 = tmp_iadd_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_15;

}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ass_subvalue_3 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_ass_subscribed_3 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_ass_subscript_3 = tmp_inplace_assign_subscript_1__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oooooooo";
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

CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
Py_DECREF(tmp_inplace_assign_subscript_1__subscript);
tmp_inplace_assign_subscript_1__subscript = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
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
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
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
try_end_4:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_9);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_tuple_element_1 = par_value;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
if (var_initializers == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_initializers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 440;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg3_1 = var_initializers;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__32_subtype, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__32_subtype->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__32_subtype, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__32_subtype,
    type_description_1,
    par_self,
    par_value,
    par_kwargs,
    var_initializers,
    var_implicitTag,
    var_explicitTag,
    var_arg,
    var_option
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__32_subtype == cache_frame_frame_pyasn1$type$base$$$function__32_subtype) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__32_subtype);
    cache_frame_frame_pyasn1$type$base$$$function__32_subtype = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__32_subtype);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_value);
par_value = NULL;
Py_XDECREF(var_initializers);
var_initializers = NULL;
Py_XDECREF(var_implicitTag);
var_implicitTag = NULL;
Py_XDECREF(var_explicitTag);
var_explicitTag = NULL;
Py_XDECREF(var_arg);
var_arg = NULL;
Py_XDECREF(var_option);
var_option = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_value);
par_value = NULL;
Py_XDECREF(var_initializers);
var_initializers = NULL;
Py_XDECREF(var_implicitTag);
var_implicitTag = NULL;
Py_XDECREF(var_explicitTag);
var_explicitTag = NULL;
Py_XDECREF(var_arg);
var_arg = NULL;
Py_XDECREF(var_option);
var_option = NULL;
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
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__33_prettyIn(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
CHECK_OBJECT(par_value);
tmp_return_value = par_value;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_pyasn1$type$base$$$function__34_prettyOut(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__34_prettyOut;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__34_prettyOut = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__34_prettyOut)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__34_prettyOut);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__34_prettyOut == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__34_prettyOut = MAKE_FUNCTION_FRAME(tstate, code_objects_de7b2e4eaf8e8324e5fce58aabcb59a4, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__34_prettyOut->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__34_prettyOut = cache_frame_frame_pyasn1$type$base$$$function__34_prettyOut;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__34_prettyOut);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__34_prettyOut) == 2);

// Framed code:
{
PyObject *tmp_unicode_arg_1;
CHECK_OBJECT(par_value);
tmp_unicode_arg_1 = par_value;
tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__34_prettyOut, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__34_prettyOut->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__34_prettyOut, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__34_prettyOut,
    type_description_1,
    par_self,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__34_prettyOut == cache_frame_frame_pyasn1$type$base$$$function__34_prettyOut) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__34_prettyOut);
    cache_frame_frame_pyasn1$type$base$$$function__34_prettyOut = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__34_prettyOut);

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


static PyObject *impl_pyasn1$type$base$$$function__35_prettyPrint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_scope = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__35_prettyPrint;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__35_prettyPrint = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__35_prettyPrint)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__35_prettyPrint);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__35_prettyPrint == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__35_prettyPrint = MAKE_FUNCTION_FRAME(tstate, code_objects_96cd4874911cf4013c9e794bd02fe2f3, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__35_prettyPrint->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__35_prettyPrint = cache_frame_frame_pyasn1$type$base$$$function__35_prettyPrint;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__35_prettyPrint);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__35_prettyPrint) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_prettyOut);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__value);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 449;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$type$base$$$function__35_prettyPrint->m_frame.f_lineno = 449;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__35_prettyPrint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__35_prettyPrint->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__35_prettyPrint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__35_prettyPrint,
    type_description_1,
    par_self,
    par_scope
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__35_prettyPrint == cache_frame_frame_pyasn1$type$base$$$function__35_prettyPrint) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__35_prettyPrint);
    cache_frame_frame_pyasn1$type$base$$$function__35_prettyPrint = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__35_prettyPrint);

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
CHECK_OBJECT(par_scope);
Py_DECREF(par_scope);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_scope);
Py_DECREF(par_scope);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__36_prettyPrintType(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_scope = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__36_prettyPrintType;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__36_prettyPrintType = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__36_prettyPrintType)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__36_prettyPrintType);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__36_prettyPrintType == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__36_prettyPrintType = MAKE_FUNCTION_FRAME(tstate, code_objects_2445b67d392d9956e489e1126492e764, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__36_prettyPrintType->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__36_prettyPrintType = cache_frame_frame_pyasn1$type$base$$$function__36_prettyPrintType;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__36_prettyPrintType);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__36_prettyPrintType) == 2);

// Framed code:
{
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_63157320d44ca37a434ab51866da0845;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_tagSet);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__36_prettyPrintType, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__36_prettyPrintType->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__36_prettyPrintType, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__36_prettyPrintType,
    type_description_1,
    par_self,
    par_scope
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__36_prettyPrintType == cache_frame_frame_pyasn1$type$base$$$function__36_prettyPrintType) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__36_prettyPrintType);
    cache_frame_frame_pyasn1$type$base$$$function__36_prettyPrintType = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__36_prettyPrintType);

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
CHECK_OBJECT(par_scope);
Py_DECREF(par_scope);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_scope);
Py_DECREF(par_scope);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__37___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_kwargs = python_pars[1];
PyObject *var_readOnly = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__37___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__37___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__37___init__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__37___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__37___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__37___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c6927230c1e0eb65ae30c4e8d863b312, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__37___init__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__37___init__ = cache_frame_frame_pyasn1$type$base$$$function__37___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__37___init__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__37___init__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_componentType;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_componentType);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_2;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_sizeSpec;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_sizeSpec);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 505;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_readOnly == NULL);
var_readOnly = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_direct_call_arg2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__moveSizeSpec);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg2_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_2 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_kwargs;
    assert(old != NULL);
    par_kwargs = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_iterable_value_1;
CHECK_OBJECT(var_readOnly);
tmp_dict_arg_value_1 = var_readOnly;
CHECK_OBJECT(par_kwargs);
tmp_iterable_value_1 = par_kwargs;
assert(PyDict_Check(tmp_dict_arg_value_1));
if (HAS_ATTR_BOOL(tstate, tmp_iterable_value_1, const_str_plain_keys)){
    tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);
} else {
    tmp_res = PyDict_MergeFromSeq2(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);
}

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 511;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_call_result_1;
tmp_expression_value_4 = module_var_accessor_pyasn1$type$base$Asn1Type(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Asn1Type);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 513;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain___init__);
if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_readOnly);
tmp_direct_call_arg3_1 = var_readOnly;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__37___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__37___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__37___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__37___init__,
    type_description_1,
    par_self,
    par_kwargs,
    var_readOnly
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__37___init__ == cache_frame_frame_pyasn1$type$base$$$function__37___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__37___init__);
    cache_frame_frame_pyasn1$type$base$$$function__37___init__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__37___init__);

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
CHECK_OBJECT(par_kwargs);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
par_kwargs = NULL;
CHECK_OBJECT(var_readOnly);
CHECK_OBJECT(var_readOnly);
Py_DECREF(var_readOnly);
var_readOnly = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_kwargs);
par_kwargs = NULL;
Py_XDECREF(var_readOnly);
var_readOnly = NULL;
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


static PyObject *impl_pyasn1$type$base$$$function__38__moveSizeSpec(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_kwargs = python_pars[1];
PyObject *var_sizeSpec = NULL;
PyObject *var_subtypeSpec = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec = MAKE_FUNCTION_FRAME(tstate, code_objects_2f2f86f0e2efe2b04a84418a77a83875, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec = cache_frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_key_value_1 = mod_consts.const_str_plain_sizeSpec;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_default_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_sizeSpec);
if (tmp_default_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = DICT_POP3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_default_value_1);
Py_DECREF(tmp_default_value_1);
assert(!(tmp_assign_source_1 == NULL));
assert(var_sizeSpec == NULL);
var_sizeSpec = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_sizeSpec);
tmp_truth_name_1 = CHECK_IF_TRUE(var_sizeSpec);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
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
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_2 = par_kwargs;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pop);
assert(!(tmp_called_value_1 == NULL));
tmp_args_element_value_1 = mod_consts.const_str_plain_subtypeSpec;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_subtypeSpec);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 519;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec->m_frame.f_lineno = 519;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_subtypeSpec == NULL);
var_subtypeSpec = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(var_subtypeSpec);
tmp_truth_name_2 = CHECK_IF_TRUE(var_subtypeSpec);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "oooo";
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
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(var_sizeSpec);
tmp_assign_source_3 = var_sizeSpec;
{
    PyObject *old = var_subtypeSpec;
    assert(old != NULL);
    var_subtypeSpec = tmp_assign_source_3;
    Py_INCREF(var_subtypeSpec);
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(var_subtypeSpec);
tmp_iadd_expr_left_1 = var_subtypeSpec;
CHECK_OBJECT(var_sizeSpec);
tmp_iadd_expr_right_1 = var_sizeSpec;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = tmp_iadd_expr_left_1;
var_subtypeSpec = tmp_assign_source_4;

}
branch_end_2:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_subtypeSpec);
tmp_ass_subvalue_1 = var_subtypeSpec;
CHECK_OBJECT(par_kwargs);
tmp_ass_subscribed_1 = par_kwargs;
tmp_ass_subscript_1 = mod_consts.const_str_plain_subtypeSpec;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec,
    type_description_1,
    par_self,
    par_kwargs,
    var_sizeSpec,
    var_subtypeSpec
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec == cache_frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec);
    cache_frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__38__moveSizeSpec);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_kwargs);
tmp_return_value = par_kwargs;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_sizeSpec);
CHECK_OBJECT(var_sizeSpec);
Py_DECREF(var_sizeSpec);
var_sizeSpec = NULL;
Py_XDECREF(var_subtypeSpec);
var_subtypeSpec = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_sizeSpec);
var_sizeSpec = NULL;
Py_XDECREF(var_subtypeSpec);
var_subtypeSpec = NULL;
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
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__39___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_representation = NULL;
PyObject *var_attr = NULL;
PyObject *var_value = NULL;
PyObject *outline_0_var_x = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__39___repr__;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__39___repr__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__39___repr__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__39___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__39___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__39___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b17ec7eae80a5adcd88f5fc71b6112f6, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__39___repr__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__39___repr__ = cache_frame_frame_pyasn1$type$base$$$function__39___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__39___repr__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__39___repr__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_30bd7cdcf0da35bee29279a3edd78ce8;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_and_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_isValue);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 532;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
tmp_and_right_value_1 = mod_consts.const_str_plain_value;
Py_INCREF(tmp_and_right_value_1);
tmp_or_left_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_or_left_value_1 = tmp_and_left_value_1;
and_end_1:;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 532;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
tmp_or_right_value_1 = mod_consts.const_str_plain_schema;
Py_INCREF(tmp_or_right_value_1);
tmp_tuple_element_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_tuple_element_1 = tmp_or_left_value_1;
or_end_1:;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 531;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_representation == NULL);
var_representation = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_readOnly);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$type$base$$$function__39___repr__->m_frame.f_lineno = 535;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
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
exception_lineno = 535;
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


exception_lineno = 535;
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



exception_lineno = 535;
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



exception_lineno = 535;
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



exception_lineno = 535;
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
    PyObject *old = var_attr;
    var_attr = tmp_assign_source_7;
    Py_INCREF(var_attr);
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_value);
tmp_cmp_expr_left_1 = var_value;
tmp_cmp_expr_right_1 = module_var_accessor_pyasn1$type$base$noValue(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_noValue);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 536;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_2;
if (var_representation == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_representation);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 537;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_1 = var_representation;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_4f3e47c3a8c847d230643dcfceec9be1;
CHECK_OBJECT(var_attr);
tmp_tuple_element_2 = var_attr;
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_value);
tmp_tuple_element_2 = var_value;
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
tmp_iadd_expr_right_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = tmp_iadd_expr_left_1;
var_representation = tmp_assign_source_9;

}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
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
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_isValue);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 539;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 539;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 539;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_components);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 539;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 539;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
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
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
if (var_representation == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_representation);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 540;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_2 = var_representation;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_e500aa9724f7db5e366c4651e2a1174f;
tmp_str_arg_value_1 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_3;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_components);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_12;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_2 = tmp_listcomp_1__$0;
tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 541;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_14 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_x;
    outline_0_var_x = tmp_assign_source_14;
    Py_INCREF(outline_0_var_x);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_x);
tmp_operand_value_1 = outline_0_var_x;
tmp_append_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_iterable_value_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_iterable_value_1);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
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
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_XDECREF(outline_0_var_x);
outline_0_var_x = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_x);
outline_0_var_x = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 541;
goto frame_exception_exit_1;
outline_result_1:;
tmp_mod_expr_right_3 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_mod_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 540;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_UNICODE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 540;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 540;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = tmp_iadd_expr_left_2;
var_representation = tmp_assign_source_10;

}
branch_no_2:;
{
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_c0c3759da123e387798315e75d2fed70;
if (var_representation == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_representation);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 543;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_mod_expr_right_4 = var_representation;
tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__39___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__39___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__39___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__39___repr__,
    type_description_1,
    par_self,
    var_representation,
    var_attr,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__39___repr__ == cache_frame_frame_pyasn1$type$base$$$function__39___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__39___repr__);
    cache_frame_frame_pyasn1$type$base$$$function__39___repr__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__39___repr__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_representation);
var_representation = NULL;
Py_XDECREF(var_attr);
var_attr = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_representation);
var_representation = NULL;
Py_XDECREF(var_attr);
var_attr = NULL;
Py_XDECREF(var_value);
var_value = NULL;
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


static PyObject *impl_pyasn1$type$base$$$function__40___eq__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__40___eq__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__40___eq__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__40___eq__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__40___eq__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__40___eq__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__40___eq__ = MAKE_FUNCTION_FRAME(tstate, code_objects_16297c4de5de4f7a4eb437426747fa83, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__40___eq__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__40___eq__ = cache_frame_frame_pyasn1$type$base$$$function__40___eq__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__40___eq__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__40___eq__) == 2);

// Framed code:
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_cmp_expr_left_1 = par_self;
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_1 = par_other;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_components);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 546;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_2 = par_other;
tmp_or_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 546;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_return_value = tmp_or_left_value_1;
or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__40___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__40___eq__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__40___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__40___eq__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__40___eq__ == cache_frame_frame_pyasn1$type$base$$$function__40___eq__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__40___eq__);
    cache_frame_frame_pyasn1$type$base$$$function__40___eq__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__40___eq__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__41___ne__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__41___ne__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__41___ne__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__41___ne__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__41___ne__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__41___ne__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__41___ne__ = MAKE_FUNCTION_FRAME(tstate, code_objects_587f72cdc075e73a6b1e3e0b8b4c11e9, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__41___ne__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__41___ne__ = cache_frame_frame_pyasn1$type$base$$$function__41___ne__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__41___ne__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__41___ne__) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_components);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 549;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_1 = par_other;
tmp_return_value = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 549;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__41___ne__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__41___ne__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__41___ne__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__41___ne__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__41___ne__ == cache_frame_frame_pyasn1$type$base$$$function__41___ne__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__41___ne__);
    cache_frame_frame_pyasn1$type$base$$$function__41___ne__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__41___ne__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__42___lt__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__42___lt__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__42___lt__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__42___lt__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__42___lt__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__42___lt__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__42___lt__ = MAKE_FUNCTION_FRAME(tstate, code_objects_bfbb874ddf59b6bd2fdb2aff12b462aa, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__42___lt__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__42___lt__ = cache_frame_frame_pyasn1$type$base$$$function__42___lt__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__42___lt__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__42___lt__) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_components);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_1 = par_other;
tmp_return_value = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__42___lt__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__42___lt__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__42___lt__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__42___lt__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__42___lt__ == cache_frame_frame_pyasn1$type$base$$$function__42___lt__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__42___lt__);
    cache_frame_frame_pyasn1$type$base$$$function__42___lt__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__42___lt__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__43___le__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__43___le__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__43___le__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__43___le__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__43___le__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__43___le__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__43___le__ = MAKE_FUNCTION_FRAME(tstate, code_objects_26e8fe3c31978af94f59302abd92a924, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__43___le__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__43___le__ = cache_frame_frame_pyasn1$type$base$$$function__43___le__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__43___le__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__43___le__) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_components);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 555;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_1 = par_other;
tmp_return_value = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 555;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__43___le__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__43___le__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__43___le__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__43___le__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__43___le__ == cache_frame_frame_pyasn1$type$base$$$function__43___le__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__43___le__);
    cache_frame_frame_pyasn1$type$base$$$function__43___le__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__43___le__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__44___gt__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__44___gt__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__44___gt__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__44___gt__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__44___gt__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__44___gt__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__44___gt__ = MAKE_FUNCTION_FRAME(tstate, code_objects_60c63bd478cf1be8d7f0b1c1082f5e52, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__44___gt__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__44___gt__ = cache_frame_frame_pyasn1$type$base$$$function__44___gt__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__44___gt__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__44___gt__) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_components);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 558;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_1 = par_other;
tmp_return_value = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 558;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__44___gt__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__44___gt__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__44___gt__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__44___gt__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__44___gt__ == cache_frame_frame_pyasn1$type$base$$$function__44___gt__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__44___gt__);
    cache_frame_frame_pyasn1$type$base$$$function__44___gt__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__44___gt__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__45___ge__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__45___ge__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__45___ge__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__45___ge__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__45___ge__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__45___ge__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__45___ge__ = MAKE_FUNCTION_FRAME(tstate, code_objects_57d459dbaa8b19d6d3793955d65f5558, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__45___ge__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__45___ge__ = cache_frame_frame_pyasn1$type$base$$$function__45___ge__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__45___ge__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__45___ge__) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_components);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 561;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_1 = par_other;
tmp_return_value = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 561;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__45___ge__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__45___ge__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__45___ge__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__45___ge__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__45___ge__ == cache_frame_frame_pyasn1$type$base$$$function__45___ge__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__45___ge__);
    cache_frame_frame_pyasn1$type$base$$$function__45___ge__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__45___ge__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__46___bool__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__46___bool__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__46___bool__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__46___bool__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__46___bool__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__46___bool__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__46___bool__ = MAKE_FUNCTION_FRAME(tstate, code_objects_25c56f0f250f49683cb8b523eebab8f6, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__46___bool__->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__46___bool__ = cache_frame_frame_pyasn1$type$base$$$function__46___bool__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__46___bool__);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__46___bool__) == 2);

// Framed code:
{
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_components);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 564;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 564;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__46___bool__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__46___bool__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__46___bool__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__46___bool__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__46___bool__ == cache_frame_frame_pyasn1$type$base$$$function__46___bool__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__46___bool__);
    cache_frame_frame_pyasn1$type$base$$$function__46___bool__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__46___bool__);

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


static PyObject *impl_pyasn1$type$base$$$function__47_components(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__47_components;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__47_components = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__47_components)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__47_components);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__47_components == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__47_components = MAKE_FUNCTION_FRAME(tstate, code_objects_323b81b15009f45d670ccd98bf10fe23, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__47_components->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__47_components = cache_frame_frame_pyasn1$type$base$$$function__47_components;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__47_components);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__47_components) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_pyasn1$type$base$error(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 568;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$type$base$$$function__47_components->m_frame.f_lineno = 568;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_PyAsn1Error,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_912f25fd6aba67f848e283f306029958_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 568;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 568;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 568;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__47_components, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__47_components->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__47_components, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__47_components,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__47_components == cache_frame_frame_pyasn1$type$base$$$function__47_components) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__47_components);
    cache_frame_frame_pyasn1$type$base$$$function__47_components = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__47_components);

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

}


static PyObject *impl_pyasn1$type$base$$$function__49_clone(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_kwargs = python_pars[1];
PyObject *var_cloneValueFlag = NULL;
PyObject *var_initializers = NULL;
PyObject *var_clone = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__49_clone;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__49_clone = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_key_value_1 = mod_consts.const_str_plain_cloneValueFlag;
tmp_default_value_1 = Py_False;
tmp_assign_source_1 = DICT_POP3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
assert(!(tmp_assign_source_1 == NULL));
assert(var_cloneValueFlag == NULL);
var_cloneValueFlag = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__49_clone)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__49_clone);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__49_clone == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__49_clone = MAKE_FUNCTION_FRAME(tstate, code_objects_7ddb0fb68125f19bff641e8b89386b9a, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__49_clone->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__49_clone = cache_frame_frame_pyasn1$type$base$$$function__49_clone;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__49_clone);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__49_clone) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_readOnly);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 598;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 598;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$type$base$$$function__49_clone->m_frame.f_lineno = 598;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 598;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_initializers == NULL);
var_initializers = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_initializers);
tmp_expression_value_3 = var_initializers;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_update);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 599;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwargs);
tmp_args_element_value_1 = par_kwargs;
frame_frame_pyasn1$type$base$$$function__49_clone->m_frame.f_lineno = 599;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 599;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_direct_call_arg2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_4);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 601;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_initializers);
tmp_direct_call_arg2_1 = var_initializers;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_3 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 601;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_clone == NULL);
var_clone = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_cloneValueFlag);
tmp_truth_name_1 = CHECK_IF_TRUE(var_cloneValueFlag);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 603;
type_description_1 = "ooooo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_clone);
tmp_args_element_value_2 = var_clone;
CHECK_OBJECT(var_cloneValueFlag);
tmp_args_element_value_3 = var_cloneValueFlag;
frame_frame_pyasn1$type$base$$$function__49_clone->m_frame.f_lineno = 604;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__cloneComponentValues,
        call_args
    );
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 604;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__49_clone, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__49_clone->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__49_clone, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__49_clone,
    type_description_1,
    par_self,
    par_kwargs,
    var_cloneValueFlag,
    var_initializers,
    var_clone
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__49_clone == cache_frame_frame_pyasn1$type$base$$$function__49_clone) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__49_clone);
    cache_frame_frame_pyasn1$type$base$$$function__49_clone = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__49_clone);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_clone);
tmp_return_value = var_clone;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cloneValueFlag);
CHECK_OBJECT(var_cloneValueFlag);
Py_DECREF(var_cloneValueFlag);
var_cloneValueFlag = NULL;
CHECK_OBJECT(var_initializers);
CHECK_OBJECT(var_initializers);
Py_DECREF(var_initializers);
var_initializers = NULL;
CHECK_OBJECT(var_clone);
CHECK_OBJECT(var_clone);
Py_DECREF(var_clone);
var_clone = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_cloneValueFlag);
CHECK_OBJECT(var_cloneValueFlag);
Py_DECREF(var_cloneValueFlag);
var_cloneValueFlag = NULL;
Py_XDECREF(var_initializers);
var_initializers = NULL;
Py_XDECREF(var_clone);
var_clone = NULL;
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
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__50_subtype(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_kwargs = python_pars[1];
PyObject *var_initializers = NULL;
PyObject *var_cloneValueFlag = NULL;
PyObject *var_implicitTag = NULL;
PyObject *var_explicitTag = NULL;
PyObject *var_arg = NULL;
PyObject *var_option = NULL;
PyObject *var_clone = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_inplace_assign_subscript_1__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__50_subtype;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__50_subtype = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__50_subtype)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__50_subtype);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__50_subtype == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__50_subtype = MAKE_FUNCTION_FRAME(tstate, code_objects_c4351365c7c95eed4d994d1d5e677a67, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__50_subtype->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__50_subtype = cache_frame_frame_pyasn1$type$base$$$function__50_subtype;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__50_subtype);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__50_subtype) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_readOnly);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$type$base$$$function__50_subtype->m_frame.f_lineno = 650;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_initializers == NULL);
var_initializers = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_key_value_1 = mod_consts.const_str_plain_cloneValueFlag;
tmp_default_value_1 = Py_False;
tmp_assign_source_2 = DICT_POP3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
assert(!(tmp_assign_source_2 == NULL));
assert(var_cloneValueFlag == NULL);
var_cloneValueFlag = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_3 = par_kwargs;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_pop);
assert(!(tmp_called_value_2 == NULL));
frame_frame_pyasn1$type$base$$$function__50_subtype->m_frame.f_lineno = 654;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_implicitTag_none_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 654;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_implicitTag == NULL);
var_implicitTag = tmp_assign_source_3;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_implicitTag);
tmp_cmp_expr_left_1 = var_implicitTag;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_tagSet);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_implicitTag);
tmp_args_element_value_1 = var_implicitTag;
frame_frame_pyasn1$type$base$$$function__50_subtype->m_frame.f_lineno = 656;
tmp_ass_subvalue_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_tagImplicitly, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_initializers);
tmp_ass_subscribed_1 = var_initializers;
tmp_ass_subscript_1 = mod_consts.const_str_plain_tagSet;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_5 = par_kwargs;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_pop);
assert(!(tmp_called_value_3 == NULL));
frame_frame_pyasn1$type$base$$$function__50_subtype->m_frame.f_lineno = 658;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_explicitTag_none_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 658;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_explicitTag == NULL);
var_explicitTag = tmp_assign_source_4;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_explicitTag);
tmp_cmp_expr_left_2 = var_explicitTag;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_tagSet);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_explicitTag);
tmp_args_element_value_2 = var_explicitTag;
frame_frame_pyasn1$type$base$$$function__50_subtype->m_frame.f_lineno = 660;
tmp_ass_subvalue_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_tagExplicitly, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_initializers);
tmp_ass_subscribed_2 = var_initializers;
tmp_ass_subscript_2 = mod_consts.const_str_plain_tagSet;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_7 = par_kwargs;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_items);
assert(!(tmp_called_value_4 == NULL));
frame_frame_pyasn1$type$base$$$function__50_subtype->m_frame.f_lineno = 662;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 662;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 662;
type_description_1 = "ooooooooo";
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
type_description_1 = "ooooooooo";
exception_lineno = 662;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 662;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 662;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 662;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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



exception_lineno = 662;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_arg;
    var_arg = tmp_assign_source_10;
    Py_INCREF(var_arg);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_option;
    var_option = tmp_assign_source_11;
    Py_INCREF(var_option);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_12;
if (var_initializers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_initializers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 663;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_assign_source_12 = var_initializers;
{
    PyObject *old = tmp_inplace_assign_subscript_1__target;
    tmp_inplace_assign_subscript_1__target = tmp_assign_source_12;
    Py_INCREF(tmp_inplace_assign_subscript_1__target);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(var_arg);
tmp_assign_source_13 = var_arg;
{
    PyObject *old = tmp_inplace_assign_subscript_1__subscript;
    tmp_inplace_assign_subscript_1__subscript = tmp_assign_source_13;
    Py_INCREF(tmp_inplace_assign_subscript_1__subscript);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_8 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_subscript_value_1 = tmp_inplace_assign_subscript_1__subscript;
tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 663;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__value;
    tmp_inplace_assign_subscript_1__value = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(var_option);
tmp_iadd_expr_right_1 = var_option;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 663;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_15 = tmp_iadd_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_15;

}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ass_subvalue_3 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_ass_subscribed_3 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_ass_subscript_3 = tmp_inplace_assign_subscript_1__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 663;
type_description_1 = "ooooooooo";
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

CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
Py_DECREF(tmp_inplace_assign_subscript_1__subscript);
tmp_inplace_assign_subscript_1__subscript = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
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
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 662;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
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
try_end_4:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_direct_call_arg2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_9);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 665;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (var_initializers == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_initializers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 665;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg2_1 = var_initializers;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_16 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 665;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_clone == NULL);
var_clone = tmp_assign_source_16;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
CHECK_OBJECT(var_cloneValueFlag);
tmp_truth_name_1 = CHECK_IF_TRUE(var_cloneValueFlag);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 667;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
CHECK_OBJECT(var_clone);
tmp_args_element_value_3 = var_clone;
CHECK_OBJECT(var_cloneValueFlag);
tmp_args_element_value_4 = var_cloneValueFlag;
frame_frame_pyasn1$type$base$$$function__50_subtype->m_frame.f_lineno = 668;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain__cloneComponentValues,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 668;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__50_subtype, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__50_subtype->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__50_subtype, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__50_subtype,
    type_description_1,
    par_self,
    par_kwargs,
    var_initializers,
    var_cloneValueFlag,
    var_implicitTag,
    var_explicitTag,
    var_arg,
    var_option,
    var_clone
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__50_subtype == cache_frame_frame_pyasn1$type$base$$$function__50_subtype) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__50_subtype);
    cache_frame_frame_pyasn1$type$base$$$function__50_subtype = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__50_subtype);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_clone);
tmp_return_value = var_clone;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_initializers);
var_initializers = NULL;
CHECK_OBJECT(var_cloneValueFlag);
CHECK_OBJECT(var_cloneValueFlag);
Py_DECREF(var_cloneValueFlag);
var_cloneValueFlag = NULL;
CHECK_OBJECT(var_implicitTag);
CHECK_OBJECT(var_implicitTag);
Py_DECREF(var_implicitTag);
var_implicitTag = NULL;
CHECK_OBJECT(var_explicitTag);
CHECK_OBJECT(var_explicitTag);
Py_DECREF(var_explicitTag);
var_explicitTag = NULL;
Py_XDECREF(var_arg);
var_arg = NULL;
Py_XDECREF(var_option);
var_option = NULL;
CHECK_OBJECT(var_clone);
CHECK_OBJECT(var_clone);
Py_DECREF(var_clone);
var_clone = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_initializers);
var_initializers = NULL;
Py_XDECREF(var_cloneValueFlag);
var_cloneValueFlag = NULL;
Py_XDECREF(var_implicitTag);
var_implicitTag = NULL;
Py_XDECREF(var_explicitTag);
var_explicitTag = NULL;
Py_XDECREF(var_arg);
var_arg = NULL;
Py_XDECREF(var_option);
var_option = NULL;
Py_XDECREF(var_clone);
var_clone = NULL;
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
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__51_getComponentByPosition(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_idx = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition = MAKE_FUNCTION_FRAME(tstate, code_objects_d52080ceef24178c6c2666d4aaa30a6d, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition = cache_frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_pyasn1$type$base$error(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 673;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition->m_frame.f_lineno = 673;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_PyAsn1Error,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_912f25fd6aba67f848e283f306029958_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 673;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 673;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 673;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition,
    type_description_1,
    par_self,
    par_idx
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition == cache_frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition);
    cache_frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__51_getComponentByPosition);

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
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_pyasn1$type$base$$$function__52_setComponentByPosition(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_idx = python_pars[1];
PyObject *par_value = python_pars[2];
PyObject *par_verifyConstraints = python_pars[3];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition = MAKE_FUNCTION_FRAME(tstate, code_objects_c2827e864228e9e810b7fd32b70ec430, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition = cache_frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_pyasn1$type$base$error(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 676;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition->m_frame.f_lineno = 676;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_PyAsn1Error,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_912f25fd6aba67f848e283f306029958_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 676;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 676;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 676;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition,
    type_description_1,
    par_self,
    par_idx,
    par_value,
    par_verifyConstraints
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition == cache_frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition);
    cache_frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__52_setComponentByPosition);

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
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_verifyConstraints);
Py_DECREF(par_verifyConstraints);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_pyasn1$type$base$$$function__53_setComponents(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_idx = NULL;
PyObject *var_value = NULL;
PyObject *var_k = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__53_setComponents;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__53_setComponents = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__53_setComponents)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__53_setComponents);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__53_setComponents == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__53_setComponents = MAKE_FUNCTION_FRAME(tstate, code_objects_e97f48a133ab4df3450617b67c3dbadd, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__53_setComponents->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__53_setComponents = cache_frame_frame_pyasn1$type$base$$$function__53_setComponents;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__53_setComponents);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__53_setComponents) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(par_args);
tmp_args_element_value_1 = par_args;
frame_frame_pyasn1$type$base$$$function__53_setComponents->m_frame.f_lineno = 679;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 679;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 679;
type_description_1 = "oooooo";
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
type_description_1 = "oooooo";
exception_lineno = 679;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 679;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    Py_XDECREF(old);
}

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



exception_lineno = 679;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 679;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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



exception_lineno = 679;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_idx;
    var_idx = tmp_assign_source_6;
    Py_INCREF(var_idx);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_value;
    var_value = tmp_assign_source_7;
    Py_INCREF(var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_value);
tmp_ass_subvalue_1 = var_value;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 680;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_ass_subscribed_1 = par_self;
CHECK_OBJECT(var_idx);
tmp_ass_subscript_1 = var_idx;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 680;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 679;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(par_kwargs);
tmp_iter_arg_3 = par_kwargs;
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 681;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_8;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_9 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 681;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_10 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_k;
    var_k = tmp_assign_source_10;
    Py_INCREF(var_k);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
CHECK_OBJECT(var_k);
tmp_key_value_1 = var_k;
tmp_ass_subvalue_2 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 682;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
if (par_self == NULL) {
Py_DECREF(tmp_ass_subvalue_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 682;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}

tmp_ass_subscribed_2 = par_self;
CHECK_OBJECT(var_k);
tmp_ass_subscript_2 = var_k;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 682;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 681;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 683;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = par_self;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__53_setComponents, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__53_setComponents->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__53_setComponents, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__53_setComponents,
    type_description_1,
    par_self,
    par_args,
    par_kwargs,
    var_idx,
    var_value,
    var_k
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__53_setComponents == cache_frame_frame_pyasn1$type$base$$$function__53_setComponents) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__53_setComponents);
    cache_frame_frame_pyasn1$type$base$$$function__53_setComponents = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__53_setComponents);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_idx);
var_idx = NULL;
Py_XDECREF(var_value);
var_value = NULL;
Py_XDECREF(var_k);
var_k = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_idx);
var_idx = NULL;
Py_XDECREF(var_value);
var_value = NULL;
Py_XDECREF(var_k);
var_k = NULL;
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


static PyObject *impl_pyasn1$type$base$$$function__55_getComponentType(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__55_getComponentType;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__55_getComponentType = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__55_getComponentType)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__55_getComponentType);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__55_getComponentType == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__55_getComponentType = MAKE_FUNCTION_FRAME(tstate, code_objects_dae908074619fd61a818035777478d47, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__55_getComponentType->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__55_getComponentType = cache_frame_frame_pyasn1$type$base$$$function__55_getComponentType;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__55_getComponentType);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__55_getComponentType) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_componentType);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 691;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__55_getComponentType, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__55_getComponentType->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__55_getComponentType, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__55_getComponentType,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__55_getComponentType == cache_frame_frame_pyasn1$type$base$$$function__55_getComponentType) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__55_getComponentType);
    cache_frame_frame_pyasn1$type$base$$$function__55_getComponentType = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__55_getComponentType);

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


static PyObject *impl_pyasn1$type$base$$$function__56_verifySizeSpec(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec = MAKE_FUNCTION_FRAME(tstate, code_objects_8d1e7538b330e9d0f538b6b4b91b1d5a, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec->m_type_description == NULL);
frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec = cache_frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec->m_frame.f_lineno = 695;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_subtypeSpec, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 695;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec == cache_frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec);
    cache_frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$base$$$function__56_verifySizeSpec);

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



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__10_isNoValue(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__10_isNoValue,
        mod_consts.const_str_plain_isNoValue,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3fd3b74c0c60339ddeba8fbe78b14094,
#endif
        code_objects_cc066492b352784f7cad50302798d9ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__11_prettyPrint(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__11_prettyPrint,
        mod_consts.const_str_plain_prettyPrint,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_28e92030f38ede8dc04137e8149156fc,
#endif
        code_objects_297fcaa8fee1bddc48dbc53efe1aa801,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__12_getTagSet(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__12_getTagSet,
        mod_consts.const_str_plain_getTagSet,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c4bfdfb6b620afc0706808999fcc80dd,
#endif
        code_objects_a93825bc9f69cd37a78c30f491281ea3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__13_getEffectiveTagSet(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__13_getEffectiveTagSet,
        mod_consts.const_str_plain_getEffectiveTagSet,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_56d87c8e82628a68f812ffc594c3b86e,
#endif
        code_objects_2b3f5943605b53a6068aec19f1078143,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__14_getTagMap(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__14_getTagMap,
        mod_consts.const_str_plain_getTagMap,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e9515d68978008d1d8a08571c1e90c8e,
#endif
        code_objects_7f6f266626fb56a55c73133d724e96ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__15_getSubtypeSpec(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__15_getSubtypeSpec,
        mod_consts.const_str_plain_getSubtypeSpec,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0cb75a91d03754e279bf746a87669293,
#endif
        code_objects_1bef87dc94f6bb6eb0962e12c865df4d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__16_hasValue(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__16_hasValue,
        mod_consts.const_str_plain_hasValue,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_562c034c364b6bc38db81d1c73ef0b75,
#endif
        code_objects_613680add9ae4dc93fcceea7c99e0237,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__17___new__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__17___new__,
        mod_consts.const_str_plain___new__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2bcc3713f84ac1872285603998784447,
#endif
        code_objects_07dd8ae02177c60661154f9d877c8f98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug,
        mod_consts.const_str_plain_getPlug,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_30957f33f252f0de89086f74557ea638,
#endif
        code_objects_76e325bcf793c63e7da104c1c7f8f3d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug,
        mod_consts.const_str_plain_plug,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8f2ceb00ecd45cd57aff3166c0dbf7e9,
#endif
        code_objects_5100151c054e75a9a4455b53a555d974,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__18___getattr__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__18___getattr__,
        mod_consts.const_str_plain___getattr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_afee2d7ad719eb343c22ebfdef2229d0,
#endif
        code_objects_127508891550a3695c53768ff986668b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__19___repr__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__19___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_69e2554ddd05178c2e380adb452d03d2,
#endif
        code_objects_5b1691298c999fd62a313017917df736,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__1_getTypeId(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__1_getTypeId,
        mod_consts.const_str_plain_getTypeId,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d2ffbca1cfac700d8b376f75a1d09cd8,
#endif
        code_objects_65de7d0f85363113f62d80a923a1dc28,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__20___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__20___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_13e8b070de5860164d29de9ff1f8da29,
#endif
        code_objects_bc79ada1fcaa178fa68a04cd4d95a450,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__21___repr__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__21___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_21a29b971ad90d87bf918c4ca3615b3e,
#endif
        code_objects_3706d24a19904e115826fc8fbeb3909c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__22___eq__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__22___eq__,
        mod_consts.const_str_plain___eq__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b6141dfa210a6fce5b72ac8fa7f05244,
#endif
        code_objects_74a07b5f5c88ff3e7064b14ca0e8c741,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__23___ne__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__23___ne__,
        mod_consts.const_str_plain___ne__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_22b763c4459c5492df33f5752ba36398,
#endif
        code_objects_4fc9c2738f1e852ff07e22b0fee16438,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__24___lt__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__24___lt__,
        mod_consts.const_str_plain___lt__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8d565a5a716f2628d3dc3ac8c7e4d8e1,
#endif
        code_objects_bc92b65d9d282b893b288aa4e01fc044,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__25___le__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__25___le__,
        mod_consts.const_str_plain___le__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_74f22bfaee1d472f61ec90db4b1caf63,
#endif
        code_objects_4580e974a8473ec27bdf1aacec06ff48,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__26___gt__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__26___gt__,
        mod_consts.const_str_plain___gt__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b00ff013e887d89d69f3fb6bb6571c9a,
#endif
        code_objects_380700bb51f154366374055813b12d46,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__27___ge__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__27___ge__,
        mod_consts.const_str_plain___ge__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_01bf47cd25063307b75d4a44774048bf,
#endif
        code_objects_cda026c2afbd44a824f366c6af996a39,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__28___bool__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__28___bool__,
        mod_consts.const_str_plain___bool__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5636dcefc3c18e1ea2f5406511c1648a,
#endif
        code_objects_7d86c8954d9df28f36913f5be47ee01b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__29___hash__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__29___hash__,
        mod_consts.const_str_plain___hash__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_db5a8b782c296a88c7c662e60e29f9b1,
#endif
        code_objects_cfd002f2896327bff06991e0459489c2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__2___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b7397b06ee6871c5f1e8c503e66f01a9,
#endif
        code_objects_2dbde14c451f72ed5fec539f6aeb5c55,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__30_isValue(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__30_isValue,
        mod_consts.const_str_plain_isValue,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_da26e09915bf4b7a6ee09d9c4704dbf0,
#endif
        code_objects_44f78e75f8d3d36006d4086b4e6bd14c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        mod_consts.const_str_digest_68bc778b283de03054654d1c054726ef,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__31_clone(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__31_clone,
        mod_consts.const_str_plain_clone,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_caa76983be6269b6306d29a53d8efaad,
#endif
        code_objects_5b0c91f5a776e2619e383a32f0a0b71e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        mod_consts.const_str_digest_e4f85a65d1f764faa5d97521b803e11c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__32_subtype(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__32_subtype,
        mod_consts.const_str_plain_subtype,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b8b942d8a9a7c75fe5855f55e0394142,
#endif
        code_objects_b3322e4d946c76dab061f29eea36395d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        mod_consts.const_str_digest_9f1aed26cd817db1dc177d91f0dfb283,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__33_prettyIn(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__33_prettyIn,
        mod_consts.const_str_plain_prettyIn,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8130ca846a6eebb70d968ff6b815c77f,
#endif
        code_objects_d4e95d41bd94b13dc4bd80d37979326f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__34_prettyOut(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__34_prettyOut,
        mod_consts.const_str_plain_prettyOut,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d3243cb0900bd84d32a601d13b6e37e1,
#endif
        code_objects_de7b2e4eaf8e8324e5fce58aabcb59a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__35_prettyPrint(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__35_prettyPrint,
        mod_consts.const_str_plain_prettyPrint,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f30138e8a578a0813b1b0b4794aa0434,
#endif
        code_objects_96cd4874911cf4013c9e794bd02fe2f3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__36_prettyPrintType(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__36_prettyPrintType,
        mod_consts.const_str_plain_prettyPrintType,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2961c9280852cf4249253049624efde5,
#endif
        code_objects_2445b67d392d9956e489e1126492e764,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__37___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__37___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8037e9c3bf77694dd92ee116ed23db5c,
#endif
        code_objects_c6927230c1e0eb65ae30c4e8d863b312,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__38__moveSizeSpec(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__38__moveSizeSpec,
        mod_consts.const_str_plain__moveSizeSpec,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_38a65c5a064da0b8e779952dd5b9a257,
#endif
        code_objects_2f2f86f0e2efe2b04a84418a77a83875,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__39___repr__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__39___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3902df23ba424fa915d6f858bb0b971e,
#endif
        code_objects_b17ec7eae80a5adcd88f5fc71b6112f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__3___setattr__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__3___setattr__,
        mod_consts.const_str_plain___setattr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bf5c112b4238b31e27e208baafe58e43,
#endif
        code_objects_25855176615b9143131d5d2f7c76f443,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__40___eq__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__40___eq__,
        mod_consts.const_str_plain___eq__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c177a0197b46badff79b847c4f69c6a1,
#endif
        code_objects_16297c4de5de4f7a4eb437426747fa83,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__41___ne__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__41___ne__,
        mod_consts.const_str_plain___ne__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_006879b6eadb54790648c51d7439a4c7,
#endif
        code_objects_587f72cdc075e73a6b1e3e0b8b4c11e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__42___lt__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__42___lt__,
        mod_consts.const_str_plain___lt__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b6af15069dead1af45c201089a5f3a9a,
#endif
        code_objects_bfbb874ddf59b6bd2fdb2aff12b462aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__43___le__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__43___le__,
        mod_consts.const_str_plain___le__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4e064f04759c5d264ee6414218df9295,
#endif
        code_objects_26e8fe3c31978af94f59302abd92a924,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__44___gt__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__44___gt__,
        mod_consts.const_str_plain___gt__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e02ae3a28158189e89e5b6509c998a83,
#endif
        code_objects_60c63bd478cf1be8d7f0b1c1082f5e52,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__45___ge__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__45___ge__,
        mod_consts.const_str_plain___ge__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7684a6b663f5bade1eab7395edb91cb2,
#endif
        code_objects_57d459dbaa8b19d6d3793955d65f5558,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__46___bool__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__46___bool__,
        mod_consts.const_str_plain___bool__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_702b314938d751deda54641e9fee897a,
#endif
        code_objects_25c56f0f250f49683cb8b523eebab8f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__47_components(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__47_components,
        mod_consts.const_str_plain_components,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_65a537976c9f497883af6e044ec36825,
#endif
        code_objects_323b81b15009f45d670ccd98bf10fe23,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__48__cloneComponentValues(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain__cloneComponentValues,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_87ed86ecf0bc5818b2e00fe6e937e5ff,
#endif
        code_objects_aedf29feee4723c4f9e35551c226390a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__49_clone(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__49_clone,
        mod_consts.const_str_plain_clone,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ee75ed76cc525ed54a4b42a1cd2a02aa,
#endif
        code_objects_7ddb0fb68125f19bff641e8b89386b9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        mod_consts.const_str_digest_a72080dfab0326c34281f62539c49802,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__4___str__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__4___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_479af466ccf6c568166b0be40bb97d3e,
#endif
        code_objects_d975ef6256c1d4d85fd000a2dc39d820,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__50_subtype(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__50_subtype,
        mod_consts.const_str_plain_subtype,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2a5a9334a48532d42aa195840856ac5f,
#endif
        code_objects_c4351365c7c95eed4d994d1d5e677a67,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        mod_consts.const_str_digest_670fb5ce85bf4117ec044fc06488a941,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__51_getComponentByPosition(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__51_getComponentByPosition,
        mod_consts.const_str_plain_getComponentByPosition,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f797838e5677c79e8443b501ef63a41a,
#endif
        code_objects_d52080ceef24178c6c2666d4aaa30a6d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__52_setComponentByPosition(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__52_setComponentByPosition,
        mod_consts.const_str_plain_setComponentByPosition,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_27ed57b208946e6338d235baeab1c235,
#endif
        code_objects_c2827e864228e9e810b7fd32b70ec430,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__53_setComponents(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__53_setComponents,
        mod_consts.const_str_plain_setComponents,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_74a85122ea6d44c5b5518c2c89c27768,
#endif
        code_objects_e97f48a133ab4df3450617b67c3dbadd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__54_setDefaultComponents(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_setDefaultComponents,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c8036242d389b1b583b160c94a9860f9,
#endif
        code_objects_6eead527713938223f3efc0803cf7d29,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__55_getComponentType(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__55_getComponentType,
        mod_consts.const_str_plain_getComponentType,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0799f1404ff839a6a8afa01b4d6c74b9,
#endif
        code_objects_dae908074619fd61a818035777478d47,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__56_verifySizeSpec(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__56_verifySizeSpec,
        mod_consts.const_str_plain_verifySizeSpec,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3e959df39279298218f708728d4bf01d,
#endif
        code_objects_8d1e7538b330e9d0f538b6b4b91b1d5a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__5_readOnly(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__5_readOnly,
        mod_consts.const_str_plain_readOnly,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b711a4dfa6c9e91369500776a246e70c,
#endif
        code_objects_8f9d2ff42336af0ff368a93ebc827425,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__6_effectiveTagSet(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__6_effectiveTagSet,
        mod_consts.const_str_plain_effectiveTagSet,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_67cfcff118166bc2fd1130b14440f4fd,
#endif
        code_objects_aac742308f93edb7c409eb46b2d16738,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        mod_consts.const_str_digest_d7ffcbf8c581aa79fd1a6e603083769b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__7_tagMap(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__7_tagMap,
        mod_consts.const_str_plain_tagMap,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_90a99d8ac8006e67cca2f9efb62f0186,
#endif
        code_objects_a46b4c85caa26307a1a902ac7d0b29ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        mod_consts.const_str_digest_993e78b2909c3a130413926bf1e1b7fc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__8_isSameTypeWith(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__8_isSameTypeWith,
        mod_consts.const_str_plain_isSameTypeWith,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8917c152b0f7b058f95c511af9d3f57d,
#endif
        code_objects_cbfe98247f117abecb07c53d2dac8bcc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        mod_consts.const_str_digest_1bf805aa0ed33abb736eb92a430f3a11,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__9_isSuperTypeOf(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__9_isSuperTypeOf,
        mod_consts.const_str_plain_isSuperTypeOf,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8af92183ab6cced5c7e537ab6024c743,
#endif
        code_objects_9f01e962f3fc25c3c1e1e67ca839adb3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        mod_consts.const_str_digest_707b8f3b29a30c1b7d6c31442b24e956,
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

static function_impl_code const function_table_pyasn1$type$base[] = {
impl_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug,
impl_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug,
impl_pyasn1$type$base$$$function__1_getTypeId,
impl_pyasn1$type$base$$$function__2___init__,
impl_pyasn1$type$base$$$function__3___setattr__,
impl_pyasn1$type$base$$$function__4___str__,
impl_pyasn1$type$base$$$function__5_readOnly,
impl_pyasn1$type$base$$$function__6_effectiveTagSet,
impl_pyasn1$type$base$$$function__7_tagMap,
impl_pyasn1$type$base$$$function__8_isSameTypeWith,
impl_pyasn1$type$base$$$function__9_isSuperTypeOf,
impl_pyasn1$type$base$$$function__10_isNoValue,
impl_pyasn1$type$base$$$function__11_prettyPrint,
impl_pyasn1$type$base$$$function__12_getTagSet,
impl_pyasn1$type$base$$$function__13_getEffectiveTagSet,
impl_pyasn1$type$base$$$function__14_getTagMap,
impl_pyasn1$type$base$$$function__15_getSubtypeSpec,
impl_pyasn1$type$base$$$function__16_hasValue,
impl_pyasn1$type$base$$$function__17___new__,
impl_pyasn1$type$base$$$function__18___getattr__,
impl_pyasn1$type$base$$$function__19___repr__,
impl_pyasn1$type$base$$$function__20___init__,
impl_pyasn1$type$base$$$function__21___repr__,
impl_pyasn1$type$base$$$function__22___eq__,
impl_pyasn1$type$base$$$function__23___ne__,
impl_pyasn1$type$base$$$function__24___lt__,
impl_pyasn1$type$base$$$function__25___le__,
impl_pyasn1$type$base$$$function__26___gt__,
impl_pyasn1$type$base$$$function__27___ge__,
impl_pyasn1$type$base$$$function__28___bool__,
impl_pyasn1$type$base$$$function__29___hash__,
impl_pyasn1$type$base$$$function__30_isValue,
impl_pyasn1$type$base$$$function__31_clone,
impl_pyasn1$type$base$$$function__32_subtype,
impl_pyasn1$type$base$$$function__33_prettyIn,
impl_pyasn1$type$base$$$function__34_prettyOut,
impl_pyasn1$type$base$$$function__35_prettyPrint,
impl_pyasn1$type$base$$$function__36_prettyPrintType,
impl_pyasn1$type$base$$$function__37___init__,
impl_pyasn1$type$base$$$function__38__moveSizeSpec,
impl_pyasn1$type$base$$$function__39___repr__,
impl_pyasn1$type$base$$$function__40___eq__,
impl_pyasn1$type$base$$$function__41___ne__,
impl_pyasn1$type$base$$$function__42___lt__,
impl_pyasn1$type$base$$$function__43___le__,
impl_pyasn1$type$base$$$function__44___gt__,
impl_pyasn1$type$base$$$function__45___ge__,
impl_pyasn1$type$base$$$function__46___bool__,
impl_pyasn1$type$base$$$function__47_components,
impl_pyasn1$type$base$$$function__49_clone,
impl_pyasn1$type$base$$$function__50_subtype,
impl_pyasn1$type$base$$$function__51_getComponentByPosition,
impl_pyasn1$type$base$$$function__52_setComponentByPosition,
impl_pyasn1$type$base$$$function__53_setComponents,
impl_pyasn1$type$base$$$function__55_getComponentType,
impl_pyasn1$type$base$$$function__56_verifySizeSpec,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pyasn1$type$base);
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
        module_pyasn1$type$base,
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
        function_table_pyasn1$type$base,
        sizeof(function_table_pyasn1$type$base) / sizeof(function_impl_code)
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
static char const *module_full_name = "pyasn1.type.base";
#endif

// Internal entry point for module code.
PyObject *module_code_pyasn1$type$base(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyasn1$type$base");

    // Store the module for future use.
    module_pyasn1$type$base = module;

    moduledict_pyasn1$type$base = MODULE_DICT(module_pyasn1$type$base);

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
        PRINT_STRING("pyasn1$type$base: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyasn1$type$base: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyasn1$type$base: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pyasn1.type.base" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpyasn1$type$base\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyasn1$type$base,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyasn1$type$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyasn1$type$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$type$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$type$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyasn1$type$base);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyasn1$type$base);
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

        UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
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
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_pyasn1$type$base$$$class__1_Asn1Item_18 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$class__1_Asn1Item_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_pyasn1$type$base$$$class__2_Asn1Type_28 = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$class__2_Asn1Type_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_pyasn1$type$base$$$class__3_NoValue_167 = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$class__3_NoValue_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244 = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$class__4_SimpleAsn1Type_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477 = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$base$$$class__5_ConstructedAsn1Type_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pyasn1$type$base = MAKE_MODULE_FRAME(code_objects_4ade62603eb1e11a68b75b2bab96371e, module_pyasn1$type$base);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base);
assert(Py_REFCNT(frame_frame_pyasn1$type$base) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_pyasn1$type$base$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_pyasn1$type$base$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_pyasn1;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pyasn1$type$base;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_error_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_pyasn1$type$base->m_frame.f_lineno = 9;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
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
        (PyObject *)moduledict_pyasn1$type$base,
        mod_consts.const_str_plain_error,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_error);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_error, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_7c8c58049edd248f8b1cb370445e702c;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pyasn1$type$base;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_constraint_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_pyasn1$type$base->m_frame.f_lineno = 10;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
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
        (PyObject *)moduledict_pyasn1$type$base,
        mod_consts.const_str_plain_constraint,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_constraint);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_constraint, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_7c8c58049edd248f8b1cb370445e702c;
tmp_globals_arg_value_3 = (PyObject *)moduledict_pyasn1$type$base;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_tag_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_pyasn1$type$base->m_frame.f_lineno = 11;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pyasn1$type$base,
        mod_consts.const_str_plain_tag,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_tag);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_tag, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_7c8c58049edd248f8b1cb370445e702c;
tmp_globals_arg_value_4 = (PyObject *)moduledict_pyasn1$type$base;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_tagmap_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_pyasn1$type$base->m_frame.f_lineno = 12;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_pyasn1$type$base,
        mod_consts.const_str_plain_tagmap,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_tagmap);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_tagmap, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_LIST4(tstate, mod_consts.const_list_1b471c5b1be76fede456fcb114a6c3cd_list);
UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_object_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_10 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
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


exception_lineno = 18;

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


exception_lineno = 18;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_12 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_12;
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


exception_lineno = 18;

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
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_Asn1Item;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pyasn1$type$base->m_frame.f_lineno = 18;
tmp_assign_source_13 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_13;
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


exception_lineno = 18;

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
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_5, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

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


exception_lineno = 18;

    goto try_except_handler_1;
}
frame_frame_pyasn1$type$base->m_frame.f_lineno = 18;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 18;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_14;
}
branch_end_1:;
{
PyObject *tmp_assign_source_15;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_pyasn1$type$base$$$class__1_Asn1Item_18 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_2ecce58f9742a3991bee3244156d0cb2;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__1_Asn1Item_18, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_Asn1Item;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__1_Asn1Item_18, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_18;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__1_Asn1Item_18, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
frame_frame_pyasn1$type$base$$$class__1_Asn1Item_2 = MAKE_CLASS_FRAME(tstate, code_objects_4308c942c1bbd0f80f67f0934557ffbf, module_pyasn1$type$base, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$class__1_Asn1Item_2);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$class__1_Asn1Item_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_defaults_1;
tmp_called_value_2 = PyObject_GetItem(locals_pyasn1$type$base$$$class__1_Asn1Item_18, const_str_plain_classmethod);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_defaults_1 = mod_consts.const_tuple_int_pos_1_tuple;
Py_INCREF(tmp_defaults_1);

tmp_args_element_value_1 = MAKE_FUNCTION_pyasn1$type$base$$$function__1_getTypeId(tstate, tmp_defaults_1);

frame_frame_pyasn1$type$base$$$class__1_Asn1Item_2->m_frame.f_lineno = 19;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__1_Asn1Item_18, mod_consts.const_str_plain_getTypeId, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$class__1_Asn1Item_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$class__1_Asn1Item_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$class__1_Asn1Item_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$class__1_Asn1Item_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_pyasn1$type$base$$$class__1_Asn1Item_2);

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
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__1_Asn1Item_18, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

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


exception_lineno = 18;

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
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__1_Asn1Item_18, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_3 = mod_consts.const_str_plain_Asn1Item;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = locals_pyasn1$type$base$$$class__1_Asn1Item_18;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pyasn1$type$base->m_frame.f_lineno = 18;
tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_16;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_15 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_15);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_pyasn1$type$base$$$class__1_Asn1Item_18);
locals_pyasn1$type$base$$$class__1_Asn1Item_18 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyasn1$type$base$$$class__1_Asn1Item_18);
locals_pyasn1$type$base$$$class__1_Asn1Item_18 = NULL;
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
exception_lineno = 18;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_Asn1Item, tmp_assign_source_15);
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
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = module_var_accessor_pyasn1$type$base$Asn1Item(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Asn1Item);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto try_except_handler_4;
}
tmp_assign_source_17 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_17, 0, tmp_tuple_element_4);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_18 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_4;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_7 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_4;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_4;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_20 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_20;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_4;
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
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_4;
}
tmp_tuple_element_5 = mod_consts.const_str_plain_Asn1Type;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_pyasn1$type$base->m_frame.f_lineno = 28;
tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_21;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_4;
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
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_6, tmp_default_value_2);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_4;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_4;
}
frame_frame_pyasn1$type$base->m_frame.f_lineno = 28;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 28;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_22;
}
branch_end_4:;
{
PyObject *tmp_assign_source_23;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_pyasn1$type$base$$$class__2_Asn1Type_28 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_2ecce58f9742a3991bee3244156d0cb2;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_3f0b6c89013617f21d45794221f3853b;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_Asn1Type;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_28;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_6;
}
frame_frame_pyasn1$type$base$$$class__2_Asn1Type_3 = MAKE_CLASS_FRAME(tstate, code_objects_de54629965e043decfd4746e792f5ca9, module_pyasn1$type$base, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$class__2_Asn1Type_3);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$class__2_Asn1Type_3) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = PyObject_GetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_tag);

if (tmp_called_instance_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_1 = module_var_accessor_pyasn1$type$base$tag(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tag);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pyasn1$type$base$$$class__2_Asn1Type_3->m_frame.f_lineno = 41;
tmp_dictset_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_TagSet);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_tagSet, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = PyObject_GetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_constraint);

if (tmp_called_instance_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_2 = module_var_accessor_pyasn1$type$base$constraint(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_constraint);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pyasn1$type$base$$$class__2_Asn1Type_3->m_frame.f_lineno = 45;
tmp_dictset_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_ConstraintsIntersection);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_subtypeSpec, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_typeId, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__2___init__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__3___setattr__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain___setattr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__4___str__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_2;
tmp_called_value_5 = PyObject_GetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_property);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}


tmp_args_element_value_2 = MAKE_FUNCTION_pyasn1$type$base$$$function__5_readOnly(tstate);

frame_frame_pyasn1$type$base$$$class__2_Asn1Type_3->m_frame.f_lineno = 71;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_readOnly, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
tmp_called_value_6 = PyObject_GetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_property);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}


tmp_args_element_value_3 = MAKE_FUNCTION_pyasn1$type$base$$$function__6_effectiveTagSet(tstate);

frame_frame_pyasn1$type$base$$$class__2_Asn1Type_3->m_frame.f_lineno = 75;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_effectiveTagSet, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_4;
tmp_called_value_7 = PyObject_GetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_property);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}


tmp_args_element_value_4 = MAKE_FUNCTION_pyasn1$type$base$$$function__7_tagMap(tstate);

frame_frame_pyasn1$type$base$$$class__2_Asn1Type_3->m_frame.f_lineno = 81;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_tagMap, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_true_true_tuple;
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__8_isSameTypeWith(tstate, tmp_defaults_2);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_isSameTypeWith, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_true_true_tuple;
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__9_isSuperTypeOf(tstate, tmp_defaults_3);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_isSuperTypeOf, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_5;
tmp_called_value_8 = PyObject_GetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, const_str_plain_staticmethod);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}


tmp_args_element_value_5 = MAKE_FUNCTION_pyasn1$type$base$$$function__10_isNoValue(tstate);

frame_frame_pyasn1$type$base$$$class__2_Asn1Type_3->m_frame.f_lineno = 135;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_isNoValue, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_4;
tmp_defaults_4 = mod_consts.const_tuple_int_0_tuple;
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__11_prettyPrint(tstate, tmp_defaults_4);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_prettyPrint, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__12_getTagSet(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_getTagSet, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__13_getEffectiveTagSet(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_getEffectiveTagSet, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__14_getTagMap(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_getTagMap, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__15_getSubtypeSpec(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_getSubtypeSpec, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__16_hasValue(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain_hasValue, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_3;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$class__2_Asn1Type_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$class__2_Asn1Type_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$class__2_Asn1Type_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$class__2_Asn1Type_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_pyasn1$type$base$$$class__2_Asn1Type_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_6;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__readOnly_tuple;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_6;
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


exception_lineno = 28;

    goto try_except_handler_6;
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
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_28, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_6;
}
branch_no_6:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_7 = mod_consts.const_str_plain_Asn1Type;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = locals_pyasn1$type$base$$$class__2_Asn1Type_28;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_pyasn1$type$base->m_frame.f_lineno = 28;
tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_24;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_23 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_23);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_pyasn1$type$base$$$class__2_Asn1Type_28);
locals_pyasn1$type$base$$$class__2_Asn1Type_28 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyasn1$type$base$$$class__2_Asn1Type_28);
locals_pyasn1$type$base$$$class__2_Asn1Type_28 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 28;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_Asn1Type, tmp_assign_source_23);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = module_var_accessor_pyasn1$type$base$Asn1Type(tstate);
if (unlikely(tmp_assign_source_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Asn1Type);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_Asn1ItemBase, tmp_assign_source_25);
}
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_direct_call_arg1_3;
tmp_direct_call_arg1_3 = mod_consts.const_tuple_type_object_tuple;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_26 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_7;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_13 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_7;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_7;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_28 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_28;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_7;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_NoValue;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_pyasn1$type$base->m_frame.f_lineno = 167;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_29;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_16 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_7;
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
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_7, tmp_default_value_3);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_7;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_7;
}
frame_frame_pyasn1$type$base->m_frame.f_lineno = 167;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 167;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_30;
}
branch_end_7:;
{
PyObject *tmp_assign_source_31;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_pyasn1$type$base$$$class__3_NoValue_167 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_2ecce58f9742a3991bee3244156d0cb2;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_167, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_d5012e5860ff8005843d3554f9591225;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_167, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_NoValue;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_167, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_167;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_167, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_9;
}
frame_frame_pyasn1$type$base$$$class__3_NoValue_4 = MAKE_CLASS_FRAME(tstate, code_objects_ebbe4d3fc37c94ab2ff79be693f2d2e9, module_pyasn1$type$base, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$class__3_NoValue_4);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$class__3_NoValue_4) == 2);

// Framed code:
tmp_dictset_value = PySet_New(mod_consts.const_set_d4df30f26710a79d80b33ce4792aeafc);
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_167, mod_consts.const_str_plain_skipMethods, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_167, mod_consts.const_str_plain__instance, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__17___new__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_167, mod_consts.const_str_plain___new__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__18___getattr__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_167, mod_consts.const_str_plain___getattr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__19___repr__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_167, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "o";
    goto frame_exception_exit_4;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$class__3_NoValue_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$class__3_NoValue_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$class__3_NoValue_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$class__3_NoValue_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_pyasn1$type$base$$$class__3_NoValue_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_9;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_167, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_9;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_3__bases;
tmp_cmp_expr_right_3 = mod_consts.const_tuple_type_object_tuple;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_9;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
tmp_dictset_value = mod_consts.const_tuple_type_object_tuple;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_167, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_9;
}
branch_no_9:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_11 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_10 = mod_consts.const_str_plain_NoValue;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_pyasn1$type$base$$$class__3_NoValue_167;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_pyasn1$type$base->m_frame.f_lineno = 167;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_9;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_32;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_31 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_31);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_pyasn1$type$base$$$class__3_NoValue_167);
locals_pyasn1$type$base$$$class__3_NoValue_167 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyasn1$type$base$$$class__3_NoValue_167);
locals_pyasn1$type$base$$$class__3_NoValue_167 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 167;
goto try_except_handler_7;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_NoValue, tmp_assign_source_31);
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_12;
tmp_called_value_12 = module_var_accessor_pyasn1$type$base$NoValue(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NoValue);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;

    goto frame_exception_exit_1;
}
frame_frame_pyasn1$type$base->m_frame.f_lineno = 241;
tmp_assign_source_33 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_12);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_noValue, tmp_assign_source_33);
}
{
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = module_var_accessor_pyasn1$type$base$Asn1Type(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Asn1Type);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;

    goto try_except_handler_10;
}
tmp_assign_source_34 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_34, 0, tmp_tuple_element_11);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_35 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_10;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_19 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_10;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_10;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_37 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_37;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_10;
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
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_10;
}
tmp_tuple_element_12 = mod_consts.const_str_plain_SimpleAsn1Type;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_pyasn1$type$base->m_frame.f_lineno = 244;
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_38;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_22 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_10;
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
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_23;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_8, tmp_default_value_4);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_10;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_24 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_13);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_10;
}
frame_frame_pyasn1$type$base->m_frame.f_lineno = 244;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 244;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_39;
}
branch_end_10:;
{
PyObject *tmp_assign_source_40;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_2ecce58f9742a3991bee3244156d0cb2;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_digest_f2dc5bf74063cbcecaadef0d09435db0;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_SimpleAsn1Type;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_244;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_12;
}
frame_frame_pyasn1$type$base$$$class__4_SimpleAsn1Type_5 = MAKE_CLASS_FRAME(tstate, code_objects_54045af1db8beaaf164b4a237e295eb5, module_pyasn1$type$base, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$class__4_SimpleAsn1Type_5);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$class__4_SimpleAsn1Type_5) == 2);

// Framed code:
tmp_dictset_value = PyObject_GetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain_noValue);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_pyasn1$type$base$noValue(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_noValue);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain_defaultValue, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_defaults_5;
PyObject *tmp_tuple_element_14;
tmp_tuple_element_14 = PyObject_GetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain_noValue);

if (tmp_tuple_element_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_14 = module_var_accessor_pyasn1$type$base$noValue(tstate);
if (unlikely(tmp_tuple_element_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_noValue);
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_tuple_element_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_defaults_5 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_5, 0, tmp_tuple_element_14);

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__20___init__(tstate, tmp_defaults_5);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__21___repr__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__22___eq__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain___eq__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__23___ne__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain___ne__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__24___lt__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain___lt__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__25___le__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain___le__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__26___gt__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain___gt__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__27___ge__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain___ge__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__28___bool__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain___bool__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__29___hash__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain___hash__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_6;
tmp_called_value_14 = PyObject_GetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain_property);

if (tmp_called_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_14 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}


tmp_args_element_value_6 = MAKE_FUNCTION_pyasn1$type$base$$$function__30_isValue(tstate);

frame_frame_pyasn1$type$base$$$class__4_SimpleAsn1Type_5->m_frame.f_lineno = 317;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain_isValue, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_defaults_6;
PyObject *tmp_tuple_element_15;
tmp_tuple_element_15 = PyObject_GetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain_noValue);

if (tmp_tuple_element_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_15 = module_var_accessor_pyasn1$type$base$noValue(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_noValue);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 347;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_tuple_element_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_defaults_6 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_6, 0, tmp_tuple_element_15);

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__31_clone(tstate, tmp_defaults_6);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain_clone, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_defaults_7;
PyObject *tmp_tuple_element_16;
tmp_tuple_element_16 = PyObject_GetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain_noValue);

if (tmp_tuple_element_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_16 = module_var_accessor_pyasn1$type$base$noValue(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_noValue);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 374;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_tuple_element_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_defaults_7 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_7, 0, tmp_tuple_element_16);

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__32_subtype(tstate, tmp_defaults_7);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain_subtype, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__33_prettyIn(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain_prettyIn, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__34_prettyOut(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain_prettyOut, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_defaults_8;
tmp_defaults_8 = mod_consts.const_tuple_int_0_tuple;
Py_INCREF(tmp_defaults_8);

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__35_prettyPrint(tstate, tmp_defaults_8);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain_prettyPrint, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_defaults_9;
tmp_defaults_9 = mod_consts.const_tuple_int_0_tuple;
Py_INCREF(tmp_defaults_9);

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__36_prettyPrintType(tstate, tmp_defaults_9);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain_prettyPrintType, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$class__4_SimpleAsn1Type_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$class__4_SimpleAsn1Type_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$class__4_SimpleAsn1Type_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$class__4_SimpleAsn1Type_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_pyasn1$type$base$$$class__4_SimpleAsn1Type_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_12;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__value_tuple;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_12;
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


exception_lineno = 244;

    goto try_except_handler_12;
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
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_12;
}
branch_no_12:;
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_15;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_17;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_15 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_17 = mod_consts.const_str_plain_SimpleAsn1Type;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_17 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_17);
tmp_tuple_element_17 = locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_pyasn1$type$base->m_frame.f_lineno = 244;
tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_12;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_41;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_40 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_40);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244);
locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244);
locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_244 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 244;
goto try_except_handler_10;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_SimpleAsn1Type, tmp_assign_source_40);
}
goto try_end_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
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
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = module_var_accessor_pyasn1$type$base$SimpleAsn1Type(tstate);
if (unlikely(tmp_assign_source_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SimpleAsn1Type);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 455;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractSimpleAsn1Item, tmp_assign_source_42);
}
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_tuple_element_18;
tmp_tuple_element_18 = module_var_accessor_pyasn1$type$base$Asn1Type(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Asn1Type);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 477;

    goto try_except_handler_13;
}
tmp_assign_source_43 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_43, 0, tmp_tuple_element_18);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_44 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto try_except_handler_13;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_25 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_5, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto try_except_handler_13;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto try_except_handler_13;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_46 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_46;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto try_except_handler_13;
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
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_19;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto try_except_handler_13;
}
tmp_tuple_element_19 = mod_consts.const_str_plain_ConstructedAsn1Type;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_19 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_pyasn1$type$base->m_frame.f_lineno = 477;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_47;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_28 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto try_except_handler_13;
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
PyObject *tmp_tuple_element_20;
PyObject *tmp_expression_value_29;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_20 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_9, tmp_default_value_5);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto try_except_handler_13;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_30;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_30 == NULL));
tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_20);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto try_except_handler_13;
}
frame_frame_pyasn1$type$base->m_frame.f_lineno = 477;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 477;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_13;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_48;
}
branch_end_13:;
{
PyObject *tmp_assign_source_49;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_2ecce58f9742a3991bee3244156d0cb2;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_digest_9a02d9698268e7ee0fbec1914af59c69;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_ConstructedAsn1Type;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_477;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto try_except_handler_15;
}
frame_frame_pyasn1$type$base$$$class__5_ConstructedAsn1Type_6 = MAKE_CLASS_FRAME(tstate, code_objects_a614c72334a6b82772a2c04a19c097ed, module_pyasn1$type$base, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$base$$$class__5_ConstructedAsn1Type_6);
assert(Py_REFCNT(frame_frame_pyasn1$type$base$$$class__5_ConstructedAsn1Type_6) == 2);

// Framed code:
tmp_dictset_value = Py_False;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain_strictConstraints, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 494;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain_componentType, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 496;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
{
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = PyObject_GetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain_constraint);

if (tmp_called_instance_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_3 = module_var_accessor_pyasn1$type$base$constraint(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_constraint);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 499;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_called_instance_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

frame_frame_pyasn1$type$base$$$class__5_ConstructedAsn1Type_6->m_frame.f_lineno = 499;
tmp_dictset_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_ConstraintsIntersection);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain_sizeSpec, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__37___init__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__38__moveSizeSpec(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain__moveSizeSpec, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 515;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__39___repr__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__40___eq__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain___eq__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 545;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__41___ne__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain___ne__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 548;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__42___lt__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain___lt__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 551;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__43___le__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain___le__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__44___gt__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain___gt__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__45___ge__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain___ge__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__46___bool__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain___bool__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
{
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_7;
tmp_called_value_17 = PyObject_GetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain_property);

if (tmp_called_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_17 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}


tmp_args_element_value_7 = MAKE_FUNCTION_pyasn1$type$base$$$function__47_components(tstate);

frame_frame_pyasn1$type$base$$$class__5_ConstructedAsn1Type_6->m_frame.f_lineno = 566;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain_components, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 567;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__48__cloneComponentValues(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain__cloneComponentValues, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__49_clone(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain_clone, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__50_subtype(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain_subtype, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 608;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__51_getComponentByPosition(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain_getComponentByPosition, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 672;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
{
PyObject *tmp_defaults_10;
tmp_defaults_10 = mod_consts.const_tuple_true_tuple;
Py_INCREF(tmp_defaults_10);

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__52_setComponentByPosition(tstate, tmp_defaults_10);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain_setComponentByPosition, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 675;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__53_setComponents(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain_setComponents, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 678;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__54_setDefaultComponents(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain_setDefaultComponents, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 687;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__55_getComponentType(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain_getComponentType, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 690;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__56_verifySizeSpec(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain_verifySizeSpec, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 694;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base$$$class__5_ConstructedAsn1Type_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base$$$class__5_ConstructedAsn1Type_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base$$$class__5_ConstructedAsn1Type_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$base$$$class__5_ConstructedAsn1Type_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_pyasn1$type$base$$$class__5_ConstructedAsn1Type_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_15;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto try_except_handler_15;
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


exception_lineno = 477;

    goto try_except_handler_15;
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
tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto try_except_handler_15;
}
branch_no_15:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_18;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_21;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_18 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_21 = mod_consts.const_str_plain_ConstructedAsn1Type;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_21 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_21);
tmp_tuple_element_21 = locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_pyasn1$type$base->m_frame.f_lineno = 477;
tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;

    goto try_except_handler_15;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_50;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_49 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_49);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477);
locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477);
locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_477 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_14:;
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
exception_lineno = 477;
goto try_except_handler_13;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_ConstructedAsn1Type, tmp_assign_source_49);
}
goto try_end_5;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
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
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = module_var_accessor_pyasn1$type$base$ConstructedAsn1Type(tstate);
if (unlikely(tmp_assign_source_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConstructedAsn1Type);
}

if (tmp_assign_source_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 699;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractConstructedAsn1Item, tmp_assign_source_51);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$base, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$base->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$base, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pyasn1$type$base);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_6:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyasn1$type$base", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pyasn1.type.base" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pyasn1$type$base);
    return module_pyasn1$type$base;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyasn1$type$base", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
